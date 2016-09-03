using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Data;
using System.Data.OleDb;
using System.IO;
using System.Diagnostics;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using System.Text;
using System.Xml;
using Dreaman.DataAccess;

namespace Dreaman.InfoService
{
	/// <summary>
	/// 描述一个表域的信息,不同于数据层的表列,这里包括表域的显示信息。
	/// </summary>
	public class BatchEditField : TableFieldBase
	{
		public bool NotEditable=false;
		public ArrayList Values=new ArrayList();//字段值,用于数据库操作
		public StringCollection OldValues=new StringCollection();//字段原始值,用于数据库操作时的条件构造

		public bool ValueIsNotNull(int index)
		{
			if(index<0 || index>=Values.Count)
				return false;
			if(Values[index]==null || Values[index]==DBNull.Value)
				return false;
			return true;
		}
		public string GetStringValue(int index)
		{
			if(index<0 || index>=Values.Count)
				return "";
			object val=Values[index];	
			return ValueToString(val,null);
		}
		public string GetFormatValue(int index)
		{
			if(index<0 || index>=Values.Count)
				return "";
			object val=Values[index];	
			return ValueToString(val,Format);
		}
		public BatchEditField Clone()
		{
			BatchEditField tf=new BatchEditField();
			tf.ID=ID;
			tf.Name=Name;
			tf.ShowName=ShowName;
			tf.Type=Type;
			tf.Length=Length;
			tf.Unit=Unit;
			tf.Nullable=Nullable;
			tf.ShowType=ShowType;
			tf.Indent=Indent;
			tf.BaseTable=BaseTable;
			tf.BaseField=BaseField;
			tf.Alias=Alias;
			tf.Format=Format;
			tf.ReadOnly=ReadOnly;
			tf.Encoding=Encoding;
			tf.UseClassValue=UseClassValue;
			tf.FromUpdateTable=FromUpdateTable;

			tf.NotEditable=NotEditable;
			for(int i=0;i<tf.Values.Count;i++)
			{
				tf.Values.Add(Values[i]);
			}
			for(int i=0;i<tf.OldValues.Count;i++)
			{
				tf.OldValues.Add(OldValues[i]);
			}
			return tf;
		}
	}
	/// <summary>
	/// BatchEdit 的摘要说明。
	/// 添加状态主要对Update起作用，如果是生成UI的，则GetInputValue会调整理添加状态，别的情形需要通过执行
	/// Select或者明确调用AppendState来指定。
	/// </summary>
	public class BatchEdit : SQLInfo
	{
		#region 系列特性
		public string UploadFileVirtualPath
		{
			get
			{
				return uploadFileVPath;
			}
			set
			{
				uploadFileVPath=value;
			}
		}
		public new BatchEditField this[string fieldName]
		{
			get
			{
				return tableFields[fieldName] as BatchEditField;
			}
			set
			{
				tableFields[fieldName]=value;
			}
		}
		public StringCollection Errors
		{
			get
			{
				return errors;
			}
		}
		public int RecordCount
		{
			get
			{
				int ct=FieldCount;
				if(ct<=0)return 0;
				return this[SQLFields[0]].Values.Count;
			}
			set
			{
				int count=value;
				if(count<0)count=0;
				int ct=FieldCount;
				if(ct<=0)return;
				foreach(string s in SQLFields)
				{
					while(this[s].Values.Count<count)
						this[s].Values.Add(null);
					while(this[s].OldValues.Count<count)
						this[s].OldValues.Add(null);
				}
				foreach(string s in SQLFields)
				{
					while(this[s].Values.Count>count)
						this[s].Values.RemoveAt(count);
					while(this[s].OldValues.Count>count)
						this[s].OldValues.RemoveAt(count);
				}
			}
		}
		#endregion
		public void SetFieldInitVal(string s,int index,string val)
		{
			if(this[s]==null)
				return;			
			if(index<0)
				return;
			while(this[s].Values.Count<=index)
				this[s].Values.Add(null);
			this[s].Values[index]=val;
			while(this[s].OldValues.Count<=index)
				this[s].OldValues.Add(null);
			this[s].OldValues[index]=val;
		}
		/// <summary>
		/// 用于指明某个记录是否明确的处于添加状态，在获取输入值时明确的处在添加状态的记录将用录入值覆盖旧值
		/// </summary>
		/// <param name="index"></param>
		/// <returns></returns>
		public bool AppendState(int index)
		{
			if(appendStates.Count<=index)
				return true;
			else
				return (bool)appendStates[index];
		}
		public void AppendState(int index,bool append)
		{
			while(appendStates.Count<=index)
			{
				appendStates.Add(true);
			}
			appendStates[index]=append;
		}
		public BatchEdit(string sqlstr,DataAccessType datype,string connstr):base(sqlstr,datype,connstr)
		{}
		protected override TableFieldBase CreateField()
		{
			return new BatchEditField();
		}
		/// <summary>
		/// 根据设定好的字段初始值搜索符合条件的记录,此时记录数已经设定为某个值
		/// </summary>
		/// <returns></returns>
		public void SelectRecord()
		{
			int count=RecordCount;
			for(int ii=0;ii<count;ii++)
			{
				string condition=GetSelectCondition(ii);
				string sqlstr=parser.BuildSQL(condition,null);
				string connstr=ConnectionString;
				if(connstr==null)throw new Exception("系统错误！");
				IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
				IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
				try
				{
					if(myReader.Read())//找到记录，写各值
					{
						foreach(string key in SQLFields)
						{
							if(this[key].Type.IsArray)
							{
								//注意：当前假定数据库不存储二进制文件，如果需要支持二进制文件，应修改这段代码。
								//这个类设计的想法是二进制文件里存储了文件类型信息，在这里读取这些信息并构造成
								//能获取文件内容的URL请求，并构造成一个HTML链接返回到客户端，作为该字段的值显示。
								int i=myReader.GetOrdinal(key);
								if(!myReader.IsDBNull(i))
								{
									long size=myReader.GetBytes(i,0,null,0,0);
									byte[] content=new byte[size];
									myReader.GetBytes(i,0,content,0,(int)size);
									this[key].Values[ii]=FileField.Content(content,UploadFileVirtualPath);
								}
								else
								{
									this[key].Values[ii]=null;
								}
							}
							else
							{
								this[key].Values[ii]=myReader[key];
							}
						}
						if(myReader.Read())//存在多个记录时各未设初值字段写空值
						{
							foreach(string key in SQLFields)
							{
								if(this[key].OldValues[ii]==null || this[key].OldValues[ii].Trim().Length<=0)
									this[key].Values[ii]=null;
							}
							AppendState(ii,true);
						}
						else
						{
							//将查询得到的值写到OldValues中以用于更新
							foreach(string key in SQLFields)
							{
								if(this[key].ValueIsNotNull(ii))
									this[key].OldValues[ii]=this[key].GetStringValue(ii);
								else
									this[key].OldValues[ii]=null;
							}
							AppendState(ii,false);
						}
					}
					else
					{
						AppendState(ii,true);
					}
				}
				finally
				{
					if(myReader!=null)
						myReader.Close();
				}	
				if(dataAccess.Error!=null)
					throw new Exception("查询错误！"+dataAccess.Error.Message);
			}
		}
		/// <summary>
		/// 按指定条件过滤当前批量录入表，生成一个XML描述的结果。
		/// </summary>
		/// <param name="condition">条件</param>
		/// <returns>
		/// 以XML文件体表示的结果集，根元素为DATATABLE，行元素为ROW，各字段元素为字段ID，
		/// InnerText为其值，每个字段生成一个旧值值，元素为字段ID+old
		/// </returns>
		public void SelectRecord(string condition)
		{
			string sqlstr=parser.BuildSQL(condition,null);
			SelectCompatibleRecord(sqlstr);
		}
		/// <summary>
		/// 按指定结果相似SQL语句构造批量录入数据，生成一个XML描述的结果。
		/// </summary>
		/// <param name="sqlstr">SQL语句</param>
		/// <returns>
		/// 以XML文件体表示的结果集，根元素为DATATABLE，行元素为ROW，各字段元素为字段ID，
		/// InnerText为其值，每个字段生成一个旧值值，元素为字段ID+old
		/// </returns>
		public void SelectCompatibleRecord(string sqlstr)
		{
			RecordCount=0;
			string connstr=ConnectionString;
			if(connstr==null)throw new Exception("系统错误！");
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
			IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);

			while(myReader.Read())//找到记录，写各值
			{
				foreach(string key in SQLFields)
				{
					if(this[key].Type.IsArray)
					{
						//注意：当前假定数据库不存储二进制文件，如果需要支持二进制文件，应修改这段代码。
						//这个类设计的想法是二进制文件里存储了文件类型信息，在这里读取这些信息并构造成
						//能获取文件内容的URL请求，并构造成一个HTML链接返回到客户端，作为该字段的值显示。
						int i=myReader.GetOrdinal(key);
						if(!myReader.IsDBNull(i))
						{
							long size=myReader.GetBytes(i,0,null,0,0);
							byte[] content=new byte[size];
							myReader.GetBytes(i,0,content,0,(int)size);
							string strFile=FileField.Content(content,UploadFileVirtualPath);
							this[key].Values.Add(strFile);
							this[key].OldValues.Add(strFile);
						}
						else
						{
							this[key].Values.Add(null);
                            this[key].OldValues.Add(null);
						}
						continue;
					}
					this[key].Values.Add(BatchEditField.ValueToString(myReader[key],null));
					this[key].OldValues.Add(BatchEditField.ValueToString(myReader[key],null));
				}
				AppendState(RecordCount-1,false);
			}
			myReader.Close();		
			if(dataAccess.Error!=null)
				throw new Exception("查询错误！"+dataAccess.Error.Message);
			//return sw.ToString();
		}
		public bool UpdateRecord(bool bOverWrite)
		{
			CheckInputValue();
			return UpdateHelper(bOverWrite);
		}
		/// <summary>
		/// 检查录入数据的有效性,当前只检查不应为空的列,可以考虑加上对日期,数值,字符串长等数据的检查.
		/// </summary>
		/// <returns></returns>
		/// 
		protected void CheckInputValue()
		{
			int count=RecordCount;
			Errors.Clear();
			for(int i=0;i<count;i++)
				Errors.Add("");

			foreach(string key in SQLFields)
			{
				if(!this[key].FromUpdateTable)
					continue;
				if(this[key].Type.IsArray)continue;//二进制字段不作检查
				if(this[key].ReadOnly)continue;//只读字段不能录入
				if(this[key].ShowType==ShowType.FILEUPLOAD || this[key].ShowType==ShowType.HTMLEDIT || this[key].ShowType==ShowType.HTMLOUTEREDIT || this[key].ShowType==ShowType.FILE || this[key].ShowType==ShowType.HTML)
					continue;//文件与HTML编辑器字段不作条件
				if(this[key].ShowType==ShowType.RAWVALUE || this[key].ShowType==ShowType.NOVALUE)
					continue;//没有编辑控件或者不显示值的字段不作检查（正常使用是不应该执行到这里的，这是一种非法状态检查）
				for(int ii=0;ii<count;ii++)
				{
					string val=this[key].GetStringValue(ii);
					bool nullable=this[key].Nullable;
					if(!nullable && (val==null || val.Trim().Length<=0))
					{
						string prestr="";
						if(Errors[ii].Length>0)
							prestr="\n";
						Errors[ii]+=prestr+this[key].ShowName+"---不能为空！";
					}
					if(val!=null && val.Trim().Length>0)
					{
						val=val.Trim();		
						Type type=this[key].Type;
						if(type==typeof(string))
						{				
							int byteLen=this[key].Encoding.GetByteCount(val);
							if(byteLen>this[key].Length)
							{
								string prestr="";
								if(Errors[ii].Length>0)
									prestr="\n";
								Errors[ii]+=prestr+this[key].ShowName+"---文本超长，当前字节数："+byteLen+" > 最大允许字节数："+this[key].Length+"，通常一个汉字占2个字节！";
							}
						}
						else if(type==typeof(DateTime))
						{
							try
							{
								DateTime.Parse(val);
							}
							catch(FormatException)
							{
								string prestr="";
								if(Errors[ii].Length>0)
									prestr="\n";
								Errors[ii]+=prestr+this[key].ShowName+"---日期格式错误，应为yyyy-MM-dd！";						
							}
						}
						else if(!type.IsArray && type!=typeof(DateTime))
						{
							try
							{
								Convert.ChangeType(val,type);
							}
							catch(FormatException)
							{
								string prestr="";
								if(Errors[ii].Length>0)
									prestr="\n";
								Errors[ii]+=prestr+this[key].ShowName+"---数值格式错误！";
							}
						}
						else
						{
							int byteLen=this[key].Encoding.GetByteCount(val);
							if(byteLen>this[key].Length)
							{
								string prestr="";
								if(Errors[ii].Length>0)
									prestr="\n";
								Errors[ii]+=prestr+this[key].ShowName+"---文本超长，当前字节数："+byteLen+" > 最大允许字节数："+this[key].Length+"，通常一个汉字占2个字节！";
							}
						}
					}
				}	
			}
		}
		protected bool UpdateHelper(bool bOverWrite)
		{
			string connstr=ConnectionString;
			if(connstr==null)throw new Exception("系统错误！");
			for(int ii=0;ii<Errors.Count;ii++)
			{
				if(Errors[ii].Length>0)
					continue;

				string condition=GetUpdateCondition(ii);
				string sqlstr=updateParser.BuildSQL(condition,null);
				IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
				DataSet ds=dataAccess.BeginUpdate(sqlstr);
				DataTable dt=ds.Tables[0];
				if(!(hasAutoIncrementKey && AppendState(ii)) && dt.Rows.Count>1)//多条符合条件的记录不能更新
				{
					dataAccess.EndUpdate(ds);
					string prestr="";
					if(Errors[ii].Length>0)
						prestr="\n";
					Errors[ii]+=prestr+"有多条符合条件的记录,不能更新！";
				}
				else if(!(hasAutoIncrementKey && AppendState(ii)) && dt.Rows.Count==1)
				{
					if(bOverWrite)
					{
						DataRow dr=dt.Rows[0];
						dr.BeginEdit();
						foreach(string s in KeyFields)
						{
							if(!this[s].FromUpdateTable)
								continue;
							if(this[s].ReadOnly)
							{
								dt.Columns[this[s].BaseField].ReadOnly=true;
								continue;//只读字段不能录入
							}
							if(this[s].ValueIsNotNull(ii))
							{
								if(this[s].GetStringValue(ii).Length<=0)
									dr[this[s].BaseField]=DBNull.Value;
								else
									dr[this[s].BaseField]=this[s].Values[ii];
							}
						}
						foreach(string s in NormalFields)
						{
							if(!this[s].FromUpdateTable)
								continue;
							if(this[s].Type.IsArray)
							{
								//当前的设计考虑是当前字段值是一个HTML链接，据此可以找到文件，在此
								//读取文件内容并写入数据库
								if(this[s].ValueIsNotNull(ii))
								{
									string link=this[s].GetStringValue(ii);
									if(link.Length<=0)
									{
										dr[this[s].BaseField]=DBNull.Value;
									}
									else
									{
										XmlDocument xmlDoc=new XmlDocument();
										xmlDoc.LoadXml("<?xml version='1.0' ?>"+link);
										string url=xmlDoc.DocumentElement.GetAttribute("href");
										string docName=xmlDoc.DocumentElement.InnerText;
										/*
										XmlTextReader xmlReader=new XmlTextReader(link,XmlNodeType.Element,null);
										xmlReader.MoveToContent();
								
										string url=xmlReader.GetAttribute("href");
										string docName=xmlReader.ReadString();
										*/
										if(url!=null && docName!=null)
											dr[this[s].BaseField]=FileField.Content(docName.Trim(),url.Trim());
										else
											dr[this[s].BaseField]=DBNull.Value;
									}
								}
								continue;
							}
							if(this[s].ReadOnly)
							{
								dt.Columns[this[s].BaseField].ReadOnly=true;
								continue;//只读字段不能录入
							}
							if(this[s].ValueIsNotNull(ii))
							{
								if(this[s].ShowType==ShowType.FILEUPLOAD || this[s].ShowType==ShowType.FILE)
								{
									string link=dr[this[s].BaseField] as string;
									//录入值与数据库中的值不等表明重新上传了文件，否则未更新文件
									if(string.Compare(link.Trim(),this[s].GetStringValue(ii).Trim(),true)!=0)
									{
										if(link!=null && link.Trim().Length>0)
										{
											XmlDocument xmlDoc=new XmlDocument();
											xmlDoc.LoadXml("<?xml version='1.0' ?>"+link);
											string url=xmlDoc.DocumentElement.GetAttribute("href");
											string docName=xmlDoc.DocumentElement.InnerText;
											string path=HttpContext.Current.Server.MapPath(url);
											File.Delete(path);
										}
									}
								}
								if(this[s].GetStringValue(ii).Length<=0)
									dr[this[s].BaseField]=DBNull.Value;
								else
									dr[this[s].BaseField]=this[s].Values[ii];
							}
						}
						dr.EndEdit();
						dataAccess.EndUpdate(ds);
						if(dataAccess.Error!=null)
						{
							string prestr="";
							if(Errors[ii].Length>0)
								prestr="\n";
							Errors[ii]+=prestr+"更新错误："+dataAccess.Error.Message+"！";
						}
					}
					else
					{
						string prestr="";
						if(Errors[ii].Length>0)
							prestr="\n";
						Errors[ii]+=prestr+"记录已经存在！";
					}
				}
				else
				{
					DataRow dr=dt.NewRow();
					foreach(string s in KeyFields)
					{
						if(!this[s].FromUpdateTable)
							continue;
						if(this[s].ReadOnly)
						{
							dt.Columns[this[s].BaseField].ReadOnly=true;
							continue;//只读字段不能录入
						}
						if(this[s].ValueIsNotNull(ii))
						{
							if(this[s].GetStringValue(ii).Length<=0)
								dr[this[s].BaseField]=DBNull.Value;
							else
								dr[this[s].BaseField]=this[s].Values[ii];
						}
					}
					foreach(string s in NormalFields)
					{
						if(!this[s].FromUpdateTable)
							continue;
						if(this[s].Type.IsArray)
						{
							//当前的设计考虑是当前字段值是一个HTML链接，据此可以找到文件，在此
							//读取文件内容并写入数据库
							if(this[s].ValueIsNotNull(ii))
							{
								string link=this[s].GetStringValue(ii);
								if(link.Length<=0)
								{
									dr[this[s].BaseField]=DBNull.Value;
								}
								else
								{
									XmlDocument xmlDoc=new XmlDocument();
									xmlDoc.LoadXml("<?xml version='1.0' ?>"+link);
									string url=xmlDoc.DocumentElement.GetAttribute("href");
									string docName=xmlDoc.DocumentElement.InnerText;
									/*
									XmlTextReader xmlReader=new XmlTextReader(link,XmlNodeType.Element,null);
									xmlReader.MoveToContent();
								
									string url=xmlReader.GetAttribute("href");
									string docName=xmlReader.ReadString();
									*/
									if(url!=null && docName!=null)
										dr[this[s].BaseField]=FileField.Content(docName.Trim(),url.Trim());
									else
										dr[this[s].BaseField]=DBNull.Value;
								}
							}
							continue;
						}
						if(this[s].ReadOnly)
						{
							dt.Columns[this[s].BaseField].ReadOnly=true;
							continue;//只读字段不能录入
						}
						if(this[s].ValueIsNotNull(ii))
						{
							if(this[s].GetStringValue(ii).Length<=0)
								dr[this[s].BaseField]=DBNull.Value;
							else
								dr[this[s].BaseField]=this[s].Values[ii];
						}
					}
					dt.Rows.Add(dr);
					dataAccess.EndUpdate(ds);
					if(dataAccess.Error!=null)
					{
						string prestr="";
						if(Errors[ii].Length>0)
							prestr="\n";
						Errors[ii]+=prestr+"添加错误："+dataAccess.Error.Message+"！";
					}
				}	
			}

			bool noError=true;
			int delCount=0;
			StringCollection newErrs=new StringCollection();
			for(int ii=0;ii<Errors.Count;ii++)
			{
				if(Errors[ii].Length==0)
				{
					foreach(string key in SQLFields)
					{
						this[key].Values.RemoveAt(ii-delCount);
						this[key].OldValues.RemoveAt(ii-delCount);
					}
					delCount++;
				}
				else
				{
					newErrs.Add(Errors[ii]);
					noError=false;
				}
			}
			errors=newErrs;
			return noError;
		}
		/// <summary>
		/// 构造更新的条件，直接使用更新表的字段名构造。
		/// </summary>
		/// <param name="index"></param>
		/// <returns></returns>
		private string GetUpdateCondition(int index)
		{
			string condition="";
			//构造选择记录的条件
			bool nullKey=false;
			string prestr="";
			foreach(string fname in KeyFields)
			{
				if(!this[fname].FromUpdateTable)
					continue;
				string val=this[fname].OldValues[index];
				if(val!=null && val.Length>0)
				{
					if(this[fname].Type==typeof(string))
						condition+=prestr+EscapeName(this[fname].BaseField)+" = '"+EscapeValue(val)+"' ";
					else if(this[fname].Type==typeof(DateTime))
					{
						if(DBType==DataBaseType.ORACLE)
						{							
							condition+=prestr+EscapeName(this[fname].BaseField)+" = to_date('"+val+"','yyyy-MM-dd') ";
						}
						else
						{
							condition+=prestr+EscapeName(this[fname].BaseField)+" = '"+val+"' ";
						}
					}
					else if(this[fname].Type==typeof(bool))
					{							
						if(val=="True")
							condition+=prestr+EscapeName(this[fname].BaseField)+" = 1 ";
						else
							condition+=prestr+EscapeName(this[fname].BaseField)+" = 0 ";
					}
					else
					{
						condition+=prestr+EscapeName(this[fname].BaseField)+" = "+val+" ";
					}
					prestr="and ";
				}
				else
					nullKey=true;
			}
			//如果没有关键字或者有的关键字没有指定值，则使用全部字段构造查询条件
			if(KeyFields.Count<=0 || nullKey)
			{
				foreach(string fname in NormalFields)
				{
					if(!this[fname].FromUpdateTable)
						continue;
					if(this[fname].Type.IsArray)continue;//二进制字段不作条件
					if(this[fname].ShowType==ShowType.FILEUPLOAD || this[fname].ShowType==ShowType.HTMLEDIT || this[fname].ShowType==ShowType.HTMLOUTEREDIT || this[fname].ShowType==ShowType.FILE || this[fname].ShowType==ShowType.HTML)
						continue;//文件与HTML编辑器字段不作条件
					string val=this[fname].OldValues[index];
					if(val!=null && val.Length>0)
					{
						if(this[fname].Type==typeof(string))
							condition+=prestr+EscapeName(this[fname].BaseField)+" = '"+EscapeValue(val)+"' ";
						else if(this[fname].Type==typeof(DateTime))
						{
							if(DBType==DataBaseType.ORACLE)
							{							
								condition+=prestr+EscapeName(this[fname].BaseField)+" = to_date('"+val+"','yyyy-MM-dd') ";
							}
							else
							{
								condition+=prestr+EscapeName(this[fname].BaseField)+" = '"+val+"' ";
							}
						}
						else if(this[fname].Type==typeof(bool))
						{							
							if(val=="True")
								condition+=prestr+EscapeName(this[fname].BaseField)+" = 1 ";
							else
								condition+=prestr+EscapeName(this[fname].BaseField)+" = 0 ";
						}
						else
						{
							condition+=prestr+EscapeName(this[fname].BaseField)+" = "+val+" ";
						}
						prestr="and ";
					}
				}
			}
			return condition;
		}
		/// <summary>
		/// 构造用于select的查询条件，这里使用原始SQL中的字段名构造条件，与更新时不一样。
		/// 对于浮点字段与完整的日期字段，这里构造的条件可能会查不到实际的记录，这是个BUG。
		/// </summary>
		/// <param name="index"></param>
		/// <returns></returns>
		private string GetSelectCondition(int index)
		{
			string condition="";
			//构造选择记录的条件
			bool nullKey=false;
			string prestr="";
			foreach(string fname in KeyFields)
			{
				string val=this[fname].OldValues[index];
				if(val!=null && val.Length>0)
				{
					if(this[fname].Type==typeof(string))
						condition+=prestr+EscapeName(this[fname].Alias)+" = '"+EscapeValue(val)+"' ";
					else if(this[fname].Type==typeof(DateTime))
					{
						if(DBType==DataBaseType.ORACLE)
						{							
							condition+=prestr+EscapeName(this[fname].Alias)+" = to_date('"+val+"','yyyy-MM-dd') ";
						}
						else
						{
							condition+=prestr+EscapeName(this[fname].Alias)+" = '"+val+"' ";
						}
					}
					else if(this[fname].Type==typeof(bool))
					{							
						if(val=="True")
							condition+=prestr+EscapeName(this[fname].Alias)+" = 1 ";
						else
							condition+=prestr+EscapeName(this[fname].Alias)+" = 0 ";
					}
					else
					{
						condition+=prestr+EscapeName(this[fname].Alias)+" = "+val+" ";
					}
					prestr="and ";
				}
				else
					nullKey=true;
			}
			//如果没有关键字或者有的关键字没有指定值，则使用全部字段构造查询条件
			if(KeyFields.Count<=0 || nullKey)
			{
				foreach(string fname in NormalFields)
				{
					if(this[fname].Type.IsArray)continue;//二进制字段不作条件
					if(this[fname].ShowType==ShowType.FILEUPLOAD || this[fname].ShowType==ShowType.HTMLEDIT || this[fname].ShowType==ShowType.HTMLOUTEREDIT || this[fname].ShowType==ShowType.FILE || this[fname].ShowType==ShowType.HTML)
						continue;//文件与HTML编辑器字段不作条件
					string val=this[fname].OldValues[index];
					if(val!=null && val.Length>0)
					{
						if(this[fname].Type==typeof(string))
							condition+=prestr+EscapeName(this[fname].Alias)+" = '"+EscapeValue(val)+"' ";
						else if(this[fname].Type==typeof(DateTime))
						{
							if(DBType==DataBaseType.ORACLE)
							{							
								condition+=prestr+EscapeName(this[fname].Alias)+" = to_date('"+val+"','yyyy-MM-dd') ";
							}
							else
							{
								condition+=prestr+EscapeName(this[fname].Alias)+" = '"+val+"' ";
							}
						}
						else if(this[fname].Type==typeof(bool))
						{							
							if(val=="True")
								condition+=prestr+EscapeName(this[fname].Alias)+" = 1 ";
							else
								condition+=prestr+EscapeName(this[fname].Alias)+" = 0 ";
						}
						else
						{
							condition+=prestr+EscapeName(this[fname].Alias)+" = "+val+" ";
						}
						prestr="and ";
					}
				}
			}
			return condition;
		}

		private string uploadFileVPath="../uploadFiles";

		private StringCollection errors=new StringCollection();
		private ArrayList appendStates=new ArrayList();
	}
	public class WebBatchEdit : BatchEdit
	{
		public HtmlTable EditTable
		{
			get
			{
				if(editTable==null)
				{
					editTable=new HtmlTable();
					editTable.Border=0;
					editTable.CellPadding=0;
					editTable.CellSpacing=0;
					editTable.Attributes.Add("class","LanEditTable");
					editTable.Attributes.Add("onkeydown","javascript:keydownHandle(this)");
				}
				return editTable;
			}
		}
		public bool IsFormStyle
		{
			get
			{
				return isFormStyle;
			}
			set
			{
				isFormStyle=value;
			}
		}
		public bool ShowErrors
		{
			get
			{
				return showErrors;
			}
			set
			{
				showErrors=value;
			}
		}
		public bool IsMaxLengthShow
		{
			get
			{
				return showLength;
			}
			set
			{
				showLength=value;
			}
		}
		public HybridDictionary FieldDisplays
		{
			get
			{
				return fieldDisplays;
			}
		}
		private HybridDictionary fieldDisplays=new HybridDictionary(true);

		private HtmlTable editTable=null;
		private bool isFormStyle=false;
		private bool showErrors=true;
		private bool showLength=false;//是否显示字符串字段允许长度

		public WebBatchEdit(string sqlstr,DataAccessType datype,string connstr):base(sqlstr,datype,connstr)
		{}
		/// <summary>
		/// 按指定的数据行数以及初始值搜索表生成HTML界面及脚本
		/// </summary>
		/// <returns></returns>
		public string GenerateHtml()
		{
			SelectRecord();
			return GenerateHtml(false);
		}
		/// <summary>
		/// 指定过滤条件生成批量录入界面HTML，包括数据绑定，POST脚本，COPY/PASTE脚本以及录入检查脚本
		/// </summary>
		/// <param name="condition"></param>
		/// <returns></returns>
		public string GenerateHtmlByFilter(string condition)
		{
			SelectRecord(condition);
			return GenerateHtml(false);
		}
		/// <summary>
		/// 指定结果相似SQL生成批量录入界面HTML，包括数据绑定，POST脚本，COPY/PASTE脚本以及录入检查脚本
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <returns></returns>
		public string GenerateHtmlBySql(string sqlstr)
		{
			SelectCompatibleRecord(sqlstr);
			return GenerateHtml(false);
		}
		public HtmlGenericControl BuildRecordCountControl()
		{
			HtmlGenericControl gc=new HtmlGenericControl();
			HtmlInputHidden hidden=new HtmlInputHidden();
			hidden.ID="DT"+GUID+"_count";
			if(SQLFields.Count>0)
				hidden.Value=""+this[SQLFields[0]].Values.Count;
			gc.Controls.Add(hidden);
			return gc;
		}
		public new string UpdateRecord(bool bOverWrite)
		{
			GetInputValue();
			CheckInputValue();
			bool r=UpdateHelper(bOverWrite);
			if(r)
				return null;
			return GenerateHtml(true);
		}
		public void ResetFieldDisplays(int count,bool initValue)
		{
			if(initValue)
			{
				RecordCount=count;
			}
			fieldDisplays=new HybridDictionary(true);
			foreach(string s in SQLFields)
			{
				ArrayList al=new ArrayList();
				for(int i=0;i<count;i++)
					al.Add(EditFieldDisplay.Create(EditField.Create(this[s],i),this));
				fieldDisplays[s]=al;
			}
		}
		public void GetInputValue()
		{
			int count=0;
			string ct=HttpContext.Current.Request["DT"+GUID+"_count"];
			if(ct==null)
			{
				return;
			}
			else
			{
				count=int.Parse(ct);
			}
			ResetFieldDisplays(count,true);
			for(int i=0;i<count;i++)
			{
				AppendState(i,false);
			}
			foreach(string s in KeyFields)
			{
				if(!this[s].FromUpdateTable)
					continue;
				ArrayList al=FieldDisplays[s] as ArrayList;
				if(al==null)continue;
				for(int i=0;i<count;i++)
				{
					IEditFieldDisplay fd=al[i] as IEditFieldDisplay;
					if(fd==null)continue;
					fd.BuildFieldValue();
					if(this[s].OldValues[i]==null || this[s].OldValues[i].Trim().Length<=0)
					{
						if(this[s].ValueIsNotNull(i))
						{
							AppendState(i,true);//关键字旧值为空表明是添加新记录
						}
						else
							this[s].OldValues[i]=null;						
					}
				}
			}
			foreach(string s in NormalFields)
			{
				if(!this[s].FromUpdateTable)
					continue;
				ArrayList al=FieldDisplays[s] as ArrayList;
				if(al==null)continue;
				foreach(IEditFieldDisplay fd in al)
				{
					if(fd==null)continue;
					fd.BuildFieldValue();
				}
			}	
			//对处于添加状态的记录，将录入值复制到旧值
			for(int i=0;i<count;i++)
			{
				if(AppendState(i))
				{
					foreach(string s in SQLFields)
					{
						this[s].OldValues[i]=this[s].GetStringValue(i);
					}
				}
			}		
		}
		private string GenerateHtml(bool post)
		{
			BuildEditTable(post);
			StringWriter sw=new StringWriter();
			EditTable.RenderControl(new HtmlTextWriter(sw));
			sw.Close();
			return sw.ToString();
		}
		protected virtual StringCollection DecideLayout(out int count)
		{
			if(SQLFields.Count>0)
				count=this[SQLFields[0]].Values.Count;
			else
				count=0;
			
			StringCollection strs=new StringCollection();
			foreach(string s in KeyFields)
				strs.Add(s);
			foreach(string s in NormalFields)
				strs.Add(s);
			return strs;
		}
		private void BuildEditTable(bool post)
		{
			int count=0;
			StringCollection keys=DecideLayout(out count);

			ResetFieldDisplays(count,false);

			HtmlTable table=EditTable;
			table.Rows.Clear();
			if(!isFormStyle)
			{
				for(int i=0;i<count;i++)
				{
					if(i==0)
					{
						HtmlTableRow tr0=new HtmlTableRow();
						table.Rows.Add(tr0);
						foreach(string s in keys)
						{
							HtmlTableCell tc=new HtmlTableCell();
							tr0.Cells.Add(tc);
							tc.Attributes.Add("title",GetFieldDescription(s));
							tc.Attributes.Add("class","LanEditHeaderCell");
							tc.InnerHtml=this[s].ShowName;
						}
						if(post && ShowErrors)
						{
							HtmlTableCell tc=new HtmlTableCell();
							tr0.Cells.Add(tc);
							tc.InnerText="错误信息";
							tc.Attributes.Add("class","LanEditHeaderCell");
						}
						tr0=new HtmlTableRow();
						table.Rows.Add(tr0);
						foreach(string s in keys)
						{
							HtmlTableCell tc=new HtmlTableCell();
							tr0.Cells.Add(tc);
							tc.InnerHtml=GetFieldAdditional(s);
							tc.Attributes.Add("class","LanEditBodyCell");
						}
						if(post && ShowErrors)
						{
							HtmlTableCell tc=new HtmlTableCell();
							tr0.Cells.Add(tc);
							tc.InnerText="文本";
							tc.Attributes.Add("class","LanEditBodyCell");
						}
					}
					HtmlTableRow tr=new HtmlTableRow();
					table.Rows.Add(tr);
					foreach(string s in keys)
					{
						ArrayList al=FieldDisplays[s] as ArrayList;
						IEditFieldDisplay fd=al[i] as IEditFieldDisplay;
						if(fd==null)continue;
						fd.BuildDisplayControl();

						HtmlTableCell tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						tc.Controls.Add(fd.EditControl);
						tc.Attributes.Add("class","LanEditBodyCell");
						if(fd.Hidden || !fd.Visible)
						{
							if(i==0)
							{
								int cindex=tr.Cells.Count-1;
								table.Rows[0].Cells[cindex].Style.Add("display","none");
								table.Rows[1].Cells[cindex].Style.Add("display","none");
							}
							tc.Style.Add("display","none");
						}
					}					
					if(post && ShowErrors)
					{
						HtmlTableCell tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						tc.InnerText=Errors[i];
						tc.Style.Add("color","red");
						tc.Attributes.Add("class","LanEditBodyCell");
					}
				}
			}
			else
			{
				if(post && ShowErrors)
				{
					HtmlTableRow tr=new HtmlTableRow();
					table.Rows.Add(tr);

					HtmlTableCell tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerText="错误信息";
					tc.Attributes.Add("class","LanEditHeaderCell");
					
					tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerHtml="文本";
					tc.Attributes.Add("class","LanEditBodyCell");

					for(int i=0;i<count;i++)
					{
						tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						tc.InnerText=Errors[i];
						tc.Style.Add("color","red");
						tc.Attributes.Add("class","LanEditBodyCell");
					}	
					tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerHtml="";
					tc.Attributes.Add("class","LanEditBodyCell");
				}
				foreach(string s in keys)
				{
					bool isHide=false;
					HtmlTableRow tr=new HtmlTableRow();
					table.Rows.Add(tr);

					HtmlTableCell tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerText=this[s].ShowName;
					tc.Attributes.Add("class","LanEditHeaderCell");
					
					tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerHtml=GetFieldAdditional(s);
					tc.Attributes.Add("class","LanEditBodyCell");

					ArrayList al=FieldDisplays[s] as ArrayList;
					for(int i=0;i<count;i++)
					{
						IEditFieldDisplay fd=al[i] as IEditFieldDisplay;
						if(fd==null)continue;
						fd.BuildDisplayControl();
						tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						tc.Controls.Add(fd.EditControl);
						tc.Attributes.Add("class","LanEditBodyCell");
						if(fd.Hidden || !fd.Visible)
						{
							isHide=true;
						}
					}					
					tc=new HtmlTableCell();
					tr.Cells.Add(tc);
					tc.InnerHtml=GetFieldDescription(s);
					tc.Attributes.Add("class","LanEditBodyCell");
					if(isHide)
						tr.Style.Add("display","none");
				}
			}
			if(table.Rows.Count>0 && table.Rows[0].Cells.Count>0)
			{
				table.Rows[0].Cells[0].Controls.Add(BuildRecordCountControl());
			}
		}
		/// <summary>
		/// 得到一个域的类型相关的描述，对数值如果有单位则用单位描述
		/// </summary>
		/// <param name="f"></param>
		/// <returns></returns>
		public string GetFieldAdditional(string f)
		{
			if(this[f]==null)
				return "";
			if(this[f].ShowType==ShowType.NOVALUE || this[f].ShowType==ShowType.RAWVALUE 
				|| this[f].ShowType==ShowType.FILE || this[f].ShowType==ShowType.HTML)
			{
				return "";
			}
			else
			{
				string nullable="";
				if(!this[f].Nullable)
				{
					nullable="[必填]";
				}
				string type="";
                if(this[f].Unit!=null && this[f].Unit.Trim().Length>0)
				{
					type=this[f].Unit.Trim();
				}
				string length="";
				if(this[f].Type==typeof(string) && (this[f].ShowType==ShowType.TEXTBOX || this[f].ShowType==ShowType.TEXTAREA))
				{
					if(type.Length<=0)
						type="文字";
					if(IsMaxLengthShow)
						length="[字节数<="+this[f].Length+"]";
				}
				return type+nullable+length;
			}
		}
		/// <summary>
		/// 得到一个域的描述
		/// </summary>
		/// <param name="f"></param>
		/// <returns></returns>
		public string GetFieldDescription(string f)
		{
			if(this[f]==null)
				return "";
			if(this[f].ShowType==ShowType.HIDDEN || this[f].ShowType==ShowType.READONLYTEXTBOX || this[f].ShowType==ShowType.READONLYTEXTAREA 
				|| this[f].ShowType==ShowType.NOVALUE || this[f].ShowType==ShowType.RAWVALUE 
				|| this[f].ShowType==ShowType.FILE || this[f].ShowType==ShowType.HTML)
			{
				return "";
			}
			else
			{
				string desc=this[f].Description;
				if(desc==null)
					desc="";
				else
					desc=desc.Trim();
				return desc;
			}
		}
		public void RegisterCss(Page page)
		{
			page.RegisterClientScriptBlock("InfoServiceCss",GenerateCssScript());
		}
		public void RegisterScript(Page page)
		{
			page.RegisterClientScriptBlock("WebBatchEditClientScript",GenerateAllInternalScript());
		}
		private string GenerateCssScript()
		{
			return "<LINK href='"+CssUrl+"' type='text/css' rel='stylesheet'>";
		}
		/// <summary>
		/// 辅助函数,生成除标准事件处理外的其它脚本.
		/// </summary>
		/// <returns></returns>
		private string GenerateAllInternalScript()
		{
			string retVal="<script src='"+ScriptUrl+"'></script>\r\n"+GenerateEditCursorScript()+GeneratePositionScript()+GenerateSearchSelectScript()+GenerateSearchCheckBoxesScript()+GenerateNumCheckScript()+GenerateStrCheckScript()+GenerateHtmlEditorScript()+
				GenerateFileUploadScript()+GeneratorDateCheckScript();
			return retVal;
		}
		private string GenerateEditCursorScript()
		{
			string retVal=@"
		<script language='javascript'>
			<!--
				function keydownHandle(conObj)
				{
					//37 左 38 上 39 右 40 下 13 回车 27 ESC 16 SHIFT 17 CTRL 18 ALT
					//33 PgUp 34 PgDn 36 Home 35 End
					var obj=event.srcElement;
					var t=obj.tagName;
					if(t!='INPUT')
						return;
					var keyCode=event.keyCode;
					if(keyCode==13 || keyCode==34)
					{
						var elements=conObj.getElementsByTagName('INPUT');
						var len=elements.length;
						for(var i=0;i<elements.length-1;i++)
						{
							if(elements[i]==obj)
							{
								for(var j=i+1;j<elements.length-1;j++)
								{
									if(elements[j].type=='text')
									{
										elements[j].select();
										break;
									}					
								}
							}
						}
						event.cancelBubble=true;
						event.returnValue=false;
					}
					else if(keyCode==27 || keyCode==33)
					{
						var elements=conObj.getElementsByTagName('INPUT');
						var len=elements.length;
						for(var i=1;i<elements.length-1;i++)
						{
							if(elements[i]==obj)
							{
								for(var j=i-1;j>=0;j--)
								{
									if(elements[j].type=='text')
									{
										elements[j].select();
										break;
									}					
								}
							}
						}
						event.cancelBubble=true;
						event.returnValue=false;
					}
					else if(keyCode==38)
					{						
						var cell=obj.parentElement;
						while(cell.tagName!='TD')cell=cell.parentElement;
						var row=cell.parentElement;
						//当表中存在隐藏行或列时,列或行对象的cellIndex或rowIndex并不准确,我们需要自己查找确定索引
						for(var rindex=0;rindex<conObj.rows.length;rindex++)
						{
							if(row==conObj.rows[rindex])break;
						}
						for(var cindex=0;cindex<row.cells.length;cindex++)
						{
							if(cell==row.cells[cindex])break;
						}
						rindex--;
						while(rindex>=0)
						{
							var trow=conObj.rows[rindex];
							if(trow.style.display=='none')
							{
								rindex--;
								continue;
							}
							var tcell=trow.cells[cindex];
							var elements=tcell.getElementsByTagName('INPUT');
							for(var i=0;i<elements.length;i++)
							{
								var tobj=elements[i];
								if(tobj.type=='text')
								{
									tobj.select();
									break;
								}
							}
							break;
						}
						event.cancelBubble=true;
						event.returnValue=false;
					}
					else if(keyCode==40)
					{
						var cell=obj.parentElement;
						while(cell.tagName!='TD')cell=cell.parentElement;
						var row=cell.parentElement;
						//当表中存在隐藏行或列时,列或行对象的cellIndex或rowIndex并不准确,我们需要自己查找确定索引
						for(var rindex=0;rindex<conObj.rows.length;rindex++)
						{
							if(row==conObj.rows[rindex])break;
						}
						for(var cindex=0;cindex<row.cells.length;cindex++)
						{
							if(cell==row.cells[cindex])break;
						}
						rindex++;
						while(rindex<=conObj.rows.length-1)
						{
							var trow=conObj.rows[rindex];
							if(trow.style.display=='none')
							{
								rindex++;
								continue;
							}
							var tcell=trow.cells[cindex];
							var elements=tcell.getElementsByTagName('INPUT');
							for(var i=0;i<elements.length;i++)
							{
								var tobj=elements[i];
								if(tobj.type=='text')
								{
									tobj.select();
									break;
								}
							}
							break;
						}
						event.cancelBubble=true;
						event.returnValue=false;
					}
				}
				
			-->
		</script>
			";
			return retVal;
		}
	}
}

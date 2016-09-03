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
using System.Text.RegularExpressions;
using System.Xml;
using Dreaman.DataAccess;
using Dreaman.InfoService;

namespace Dreaman.InfoService.Report
{
	/// <summary>
	/// 描述一个表域的信息,不同于数据层的表列,这里包括表域的显示信息。
	/// </summary>
	public class QueryField : TableFieldBase
	{
		public bool IsGroup=false;//是否参与分类汇总
		public StatisticFieldType StatMethod=StatisticFieldType.AUTO;//统计方法
		public int SortOrder=0;//排序序号,0不参与排序
		public string WhereClause=null;//where条件表达式,用于搜索

		public ArrayList Values=new ArrayList();//字段值,用于数据库操作

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
		public QueryField Clone()
		{
			QueryField qf=new QueryField();
			qf.ID=ID;
			qf.Name=Name;
			qf.ShowName=ShowName;
			qf.Type=Type;
			qf.Length=Length;
			qf.Unit=Unit;
			qf.Nullable=Nullable;
			qf.ShowType=ShowType;
			qf.Indent=Indent;
			qf.BaseTable=BaseTable;
			qf.BaseField=BaseField;
			qf.Alias=Alias;
			qf.Format=Format;
			qf.ReadOnly=ReadOnly;
			qf.UseClassValue=UseClassValue;
			qf.FromUpdateTable=FromUpdateTable;

			qf.IsGroup=IsGroup;
			qf.StatMethod=StatMethod;
			qf.SortOrder=SortOrder;
			qf.WhereClause=WhereClause;

			for(int i=0;i<qf.Values.Count;i++)
			{
				qf.Values.Add(Values[i]);
			}
			return qf;
		}
	}
	/// <summary>
	/// 描述一个SQL结果集形成的数据块，它的职责包括分类汇总（当前未实现,分类汇总的数据需要
	/// 设计新的属性与结构来描述，可能会类似StatisticField类的方式计算值）。
	/// </summary>
	public class SQLDataBlock : SQLInfo,IDataBlock
	{
		#region IDataBlock 成员

		public string Filter(string templateContent, string dataTag)
		{
			DataBlockUtility dataBlock=new DataBlockUtility();
			dataBlock.FilterDataLabel+=new FilterDataLabel(dataBlock_FilterDataLabel);
			return dataBlock.Filter(templateContent,dataTag);
		}


		public string GetDataBlockUI(string[] fieldNames)
		{
			int ct=RecordCount;
			if(ct<=0)
				return "";
			HtmlTable table=new HtmlTable();
			if(!IsFormStyle)
			{
				for(int i=0;i<ct;i++)
				{
					HtmlTableRow tr=new HtmlTableRow();
					table.Rows.Add(tr);
					foreach(string s in fieldNames)
					{
						HtmlTableCell tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						BuildFieldView(i,s,tc);
					}
				}
			}
			else
			{
				foreach(string s in fieldNames)
				{
					HtmlTableRow tr=new HtmlTableRow();
					table.Rows.Add(tr);
					for(int i=0;i<ct;i++)
					{
						HtmlTableCell tc=new HtmlTableCell();
						tr.Cells.Add(tc);
						BuildFieldView(i,s,tc);
					}
				}
			}
			StringWriter sw=new StringWriter();
			table.RenderControl(new HtmlTextWriter(sw));
			sw.Close();
			return sw.ToString();
		}
		public string GetDataBlockUI()
		{
			return "";
		}

		#endregion
		#region 系列特性
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
		public new QueryField this[string fieldName]
		{
			get
			{
				return tableFields[fieldName] as QueryField;
			}
			set
			{
				tableFields[fieldName]=value;
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
				}
				foreach(string s in SQLFields)
				{
					while(this[s].Values.Count>count)
						this[s].Values.RemoveAt(count);
				}
			}
		}
		#endregion
		/// <summary>
		/// 设置域是否参与分组信息（分组的顺序由排序决定）。
		/// </summary>
		public void SetFieldGroup(string fieldname,bool isGroup)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].IsGroup=isGroup;
		}
		/// <summary>
		/// 设置域的排序信息。
		/// </summary>
		public void SetFieldSort(string fieldname,int sort)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].SortOrder=sort;
		}
		public SQLDataBlock(string sqlstr,DataAccessType datype,string connstr):base(sqlstr,datype,connstr)
		{}
		protected override TableFieldBase CreateField()
		{
			return new QueryField();
		}
		public void SelectRecord(string condition)
		{
			string sqlstr=parser.BuildSQL(condition,null);
			RecordCount=0;
			string connstr=ConnectionString;
			if(connstr==null)throw new Exception("系统错误！");
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
			IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
			try
			{
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
							}
							else
							{
								this[key].Values.Add(null);
							}
							continue;
						}
						this[key].Values.Add(QueryField.ValueToString(myReader[key],null));
					}
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
		private string uploadFileVPath="../uploadFiles";
		private bool isFormStyle=false;

		/// <summary>
		/// 构造表UI的某条记录时的某字段的显示,主要包括字段值的转换与格式化.
		/// </summary>
		/// <param name="index">记录索引</param>
		/// <param name="f">字段名</param>
		/// <param name="cell">用于显示字段值的HtmlTableCell</param>
		private void BuildFieldView(int index,string f,HtmlTableCell cell)
		{
			QueryField tf=this[f];
			if(tf==null)
				return;
			if(!tf.UseClassValue)
			{
				if(tf.ShowType==ShowType.COMBOBOX)
				{
					NameValueCollection vals=GetClassVals(tf.Name);
					string v=tf.GetStringValue(index);
					if(vals!=null && vals[v]!=null)
					{
						v=vals[v].Trim();
					}
					cell.InnerHtml=v;
				}
				else if(tf.ShowType==ShowType.CHECKBOX)
				{
					NameValueCollection vals=GetClassVals(tf.Name);
					if(vals!=null)
					{
						string val=tf.GetStringValue(index);
						string[] keys=val.Split(',');
						for(int i=0;i<keys.Length-1;i++)
						{
							string v=vals[keys[i]];
							if(v!=null)
								keys[i]=v.Trim();
						}
						cell.InnerHtml=string.Join(",",keys,0,keys.Length-1);
					}
				}
				else
				{
					cell.InnerHtml=tf.GetFormatValue(index);
				}
			}
			else
				cell.InnerHtml=tf.GetFormatValue(index);

			if(tf.Type==typeof(string) || tf.Type.IsArray || tf.ShowType==ShowType.FILEUPLOAD || tf.ShowType==ShowType.FILE || tf.Type==typeof(bool))
			{}
			else if(tf.Type==typeof(System.DateTime))
			{
				cell.Attributes.Add("align","center");
			}
			else
			{
				cell.Attributes.Add("align","right");
			}
		}
		private string dataBlock_FilterDataLabel(string fieldName, int index)
		{
			string tdAttr=">";
			if(fieldName==null)
				return tdAttr+GetDataBlockUI();
			else if(fieldName.IndexOf(',')<=0)
			{
				QueryField qf=this[fieldName];
				if(qf.Type!=typeof(string) && qf.Type!=typeof(DateTime) && qf.Type!=typeof(bool) && !qf.Type.IsArray && qf.Type.IsValueType)
				{
					tdAttr=" x:num>";
				}
				if(qf!=null)
				{
					return tdAttr+qf.GetFormatValue(index);
				}
				else
				{
					return tdAttr;
				}
			}
			else
			{
				string[] fields=fieldName.Split(',');
				return tdAttr+GetDataBlockUI(fields);
			}
		}
	}
}

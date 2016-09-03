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
	public delegate byte[] ReadField(int size);
	public delegate void WriteField(byte[] content);
	/// <summary>
	/// 用于辅助读写文件字段的类,当前不考虑尺寸过大的文件,如果将来需要扩充,按当前的设计思路,
	/// 应该设定读写事件,用以提供从字段读出的数据与写回的数据.
	/// </summary>
	public sealed class FileField
	{
		private FileField()
		{}
		public static void GenFilePath(string path,out string subPath1,out string subPath2)
		{
			//按需要建立子目录
			subPath1=DateTime.Now.ToString("yyyy-MM");
			if(!Directory.Exists(path))
				Directory.CreateDirectory(path);
			//寻找最近使用的目录或者当最近目录文件数超过100时创建新的子目录
			if(!Directory.Exists(path+"\\"+subPath1))
				Directory.CreateDirectory(path+"\\"+subPath1);
			subPath2="1";
			if(!Directory.Exists(path+"\\"+subPath1+"\\"+subPath2))
			{
				Directory.CreateDirectory(path+"\\"+subPath1+"\\"+subPath2);
			}
			for(int i=1;;i++)
			{
				if(!Directory.Exists(path+"\\"+subPath1+"\\"+i))
				{
					int fileCount=Directory.GetFiles(path+"\\"+subPath1+"\\"+(i-1)).Length;
					if(fileCount>=100)
					{
						subPath2=""+i;
					}
					else
					{
						subPath2=""+(i-1);
					}
					break;
				}
			}
			if(!Directory.Exists(path+"\\"+subPath1+"\\"+subPath2))
			{
				Directory.CreateDirectory(path+"\\"+subPath1+"\\"+subPath2);
			}
		}
		public static string GenCacheFilePath(string path,string fileName)
		{
			if(!Directory.Exists(path))
				Directory.CreateDirectory(path);
			if(!Directory.Exists(path+"\\CacheFiles"))
				Directory.CreateDirectory(path+"\\CacheFiles");
			return path+"\\CacheFiles\\"+fileName;
		}
		public static string Content(byte[] content,string virtualPath)
		{
			int size=content.Length;
			if(size>256)
			{
				int len=0;
				for(;len<256;len++)
				{
					if(content[len]==(byte)0)break;
				}
				//下面这一句在程序修改重编译而IIS不重启的情形下会锁住，不知道是何原因（与全局静态数据有关？）
				string fileName=System.Text.Encoding.GetEncoding(54936).GetString(content,0,len);
				string filePath=HttpContext.Current.Server.MapPath(virtualPath);
				string fullName=GenCacheFilePath(filePath,fileName);
				FileInfo fi=new FileInfo(fullName);
				if(!fi.Exists || fi.Length!=size-256)
				{	
					FileStream fs=null;
					if(File.Exists(fullName))
					{
						fs=File.OpenWrite(fullName);
					}
					else
					{
						fs=File.Create(fullName);
					}						
					using(fs)
					{
						fs.Write(content,256,size-256);
						fs.Close();
					}
				}
				return "<a href='"+virtualPath+"/CacheFiles/"+fileName+"' target='_blank'>"+Path.GetFileNameWithoutExtension(fileName)+"</a>";
			}
			return "<a href='about:blank' target='_blank'>Can't Read File!</a>";
		}
		public static byte[] Content(string fileNameWithoutExtension,string virtualPath)
		{
			string filePath=HttpContext.Current.Server.MapPath(virtualPath);
			FileInfo fi=new FileInfo(filePath);
			if(fi.Exists)
			{
				FileStream fs=File.OpenRead(filePath);
				byte[] content=new byte[fi.Length+256];
				byte[] fileName=System.Text.Encoding.GetEncoding(54936).GetBytes(fileNameWithoutExtension);
				for(int i=0;i<256;i++)
				{
					if(i<fileName.Length)
					{
						content[i]=fileName[i];
					}
					else
						content[i]=(byte)0;
				}
				fs.Read(content,256,(int)fi.Length);
				fs.Close();
				return content;
			}
			return null;
		}

		public static event ReadField ReadField;
		public static event WriteField WriteField;
		public static string ReadBigContent(string filePath,string virtualPath)
		{
			return "<a href='about:blank' target='_blank'>Can't Read File!</a>";
		}
		public static void WriteBigContent(string fileNameWithoutExtension,string virtualPath)
		{
			string filePath=HttpContext.Current.Server.MapPath(virtualPath);
		}
	}
	/// <summary>
	/// 描述表域的显示控件样式
	/// </summary>
	public enum ShowType:int
	{
		TEXTBOX,
		TEXTAREA,
		COMBOBOX,
		CHECKBOX,
		FILEUPLOAD,
		HTMLEDIT,
		HTMLOUTEREDIT,
		DATETIME,
		READONLYTEXTBOX,
		READONLYTEXTAREA,
		HIDDEN,
		FILE,
		HTML,
		NOVALUE,
		RAWVALUE
	}
	public enum LayoutStyle:int
	{
		DEFAULT
	}
	/// <summary>
	/// 描述一个表域的信息,不同于数据层的表列,这里包括表域的显示信息。
	/// </summary>
	public class TableFieldBase
	{
		public static string ValueToString(object val,string format)
		{
			if(val==null || val==DBNull.Value)
				return "";
			else if(format!=null)
			{
				if(val is float)
					return ((float)val).ToString(format);
				else if(val is decimal)
					return ((decimal)val).ToString(format);
				else if(val is double)
					return ((double)val).ToString(format);
				else if(val is DateTime)
				{
					DateTime dt=(DateTime)val;
					return dt.ToString(format);
				}
				else
					return val.ToString().Trim();
			}
			else
			{			
				if(val is float)
					return ((float)val).ToString("###########0.########");
				else if(val is decimal)
					return ((decimal)val).ToString("###########0.########");
				else if(val is double)
					return ((double)val).ToString("###########0.########");
				else if(val is DateTime)
				{
					DateTime dt=(DateTime)val;
					if(dt.Hour==0 && dt.Minute==0 && dt.Second==0)
						return dt.ToString("yyyy-MM-dd");
					else if(dt.Year==0 && dt.Month==0 && dt.Day==0)
						return dt.ToString("hh:mm:ss");
					else
						return dt.ToString("yyyy-MM-dd hh:mm:ss");
				}
				else
					return val.ToString().Trim();
			}
		}

		public string ID=null;
		public string Name=null;
		public Type Type=null;
		public int Length=0;
		public bool Nullable=true;
		public string BaseTable=null;
		public string BaseField=null;
		public string Alias=null;
		public bool ReadOnly=false;
		public Encoding Encoding=null;

		public string ShowName=null;
		public string Unit=null;
		public string Description=null;
		public string Format=null;
		public int Indent=0;
		public ShowType ShowType=ShowType.TEXTBOX;
		/// <summary>
		/// 设置是否使用分类表的内容字段作字段值,否则使用分类表的编码作字段值.
		/// 分类显示始终使用内容.
		/// </summary>
		public bool UseClassValue=true;
		public bool FromUpdateTable=false;

		public string GetIndentString()
		{
			if(Indent>6)
				Indent=6;
			if(Indent<0)
				Indent=0;
			return indentString.Substring(0,Indent*singleIndent.Length);
		}
		private static string singleIndent="&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;";
		private static string indentString="&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;";
	}
	/// <summary>
	/// 描述一个表域的信息,不同于数据层的表列,这里包括表域的显示信息。
	/// </summary>
	public class TableField : TableFieldBase
	{
		public bool ComboBoxAsCheckBox=true;//将单选分类构造为与多选分类一样的查询界面,仅对查询界面的构造生效,编辑界面不使用它。
		public bool IsGroup=false;//是否参与分类汇总
		public StatisticFieldType StatMethod=StatisticFieldType.AUTO;//统计方法
		public int SortOrder=0;//排序序号,0不参与排序
		public string WhereClause=null;//where条件表达式,用于搜索

		public object Value=null;//字段值,用于数据库操作
		public string OldValue=null;//字段原始值,用于数据库操作时的条件构造

		public bool ValueIsNotNull()
		{
			if(Value==null || Value==DBNull.Value)
				return false;
			return true;
		}
		public string GetStringValue()
		{
			return ValueToString(Value,null);
		}
		public string GetFormatValue()
		{
			return ValueToString(Value,Format);
		}
		public TableField Clone()
		{
			TableField tf=new TableField();
			tf.ID=ID;
			tf.Name=Name;
			tf.Type=Type;
			tf.Length=Length;
			tf.Nullable=Nullable;
			tf.BaseTable=BaseTable;
			tf.BaseField=BaseField;
			tf.Alias=Alias;
			tf.ReadOnly=ReadOnly;
			tf.Encoding=Encoding;

			tf.ShowName=ShowName;
			tf.Unit=Unit;
			tf.Description=Description;
			tf.Format=Format;
			tf.Indent=Indent;
			tf.ShowType=ShowType;
			tf.UseClassValue=UseClassValue;
			tf.FromUpdateTable=FromUpdateTable;

			tf.ComboBoxAsCheckBox=ComboBoxAsCheckBox;
			tf.IsGroup=IsGroup;
			tf.StatMethod=StatMethod;
			tf.SortOrder=SortOrder;
			tf.WhereClause=WhereClause;

			tf.Value=Value;
			tf.OldValue=OldValue;
			return tf;
		}
	}
	/// <summary>
	/// 用户提供分类值的分类，这样的分类就是一个名字/值列表。
	/// </summary>
	public class NameValueClass
	{
		public NameValueClass(NameValueCollection nameVals)
		{
			classes=nameVals;
		}
		public NameValueCollection GetClasses()
		{
			return classes;
		}
		private NameValueCollection classes;
	}
	/// <summary>
	/// 用SQL语句的结果集作分类值的分类，不同于分类表提供数据的分类，这样的SQL语句
	/// 只提供一个分类的值。
	/// </summary>
	public class SQLSourceClass
	{
		public SQLSourceClass(string valCol,string _codeCol,string _sql,DataAccessType _daType,string connStr)
		{
			valueCol=valCol;
			codeCol=_codeCol;
			sql=_sql;
			daType=_daType;
			connectionString=connStr;
		}
		public NameValueCollection GetClasses()
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,connectionString);
			DataSet myDataSet=dataAccess.ExecuteDataSet(sql);
			DataTable myTable=myDataSet.Tables[0];
			NameValueCollection retVal=new NameValueCollection();
			foreach(DataRow dr in myTable.Rows)
			{
				if(dr[codeCol]==null || dr[codeCol]==DBNull.Value || dr[valueCol]==null || dr[valueCol]==DBNull.Value)
					continue;
				//分类编码总是去除前后空格,但分类值保留前面的空格以允许按此构造层次分类(这种层次仅用于显示便利)
				retVal[dr[codeCol].ToString().Trim()]=dr[valueCol].ToString().TrimEnd(null);
			}
			if(dataAccess.Error!=null)
				throw new Exception("查询分类错误！"+dataAccess.Error.Message);
			return retVal;
		}
		private string valueCol;
		private string codeCol;
		private string sql;
		private DataAccessType daType;
		private string connectionString;
	}
	/// <summary>
	/// 标准分类，使用指定的SQL查询结果来提供多个分类值。
	/// </summary>
	public class StandardClasses
	{
		public StandardClasses(string valCol,string _codeCol,string _filterCol,string _sql,DataAccessType _daType,string connStr)
		{
			valueCol=valCol;
			codeCol=_codeCol;
			filterCol=_filterCol;
			parser=new SQLSelectParser(_sql);
			daType=_daType;
			connectionString=connStr;
		}
		public NameValueCollection GetClasses(string name)
		{			
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,connectionString);
			string sql=parser.BuildSQL(filterCol+" = '"+name+"'",null);
			DataSet myDataSet=dataAccess.ExecuteDataSet(sql);
			DataTable myTable=myDataSet.Tables[0];
			NameValueCollection retVal=new NameValueCollection();
			foreach(DataRow dr in myTable.Rows)
			{
				if(dr[codeCol]==null || dr[codeCol]==DBNull.Value || dr[valueCol]==null || dr[valueCol]==DBNull.Value)
					continue;
				//分类编码总是去除前后空格,但分类值保留前面的空格以允许按此构造层次分类(这种层次仅用于显示便利)
				retVal[dr[codeCol].ToString().Trim()]=dr[valueCol].ToString().TrimEnd(null);
			}
			if(dataAccess.Error!=null)
				throw new Exception("查询分类错误！"+dataAccess.Error.Message);
			return retVal;
		}
		private string valueCol;
		private string codeCol;
		private string filterCol;
		private SQLSelectParser parser;
		private DataAccessType daType;
		private string connectionString;
	}
	/// <summary>
	/// 获取与一个SQL相关的信息（包括用于查询与更新的信息），SQL结果集来自多张表时，SQLInfo仅以其中一张表为依据构造更新信息，
	/// 默认的选定SQL结果集字段所属的第一个表。考虑到多表查询可更新的表通常只能是最详细的表，KeyFields只取更新表相关的字段（出现多个的以第一次出现为准）。
	/// </summary>
	public class SQLInfo : DataAccessInfo
	{
		#region 特性
		public TableFieldBase this[string s]
		{
			get
			{
				return tableFields[s] as TableFieldBase;
			}
			set
			{
				tableFields[s]=value;
			}
		}
		public int FieldCount
		{
			get
			{
				return tableFields.Count;
			}
		}
		public StringCollection SQLFields
		{
			get
			{
				return sqlFields;
			}
		}
		public StringCollection KeyFields
		{
			get
			{
				return keyFields;
			}
		}
		public StringCollection NormalFields
		{
			get
			{
				return normalFields;
			}
		}
		public StringCollection AutoIncrementFields
		{
			get
			{
				return autoIncrementFields;
			}
		}
		public string UpdateTableName
		{
			get
			{
				return updateTableName;
			}
		}
		public LayoutStyle Layout
		{
			get
			{
				return layoutStyle;
			}
			set
			{
				layoutStyle=value;
			}
		}		
		public string GUID
		{
			get{return guid;}
		}
		public string EditIcon
		{
			get
			{
				return editIcon;
			}
			set
			{
				editIcon=value;
			}
		}
		public string BrowseIcon
		{
			get
			{
				return browseIcon;
			}
			set
			{
				browseIcon=value;
			}
		}
		public string FilterIcon
		{
			get
			{
				return filterIcon;
			}
			set
			{
				filterIcon=value;
			}
		}
		public string OpenIcon
		{
			get
			{
				return openIcon;
			}
			set
			{
				openIcon=value;
			}
		}
		public string CloseIcon
		{
			get
			{
				return closeIcon;
			}
			set
			{
				closeIcon=value;
			}
		}
		public string FileUploadUrl
		{
			get
			{
				return fileUploadUrl;
			}
			set
			{
				fileUploadUrl=value;
			}
		}
		public string HtmlEditUrl
		{
			get
			{
				return htmlEditUrl;
			}
			set
			{
				htmlEditUrl=value;
			}
		}
		/// <summary>
		/// HTML编辑器的配置文件目录
		/// </summary>
		public string HtmlEditorConfigFile
		{
			get
			{
				return htmlEditorConfigFile;
			}
			set
			{
				htmlEditorConfigFile=value;
			}
		}		
		public string CssUrl
		{
			get
			{
				return cssUrl;
			}
			set
			{
				cssUrl=value;
			}
		}
		public string ScriptUrl
		{
			get
			{
				return scriptUrl;
			}
			set
			{
				scriptUrl=value;
			}
		}
		public int MaxSelectItems
		{
			get
			{
				return maxSelectItems;
			}
			set
			{
				maxSelectItems=value;
			}
		}
		public int MaxFieldWidth
		{
			get
			{
				return maxFieldWidth;
			}
			set
			{
				maxFieldWidth=value;
			}
		}
		public int TextAreaRows
		{
			get
			{
				return textAreaRows;
			}
			set
			{
				textAreaRows=value;
			}
		}
		public int CheckBoxesCols
		{
			get
			{
				return checkBoxesCols;
			}
			set
			{
				checkBoxesCols=value;
			}
		}
		public int QueryCheckBoxesCols
		{
			get
			{
				return queryCheckBoxesCols;
			}
			set
			{
				queryCheckBoxesCols=value;
			}
		}
		public int MaxCheckBoxesRows
		{
			get
			{
				return maxCheckBoxesRows;
			}
			set
			{
				maxCheckBoxesRows=value;
			}
		}
		public int MaxSort
		{
			get
			{
				return maxSort;
			}
			set
			{
				maxSort=value;
			}
		}
		public bool UseSorts
		{
			get
			{
				return useSorts;
			}
			set
			{
				useSorts=value;
			}
		}
		public bool UseGroups
		{
			get
			{
				return useGroups;
			}
			set
			{
				useGroups=value;
			}
		}
		#endregion
		/// <summary>
		/// 设定列引用的分类名称。
		/// </summary>
		/// <param name="refcol"></param>
		/// <param name="className"></param>
		/// <param name="showtype"></param>
		public void SetFieldClass(string refcol,string className,ShowType showtype)
		{
			if(this[refcol]==null)
				return;
			//设定参照列的编辑控件样式
			if(showtype!=ShowType.COMBOBOX && showtype!=ShowType.CHECKBOX)
				this[refcol].ShowType=ShowType.COMBOBOX;
			else
				this[refcol].ShowType=showtype;
			//设定参照关系
			this.classCol_ClassName[refcol]=className;
		}
		/// <summary>
		/// 设置列的分类存储方式,是存储分类的值还是编码,缺省存储值(useClassValue参数为true)
		/// </summary>
		/// <param name="refcol"></param>
		/// <param name="useClassValue"></param>
		public void SetFieldClassUsage(string refcol,bool useClassValue)
		{
			if(this[refcol]==null)
				return;
			this[refcol].UseClassValue=useClassValue;
		}
		/// <summary>
		/// 设置一个分类，分类值由（代码，值，代码，值，...)提供。
		/// </summary>
		/// <param name="name"></param>
		/// <param name="nameVals"></param>
		public void SetClass(string name,params string[] nameVals)
		{
			NameValueCollection vals=new NameValueCollection();
			for(int i=0;i<nameVals.Length-1;i+=2)
			{
				string c=nameVals[i];
				string v=nameVals[i+1];
				if(c==null || v==null)
					continue;
				vals[c]=v;
			}
			nameValueClasses[name]=new NameValueClass(vals);
		}
		/// <summary>
		/// 设置一个分类，分类值由名字(代码)/值表提供。
		/// </summary>
		/// <param name="name"></param>
		/// <param name="vals"></param>
		public void SetClass(string name,NameValueCollection vals)
		{
			nameValueClasses[name]=new NameValueClass(vals);
		}
		/// <summary>
		/// 设置一个分类，分类值由SQL语句提供，其中的代码/值字段由参数指定。
		/// </summary>
		/// <param name="name"></param>
		/// <param name="valCol"></param>
		/// <param name="codeCol"></param>
		/// <param name="sqlstr"></param>
		public void SetClass(string name,string valCol,string codeCol,string sqlstr)
		{
			sqlSourceClasses[name]=new SQLSourceClass(valCol,codeCol,sqlstr,DAType,ConnectionString);
		}
		/// <summary>
		/// 设置一个分类，分类值由SQL语句提供，其中的代码/值字段由参数指定，SQL访问的数据库也由参数指定。
		/// </summary>
		/// <param name="name"></param>
		/// <param name="valCol"></param>
		/// <param name="codeCol"></param>
		/// <param name="sqlstr"></param>
		/// <param name="datype"></param>
		/// <param name="connstr"></param>
		public void SetClass(string name,string valCol,string codeCol,string sqlstr,DataAccessType datype,string connstr)
		{
			sqlSourceClasses[name]=new SQLSourceClass(valCol,codeCol,sqlstr,datype,connstr);
		}
		/// <summary>
		/// 设置标准分类对象的信息,使用与查询库同样的连结串访问分类数据
		/// </summary>
		/// <param name="valCol"></param>
		/// <param name="_codeCol"></param>
		/// <param name="_filterCol"></param>
		/// <param name="_sql"></param>
		public void SetStandardClass(string valCol,string _codeCol,string _filterCol,string _sql)
		{
			standardClasses=new StandardClasses(valCol,_codeCol,_filterCol,_sql,DAType,ConnectionString);
		}
		/// <summary>
		/// 设置标准分类对象
		/// </summary>
		/// <param name="sc"></param>
		public void SetStandardClass(StandardClasses sc)
		{
			standardClasses=sc;
		}
		/// <summary>
		/// 设定域的显示名
		/// </summary>
		/// <param name="f"></param>
		/// <param name="showname"></param>
		public void SetFieldShowName(string f,string showname)
		{
			if(this[f]==null)
				return;
			this[f].ShowName=showname;
		}
		/// <summary>
		/// 设置域的单位
		/// </summary>
		/// <param name="f"></param>
		/// <param name="unit"></param>
		public void SetFieldUnit(string f,string unit)
		{
			if(this[f]==null)
				return;
			this[f].Unit=unit;
		}
		/// <summary>
		/// 设置域的描述
		/// </summary>
		/// <param name="f"></param>
		/// <param name="description"></param>
		public void SetFieldDescription(string f,string description)
		{
			if(this[f]==null)
				return;
			this[f].Description=description;
		}
		/// <summary>
		/// 设置域的显示格式
		/// </summary>
		/// <param name="f"></param>
		/// <param name="format"></param>
		public void SetFieldFormat(string f,string format)
		{
			if(this[f]==null)
				return;
			this[f].Format=format;
		}
		/// <summary>
		/// 设置域的缩进
		/// </summary>
		/// <param name="f"></param>
		/// <param name="indent"></param>
		public void SetFieldIndent(string f,int indent)
		{
			if(this[f]==null)
				return;
			this[f].Indent=indent;
		}
		/// <summary>
		/// 设置域的显示样式。
		/// </summary>
		/// <param name="fieldname"></param>
		/// <param name="showType"></param>
		public void SetFieldShowType(string fieldname,ShowType showType)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].ShowType=showType;
		}
		public void SetFieldFile(string fieldname)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].ShowType=ShowType.FILEUPLOAD;
		}
		/// <summary>
		/// 设定一个HTML编辑域。
		/// </summary>
		/// <param name="fieldname"></param>
		/// <param name="useOuterEditor"></param>
		public void SetFieldHtmlEdit(string fieldname,bool useOuterEditor)
		{
			if(this[fieldname]==null)
				return;
			if(useOuterEditor)
				this[fieldname].ShowType=ShowType.HTMLOUTEREDIT;
			else
				this[fieldname].ShowType=ShowType.HTMLEDIT;
		}
		/// <summary>
		/// 设定隐藏域。
		/// </summary>
		/// <param name="fieldname"></param>
		public void SetFieldHidden(string fieldname)
		{
			if(this[fieldname]==null)
				return;	
			this[fieldname].ShowType=ShowType.HIDDEN;
		}
		/// <summary>
		/// 设定只读域。
		/// </summary>
		/// <param name="fieldname"></param>
		public void SetFieldReadOnly(string fieldname)
		{
			if(this[fieldname]==null)
				return;
			if(this[fieldname].ShowType==ShowType.NOVALUE 
				|| this[fieldname].ShowType==ShowType.RAWVALUE
				|| this[fieldname].ShowType==ShowType.FILE
				|| this[fieldname].ShowType==ShowType.HTML
				|| this[fieldname].ShowType==ShowType.FILEUPLOAD
				|| this[fieldname].ShowType==ShowType.HTMLEDIT
				|| this[fieldname].ShowType==ShowType.HTMLOUTEREDIT
				|| this[fieldname].ShowType==ShowType.HIDDEN)
				return;
			if(this[fieldname].ShowType==ShowType.TEXTAREA)
				this[fieldname].ShowType=ShowType.READONLYTEXTAREA;
			else
				this[fieldname].ShowType=ShowType.READONLYTEXTBOX;
		}
		public void SetFieldRawValueOnly(string fieldname)
		{
			if(this[fieldname]==null)
				return;
			if(this[fieldname].ShowType==ShowType.FILEUPLOAD)
				this[fieldname].ShowType=ShowType.FILE;
			else if(this[fieldname].ShowType==ShowType.HTMLEDIT || this[fieldname].ShowType==ShowType.HTMLOUTEREDIT)
				this[fieldname].ShowType=ShowType.HTML;
			else if(this[fieldname].ShowType!=ShowType.HIDDEN && this[fieldname].ShowType!=ShowType.NOVALUE)
				this[fieldname].ShowType=ShowType.RAWVALUE;
		}
		public void SetFieldNameOnly(string fieldname)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].ShowType=ShowType.NOVALUE;
		}
		public void SetFieldEncoding(string fieldname,Encoding encoding)
		{
			if(this[fieldname]==null)
				return;
			if(this[fieldname].Type==typeof(string) || this[fieldname].Type.IsArray)//只有字符型字段与二进制字段才需要指定编码
				this[fieldname].Encoding=encoding;
		}
		public void SetUpdateTableName(string tbname)
		{			
			updateTableName=tbname;
			//分辨键列与普通列
			KeyFields.Clear();
			NormalFields.Clear();

			if(tbname!=null)
			{
				DataTable dt=GetFieldsSchema("select * from "+tbname+" where 1=2");
				//调整表列信息,因为更新SQL语句与查询SQL语句的结果集字段名可能不同（有可能有别名）,所以只能一个一个的匹配				
				DataRow[] columns=dt.Select("","ColumnOrdinal");
				foreach(DataRow dr in columns)
				{
					string ttt = dr["ColumnName"].ToString();
					foreach(string s in SQLFields)
					{
						if(this[s].BaseField==ttt && this[s].BaseTable!=null)//来源于同名原始列且能识别出来源表的（这一定是关联字段）
						{
							this[s].BaseTable=dr["BaseTableName"].ToString();
							this[s].Nullable=(bool)dr["AllowDBNull"];//取列是否可空
							this[s].Alias=parser.FieldName(this[s].Name,this[s].BaseTable,this[s].BaseField);
							//添加键列
							if((bool)dr["IsKey"])
							{
								if(KeyFields.IndexOf(s)<0)
									KeyFields.Add(s);
							}
							break;
						}
					}
				}
			}
			//取普通列
			foreach(string s in SQLFields)
			{
				if(KeyFields.IndexOf(s)<0)
					NormalFields.Add(s);
			}
			//识别自增长主键标志
			hasAutoIncrementKey=false;
			foreach(string s in KeyFields)
			{
				if(this[s].BaseTable==tbname && AutoIncrementFields.IndexOf(s)>=0)
				{
					hasAutoIncrementKey=true;
					break;
				}
			}
			//调整列的只读信息
			foreach(string s in KeyFields)
			{
				if(tbname==null || this[s].BaseTable!=tbname)
				{
					this[s].FromUpdateTable=false;
					SetFieldReadOnly(s);
				}
				else
				{
					this[s].FromUpdateTable=true;

				}
			}
			foreach(string s in NormalFields)
			{
				if(tbname==null || this[s].BaseTable!=tbname)
				{
					this[s].FromUpdateTable=false;
					SetFieldReadOnly(s);
				}
				else
				{
					this[s].FromUpdateTable=true;
				}
			}
			//构造更新SQL分析器
			if(tbname!=null)
				updateParser=new SQLSelectParser("select * from "+tbname);
		}
		public string BuildSelectSQL(string where,string having,params string[] sorts)
		{
			return parser.BuildSQL(where,having,sorts);
		}
		public string BuildUpdateSQL(string where,string having,params string[] sorts)
		{
			return updateParser.BuildSQL(where,having,sorts);
		}
		public static string BuildSQL(string sql,string where,string having,params string[] sorts)
		{
			SQLSelectParser sqlParser=new SQLSelectParser(sql);
			return sqlParser.BuildSQL(where,having,sorts);
		}
		public SQLInfo(string sqlstr,DataAccessType datype,string connstr):base(datype,connstr)
		{
			sqlFields=new StringCollection();
			keyFields=new StringCollection();
			normalFields=new StringCollection();
			autoIncrementFields=new StringCollection();
						
			guid=((uint)sqlstr.GetHashCode()).ToString();
			originalSql=sqlstr;
			parser=new SQLSelectParser(sqlstr);

			string tempTableName=null;

			string newSql=parser.BuildSQL("1=2",null);//生成一个不返回记录的结果集,仅用于获取表头信息
			
			//确定SQL语句select子句中出现的列
			IDataAccess dataAccess=DataAccessFactory.Produce(datype,connstr);
			DataSet ds=dataAccess.ExecuteDataSet(newSql);
			if(dataAccess.Error!=null)
				throw dataAccess.Error;
			DataTable sqlTable=ds.Tables[0];
			foreach(DataColumn dc in sqlTable.Columns)
			{
				if(sqlFields.IndexOf(dc.ColumnName)<0)
					sqlFields.Add(dc.ColumnName);
			}
			DataTable dt=GetFieldsSchema(newSql);
			DataRow[] columns=dt.Select("","ColumnOrdinal");
			//取表列信息
			int order=0;
			foreach(DataRow dr in columns)
			{
				string colName=dr["ColumnName"].ToString();
				if(tableFields[colName]!=null || sqlFields.IndexOf(colName)<0)//重复列或不出现在SQL语句select子句中的列跳过
					continue;
				TableFieldBase tf=CreateField();
				tf.ID="DT"+GUID+"_"+order.ToString();//设定显示ID
				order++;
				tf.Name=colName;
				tf.ShowName=colName;

				tf.Type=dr["DataType"] as Type;//取列类型
				tf.Nullable=(bool)dr["AllowDBNull"];//取列是否可空
				tf.BaseTable=dr["BaseTableName"] as String;//列来自的表
				tf.BaseField=dr["BaseColumnName"] as String;//列的原始名
				try
				{
					if(DBType!=DataBaseType.ORACLE)
					{						
						bool autoIncrement=(bool)dr["IsAutoIncrement"];//自增长列视作只读列
						if(autoIncrement)
						{
							tf.ShowType=ShowType.HIDDEN;
							tf.ReadOnly=true;
							AutoIncrementFields.Add(colName);
						}
						else
							tf.ReadOnly=false;
					}
				}
				catch(Exception)
				{
					tf.ReadOnly=false;
				}
				try
				{
					if(!tf.ReadOnly)
						tf.ReadOnly=(bool)dr["IsReadOnly"];//列是否只读的
				}
				catch(Exception)
				{
					tf.ReadOnly=false;
				}
				if(tf.BaseTable!=null && tf.BaseField!=null)
				{
					tf.Alias=parser.FieldName(tf.Name,tf.BaseTable,tf.BaseField);
				}
				else
				{
					tf.Alias=parser.FieldName(tf.Name,null,null);
				}
				int len=0;
				object o=dr["ColumnSize"];//取列长度
				if(o is System.DBNull)
				{
					len=0;
				}
				else
				{
					len=(int)Convert.ChangeType(o,typeof(int));
				}
				tf.Length=len;//长度
				//简要确定显示类型
				if(tf.ShowType!=ShowType.TEXTBOX)
				{
					//前面已经设置了显示类型,则不再重新设置
				}
				else if(tf.Type.IsArray)
				{
					//我们约定image字段一定是存放文件的，并且头256个字节存储文件名。这一约定显然影响数据库的设计。
					tf.ShowType=ShowType.FILEUPLOAD;
				}
				else if(tf.Type==typeof(System.DateTime))
				{
					tf.ShowType=ShowType.DATETIME;	
				}
				else if(len>0x7fff)
				{
					//我想纯粹的字符串字段应该不会允许0x7fff个字符这么长，所以比这个还大的应该就是text字段，
					//我们约定text字段一定是存储HTML的。至少我们应该可以依此设计数据库。
					tf.ShowType=ShowType.HTMLEDIT;
				}
				else if(len>0xff)
				{
					tf.ShowType=ShowType.TEXTAREA;
				}
				else
				{
					tf.ShowType=ShowType.TEXTBOX;
				}
				//设置字符串与文件的默认编码方式
				if(tf.Type==typeof(string))
				{
					tf.Encoding=Encoding.GetEncoding("GB2312");
				}
				else if(tf.Type.IsArray)
				{
					tf.Encoding=Encoding.UTF8;
				}
				//设置布尔值的分类参照
				if(tf.Type==typeof(bool))
				{
					SetFieldClass(tf.Name,"布尔列",tf.ShowType);
				}
				//构造识别出的各个表的元数据信息
				if(tf.BaseTable!=null && tf.BaseField!=null && tempTableName==null)
				{
					tempTableName=tf.BaseTable;
				}
				tableFields.Add(tf.Name,tf);
			}
			//检查嵌入式HTML编辑器的个数,如果超过2个则改为外部HTML编辑器
			int htmlEditorCount=0;
			foreach(string s in sqlFields)
			{
				if(this[s].ShowType==ShowType.HTMLEDIT)
					htmlEditorCount++;
			}
			if(htmlEditorCount>2)
			{
				foreach(string s in sqlFields)
				{
					if(this[s].ShowType==ShowType.HTMLEDIT)
						this[s].ShowType=ShowType.HTMLOUTEREDIT;
				}
			}	
			SetUpdateTableName(tempTableName);//全部列读完后再赋值以保证相关计算正确		
		}
		~SQLInfo()
		{
			SQLFields.Clear();
			KeyFields.Clear();
			NormalFields.Clear();
			AutoIncrementFields.Clear();

			tableFields.Clear();
			classCol_ClassName.Clear();
			nameValueClasses.Clear();
			sqlSourceClasses.Clear();
		}
		protected virtual TableFieldBase CreateField()
		{
			return new TableFieldBase();
		}
		public bool HaveGroupBy()
		{
			return parser.HaveGroupBy();			
		}
		public override string ToString()
		{
			string t="<p>[关键字段列表:]</p>  ";
			foreach(object s in KeyFields)
				t+="<p>"+s+" ";
			t+="<p>[普通字段列表:]</p>  ";
			foreach(object s in NormalFields)
				t+="<p>"+s+" </p>";
			return t;
		}
		public NameValueCollection GetClassVals(string colname)
		{
			if(this[colname]==null)
				return null;
			string className=classCol_ClassName[colname] as string;
			if(className==null || className.Trim().Length<=0)
				return null;
			NameValueClass _class1=nameValueClasses[className] as NameValueClass;
			if(_class1!=null)
				return _class1.GetClasses();
			SQLSourceClass _class2=sqlSourceClasses[className] as SQLSourceClass;
			if(_class2!=null)
				return _class2.GetClasses();
			return standardClasses.GetClasses(className);
		}
		/// <summary>
		/// 指定使用权缺省的分类表结构与指标信息表结构,并且这些元数据信息来自当前要访问的数据库
		/// </summary>
		public void SetDefaultMetaInfo()
		{
			SetDefaultClassTable(DAType,ConnectionString);
			SetDefaultGuideInfo(DAType,ConnectionString);
		}
		/// <summary>
		/// 指定使用缺省的分类表结构,且分类表存在于参数指定的数据库中
		/// </summary>
		/// <param name="daType"></param>
		/// <param name="connStr"></param>
		public void SetDefaultClassTable(DataAccessType daType,string connStr)
		{
			string sqlstr="select 分类名称,编码,内容,序号 from 辅助_分类";
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,connStr);
			IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
			try
			{
				if(myReader==null && !alreadyCheckClassTable)
				{//创建元数据表
					alreadyCheckClassTable=true;
					object o=dataAccess.ExecuteScalar("select count(*) from 辅助_分类");
					if(o!=null && o!=DBNull.Value)
					{
						int recNo=(int)o;
						if(recNo<=0)
						{
							//若表存在且没有记录则先删除
							string dropDDL="DROP TABLE 辅助_分类";
							dataAccess.ExecuteNonQuery(dropDDL);
						}
						else
						{
							throw new Exception("辅助_分类表的结构与当前要求不符,但它已经存在并且有记录,请重命名后再执行本程序生成新的辅助_分类表!");
						}
					}
					//创建新表
					string sqlDDL=@"
					CREATE TABLE 辅助_分类 
					(
						分类名称 varchar (255) NOT NULL ,
						编码 varchar (255) NOT NULL ,
						内容 varchar (255) NULL ,
						序号 int NULL ,
						CONSTRAINT PK_辅助_分类 PRIMARY KEY (分类名称,编码)
					)
					";
					dataAccess.ExecuteNonQuery(sqlDDL);
					myReader=dataAccess.ExecuteDataReader(sqlstr);
					if(myReader==null)
					{
						//ERROR
					}
				}
				SetClass("布尔列","True","True","False","False");
				standardClasses=new StandardClasses("内容","编码","分类名称"," select * from 辅助_分类 order by 序号",daType,connStr);
			}
			finally
			{
				if(myReader!=null)
					myReader.Close();
			}
		}
				
		/// <summary>
		/// 指定使用缺省的指标信息表结构,且指标信息表存在于参数指定的数据库中
		/// </summary>
		/// <param name="daType"></param>
		/// <param name="connStr"></param>
		public void SetDefaultGuideInfo(DataAccessType daType,string connStr)
		{
			foreach(DictionaryEntry de in tableFields)
			{
				TableFieldBase tf=de.Value as TableFieldBase;
				//设定显示名
				GuideInfo gi=new GuideInfo(daType,connStr);
				Guide guide=gi.GetGuide(tf.BaseTable,tf.Name);				
				tf.ShowName=guide.Name;//显示名	
				tf.Unit=guide.Unit;
				tf.Description=guide.Description;
				if(guide.ShowAttr==ShowAttr.HIDDEN)
				{
					tf.ShowType=ShowType.HIDDEN;
				}
				else if(guide.ShowAttr==ShowAttr.COMBOBOX || guide.ShowAttr==ShowAttr.USECODECOMBOBOX)
				{
					tf.ShowType=ShowType.COMBOBOX;
					if(guide.ShowAttr==ShowAttr.USECODECOMBOBOX)
						tf.UseClassValue=false;
				}
				else if(guide.ShowAttr==ShowAttr.CHECKBOX || guide.ShowAttr==ShowAttr.USECODECHECKBOX)
				{
					tf.ShowType=ShowType.CHECKBOX;
					if(guide.ShowAttr==ShowAttr.USECODECHECKBOX)
						tf.UseClassValue=false;
				}
				else if(guide.ShowAttr==ShowAttr.FILE)
				{
					tf.ShowType=ShowType.FILEUPLOAD;
				}
				else if(guide.ShowAttr==ShowAttr.HTML)
				{
					tf.ShowType=ShowType.HTMLEDIT;
				}
				else if(guide.ShowAttr==ShowAttr.OUTEREDITHTML)
				{
					tf.ShowType=ShowType.HTMLOUTEREDIT;
				}
				else if(guide.ShowAttr==ShowAttr.NOVALUE)
				{
					tf.ShowType=ShowType.NOVALUE;
				}
				else if(guide.ShowAttr==ShowAttr.RAWVALUE)
				{
					tf.ShowType=ShowType.RAWVALUE;
				}
				tf.Indent=guide.Indent;
				if(guide.Format!=null && guide.Format.Trim().Length>0)
				{
					string str=guide.Format.Trim();
					if(tf.ShowType==ShowType.COMBOBOX || tf.ShowType==ShowType.CHECKBOX)
					{
						if(str.StartsWith("SQL@"))
						{
							str=str.Substring(4);
							int si=str.IndexOf(':');
							if(si>0)
							{
								string head=str.Substring(0,si);
								string sql=str.Substring(si+1);

								string[] args=head.Split('@');
								if(args.Length==3)
								{
									SetClass(args[0],args[1],args[2],sql);
									SetFieldClass(tf.Name,args[0],tf.ShowType);
								}
							}
						}
						else
							SetFieldClass(tf.Name,str,tf.ShowType);
					}
					else
						tf.Format=str;
				}
			}
		}

		
		#region 用户接口客户端脚本
		protected string GeneratePositionScript()
		{
			return @"
		<script>	
			//获取绝对的top值			function getAbsoluteTop(elem,win)
			{
				var topPosition = 0;
				while (elem)
				{
					if (elem.tagName == 'BODY')
					{
						break;
					}
					topPosition += elem.offsetTop;
					elem = elem.offsetParent;
				}
				if(win && win.frameElement)
				{		
					topPosition+=getAbsoluteTop(win.frameElement,win.parent);
				}
				return topPosition;
			}
			//获取绝对的left
			function getAbsoluteLeft(elem,win)
			{
				var leftPosition = 0;
				while (elem)
				{
					if (elem.tagName == 'BODY')
					{
						break;
					}
					leftPosition += elem.offsetLeft;
					elem = elem.offsetParent;
				}
				if(win && win.frameElement)
				{
					leftPosition+=getAbsoluteLeft(win.frameElement,win.parent);
				}
				return leftPosition;
			}
		</script>
				";
		}
		protected string GenerateSearchSelectScript()
		{
			return @"
		<script language='javascript'>
			<!--
			function filterClass(id)
			{
				var closeObj=document.getElementById(id+'_close');
				var classListObj=document.getElementById(id+'_div');
				var filterObj=document.getElementById(id+'_filter');
				var listObj=document.getElementById(id+'_list');
				for(var i=0;i<listObj.rows.length;i++)
				{
					var cellObj=listObj.rows[i].cells[0];
					if(!cellObj)continue;
					if(cellObj.innerText.indexOf(filterObj.value)>=0)
					{
						cellObj.style.display='';
					}
					else
					{
						cellObj.style.display='none';
					}
				}
			}
			function openClass(id)
			{
				var openObj=document.getElementById(id+'_open');
				openObj.style.display='none';
				var findObj=document.getElementById(id+'_find');
				findObj.style.display='';
				var closeObj=document.getElementById(id+'_close');
				closeObj.style.display='';
				var classListObj=document.getElementById(id+'_div');

				var filterObj=document.getElementById(id+'_filter');
				filterObj.value='';
				/*
				var al=getAbsoluteLeft(filterObj,null);
				var at=getAbsoluteTop(filterObj,null);
				classListObj.style.pixelLeft=al;
				classListObj.style.pixelTop=at+filterObj.offsetHeight;
				*/
				classListObj.style.display='';
			}
			function closeClass(id)
			{
				var openObj=document.getElementById(id+'_open');
				openObj.style.display='';
				var findObj=document.getElementById(id+'_find');
				findObj.style.display='none';
				var closeObj=document.getElementById(id+'_close');
				closeObj.style.display='none';
				var classListObj=document.getElementById(id+'_div');
				classListObj.style.display='none';

				var filterObj=document.getElementById(id+'_filter');
				var listObj=document.getElementById(id+'_list');
				if(listObj.selObj)
				{
					if(listObj.selObj.innerText=='---空---')
						filterObj.value='';
					else
						filterObj.value=listObj.selObj.innerText.replace(/^\s*/,'').replace(/%s*$/,'');
				}
			}
			function selectClass(id)
			{
				var srcObj=event.srcElement;
				if(srcObj.tagName!='TD')return;
				var filterObj=document.getElementById(id+'_filter');
				var listObj=document.getElementById(id+'_list');
				var valObj=document.getElementById(id);
				if(srcObj.innerText=='---空---')
					filterObj.value='';
				else
					filterObj.value=srcObj.innerText.replace(/^\s*/,'').replace(/%s*$/,'');
				valObj.value=srcObj.val;
				if(listObj.selObj)
					listObj.selObj.className='LanSelectItemCell';
				listObj.selObj=srcObj;		
				listObj.selObj.className='LanSelectItemCellSelect';						
			}
			-->
		</script>
				";
		}
		protected string GenerateSearchCheckBoxesScript()
		{
			return @"
		<script language='javascript'>
			<!--
			function filterMultiClass(id)
			{
				var classListObj=document.getElementById(id+'_div');
				classListObj.style.display='';
				var filterObj=document.getElementById(id+'_filter');
				var listObj=document.getElementById(id+'_list');
				//恢复表到初始布局
				for(var i=0;i<listObj.rows.length;i++)
				{
					var tempRow=listObj.rows[i];
					for(var j=1;j<tempRow.cells.length;j++)
					{
						var cellObj=tempRow.cells[j];
						if(!cellObj)continue;
						var oi=cellObj.orgRow;
						var oj=cellObj.orgCell;
						
						if(oi>=0 && oj>=1 && (oi!=i || oj!=j))
						{
							//alert(''+i+','+j+'<->'+oi+','+oj);
							cellObj.swapNode(listObj.rows[oi].cells[oj]);
						}
					}
				}
				//更改表的布局
				var curRow=0,curCell=1;
				for(var i=0;i<listObj.rows.length;i++)
				{
					var tempRow=listObj.rows[i];
					for(var j=1;j<tempRow.cells.length;j++)
					{
						var cellObj=tempRow.cells[j];
						if(!cellObj)continue;
						if(cellObj.val.indexOf(filterObj.value)>=0)
						{
							cellObj.style.display='';
							if(curRow!=i || curCell!=j)
							{
								cellObj.orgRow=i;
								cellObj.orgCell=j;
								var tCell=listObj.rows[curRow].cells[curCell];
								tCell.orgRow=curRow;
								tCell.orgCell=curCell;
								//alert(''+i+','+j+'<->'+curRow+','+curCell);
								tCell.swapNode(cellObj);
							}
							if(curCell<listObj.rows[curRow].cells.length-1)
								curCell++;
							else if(curRow<listObj.rows.length-1)
							{
								curRow++;
								curCell=1;
							}
							else
							{
							}
						}
						else
						{
							cellObj.style.display='none';
						}
					}
				}
			}
			function openMultiClass(id)
			{
				var openObj=document.getElementById(id+'_open');
				openObj.style.display='none';
				var findObj=document.getElementById(id+'_find');
				findObj.style.display='';
				var closeObj=document.getElementById(id+'_close');
				closeObj.style.display='';
				var classListObj=document.getElementById(id+'_div');

				var filterObj=document.getElementById(id+'_filter');
				filterObj.value='';
				/*
				var al=getAbsoluteLeft(filterObj,null);
				var at=getAbsoluteTop(filterObj,null);
				classListObj.style.pixelLeft=al;
				classListObj.style.pixelTop=at+filterObj.offsetHeight;
				*/
				classListObj.style.display='';
			}
			function closeMultiClass(id,ct)
			{
				var openObj=document.getElementById(id+'_open');
				openObj.style.display='';
				var findObj=document.getElementById(id+'_find');
				findObj.style.display='none';
				var closeObj=document.getElementById(id+'_close');
				closeObj.style.display='none';
				var classListObj=document.getElementById(id+'_div');
				classListObj.style.display='none';
				
				var filterObj=document.getElementById(id+'_filter');
				var prestr='',vals='';
				for(var i=0;i<ct;i++)
				{
					var checkObj=document.getElementById(id+'_'+i);
					if(checkObj.checked)
					{
						vals+=prestr+checkObj.parentElement.val;
						prestr=',';
					}
				}
				filterObj.value=vals;
			}
			function cancelSelect(id,ct)
			{
				for(var i=0;i<ct;i++)
				{
					var checkObj=document.getElementById(id+'_'+i);
					checkObj.checked=false;
				}
			}
			-->
		</script>
				";
		}

		protected string GenerateFileUploadScript()
		{
			string retVal=@"
		<script language='javascript'>
			<!--
				function addLinkToParent(obj,fileUrl,docName)
				{
					if(obj)
					{
						var pobj=obj.parentElement;
						if(pobj)
						{
							var link=document.createElement('a');
							link.href=fileUrl;
				"+
				"			if(docName.length>"+(MaxFieldWidth+1)+")\r\n"+
				"			{\r\n"+
				"				link.innerText=docName.substr(0,"+MaxFieldWidth+")+'...';\r\n"+
				"			}\r\n"+
				@"
							else
								link.innerText=docName;
							link.title=docName;
							link.target='_blank';
							obj.value='<a target=\'_blank\' href=\''+fileUrl+'\' title=\''+docName+'\'>'+link.innerText+'</a>';							
							var cobj=pobj.firstChild;
							if(cobj)
							{
								if(cobj.tagName=='A')
									cobj.replaceNode(link);
								else
									pobj.insertBefore(link,cobj);
							}
							else
								pobj.appendChild(link);
						}
					}
				}
				function selectDoc(strtag)
				{	x=window.event.screenX;
					y=window.event.screenY;
					w=screen.availWidth;
					h=screen.availHeight;
					if(x>w-270)x=w-270;
					if(y>h-140)y=h-140;
				"+
				"	window.open('"+FileUploadUrl+"',strtag,'left='+x+',top='+y+',height=100,width=270,status=no,toolbar=no,menubar=no,location=no');\r\n"+
				@"
				}
			-->
		</script>
			";
			return retVal;
		}

		protected string GenerateHtmlEditorScript()
		{
			string retVal=@"
		<script language='javascript'>
			<!--
				function addHtmlLinkToParent(obj)
				{
					if(obj)
					{
						var pobj=obj.parentElement;
						if(pobj)
						{
							var link=document.createElement('a');
							link.href='javascript:openHtml(\''+obj.id+'\')';
							link.innerText='查看内容';
							link.title='点此查看HTML字段的内容...';
							var cobj=pobj.firstChild;
							if(cobj)
							{
								if(cobj.tagName=='A')
									cobj.replaceNode(link);
								else
									pobj.insertBefore(link,cobj);
							}
							else
								pobj.appendChild(link);
						}
					}
				}
				function openHtml(id)
				{
					try
					{
						var obj=document.getElementById(id);
						if(!obj)return;
						var w=window.open('about:blank','HTMLVIEW','resizable=yes,scrollbars=yes');						
						w.document.write(obj.value);
					}
					catch(eee)
					{
						alert('您的浏览器好象禁止了弹出窗口，无法查看HTML内容！');
					}
				}
				function editHtml(strtag)
				{	
					x=window.event.screenX;
					y=window.event.screenY;
					w=screen.availWidth;
					h=screen.availHeight;
					if(x>w-570)x=w-570;
					if(y>h-440)y=h-440;
				"+
				"	window.open('"+HtmlEditUrl+"',strtag,'left='+x+',top='+y+',height=400,width=570,status=no,toolbar=no,menubar=no,location=no,resizable=yes,scrollbars=yes');\r\n"+
				@"
				}
			-->
		</script>
			";
			return retVal;
		}

		protected string GenerateStrCheckScript()
		{
			string retVal=@"
		<script language='javascript'>
			<!--
				function checkStr(str,l)
				{
					var ll=str.length;
					if(ll>l)alert(str+'---文本过长,长度不超过'+l+'!');
				}
			-->
		</script>
			";
			return retVal;
		}

		protected string GenerateNumCheckScript()
		{
			string retVal=@"
		<script language='javascript'>
			<!--
				function checkNum(num)
				{
					var pt=/([0-9]*).([0-9]*)/;
					var r=num.match(pt);
					var l=num.length;
					if(l>0)
					{
						if(r.index!=0||r.lastIndex!=l)alert(num+'---数值格式错误!');
					}
				}
			-->
		</script>
			";
			return retVal;
		}			
		
		protected string GeneratorDateCheckScript()
		{
			return @"
		<script language='javascript' >
			<!--
				function checkDate(val)
				{  if(val=='')return;
					exp=new RegExp('^\\s*(\\d{4})(?:[-])(\\d{1,2})(?:[-])(\\d{1,2})\\s*$');
					m=val.match(exp);
					if(m==null)
					{
						alert(val+'---日期格式错误,格式应为:yyyy-MM-dd.');
						return;
					}
					var year=parseInt('0'+RegExp.$1,10);
					var month=parseInt('0'+RegExp.$2,10);
					var day=parseInt('0'+RegExp.$3,10);
					if(year<1)
					{
						alert(val+'---年份错!');
						return;
					}
					switch(month)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12:
							if(day<1 || day>31)
							{
								alert(val+'---日期错!');
								return;
							}
							break;
						case 4:
						case 6:
						case 9:
						case 11:
							if(day<1 || day>30)
							{
								alert(val+'---日期错!');
								return;
							}
							break;
						case 2:
							{
								if(  (year % 100!=0 && year%4==0)
									||
									(year%100==0 &&year%400==0) )
								{
									if(day<1|| day>29)
									{
										alert(val+'---日期错!');
										return;
									}
								}
								else
								{
									if(day<1 || day>28)
									{
										alert(val+'---日期错!');
										return;
									}
								}
							}
							break;
						default:
							alert(val+'---月份错!');
					}
				}
			-->
		</script>
			";
		}
		#endregion
		protected SQLSelectParser parser=null;//SQL分析器
		protected SQLSelectParser updateParser=null;//SQL分析器
		protected HybridDictionary tableFields=new HybridDictionary(true);//表域信息,采用大小写不敏感的比较以便于查找		
		protected bool hasAutoIncrementKey=false;//当前表是否有自增长字段作主键

		private string originalSql=null;//原始SQL
		private string updateTableName=null;//更新操作的目标表名
		private LayoutStyle layoutStyle;//布局样式
		private string guid;//唯一ID
		private StringCollection sqlFields;//SQL语句结果集中的字段
		private StringCollection keyFields;//键列列表
		private StringCollection normalFields;//普通列列表
		private StringCollection autoIncrementFields;//自增长列列表

		private HybridDictionary classCol_ClassName=new HybridDictionary(true);//列参照的分类名,采用大小写不敏感的比较以便于查找
		private HybridDictionary nameValueClasses=new HybridDictionary(true);//名/值对集合构成的分类表,采用大小写不敏感的比较以便于查找
		private HybridDictionary sqlSourceClasses=new HybridDictionary(true);//SQL结果集构成的分类表,采用大小写不敏感的比较以便于查找
		private StandardClasses standardClasses=null;
		
		private bool alreadyCheckClassTable=false;
		//
		private string editIcon="../images/edit.gif";
		private string browseIcon="../images/browse.gif";
		private string filterIcon="../images/filter.gif";
		private string closeIcon="../images/close.gif";
		private string openIcon="../images/open.gif";

		private string fileUploadUrl="UpLoad.aspx";
		private string htmlEditUrl="HtmlEditor.aspx";
		private string htmlEditorConfigFile="DreamanHtmlEditor/s_coolblue/";
		private string cssUrl="../html/TreeTable.css";
		private string scriptUrl="../html/calendar.js";

		private int maxSelectItems=16;

		private int maxFieldWidth=8;
		private int textAreaRows=3;
		private int checkBoxesCols=2;
		private int queryCheckBoxesCols=2;
		private int maxCheckBoxesRows=2;
		private int maxSort=10;

		private bool useSorts=false;//是否在搜索时让用户指定多关键字排序
		private bool useGroups=false;//是否在搜索时让用户指定分类汇总(主要用于统计)
	}
	/// <summary>
	/// Summary description for DynamicTable.
	/// 提供为对应数据表生成界面的相关信息。
	/// 添加状态默认为真，当Select被调用并且发现记录时才会被设置成假，如果确认是要修改而不是添加，
	/// 或者调用Select或者直接设置AppendState来指定（InputControl的修改状态在出错时就是这样指定的）。
	/// </summary>
	public class DynamicTable : SQLInfo
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
		public new TableField this[string fieldName]
		{
			get
			{
				return tableFields[fieldName] as TableField;
			}
			set
			{
				tableFields[fieldName]=value;
			}
		}
		/// <summary>
		/// 指明当前表示的记录是否明确的处于添加状态，在获取输入值时明确的处在添加状态的记录将用录入值覆盖旧值
		/// </summary>
		public bool AppendState
		{
			get
			{
				return appendState;
			}
			set
			{
				appendState=value;
			}
		}
		#endregion		
		/// <summary>
		/// 设置一个COMBOBOX字段的查询界面构造法，指明是否构造为与CHECKBOX一样的查询界面(即允许多选，一般的搜索应该允许多选)。
		/// </summary>
		/// <param name="refcol"></param>
		/// <param name="asCheckBox"></param>
		public void SetFieldComboBoxUsage(string refcol,bool asCheckBox)
		{
			if(this[refcol]==null)
				return;
			this[refcol].ComboBoxAsCheckBox=asCheckBox;
		}
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
		/// <summary>
		/// 设置域的初始值。
		/// </summary>
		/// <param name="fieldname"></param>
		/// <param name="val"></param>
		public void SetFieldInitVal(string fieldname,string val)
		{
			if(this[fieldname]==null)
				return;
			this[fieldname].Value=val.Trim();
			this[fieldname].OldValue=val.Trim();
		}
		
		public DynamicTable(string sqlstr,DataAccessType datype,string connstr):base(sqlstr,datype,connstr)
		{}
		protected override TableFieldBase CreateField()
		{
			return new TableField();
		}

		public void SelectRecord()
		{
			string condition=GetSelectCondition();
			SelectRecord(condition);
		}		
		public void UpdateRecord(bool bOverWrite)
		{
			string ttt=CheckInputValue();
			if(ttt!=null&&ttt.Length>0)
			{
				throw new Exception(ttt);
			}
			UpdateHelper(bOverWrite);			
		}
		public void DeleteRecord()
		{
			string condition=GetUpdateCondition();
			string sqlstr=updateParser.BuildSQL(condition,null);
			string connstr=ConnectionString;
			if(connstr==null)throw new Exception("系统错误！");
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
			DataSet ds=dataAccess.BeginUpdate(sqlstr);
			DataTable dt=ds.Tables[0];
			if(dt.Rows.Count>1)//多条符合条件的记录不能删除
			{
				dataAccess.EndUpdate(ds);
			}
			else if(dt.Rows.Count==1)
			{
				DataRow dr=dt.Rows[0];
				foreach(string s in NormalFields)
				{
					if(this[s].Type.IsArray)continue;//文件存储在数据库中则不需要删除文件
					if(this[s].ShowType==ShowType.FILEUPLOAD || this[s].ShowType==ShowType.FILE)
					{
						string link=dr[this[s].BaseField] as string;
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
				dt.Rows[0].Delete();
				dataAccess.EndUpdate(ds);
			}
			if(dataAccess.Error!=null)
				throw new Exception("删除错误！"+dataAccess.Error.Message);
		}
		protected void SelectRecord(string condition)
		{
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
								this[key].Value=FileField.Content(content,UploadFileVirtualPath);
							}
							else
								this[key].Value=null;
						}
						else
						{
							this[key].Value=myReader[key];
						}
					}
					if(myReader.Read())//存在多个记录时各未设初值字段写空值
					{
						foreach(string key in SQLFields)
						{
							if(this[key].OldValue==null || this[key].OldValue.Trim().Length<=0)
								this[key].Value=null;
						}
						AppendState=true;//无法确定记录的情形也当作明确的添加状态对待
					}				
					else
					{
						//将查询到的值写入旧值以用于更新
						foreach(string key in SQLFields)
						{
							if(this[key].ValueIsNotNull())
								this[key].OldValue=this[key].GetStringValue();
							else
								this[key].OldValue=null;
						}
						AppendState=false;//不是明确的添加状态了
					}
				}
				else
				{
					AppendState=true;
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
		/// <summary>
		/// 检查录入数据的有效性,当前只检查不应为空的列,可以考虑加上对日期,数值,字符串长等数据的检查.
		/// </summary>
		/// <returns></returns>
		/// 
		protected string CheckInputValue()
		{
			string retVal="",prestr="";
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
				string val=this[key].GetStringValue();
				bool nullable=this[key].Nullable;
				if(!nullable && (val==null || val.Trim().Length<=0))
				{
					retVal+=prestr+this[key].ShowName+"---不能为空！";
					prestr="\n";
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
							retVal+=prestr+this[key].ShowName+"---文本超长，当前字节数："+byteLen+" > 最大允许字节数："+this[key].Length+"，通常一个汉字占2个字节！";
							prestr="\n";
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
							retVal+=prestr+this[key].ShowName+"---日期格式错误，应为yyyy-MM-dd！";						
							prestr="\n";
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
							retVal+=prestr+this[key].ShowName+"---数值格式错误！";
							prestr="\n";
						}
					}
					else
					{	
						int byteLen=this[key].Encoding.GetByteCount(val);
						if(byteLen>this[key].Length)
						{
							retVal+=prestr+this[key].ShowName+"---文本超长，当前字节数："+byteLen+" > 最大允许字节数："+this[key].Length+"，通常一个汉字占2个字节！";
							prestr="\n";
						}
					}
				}
			}			
			return retVal;
		}
		protected void UpdateHelper(bool bOverWrite)
		{			
			string condition=GetUpdateCondition();
			string sqlstr=updateParser.BuildSQL(condition,null);
			string connstr=ConnectionString;
			if(connstr==null)throw new Exception("系统错误！");
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,connstr);
			DataSet ds=dataAccess.BeginUpdate(sqlstr);
			DataTable dt=ds.Tables[0];
			if(!(hasAutoIncrementKey && AppendState) && dt.Rows.Count>1)//多条符合条件的记录不能更新
			{
				dataAccess.EndUpdate(ds);
				throw new Exception("有多条符合条件的记录,不能更新！");
			}
			else if(!(hasAutoIncrementKey && AppendState) && dt.Rows.Count==1)
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
						if(this[s].ValueIsNotNull())
						{
							if(this[s].GetStringValue().Length<=0)
								dr[this[s].BaseField]=DBNull.Value;
							else
								dr[this[s].BaseField]=this[s].Value;
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
							if(this[s].ValueIsNotNull())
							{
								string link=this[s].GetStringValue();
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
						if(this[s].ValueIsNotNull())
						{
							if(this[s].ShowType==ShowType.FILEUPLOAD || this[s].ShowType==ShowType.FILE)
							{
								string link=dr[this[s].BaseField] as string;
								//录入值与数据库中的值不等表明重新上传了文件，否则未更新文件
								if(string.Compare(link.Trim(),this[s].GetStringValue().Trim(),true)!=0)
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
							if(this[s].GetStringValue().Length<=0)
								dr[this[s].BaseField]=DBNull.Value;
							else
								dr[this[s].BaseField]=this[s].Value;
						}
					}
					dr.EndEdit();
					dataAccess.EndUpdate(ds);
					if(dataAccess.Error!=null)
						throw new Exception("更新错误！"+dataAccess.Error.Message);
				}
				else
					throw new Exception("记录已经存在！");
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
					if(this[s].ValueIsNotNull())
					{
						if(this[s].GetStringValue().Length<=0)
							dr[this[s].BaseField]=DBNull.Value;
						else
							dr[this[s].BaseField]=this[s].Value;
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
						if(this[s].ValueIsNotNull())
						{
							string link=this[s].GetStringValue();
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
					if(this[s].ValueIsNotNull())
					{
						if(this[s].GetStringValue().Length<=0)
							dr[this[s].BaseField]=DBNull.Value;
						else
							dr[this[s].BaseField]=this[s].Value;
					}
				}
				dt.Rows.Add(dr);
				dataAccess.EndUpdate(ds);
				if(dataAccess.Error!=null)
					throw new Exception("添加错误！"+dataAccess.Error.Message);
			}		
			//更新成功时旧值被更新为新录入的值
			foreach(string key in SQLFields)
			{
				if(!this[key].FromUpdateTable)
					continue;
				if(this[key].ValueIsNotNull())
					this[key].OldValue=this[key].GetStringValue();
				else
					this[key].OldValue=null;
			}
		}
		/// <summary>
		/// 构造用于更新与删除的查询条件，这里直接使用更新表的字段名构造条件
		/// </summary>
		/// <returns></returns>
		private string GetUpdateCondition()
		{
			string condition="";
			//构造选择记录的条件
			bool nullKey=false;
			string prestr="";
			foreach(string fname in KeyFields)
			{
				if(!this[fname].FromUpdateTable)
					continue;
				string val=this[fname].OldValue;
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
					string val=this[fname].OldValue;
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
		/// <returns></returns>
		private string GetSelectCondition()
		{
			string condition="";
			//构造选择记录的条件
			bool nullKey=false;
			string prestr="";
			foreach(string fname in KeyFields)
			{
				string val=this[fname].OldValue;
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
					string val=this[fname].OldValue;
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
		private bool appendState=true;
	}
	public enum WebDynamicTableUI : int
	{
		EDIT,
		QUERY,
		VIEW
	}
	/// <summary>
	/// Summary description for WebDynamicTable.
	/// </summary>
	public class WebDynamicTable:DynamicTable
	{
		/// <summary>
		/// 指示当前构造的UI类型：编辑、查询、详细信息
		/// </summary>
		public WebDynamicTableUI UI
		{
			get
			{
				return ui;
			}
			set
			{
				ui=value;
			}
		}	
		public int EditCols
		{
			get
			{
				return editCols;
			}
			set
			{
				editCols=value;
			}
		}
		public int QueryCols
		{
			get
			{
				return queryCols;
			}
			set
			{
				queryCols=value;
			}
		}
		public int ViewCols
		{
			get
			{
				return viewCols;
			}
			set
			{
				viewCols=value;
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
		public HtmlTable ShowTable
		{
			get
			{
				if(showTable==null)
				{
					showTable=new HtmlTable();
					showTable.Border=0;
					showTable.CellPadding=0;
					showTable.CellSpacing=0;
					if(UI==WebDynamicTableUI.VIEW)
						showTable.Attributes.Add("class","LanViewTable");
					else if(UI==WebDynamicTableUI.QUERY)
						showTable.Attributes.Add("class","LanQueryTable");
					else
						showTable.Attributes.Add("class","LanInputTable");
					if(UI!=WebDynamicTableUI.VIEW)
						showTable.Attributes.Add("onkeydown","javascript:keydownHandle(this)");
				}
				return showTable;
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
		private HtmlTable showTable=null;
		private WebDynamicTableUI ui=WebDynamicTableUI.EDIT;//当前实例要构造的UI类型
		private int editCols=1;//添加/修改记录时一行显示几个字段
		private int queryCols=2;//构造搜索条件一行显示几个字段
		private int viewCols=3;//显示记录时一行显示几个字段
		private bool showLength=false;//是否显示字符串字段允许长度

		public WebDynamicTable(string sqlstr,DataAccessType datype,string connstr):base(sqlstr,datype,connstr)
		{
			//
			// TODO: Add constructor logic here
			//
		}
		public string GenerateHtml()
		{
			BuildDisplay();
			StringWriter sw=new StringWriter();
			ShowTable.RenderControl(new HtmlTextWriter(sw));
			sw.Close();
			return sw.ToString();
		}
		public void ResetFieldDisplays()
		{
			if(UI==WebDynamicTableUI.QUERY)
			{
				foreach(string s in KeyFields)
				{
					IQueryFieldDisplay fd=QueryFieldDisplay.Create(this[s],this);
					FieldDisplays[s]=fd;
				}
				foreach(string s in NormalFields)
				{
					IQueryFieldDisplay fd=QueryFieldDisplay.Create(this[s],this);
					FieldDisplays[s]=fd;
				}
			}
			else
			{
				foreach(string s in KeyFields)
				{
					IEditFieldDisplay fd=EditFieldDisplay.Create(EditField.Create(this[s]),this);
					FieldDisplays[s]=fd;
				}
				foreach(string s in NormalFields)
				{
					IEditFieldDisplay fd=EditFieldDisplay.Create(EditField.Create(this[s]),this);
					FieldDisplays[s]=fd;
				}
			}
		}
		public bool GetInputValue()
		{	
			bool bRet=true;
			foreach(string s in KeyFields)
			{
				if(!this[s].FromUpdateTable)
					continue;
				IEditFieldDisplay fd=FieldDisplays[s] as IEditFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
				if(!this[s].ReadOnly && this[s].GetStringValue().Length<=0)
					bRet=false;
				if(this[s].OldValue==null || this[s].OldValue.Trim().Length<=0)
				{
					if(this[s].ValueIsNotNull())
					{
						AppendState=true;//关键字旧值为空表明是添加新记录
					}
				}
			}
			foreach(string s in NormalFields)
			{
				if(!this[s].FromUpdateTable)
					continue;
				IEditFieldDisplay fd=FieldDisplays[s] as IEditFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
			}
			if(AppendState)
			{
				int ft=FieldCount;
				if(ft>0)
				{
					string[] fields=new string[ft];
					KeyFields.CopyTo(fields,0);
					NormalFields.CopyTo(fields,KeyFields.Count);
					foreach(string s in fields)
					{
						this[s].OldValue=this[s].GetStringValue();
					}
				}
			}
			return bRet;
		}
		protected virtual StringCollection DecideLayout()
		{
			StringCollection strs=new StringCollection();
			foreach(string s in KeyFields)
			{
				if(UI==WebDynamicTableUI.EDIT && !this[s].FromUpdateTable)
					continue;
				strs.Add(s);
			}
			foreach(string s in NormalFields)
			{
				if(UI==WebDynamicTableUI.EDIT && !this[s].FromUpdateTable)
					continue;
				strs.Add(s);
			}
			return strs;
		}		
		private void BuildDisplay()
		{
			if(UI==WebDynamicTableUI.QUERY)
			{
				StringCollection fields=DecideLayout();
				HtmlTable table=ShowTable;
				table.Rows.Clear();

				int rowCount=0;
				int colCount=0;
				//通过对要显示的列计数确定需要使用几行来显示,并生成这些行,
				//在表中已经有了需要的行数后，想像这些行像桶一样，现在按字段顺序依次往每个桶中放入字段即可
				//实现按列序排列各字段（隐藏字段放在前一个显示字段所在的桶中）
				//(目前主要按列顺序放置)
				foreach(string s in fields)
				{
					IQueryFieldDisplay fd=QueryFieldDisplay.Create(this[s],this);
					FieldDisplays[s]=fd;
					fd.BuildDisplayControl();
					if(fd.Visible && !fd.Hidden)
					{
						if((colCount % QueryCols)==0)
						{
							HtmlTableRow tr0=new HtmlTableRow();
							table.Rows.Add(tr0);
							rowCount++;
						}
						colCount++;
					}
				}
				if(rowCount==2 && QueryCols-colCount%QueryCols>1)
				{
					table.Rows.Clear();
				}
				int ct=0;
				int rowi=0;
				HtmlTableRow tr=null;
				foreach(string s in fields)
				{
					IQueryFieldDisplay fd=FieldDisplays[s] as IQueryFieldDisplay;
					if(fd.Visible)
					{
						if(rowCount!=2 || QueryCols-colCount%QueryCols<=1)
						{
							tr=table.Rows[rowi];
							if(!fd.Hidden)
								rowi=(rowi+1)%rowCount;
						}
						else 
						{
							if(ct==0)//第一列且表中没有行时总是创建一行,不管是否是隐藏字段
							{
								if(table.Rows.Count<=0)
								{
									tr=new HtmlTableRow();
									table.Rows.Add(tr);
								}
								if(!fd.Hidden)
									ct++;
							}
							else if(!fd.Hidden)
							{
								if(ct%QueryCols==0)
								{
									tr=new HtmlTableRow();
									table.Rows.Add(tr);								
								}
								ct++;
							}
						}

						HtmlTableCell cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						string showTxt=null;
						if(QueryCols>1)
						{
							showTxt=this[s].ShowName;
						}
						else
						{
							showTxt=this[s].GetIndentString()+this[s].ShowName;
						}
						cell.Controls.Add(new LiteralControl(showTxt));
						cell.Attributes.Add("title",GetFieldAdditional(s));
						cell.Attributes.Add("class","LanQueryHeaderCell");
						if(fd.Hidden)
							cell.Style.Add("display","none");

						if(UseGroups || UseSorts)
						{
							cell=new HtmlTableCell();
							tr.Cells.Add(cell);
							cell.NoWrap=true;
							if(UseGroups)
							{
								cell.Controls.Add(fd.GroupControl);
							}
							cell.Controls.Add(fd.SortControl);
							if(UseGroups)
							{
								cell.Attributes.Add("title","在这里指定是否参与分类汇总、分类汇总的方法以及多关键字排序");
							}
							else
							{
								cell.Attributes.Add("title","在这里指定多关键字排序");
							}
							cell.Attributes.Add("class","LanQueryBodyCell");
							if(fd.Hidden)
								cell.Style.Add("display","none");
						}

						cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						cell.Controls.Add(fd.QueryControl);
						cell.Attributes.Add("class","LanQueryBodyCell");
						if(fd.Hidden)
							cell.Style.Add("display","none");
					}
				}
			}
			else if(UI==WebDynamicTableUI.VIEW)
			{
				string headerCellStyle="LanViewHeaderCell";
				string bodyCellStyle="LanViewBodyCell";
				StringCollection fields=DecideLayout();
				HtmlTable table=ShowTable;
				table.Rows.Clear();

				int rowCount=0;
				int colCount=0;
				//通过对要显示的列计数确定需要使用几行来显示,并生成这些行,
				//在表中已经有了需要的行数后，想像这些行像桶一样，现在按字段顺序依次往每个桶中放入字段即可
				//实现按列序排列各字段（隐藏字段放在前一个显示字段所在的桶中）
				//(目前主要按列顺序放置)
				foreach(string s in fields)
				{
					IEditFieldDisplay fd=EditFieldDisplay.Create(EditField.Create(this[s]),this);
					FieldDisplays[s]=fd;
					fd.BuildDisplayControl();
					if(fd.Visible && !fd.Hidden)
					{
						if((colCount % ViewCols)==0)
						{
							HtmlTableRow tr0=new HtmlTableRow();
							table.Rows.Add(tr0);
							rowCount++;
						}
						colCount++;
					}
				}
				if(rowCount==2 && ViewCols-colCount%ViewCols>1)
				{
					table.Rows.Clear();
				}
				int ct=0;
				int rowi=0;
				HtmlTableRow tr=null;
				foreach(string s in fields)
				{
					IEditFieldDisplay fd=FieldDisplays[s] as IEditFieldDisplay;
					if(fd.Visible && !fd.Hidden)//详细信息与查询与编辑不一样,隐藏字段不生成UI
					{
						if(rowCount!=2 || ViewCols-colCount%ViewCols<=1)
						{
							tr=table.Rows[rowi];
							rowi=(rowi+1)%rowCount;
						}
						else 
						{
							if(ct%ViewCols==0)
							{
								tr=new HtmlTableRow();
								table.Rows.Add(tr);
							}
							ct++;
						}

						HtmlTableCell cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						string showTxt=null;
						if(ViewCols>1)
							showTxt=this[s].ShowName;
						else
							showTxt=this[s].GetIndentString()+this[s].ShowName;
						cell.Controls.Add(new LiteralControl(showTxt));
						cell.Attributes.Add("class",headerCellStyle);

						cell=new HtmlTableCell();
						BuildFieldView(s,cell);
						cell.Attributes.Add("class",bodyCellStyle);
						tr.Cells.Add(cell);
					}
				}
			}
			else if(UI==WebDynamicTableUI.EDIT)
			{
				string headerCellStyle="LanInputHeaderCell";
				string bodyCellStyle="LanInputBodyCell";
				StringCollection fields=DecideLayout();
				HtmlTable table=ShowTable;
				table.Rows.Clear();

				int rowCount=0;
				int colCount=0;
				//通过对要显示的列计数确定需要使用几行来显示,并生成这些行,
				//在表中已经有了需要的行数后，想像这些行像桶一样，现在按字段顺序依次往每个桶中放入字段即可
				//实现按列序排列各字段（隐藏字段放在前一个显示字段所在的桶中）
				//(目前主要按列顺序放置)
				foreach(string s in fields)
				{
					IEditFieldDisplay fd=EditFieldDisplay.Create(EditField.Create(this[s]),this);
					FieldDisplays[s]=fd;
					fd.BuildDisplayControl();
					if(fd.Visible && !fd.Hidden)
					{
						if((colCount % EditCols)==0)
						{
							HtmlTableRow tr0=new HtmlTableRow();
							table.Rows.Add(tr0);
							rowCount++;
						}
						colCount++;
					}
				}
				if(rowCount==2 && EditCols-colCount%EditCols>1)
				{
					table.Rows.Clear();
				}
				int ct=0;
				int rowi=0;
				HtmlTableRow tr=null;
				foreach(string s in fields)
				{
					IEditFieldDisplay fd=FieldDisplays[s] as IEditFieldDisplay;
					if(fd.Visible)
					{
						if(rowCount!=2 || EditCols-colCount%EditCols<=1)
						{
							tr=table.Rows[rowi];
							if(!fd.Hidden)
								rowi=(rowi+1)%rowCount;
						}
						else 
						{
							if(ct==0)//第一列且表中没有行时总是创建一行,不管是否是隐藏字段
							{
								if(table.Rows.Count<=0)
								{
									tr=new HtmlTableRow();
									table.Rows.Add(tr);
								}
								if(!fd.Hidden)
									ct++;
							}
							else if(!fd.Hidden)
							{
								if(ct%EditCols==0)
								{
									tr=new HtmlTableRow();								
									table.Rows.Add(tr);
								}
								ct++;
							}
						}

						HtmlTableCell cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						string showTxt=null;
						if(EditCols>1)
						{
							showTxt=this[s].ShowName;
						}
						else
						{
							showTxt=this[s].GetIndentString()+this[s].ShowName;
						}
						cell.Controls.Add(new LiteralControl(showTxt));
						cell.Attributes.Add("class",headerCellStyle);
						if(fd.Hidden)
							cell.Style.Add("display","none");
						
						cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						cell.InnerHtml=GetFieldAdditional(s);
						cell.Attributes.Add("class",bodyCellStyle);
						if(fd.Hidden)
							cell.Style.Add("display","none");

						cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.NoWrap=true;
						cell.Controls.Add(fd.EditControl);
						cell.Attributes.Add("class",bodyCellStyle);
						if(fd.Hidden)
							cell.Style.Add("display","none");

						cell=new HtmlTableCell();
						tr.Cells.Add(cell);
						cell.InnerHtml=GetFieldDescription(s);
						cell.Attributes.Add("class",bodyCellStyle);
						if(fd.Hidden)
							cell.Style.Add("display","none");
					}
				}
			}
		}
		/// <summary>
		/// get query sql string
		/// </summary>
		public string[] GetQuerySql(out string where,out string having)
		{
			int order=0;
			SortedList sList=new SortedList();
			string whereRet="",whereAnd="";
			string havingRet="",havingAnd="";
			foreach(string s in KeyFields)
			{
				IQueryFieldDisplay fd=FieldDisplays[s] as IQueryFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
				if(this[s].WhereClause!=null && this[s].WhereClause.Length>0)
				{
					if(HaveGroupBy())
					{
						havingRet+=havingAnd+this[s].WhereClause;
						havingAnd=" and ";
					}
					else
					{
						whereRet+=whereAnd+this[s].WhereClause;
						whereAnd=" and ";
					}
				}
				//构造排序信息
				int sort=this[s].SortOrder;
				if(sort!=0)
				{
					string postfix="";
					if(sort<0)
					{
						sort=-sort;
						postfix=" DESC";
					}
					sList[sort*MaxSort+order]=this[s].Name+postfix;	
					order++;
				}
			}
			foreach(string s in NormalFields)
			{
				IQueryFieldDisplay fd=FieldDisplays[s] as IQueryFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
				if(this[s].WhereClause!=null && this[s].WhereClause.Length>0)
				{
					if(HaveGroupBy())
					{
						havingRet+=havingAnd+this[s].WhereClause;
						havingAnd=" and ";
					}
					else
					{
						whereRet+=whereAnd+this[s].WhereClause;
						whereAnd=" and ";
					}
				}
				//构造排序信息
				int sort=this[s].SortOrder;
				if(sort!=0)
				{
					string postfix="";
					if(sort<0)
					{
						sort=-sort;
						postfix=" DESC";
					}
					sList[sort*MaxSort+order]=this[s].Name+postfix;
					order++;
				}
			}
			where=whereRet;
			having=havingRet;
			string[] strs=new string[sList.Count];
			sList.Values.CopyTo(strs,0);
			return strs;
		}
		public string[] GetGroupInfo(StatisticControl statCtrl)
		{
			SortedList groupFields=new SortedList();
			int order=0;
			foreach(string s in KeyFields)
			{
				IQueryFieldDisplay fd=FieldDisplays[s] as IQueryFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
				//构造排序信息
				int sort=this[s].SortOrder;
				if(sort!=0)
				{
					if(sort<0)
					{
						sort=-sort;
					}
					//构造分组信息
					if(this[s].IsGroup)
					{
						groupFields[sort*MaxSort+order]=this[s].Name;
					}					
					order++;
				}
				if(!(this[s].IsGroup && sort!=0))
				{
					statCtrl.SetStatisticFieldType(this[s].Name,this[s].StatMethod);
				}
			}
			foreach(string s in NormalFields)
			{
				IQueryFieldDisplay fd=FieldDisplays[s] as IQueryFieldDisplay;
				if(fd==null)continue;
				fd.BuildFieldValue();
				//构造排序信息
				int sort=this[s].SortOrder;
				if(sort!=0)
				{
					if(sort<0)
					{
						sort=-sort;
					}
					//构造分组信息
					if(this[s].IsGroup)
					{
						groupFields[sort*MaxSort+order]=this[s].Name;
					}	
					order++;
				}
				if(!(this[s].IsGroup && sort!=0))
				{
					statCtrl.SetStatisticFieldType(this[s].Name,this[s].StatMethod);
				}
			}
			string[] groups=new string[groupFields.Count];
			groupFields.Values.CopyTo(groups,0);
			return groups;
		}
		/// <summary>
		/// 构造察看表的某条记录时的某字段的显示,主要包括字段值的转换与格式化.
		/// </summary>
		/// <param name="f">字段名</param>
		/// <param name="cell">用于显示字段值的HtmlTableCell</param>
		public void BuildFieldView(string f,HtmlTableCell cell)
		{
			TableField tf=this[f];
			if(tf==null)
				return;
			if(!tf.UseClassValue)
			{
				if(tf.ShowType==ShowType.COMBOBOX)
				{
					NameValueCollection vals=GetClassVals(tf.Name);
					string v=tf.GetStringValue();
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
						string val=tf.GetStringValue();
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
					cell.InnerHtml=tf.GetFormatValue();
				}
			}
			else
				cell.InnerHtml=tf.GetFormatValue();

			string desc=GetFieldDescription(f);
			if(desc.Length>0)
				cell.InnerHtml+=" "+desc;
			else if(tf.Type==typeof(string) && (tf.ShowType==ShowType.TEXTAREA || tf.ShowType==ShowType.READONLYTEXTAREA))
			{
				//cell.InnerHtml="<pre>"+cell.InnerHtml+"</pre>";
			}

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
		/// <summary>
		/// 得到一个域的类型相关的描述，对数值如果有单位则用单位描述
		/// </summary>
		/// <param name="f"></param>
		/// <returns></returns>
		public string GetFieldAdditional(string f)
		{
			if(this[f]==null)
				return "";
			if(UI==WebDynamicTableUI.VIEW || this[f].ShowType==ShowType.NOVALUE || this[f].ShowType==ShowType.RAWVALUE 
				|| this[f].ShowType==ShowType.FILE || this[f].ShowType==ShowType.HTML)
			{
				return "";
			}
			else
			{
				string type="";
				if(this[f].Unit!=null && this[f].Unit.Trim().Length>0)
				{
					type=this[f].Unit.Trim();
				}
				return type;
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
			if(UI==WebDynamicTableUI.VIEW || this[f].ShowType==ShowType.HIDDEN || this[f].ShowType==ShowType.READONLYTEXTBOX || this[f].ShowType==ShowType.READONLYTEXTAREA 
				|| this[f].ShowType==ShowType.NOVALUE || this[f].ShowType==ShowType.RAWVALUE 
				|| this[f].ShowType==ShowType.FILE || this[f].ShowType==ShowType.HTML)
			{
				if(this[f].Unit!=null && this[f].Unit.Trim().Length>0)
					return "<span style='color:blue'>"+this[f].Unit+"</span>";
				else
					return "";
			}
			else
			{
				string nullable="";
				if(!this[f].Nullable)
					nullable="<span style='color:red'>[必填]</span>";
				string desc=this[f].Description;
				if(desc==null)
					desc="";
				else
					desc=desc.Trim();
				if(UI==WebDynamicTableUI.QUERY)
				{
					return desc;
				}
				string length="";
				if(this[f].Type==typeof(string) && (this[f].ShowType==ShowType.TEXTBOX || this[f].ShowType==ShowType.TEXTAREA))
				{
					if(IsMaxLengthShow)
						length="<span style='color:blue'>[字节数<="+this[f].Length+"]</span>";
				}
				return nullable+length+desc;
			}
		}
		public new void UpdateRecord(bool bOverWrite)
		{
			if(GetInputValue())
			{
				CheckAndUpdate(bOverWrite);
			}
			else
				throw new Exception("请填写必填项！");
		}
		public new void SelectRecord()
		{		
			GetInputValue();
			base.SelectRecord();
		}
		public new void DeleteRecord()
		{	
			GetInputValue();
			base.DeleteRecord();
		}
		public void CheckAndUpdate(bool bOverWrite)
		{
			string ttt=CheckInputValue();
			if(ttt!=null&&ttt.Length>0)
			{
				throw new Exception(ttt);
			}
			base.UpdateHelper(bOverWrite);
		}
		public void RegisterCss(Page page)
		{
			page.RegisterClientScriptBlock("InfoServiceCss",GenerateCssScript());
		}
		public void RegisterScript(Page page)
		{
			page.RegisterClientScriptBlock("WebDynamicTableClientScript",GenerateAllInternalScript());
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
					if(keyCode==13 || keyCode==34 || keyCode==40)
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
					else if(keyCode==27 || keyCode==33 || keyCode==38)
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
				}
			-->
		</script>
			";
			return retVal;
		}
	}
}

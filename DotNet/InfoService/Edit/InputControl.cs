using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Drawing.Design;
using System.Data;
using System.Data.OleDb;
using System.Diagnostics;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using System.Text;
using System.IO;
using Dreaman.DataAccess;
using Dreaman.Library.HtmlEditor;

[ assembly:TagPrefix("Dreaman.InfoService", "InfoService") ]
namespace Dreaman.InfoService
{	
	[Flags]
	public enum DisplayButtons : int
	{
		NONE=0x0,
		VIEW=0x01,
		ADD=0x02,
		MODIFY=0x04,
		DELETE=0x08,
		SEARCH=0x10,
		EXPORT=0x20,
		QUERY=0x11,
		READWRITE=0x16,
		EDIT=0x1E,
		FULL=0x3F
	}
	public delegate void CreateChildDelegate(Control container);
	public class TemplateItem : ITemplate
	{
		public event CreateChildDelegate CreateChild;
		#region ITemplate 成员

		public void InstantiateIn(Control container)
		{
			if(CreateChild != null)
				CreateChild(container);
		}

		#endregion
	}
	public delegate WebDynamicTable CreateWebDynamicTable(string sql,DataAccessType datype,string connstr);
	public delegate void SharedWebDynamicTable(WebDynamicTable dynamicTable);
	public delegate void DataGridUseDynamicTable(DynamicTable dynamicTable);
	public delegate void ShowDataGrid(Table table,DataGrid dataGrid);
	public delegate bool ExportDataGrid(DataGrid dataGrid);
	public delegate void ShowAdd(WebDynamicTable dynamicTable);
	public delegate void ShowModify(WebDynamicTable dynamicTable);
	public delegate void ShowView(WebDynamicTable dynamicTable);
	public delegate void ShowSearch(WebDynamicTable dynamicTable);
	public delegate void BuildCondition(WebDynamicTable dynamicTable);
	public delegate void FileUpload(HttpPostedFile file,string docName,out string fileUrl);
	public delegate void ShowHtmlEdit(HtmlEditor editor);

	public delegate bool BeforeAdd(WebDynamicTable dynamicTable);
	public delegate void AfterAdd(WebDynamicTable dynamicTable);
	public delegate bool BeforeModify(WebDynamicTable dynamicTable);
	public delegate void AfterModify(WebDynamicTable dynamicTable);
	public delegate bool BeforeDelete(DynamicTable dynamicTable);
	public delegate void AfterDelete(DynamicTable dynamicTable);
	public delegate bool ShowInfo(string info,bool isError);


	/// <summary>
	/// InputControl 的摘要说明。
	/// 采用了状态模式来分离录入控件的显示\添加\搜索\修改\明细等状态下的UI构造
	/// </summary>
	
	[ToolboxData("<{0}:InputControl runat=server></{0}:InputControl>")]
	public class InputControl : WebControl,INamingContainer,IMultiFacadeControl
	{
		/// <summary>
		/// 给用户创建WebDynamicTable等描述SQL结果集的对象并使用元数据初始化一些
		/// 特性的机会,返回值表明为空表明使用用缺省的类创建对象并使用缺省的元数据来初始化。
		/// </summary>
		public event CreateWebDynamicTable CreateWebDynamicTable;
		/// <summary>
		/// 此事件给用户在动态表创建与初始设置后一次设置其属性的机会，这一事件主要用于
		/// 取代原GetWebDynamicTable公有方法（现已变为内部方法），用于为控件设置各个状态共
		/// 享的属性（show,add,modify,search,view）
		/// </summary>
		public event SharedWebDynamicTable SharedWebDynamicTable;
		/// <summary>
		/// 在DataGrid使用DynamicTable之前给用户一次设置DynamicTable的机会
		/// </summary>
		public event DataGridUseDynamicTable DataGridUseDynamicTable;
		/// <summary>
		/// 在DataGrid进行数据绑定之前提供最后一次修改属性的机会.
		/// 第一个参数为DataGrid的父元素表,第二个参数为DataGrid
		/// </summary>
		public event ShowDataGrid ShowDataGrid;
		/// <summary>
		/// 在导出DataGrid数据前提供对DataGrid进行调整的机会。参数为DataGrid。
		/// </summary>
		public event ExportDataGrid ExportDataGrid;
		/// <summary>
		/// 在显示添加记录界面前提供修改动态表属性的机会,
		/// 第一个参数为动态表的父元素表,第二个参数为动态表
		/// </summary>
		public event ShowAdd ShowAdd;
		/// <summary>
		/// 在显示修改记录界面前提供修改动态表属性的机会,
		/// 第一个参数为动态表的父元素表,第二个参数为动态表
		/// </summary>
		public event ShowModify ShowModify;
		/// <summary>
		/// 在显示记录界面前提供修改动态表属性的机会,
		/// 第一个参数为动态表的父元素表,第二个参数为动态表
		/// </summary>
		public event ShowView ShowView;
		/// <summary>
		/// 在显示搜索记录界面前提供修改动态表属性的机会,
		/// 第一个参数为动态表的父元素表,第二个参数为动态表
		/// </summary>
		public event ShowSearch ShowSearch;
		/// <summary>
		/// 在构造数据搜索条件前提供对用于构造条件的数据的处理。参数为动态表。
		/// </summary>
		public event BuildCondition BuildCondition;
		/// <summary>
		/// 在上传文件但服务端保存文件到磁盘前提供用户处理的机会.
		/// 第一个参数为HttpPostedFile,第二个参数为用户指定的文档名,第三个为输出参数,它
		/// 指明客户端访问此文档的URL,如果赋值服务端不再保存文件.
		/// </summary>
		public event FileUpload FileUpload;
		/// <summary>
		/// 在显示HTML编辑器前提供修改编辑器属性的机会,参数为HTMLEDITOR控件
		/// </summary>
		public event ShowHtmlEdit ShowHtmlEdit;
		/// <summary>
		/// 在执行数据库添加操作前提供对数据库或准备添加的数据的处理，返回值表示是否需要继续处理，
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event BeforeAdd BeforeAdd;
		/// <summary>
		/// 在执行数据库添加操作后提供对数据库的处理，参数为动态表。
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event AfterAdd AfterAdd;
		/// <summary>
		/// 在执行数据库修改操作前提供对数据库或准备修改的数据的处理，返回值表示是否需要继续处理，参数为动态表。
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event BeforeModify BeforeModify;
		/// <summary>
		/// 在执行数据库修改操作后提供对数据库的处理，参数为动态表。
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event AfterModify AfterModify;
		/// <summary>
		/// 在执行数据库删除操作前提供对数据库或准备删除的数据的处理，返回值表示是否需要继续处理，参数为动态表。
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event BeforeDelete BeforeDelete;
		/// <summary>
		/// 在执行数据库删除操作后提供对数据库的处理，参数为动态表。
		/// 如果需要显示错误，抛出一个包含错误消息的异常。
		/// </summary>
		public event AfterDelete AfterDelete;
		/// <summary>
		/// 在显示错误信息或者提示信息时给用户一个处理信息显示的机会，参数1为信息内容，参数2指示是否错误，
		/// 返回值表明是否采用默认显示方式。
		/// </summary>
		public event ShowInfo ShowInfo;
		/// <summary>
		/// 数据库访问类型:Sql,OleDb,Oracle,Odbc
		/// </summary>		
		public DataAccessType DataAccessType
		{
			get
			{
				return dataAccessType;
			}
			set
			{
				dataAccessType=value;
			}
		}
		/// <summary>
		/// 数据库连接串
		/// </summary>
		public string ConnectionString
		{
			get
			{
				return connStr;
			}
			set
			{
				connStr=value;
			}
		}
		/// <summary>
		/// 当前录入基于的数据源,通常为select * from tablename,单用于查询时可以为其它select语句
		/// </summary>
		public string SQL
		{
			get
			{
				return originalSql;
			}
			set
			{
				originalSql=value;
			}
		}
		/// <summary>
		/// 数据表读取的最大记录数,默认为100
		/// </summary>
		public int MaxRecordNumber
		{
			get
			{
				return maxRecordNumber;
			}
			set
			{
				maxRecordNumber=value;
			}
		}
		/// <summary>
		/// 数据表显示的字段数(功能按钮除外),默认为10
		/// </summary>
		public int ShowFieldNumber
		{
			get
			{
				return showFieldNumber;
			}
			set
			{
				showFieldNumber=value;
			}
		}
		/// <summary>
		/// 字段内容显示的最大宽度,超过则以...表示,改用提示显示全部内容.默认为8
		/// </summary>
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
		/// <summary>
		/// 数据表每页显示的记录数,默认为15
		/// </summary>
		public int PageSize
		{
			get
			{
				return pageSize;
			}
			set
			{
				pageSize=value;
			}
		}
		/// <summary>
		/// 显示哪些操作按钮,默认是全部显示
		/// </summary>
		public DisplayButtons DisplayButtons
		{
			get
			{
				return displayBtns;
			}
			set
			{
				displayBtns=value;
			}
		}
		/// <summary>
		/// 是否显示一个字符串字段的允许长度
		/// </summary>
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
		/// <summary>
		/// 上传文件保存的虚拟根路径.
		/// </summary>
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
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string AddIcon
		{
			get
			{
				return addIcon;
			}
			set
			{
				addIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string SearchIcon
		{
			get
			{
				return searchIcon;
			}
			set
			{
				searchIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string ViewIcon
		{
			get
			{
				return viewIcon;
			}
			set
			{
				viewIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string ModifyIcon
		{
			get
			{
				return modifyIcon;
			}
			set
			{
				modifyIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string DeleteIcon
		{
			get
			{
				return deleteIcon;
			}
			set
			{
				deleteIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string ReturnIcon
		{
			get
			{
				return returnIcon;
			}
			set
			{
				returnIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string ModifyOKIcon
		{
			get
			{
				return modifyOkIcon;
			}
			set
			{
				modifyOkIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string SubmitIcon
		{
			get
			{
				return submitIcon;
			}
			set
			{
				submitIcon=value;
			}
		}
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
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
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
		public string ExportIcon
		{
			get
			{
				return exportIcon;
			}
			set
			{
				exportIcon=value;
			}
		}
		public string ExportToolTip
		{
			get
			{
				return exportToolTip;
			}
			set
			{
				exportToolTip=value;
			}
		}
		/// <summary>
		/// 用于WEB动态表的样式表文件
		/// </summary>
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
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
		/// <summary>
		/// 用于WEB动态表的客户端脚本文件
		/// </summary>
		[Editor(typeof(System.Web.UI.Design.ImageUrlEditor), typeof(UITypeEditor))]
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
		/// <summary>
		/// 导出功能使用的ContentType响应头的值,缺省为application/vnd.ms-excel
		/// </summary>
		public string ExportContentType
		{
			get
			{
				return exportContentType;
			}
			set
			{
				exportContentType=value;
			}
		}
		/// <summary>
		/// 导出功能使用的Content-Disposition响应头的值,缺省为attachment;filename=datagrid.xls
		/// </summary>
		public string ExportContentDisposition
		{
			get
			{
				return exportContentDisposition;
			}
			set
			{
				exportContentDisposition=value;
			}
		}
		/// <summary>
		/// 导出功能使用的字符编码名称,缺省为GB2312
		/// </summary>
		public string ExportContentEncoding
		{
			get
			{
				return exportContentEncoding;
			}
			set
			{
				exportContentEncoding=value;
			}
		}
		/// <summary>
		/// 返回数据表所用的DataGrid,这提供了在将控件加入父控件之前调整DataGrid通用属性的机会,
		/// 此种情形下返回一个空的DataGrid,只设置了默认的通用属性,还没有任何列.其它情形返回当
		/// 时状态下的DataGrid对象.这个方法应该在PageSize属性设置后调用,它会使用该属性.
		/// </summary>
		/// <returns></returns>
		[Browsable(false)]
		public DataGrid GetDataGrid()
		{
			string state=HttpContext.Current.Request["InputControlState"];
			if(state=="upload" || state=="htmleditor")//这些状态不使用动态表
			{
				dataGrid=null;
			}
			else if(dataGrid==null)
			{
				dataGrid=new DataGrid();
				dataGrid.ID="DataGrid";
				dataGrid.Width=Unit.Percentage(100.0);
				dataGrid.AutoGenerateColumns=false;

				dataGrid.PagerStyle.Mode=PagerMode.NumericPages;
				dataGrid.PageSize=PageSize;

				dataGrid.HeaderStyle.CssClass="LanGridHeader";
				dataGrid.PagerStyle.CssClass="LanGridPager";
				dataGrid.ItemStyle.CssClass="LanGridItem";
				dataGrid.AlternatingItemStyle.CssClass="LanGridAlternate";
				dataGrid.CssClass="LanGrid";

				dataGrid.BorderWidth=Unit.Pixel(0);
			}
			return dataGrid;
		}
		/// <summary>
		/// 构造请求特定状态界面的URL
		/// </summary>
		/// <param name="state"></param>
		/// <returns></returns>
		[Browsable(false)]
		public string BuildRequestUrl(string state)
		{
			return ControlStateUrl.BuildStateRequestUrl("InputControlState",state);
//			UriBuilder ub=new UriBuilder(Page.Request.Url);
//			if(ub.Query==null || ub.Query.Trim().Length<=0)
//			{
//				ub.Query="InputControlState="+state;
//			}
//			else
//			{
//				string val=Page.Request["InputControlState"];
//				if(val==null)
//					ub.Query=ub.Query.Substring(1)+"&InputControlState="+state;
//				else
//					ub.Query.Replace("InputControlState="+val,"InputControlState="+state);
//			}
//			return ub.Uri.ToString();
		}
		public InputControl()
		{
			//
			// TODO: 在此处添加构造函数逻辑
			//
		}
		/// <summary>
		/// 返回数据表,浏览,增加,删除,修改,搜索所用的动态表,这一方法必须在其它属性设置后使用,
		/// 因为它要用到SQL,GuideInfo等.考虑到各状态切换时需要清空webDynaTable,这个方法不再为
		/// 公有方法(它已经不能正确的返回当前状态用来设置属性的动态表,因为稍后可能被清空了重
		/// 新实例化),仅供控件内部使用,实际使用需要设置动态表属性的请使用事件处理.
		/// </summary>
		/// <returns></returns>
		[Browsable(false)]
		internal WebDynamicTable GetWebDynamicTable()
		{
			string state=HttpContext.Current.Request["InputControlState"];
			if(state=="upload" || state=="htmleditor")//这些状态不使用动态表
			{
				webDynaTable=null;
			}
			else if(webDynaTable==null)
			{
				webDynaTable=OnCreateWebDynamicTable(SQL,DataAccessType,ConnectionString);
				if(webDynaTable==null)
				{
					webDynaTable=new WebDynamicTable(SQL,DataAccessType,ConnectionString);
					webDynaTable.SetDefaultMetaInfo();
				}
				OnSharedWebDynamicTable(webDynaTable);
			}
			return webDynaTable;
		}
		internal WebDynamicTable OnCreateWebDynamicTable(string sql,DataAccessType datype,string connstr)
		{
			if(CreateWebDynamicTable!=null)
				return CreateWebDynamicTable(sql,datype,connstr);
			return null;
		}
		internal void OnSharedWebDynamicTable(WebDynamicTable dynamicTable)
		{
			if(SharedWebDynamicTable!=null)
				SharedWebDynamicTable(dynamicTable);
		}
		internal void OnDataGridUseDynamicTable(DynamicTable dynamicTable)
		{
			if(DataGridUseDynamicTable!=null)
				DataGridUseDynamicTable(dynamicTable);
		}
		internal void OnShowDataGrid(Table table,DataGrid dataGrid)
		{
			if(ShowDataGrid!=null)
				ShowDataGrid(table,dataGrid);
		}
		internal bool OnExportDataGrid(DataGrid dataGrid)
		{
			if(ExportDataGrid!=null)
				return ExportDataGrid(dataGrid);
			return true;
		}
		internal void OnShowAdd(WebDynamicTable dynamicTable)
		{
			if(ShowAdd!=null)
				ShowAdd(dynamicTable);
		}
		internal void OnShowModify(WebDynamicTable dynamicTable)
		{
			if(ShowModify!=null)
				ShowModify(dynamicTable);
		}
		internal void OnShowView(WebDynamicTable dynamicTable)
		{
			if(ShowView!=null)
				ShowView(dynamicTable);
		}
		internal void OnShowSearch(WebDynamicTable dynamicTable)
		{
			if(ShowSearch!=null)
				ShowSearch(dynamicTable);
		}
		internal void OnBuildCondition(WebDynamicTable dynamicTable)
		{
			if(BuildCondition!=null)
				BuildCondition(dynamicTable);
		}
		internal void OnFileUpload(HttpPostedFile file,string docName,out string fileUrl)
		{
			if(FileUpload!=null)
				FileUpload(file,docName,out fileUrl);
			else
				fileUrl=null;
		}
		internal void OnShowHtmlEdit(HtmlEditor editor)
		{
			if(ShowHtmlEdit!=null)
				ShowHtmlEdit(editor);
		}
		internal bool OnBeforeAdd(WebDynamicTable dynamicTable)
		{
			if(BeforeAdd!=null)
				return BeforeAdd(dynamicTable);
			return true;
		}
		internal void OnAfterAdd(WebDynamicTable dynamicTable)
		{
			if(AfterAdd!=null)
				AfterAdd(dynamicTable);
		}
		internal bool OnBeforeModify(WebDynamicTable dynamicTable)
		{
			if(BeforeModify!=null)
				return BeforeModify(dynamicTable);
			return true;
		}
		internal void OnAfterModify(WebDynamicTable dynamicTable)
		{
			if(AfterModify!=null)
				AfterModify(dynamicTable);
		}
		internal bool OnBeforeDelete(DynamicTable dynamicTable)
		{
			if(BeforeDelete!=null)
				return BeforeDelete(dynamicTable);
			return true;
		}
		internal void OnAfterDelete(DynamicTable dynamicTable)
		{
			if(AfterDelete!=null)
				AfterDelete(dynamicTable);
		}
		internal bool OnShowInfo(string info,bool isError)
		{
			if(ShowInfo!=null)
				return ShowInfo(info,isError);
			return true;
		}
		internal string UniqueControlID
		{
			get
			{
				string connCode="";
				if(ConnectionString!=null)
					connCode=((uint)this.ConnectionString.GetHashCode()).ToString();
				string sqlCode="";
				if(SQL!=null)
					sqlCode=((uint)this.SQL.GetHashCode()).ToString();
				return HttpContext.Current.Session.SessionID+((uint)HttpContext.Current.Request.RawUrl.GetHashCode()).ToString()+connCode+sqlCode;
			}
		}
		/// <summary>
		/// 附加的查询条件，与SQL中的查询条件不同，这里的条件可以经由搜索功能改变。
		/// </summary>
		public string WhereCondition
		{
			get
			{
				return HttpContext.Current.Cache["WhereCondition"+UniqueControlID] as string;
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("WhereCondition"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["WhereCondition"+UniqueControlID]=value;
			}
		}
		/// <summary>
		/// 附加的查询条件，与SQL中的查询条件不同，这里的条件可以经由搜索功能改变。
		/// </summary>
		public string HavingCondition
		{
			get
			{
				return HttpContext.Current.Cache["HavingCondition"+UniqueControlID] as string;
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("HavingCondition"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["HavingCondition"+UniqueControlID]=value;
			}
		}
		/// <summary>
		/// 排序字段列表，如果是降序，则字段名写成"字段名 DESC"。
		/// </summary>
		public string[] Sorts
		{
			get
			{
				return HttpContext.Current.Cache["Sorts"+UniqueControlID] as string[];
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("Sorts"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["Sorts"+UniqueControlID]=value;
				SortExpression=string.Join(",",value);
			}
		}
		internal string SortExpression
		{
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("SortExpression"+UniqueControlID);
					return;
				}
				string sort=HttpContext.Current.Cache["SortExpression"+UniqueControlID] as string;
				if(sort==value && value.Trim().Length>0 && sort.IndexOf(",")<0 && sort.ToLower().IndexOf("desc")<0)//如果是单一字段且不包含desc则加上desc
					HttpContext.Current.Cache["SortExpression"+UniqueControlID]=value+" desc";
				else
					HttpContext.Current.Cache["SortExpression"+UniqueControlID]=value;
			}
			get
			{
				return HttpContext.Current.Cache["SortExpression"+UniqueControlID] as string;
			}
		}
		internal DataTable Data
		{
			get
			{
				if(ConnectionString==null || SQL==null)
					return null;
				SQLSelectParser parser=new SQLSelectParser(SQL);
				string sqlstr=parser.BuildSQL(WhereCondition,HavingCondition);
				
				if(Sorts==null || Sorts.Length==0)
				{
					string[] groups=parser.GetGroupByList();
					string[] sorts=parser.GetOrderByList();
					if(sorts!=null && sorts.Length>0)
					{
						Sorts=sorts;
					}
					else if(groups!=null && groups.Length>0)
					{	
						Sorts=new string[groups.Length];
						groups.CopyTo(Sorts,0);
					}
				}

				QueryResult result=new QueryResult(sqlstr,GetWebDynamicTable(),UploadFileVirtualPath,MaxRecordNumber);
				return result.GetData();

				//				IDataAccess dataAccess=DataAccessFactory.Produce(DataAccessType,ConnectionString);
				//				SQLSelectParser parser=new SQLSelectParser(SQL);
				//				string sqlstr=parser.BuildSQL(SearchCondition);
				//				DataTable dt=dataAccess.GetSchemaStruct(sqlstr);
				//				IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
				//				for(int i=0;i<MaxRecordNumber && myReader.Read();i++)
				//				{
				//					DataRow dr=dt.NewRow();
				//					foreach(DataColumn dc in dt.Columns)
				//					{
				//						dr[dc.ColumnName]=myReader[dc.ColumnName];
				//					}
				//					dr.EndEdit();
				//					dt.Rows.Add(dr);
				//				}
				//				myReader.Close();
				//				return dt;
			}
		}
		/// <summary>
		/// 将控件加入到父控件中,只要不使用界面设计器,应总是调用此方法来将控件加入到页面中,
		/// 此方法将触发控件状态的实际处理以生成控件当前界面。
		/// 返回值表明是否继续构造界面，为真时应该终止后续的任何界面相关的操作（此时响应流已关闭）。
		/// </summary>
		/// <param name="parent"></param>
		public bool AddToParent(Control parent)
		{
			return AdjustControlEnvironment(parent,true);
		}
		/// <summary>
		/// 调整控件显示的上下文环境,使用界面设计器时,应调用此方法,因为控件的某些状态可能需要完整的
		/// 页面来显示，控件需要对页面作相应处理，不使用界面设计器时用上一方法即可。
		/// 此外,控件的客户端资源URL也需要借此处理。返回值表明是否继续构造界面，为真时应该终止后
		/// 续的任何界面相关的操作（此时响应流已关闭）。
		/// </summary>
		public bool AdjustControlEnvironment()
		{
			return AdjustControlEnvironment(this.Parent,false);
		}
		private bool AdjustControlEnvironment(Control parent,bool forAdd)
		{
			if(ControlStateUrl.HandleResourceRequest())
				return true;
			if(parent.Page==null)//当多个控件放在同一页面上时,这一情形表明前面的控件已经处理了特定状态的显示,这里不用再处理
				//当多个控件放在同一页面上时,特定状态必须由第一个控件来处理
			{
				return false;
			}
			string state=HttpContext.Current.Request["InputControlState"];
			if(state=="upload" || state=="htmleditor")
			{
				foreach(Control ctrl in parent.Page.Controls)
				{
					if(ctrl is HtmlForm)
					{
						while(ctrl.Controls.Count>0)
						{
							ctrl.Controls.RemoveAt(0);
						}
						this.Width=Unit.Percentage(100.0);
						ctrl.Controls.Add(this);
						break;
					}
				}
			}
			else if(forAdd)
			{
				this.Width=Unit.Percentage(100.0);
				parent.Controls.Add(this);
			}
			return false;
		}
		/// <summary>
		/// 改变控件到指定状态
		/// </summary>
		/// <param name="state">状态名：show,add,modify,view,search,upload,htmleditor</param>
		/// <param name="args">参数集合（名字/值对）</param>
		public void ChangeState(string state,NameValueCollection args)
		{
			string argstr="",prestr="";
			foreach(string s in args.AllKeys)
			{
				argstr+=prestr+HttpContext.Current.Server.UrlEncode(s)+"="+HttpContext.Current.Server.UrlEncode(args[s]);
				prestr="&";
			}			
			ChangeState(state,argstr);
		}
		/// <summary>
		/// 改变控件到指定状态
		/// </summary>
		/// <param name="state">状态名：show,add,modify,view,search,upload,htmleditor</param>
		/// <param name="args">参数数组，交替为：名，值，名，值，...</param>
		public void ChangeState(string state,params string[] args)
		{
			string argstr="",prestr="";
			if(args.Length==1)
			{
				argstr=args[0];
			}
			else
			{
				for(int i=0;i<args.Length-1;i+=2)
				{
					argstr+=prestr+HttpContext.Current.Server.UrlEncode(args[i])+"="+HttpContext.Current.Server.UrlEncode(args[i+1]);
					prestr="&";
				}
			}
			StateArgs=argstr;
			if(State!=state)//状态改变清空操作的SQL结果信息
			{
				webDynaTable=null;
			}
			State=state;
			if(State=="show")
			{
				controlState=new ShowControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="add")
			{
				controlState=new AddControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="search")
			{
				controlState=new SearchControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="modify")
			{
				controlState=new ModifyControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="view")
			{
				controlState=new ViewControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="upload")
			{
				controlState=new FileUploadState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="htmleditor")
			{
				controlState=new HtmlEditorState();
				controlState.Handle(this,StateArgs);
			}
		}
		protected override void CreateChildControls()
		{
			base.CreateChildControls();
			string state=Page.Request["InputControlState"];
			if(state!=null)
				State=state;
			ChangeState(State,StateArgs);
		}
		private string State
		{
			get
			{
				if(HttpContext.Current.Cache["State"+UniqueControlID]==null)
					return "show";
				return HttpContext.Current.Cache["State"+UniqueControlID] as string;
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("State"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["State"+UniqueControlID]=value;
			}
		}
		private string StateArgs
		{
			get
			{
				return HttpContext.Current.Cache["StateArgs"+UniqueControlID] as string;
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("StateArgs"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["StateArgs"+UniqueControlID]=value;
			}
		}
		private ControlState controlState=null;
		private WebDynamicTable webDynaTable=null;
		private DataGrid dataGrid=null;

		private DataAccessType dataAccessType=DataAccessType.OleDb;
		private string connStr=null;
		private string originalSql=null;
		private int maxRecordNumber=100;
		private int showFieldNumber=10;
		private int maxFieldWidth=16;
		private int pageSize=15;
		private DisplayButtons displayBtns=Dreaman.InfoService.DisplayButtons.EDIT;
		private string uploadFileVPath="../uploadFiles";
		private string htmlEditorConfigFile="DreamanHtmlEditor/s_coolblue/";
		private bool showLength=false;//添加/编辑界面是否显示字符串字段允许长度

		private string exportContentType="application/vnd.ms-excel";
		private string exportContentDisposition="attachment;filename=datagrid.xls";
		private string exportContentEncoding="GB2312";//"GB18030";
		private string exportToolTip="将当前数据导出到EXCEL中...";

		private string addIcon="../images/add.gif";
		private string searchIcon="../images/search.gif";
		private string modifyIcon="../images/modify.gif";
		private string viewIcon="../images/viewdetail.gif";
		private string deleteIcon="../images/delete.gif";
		private string returnIcon="../images/return.gif";
		private string modifyOkIcon="../images/modifyOK.gif";
		private string submitIcon="../images/submit.gif";
		private string browseIcon="../images/browse.gif";
		private string exportIcon="../images/export.gif";
		private string cssUrl="../html/TreeTable.css";
		private string scriptUrl="../html/calendar.js";

//		private string addIcon="res://InfoService.images.add.gif";
//		private string searchIcon="res://InfoService.images.search.gif";
//		private string modifyIcon="res://InfoService.images.modify.gif";
//		private string viewIcon="res://InfoService.images.viewdetail.gif";
//		private string deleteIcon="res://InfoService.images.delete.gif";
//		private string returnIcon="res://InfoService.images.return.gif";
//		private string modifyOkIcon="res://InfoService.images.modifyok.gif";
//		private string submitIcon="res://InfoService.images.submit.gif";
//		private string browseIcon="res://InfoService.images.browse.gif";
//		private string exportIcon="res://InfoService.images.export.gif";
//		private string cssUrl="res://InfoService.html.TreeTable.css";
//		private string cssUrl="res://InfoService.html.calendar.js";
	}
	/// <summary>
	/// 描述复合控件某个独立的状态
	/// </summary>
	internal abstract class ControlState : IControlState
	{
		public void Handle(IMultiFacadeControl inputctrl,string stateargs)
		{
			inputControl=(InputControl)inputctrl;
			if(stateargs!=null)
			{
				string[] args=stateargs.Split('&');
				foreach(string pair in args)
				{
					string[] nameVal=pair.Split('=');
					if(nameVal.Length==2)
						stateArgs[HttpContext.Current.Server.UrlDecode(nameVal[0])]=HttpContext.Current.Server.UrlDecode(nameVal[1]);
				}
			}
			inputControl.Controls.Clear();
			Handle();
		}
		protected abstract void Handle();
		protected InputControl InputControl
		{
			get
			{
				return inputControl;
			}
		}
		protected NameValueCollection StateArgs
		{
			get
			{
				return stateArgs;
			}
		}
		private InputControl inputControl=null;
		private NameValueCollection stateArgs=new NameValueCollection();
	}
	/// <summary>
	/// 显示数据状态,也是缺省状态
	/// </summary>
	internal class ShowControlState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			t.Width=Unit.Percentage(100.0);
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);
			
			if((InputControl.DisplayButtons & DisplayButtons.EXPORT) == DisplayButtons.EXPORT)
			{
				ImageButton exportBtn=new ImageButton();
				exportBtn.ID="ExportBtn";
				exportBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ExportIcon);
				exportBtn.ToolTip=InputControl.ExportToolTip;
				exportBtn.CommandName="Export";
				exportBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

				tc.Controls.Add(exportBtn);
			}
			if((InputControl.DisplayButtons & DisplayButtons.ADD) == DisplayButtons.ADD)
			{
				ImageButton addBtn=new ImageButton();
				addBtn.ID="AddBtn";
				addBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.AddIcon);
				addBtn.ToolTip="添加数据";
				addBtn.CommandName="Add";
				addBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

				tc.Controls.Add(addBtn);
			}
			if((InputControl.DisplayButtons & DisplayButtons.SEARCH) == DisplayButtons.SEARCH)
			{
				ImageButton searchBtn=new ImageButton();
				searchBtn.ID="SearchBtn";
				searchBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.SearchIcon);
				searchBtn.ToolTip="搜索数据";
				searchBtn.CommandName="Search";
				searchBtn.Click+=new ImageClickEventHandler(this.ButtonClick);
				tc.Controls.Add(searchBtn);
			}
			tc.HorizontalAlign=HorizontalAlign.Right;

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dataGrid=InputControl.GetDataGrid();
			CreateBoundColumn();

			if((InputControl.DisplayButtons & DisplayButtons.VIEW) == DisplayButtons.VIEW)
			{
				TemplateItem ti=new TemplateItem();
				ti.CreateChild+=new CreateChildDelegate(this.CreateViewButton);
				TemplateColumn tcol=new TemplateColumn();
				tcol.HeaderStyle.Width=Unit.Pixel(50);
				tcol.ItemTemplate=ti;
				
				tcol.HeaderStyle.CssClass="LanGridHeaderBtnCell";
				tcol.ItemStyle.CssClass="LanGridBodyBtnCell";
				tcol.FooterStyle.CssClass="LanGridFooterBtnCell";

				dataGrid.Columns.Add(tcol);
			}			
			if((InputControl.DisplayButtons & DisplayButtons.MODIFY) == DisplayButtons.MODIFY)
			{
				TemplateItem ti=new TemplateItem();
				ti.CreateChild+=new CreateChildDelegate(this.CreateModifyButton);
				TemplateColumn tcol=new TemplateColumn();
				tcol.HeaderStyle.Width=Unit.Pixel(50);
				tcol.ItemTemplate=ti;
				
				tcol.HeaderStyle.CssClass="LanGridHeaderBtnCell";
				tcol.ItemStyle.CssClass="LanGridBodyBtnCell";
				tcol.FooterStyle.CssClass="LanGridFooterBtnCell";

				dataGrid.Columns.Add(tcol);
			}
			if((InputControl.DisplayButtons & DisplayButtons.DELETE) == DisplayButtons.DELETE)
			{

				TemplateItem ti=new TemplateItem();
				ti.CreateChild+=new CreateChildDelegate(this.CreateDeleteButton);
				TemplateColumn tcol=new TemplateColumn();
				tcol.HeaderStyle.Width=Unit.Pixel(50);
				tcol.ItemTemplate=ti;
				
				tcol.HeaderStyle.CssClass="LanGridHeaderBtnCell";
				tcol.ItemStyle.CssClass="LanGridBodyBtnCell";
				tcol.FooterStyle.CssClass="LanGridFooterBtnCell";

				dataGrid.Columns.Add(tcol);
			}

			dataGrid.ItemCommand+=new DataGridCommandEventHandler(this.ItemCommand);

			tc.Controls.Add(dataGrid);

			InputControl.Controls.Add(t);
			InputControl.OnShowDataGrid(t,dataGrid);			

			InputControl.Page.RegisterClientScriptBlock("InfoServiceCss","<LINK href='"+InputControl.CssUrl+"' type='text/css' rel='stylesheet'>");
			InputControl.Page.RegisterClientScriptBlock("ShowControlClientScript",@"
		<script language='javascript'>
			<!--
			function openHtml(obj)
			{
				var pobj=obj.parentElement;
				if(pobj)
				{
					try
					{
						var w=window.open('about:blank','HTMLVIEW','resizable=yes,scrollbars=yes');
						w.document.write(pobj.dreamanHtml);
					}
					catch(eee)
					{
						alert('您的浏览器好象禁止了弹出窗口，无法查看HTML内容！');
					}
					event.returnValue=false;
				}
			}
			-->
		</script>
				"
				);
			ShowData();
		}
		private void CreateBoundColumn()
		{
			dynamicTable=InputControl.GetWebDynamicTable();
			InputControl.OnDataGridUseDynamicTable(dynamicTable);
			int i=0;
			foreach(string f in dynamicTable.KeyFields)
			{
				if(dynamicTable[f].ShowType==ShowType.NOVALUE)//分组字段不读值
					continue;
				BoundColumn bc=new BoundColumn();
				bc.DataField=f;
				bc.SortExpression=f;
				bc.HeaderText=dynamicTable[f].ShowName;
				bc.HeaderStyle.CssClass="LanGridHeaderCell";
				bc.ItemStyle.CssClass="LanGridBodyCell";
				bc.FooterStyle.CssClass="LanGridFooterCell";
				dataGrid.Columns.Add(bc);

				if(dynamicTable[f].ShowType==ShowType.HIDDEN)
				{
					bc.Visible=false;
				}
				else
				{
					i++;
				}
			}
			foreach(string f in dynamicTable.NormalFields)
			{
				if(i<InputControl.ShowFieldNumber)
				{
					if(dynamicTable[f].ShowType==ShowType.NOVALUE)//分组字段不读值
						continue;
					BoundColumn bc=new BoundColumn();
					bc.DataField=f;
					bc.SortExpression=f;
					bc.HeaderText=dynamicTable[f].ShowName;
					dataGrid.Columns.Add(bc);
					
					if(dynamicTable[f].ShowType==ShowType.HIDDEN)
					{
						bc.Visible=false;
					}
					else
					{
						i++;
					}
				}
				else
					break;
			}

			dataGrid.ItemDataBound+=new DataGridItemEventHandler(this.DataGridItemBound);

			dataGrid.AllowPaging=true;
			dataGrid.PageIndexChanged+=new DataGridPageChangedEventHandler(this.PageChange);

			dataGrid.AllowSorting=true;
			dataGrid.SortCommand+=new DataGridSortCommandEventHandler(this.SortChange);

			dataGrid.CurrentPageIndex=CurrentPageIndex;
		}
		private void CreateViewButton(Control container)
		{
			ImageButton ib=new ImageButton();
			ib.ID="View";
			ib.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ViewIcon);
			ib.ToolTip="查看详细信息";
			ib.CommandName="View";
			container.Controls.Add(ib);
		}
		private void CreateModifyButton(Control container)
		{
			ImageButton ib=new ImageButton();
			ib.ID="Modify";
			ib.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ModifyIcon);
			ib.ToolTip="修改数据";
			ib.CommandName="Edit";
			container.Controls.Add(ib);
		}
		private void CreateDeleteButton(Control container)
		{
			ImageButton ib=new ImageButton();
			ib.ID="Delete";
			ib.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.DeleteIcon);
			ib.ToolTip="删除数据";
			ib.CommandName="Delete";
			HtmlGenericControl gc=new HtmlGenericControl("span");
			gc.Attributes.Add("onclick","javascript:if(!confirm('真的删除吗？'))event.returnValue=false;");
			gc.Controls.Add(ib);
			container.Controls.Add(gc);
		}
		private void ShowData()
		{
			DataView dv=new DataView(InputControl.Data);
			if(InputControl.SortExpression!=null)
				dv.Sort=InputControl.SortExpression;
			dataGrid.DataSource=dv;
			try
			{
				dataGrid.DataBind();
			}
			catch(HttpException)
			{				
				if(CurrentPageIndex>=dataGrid.PageCount)
					CurrentPageIndex=dataGrid.PageCount-1;
				if(CurrentPageIndex<0)
					CurrentPageIndex=0;
				dataGrid.CurrentPageIndex=CurrentPageIndex;
				dataGrid.DataBind();
			}
		}
		private void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Export")
			{
				DataGrid grid=new DataGrid();

				grid.AutoGenerateColumns=false;
				grid.Width=dataGrid.Width;
				grid.BorderWidth=dataGrid.BorderWidth;

				grid.Font.Size=FontUnit.Point(10);

				grid.HeaderStyle.CssClass=dataGrid.HeaderStyle.CssClass;
				grid.PagerStyle.CssClass=dataGrid.PagerStyle.CssClass;
				grid.ItemStyle.CssClass=dataGrid.ItemStyle.CssClass;
				grid.AlternatingItemStyle.CssClass=dataGrid.AlternatingItemStyle.CssClass;
				grid.CssClass=dataGrid.CssClass;

				foreach(string f in dynamicTable.KeyFields)
				{
					if(dynamicTable[f].ShowType==ShowType.NOVALUE)//分组字段不读值
						continue;
					BoundColumn bc=new BoundColumn();
					bc.DataField=f;
					bc.SortExpression=f;
					bc.HeaderText=dynamicTable[f].ShowName;
					grid.Columns.Add(bc);

					if(dynamicTable[f].ShowType==ShowType.HIDDEN)
					{
						bc.Visible=false;
					}
				}
				foreach(string f in dynamicTable.NormalFields)
				{
					if(dynamicTable[f].ShowType==ShowType.NOVALUE)//分组字段不读值
						continue;
					BoundColumn bc=new BoundColumn();
					bc.DataField=f;
					bc.SortExpression=f;
					bc.HeaderText=dynamicTable[f].ShowName;
					grid.Columns.Add(bc);
				
					if(dynamicTable[f].ShowType==ShowType.HIDDEN)
					{
						bc.Visible=false;
					}
				}
				grid.ItemDataBound+=new DataGridItemEventHandler(this.ExportDataGridItemBound);
				DataView dv=(DataView)dataGrid.DataSource;
				grid.DataSource=dv;
				grid.DataBind();

				if(InputControl.OnExportDataGrid(grid))
				{
					System.IO.StringWriter tw = new System.IO.StringWriter();
					grid.RenderControl(new System.Web.UI.HtmlTextWriter(tw));
					tw.Close();

					HttpResponse res = HttpContext.Current.Response; 
					res.Clear();
					res.ContentType = InputControl.ExportContentType;
					res.ContentEncoding = System.Text.Encoding.GetEncoding(InputControl.ExportContentEncoding);

					res.AppendHeader("Content-Disposition", InputControl.ExportContentDisposition);
					res.Write(tw.ToString());   
					res.End();
				}

				InputControl.ChangeState("show");
			}
			else if(ib.CommandName=="Add")
			{
				InputControl.ChangeState("add");
			}
			else if(ib.CommandName=="Search")
			{
				InputControl.ChangeState("search");
			}
		}
		private void ItemCommand(object source,DataGridCommandEventArgs e)
		{
			if(e.CommandName!="View" && e.CommandName!="Edit" && e.CommandName!="Delete")
				return;
			if(e.Item.ItemType==ListItemType.Header || e.Item.ItemType==ListItemType.Footer
				|| e.Item.ItemType==ListItemType.Pager || e.Item.ItemType==ListItemType.Separator)
				return;
			DataView dv=(DataView)dataGrid.DataSource;
			DataRowView drv=dv[e.Item.DataSetIndex];
			if(e.CommandName=="View")
			{
				NameValueCollection nameValues=new NameValueCollection();
				for(int i=0;i<e.Item.Cells.Count;i++)
				{
					if(!(dataGrid.Columns[i] is BoundColumn))continue;
					string fieldName=((BoundColumn)dataGrid.Columns[i]).DataField;
					object o=drv[fieldName];
					if(o==null || o==DBNull.Value)
						nameValues[fieldName]="";
					else
						nameValues[fieldName]=o.ToString().Trim();
				}
				InputControl.ChangeState("view",nameValues);
			}
			else if(e.CommandName=="Edit")
			{
				NameValueCollection nameValues=new NameValueCollection();
				for(int i=0;i<e.Item.Cells.Count;i++)
				{
					if(!(dataGrid.Columns[i] is BoundColumn))continue;
					string fieldName=((BoundColumn)dataGrid.Columns[i]).DataField;
					object o=drv[fieldName];
					if(o==null || o==DBNull.Value)
						nameValues[fieldName]="";
					else
						nameValues[fieldName]=o.ToString().Trim();
				}
				InputControl.ChangeState("modify",nameValues);
			}
			else if(e.CommandName=="Delete")
			{
				NameValueCollection nameValues=new NameValueCollection();
				for(int i=0;i<e.Item.Cells.Count;i++)
				{
					if(!(dataGrid.Columns[i] is BoundColumn))continue;
					string fieldName=((BoundColumn)dataGrid.Columns[i]).DataField;
					object o=drv[fieldName];
					if(o==null || o==DBNull.Value)
						nameValues[fieldName]="";
					else
						nameValues[fieldName]=o.ToString().Trim();
				}
				foreach(string s in dynamicTable.KeyFields)
				{
					dynamicTable.SetFieldInitVal(s,nameValues[s]);
				}
				string errstr=null;
				try
				{
					if(InputControl.OnBeforeDelete(dynamicTable))
					{
						dynamicTable.DeleteRecord();
						InputControl.OnAfterDelete(dynamicTable);
					}
				}
				catch(Exception ex)
				{
					errstr=ex.Message;
				}
				if(errstr!=null && InputControl.OnShowInfo(errstr,true))
				{
					Table t=(Table)dataGrid.Parent.Parent.Parent;	
					string[] errs=errstr.Split('\n');
					foreach(string err in errs)
					{
						if(err.Trim().Length<=0)continue;
						TableRow tr=new TableRow();
						TableCell tc=new TableCell();
						tr.Cells.Add(tc);
						t.Rows.Add(tr);

						tc.ForeColor=Color.Red;
						tc.Text=err;
					}
				}
				ShowData();
			}
		}
		private void PageChange(Object sender, DataGridPageChangedEventArgs e)
		{
			CurrentPageIndex=e.NewPageIndex;
			dataGrid.CurrentPageIndex=e.NewPageIndex;
			ShowData();
		}
		private void SortChange(Object sender, DataGridSortCommandEventArgs e)
		{
			InputControl.SortExpression=e.SortExpression;
			ShowData();
		}
		private void DataGridItemBound(object sender,DataGridItemEventArgs e)
		{
			for(int i=0;i<e.Item.Cells.Count;i++)
			{
				if(!(dataGrid.Columns[i] is BoundColumn))continue;
				if(e.Item.ItemType==ListItemType.Header || e.Item.ItemType==ListItemType.Footer
					 || e.Item.ItemType==ListItemType.Pager || e.Item.ItemType==ListItemType.Separator)
					continue;
				string fieldName=(dataGrid.Columns[i] as BoundColumn).DataField;
				if(dynamicTable[fieldName].ShowType==ShowType.FILEUPLOAD
					|| dynamicTable[fieldName].ShowType==ShowType.FILE
					|| dynamicTable[fieldName].ShowType==ShowType.RAWVALUE)
				{
					TableCell tc0=e.Item.Cells[i];
					tc0.ToolTip="";
					continue;
				}
				
				if(dynamicTable[fieldName].ShowType==ShowType.HTMLEDIT
					|| dynamicTable[fieldName].ShowType==ShowType.HTML
					|| dynamicTable[fieldName].ShowType==ShowType.HTMLOUTEREDIT)
				{
					TableCell tc0=e.Item.Cells[i];
					tc0.Attributes.Add("dreamanHtml",tc0.Text);
					tc0.ToolTip="";
					if(tc0.Text.Replace("&nbsp;","").Trim().Length>0)
					{
						tc0.Text="<a onclick='openHtml(this)' href='#' title='点此查看HTML字段的内容...'>查看内容</a>";
					}
					continue;
				}
				else if(!dynamicTable[fieldName].UseClassValue)
				{
					if(dynamicTable[fieldName].ShowType==ShowType.COMBOBOX)
					{
						TableCell tc0=e.Item.Cells[i];
						string val=tc0.Text.Trim();
						tc0.ToolTip=val;

						NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
						if(vals!=null && vals[val]!=null)
						{
							tc0.Text=vals[val].Trim();
						}
						continue;
					}
					else if(dynamicTable[fieldName].ShowType==ShowType.CHECKBOX)
					{
						TableCell tc0=e.Item.Cells[i];
						string val=tc0.Text.Trim();
						tc0.ToolTip=val;

						NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
						if(vals!=null)
						{
							string[] keys=val.Split(',');
							for(int ii=0;ii<keys.Length-1;ii++)
							{
								string v=vals[keys[ii]];
								if(v!=null)
									keys[ii]=v.Trim();
							}
							tc0.Text=string.Join(",",keys,0,keys.Length-1);
						}
						continue;
					}
				}
				TableCell tc=e.Item.Cells[i];
				tc.ToolTip=tc.Text.Trim();
				DataView dv=(DataView)dataGrid.DataSource;
				DataRowView drv=dv[e.Item.DataSetIndex];
				string content=TableField.ValueToString(drv[fieldName],dynamicTable[fieldName].Format);
				if(content.Length>InputControl.MaxFieldWidth+1)
					tc.Text=content.Substring(0,InputControl.MaxFieldWidth)+"...";
				else
					tc.Text=content;
			}
		}
		private void ExportDataGridItemBound(object sender,DataGridItemEventArgs e)
		{
			DataGrid grid=(DataGrid)sender;
			for(int i=0;i<e.Item.Cells.Count;i++)
			{
				if(!(grid.Columns[i] is BoundColumn))continue;
				if(e.Item.ItemType==ListItemType.Header || e.Item.ItemType==ListItemType.Footer
					|| e.Item.ItemType==ListItemType.Pager || e.Item.ItemType==ListItemType.Separator)
					continue;
				string fieldName=(grid.Columns[i] as BoundColumn).DataField;				
				if(!dynamicTable[fieldName].UseClassValue)
				{
					if(dynamicTable[fieldName].ShowType==ShowType.COMBOBOX)
					{
						TableCell tc0=e.Item.Cells[i];
						string val=tc0.Text.Trim();
						tc0.ToolTip=val;

						NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
						if(vals!=null && vals[val]!=null)
						{
							tc0.Text=vals[val].Trim();
						}
						continue;
					}
					else if(dynamicTable[fieldName].ShowType==ShowType.CHECKBOX)
					{
						TableCell tc0=e.Item.Cells[i];
						string val=tc0.Text.Trim();
						tc0.ToolTip=val;

						NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
						if(vals!=null)
						{
							string[] keys=val.Split(',');
							for(int ii=0;ii<keys.Length-1;ii++)
							{
								string v=vals[keys[ii]];
								if(v!=null)
									keys[ii]=v.Trim();
							}
							tc0.Text=string.Join(",",keys,0,keys.Length-1);
						}
						continue;
					}
				}
			}
		}
        
		private int CurrentPageIndex
		{
			set
			{
				HttpContext.Current.Cache["CurrentPageIndex"+InputControl.UniqueControlID]=value;
			}
			get
			{
				object o=HttpContext.Current.Cache["CurrentPageIndex"+InputControl.UniqueControlID];
				if(o!=null)
					return (int)o;
				else
					return 0;
			}
		}
		private DataGrid dataGrid=null;
		private DynamicTable dynamicTable=null;
	}
	/// <summary>
	/// 添加数据状态
	/// </summary>
	internal class AddControlState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dynaTable=InputControl.GetWebDynamicTable();
			dynaTable.UploadFileVirtualPath=InputControl.UploadFileVirtualPath;
			dynaTable.FileUploadUrl=InputControl.BuildRequestUrl("upload");
			dynaTable.HtmlEditUrl=InputControl.BuildRequestUrl("htmleditor");
			dynaTable.CssUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.CssUrl);
			dynaTable.ScriptUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ScriptUrl);
			dynaTable.MaxFieldWidth=InputControl.MaxFieldWidth;
			dynaTable.IsMaxLengthShow=InputControl.IsMaxLengthShow;
			dynaTable.UI=WebDynamicTableUI.EDIT;
			InputControl.OnShowAdd(dynaTable);
			LiteralControl lc=new LiteralControl(dynaTable.GenerateHtml());
			dynaTable.RegisterCss(InputControl.Page);
			dynaTable.RegisterScript(InputControl.Page);

			tc.Controls.Add(lc);

			string errstr=StateArgs["ADD_ERROR"];
			if(errstr!=null && InputControl.OnShowInfo(errstr,true))
			{
				string[] errs=errstr.Split('\n');
				foreach(string err in errs)
				{
					if(err.Trim().Length<=0)continue;
					tr=new TableRow();
					tc=new TableCell();
					tr.Cells.Add(tc);
					t.Rows.Add(tr);

					tc.ForeColor=Color.Red;
					tc.Text=err;
				}
			}

			string tipstr=StateArgs["ADD_TIP"];
			if(tipstr!=null && InputControl.OnShowInfo(tipstr,false))
			{
				string[] tips=tipstr.Split('\n');
				foreach(string tip in tips)
				{
					if(tip.Trim().Length<=0)continue;
					tr=new TableRow();
					tc=new TableCell();
					tr.Cells.Add(tc);
					t.Rows.Add(tr);

					tc.ForeColor=Color.Blue;
					tc.Text=tip;
				}
			}

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			ImageButton okBtn=new ImageButton();
			okBtn.ID="OK";
			okBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.AddIcon);
			okBtn.ToolTip="提交录入的数据";
			okBtn.CommandName="Ok";
			okBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(okBtn);

			ImageButton returnBtn=new ImageButton();
			returnBtn.ID="Return";
			returnBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon);
			returnBtn.ToolTip="返回数据表";
			returnBtn.CommandName="Return";
			returnBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(returnBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;
			InputControl.Controls.Add(t);
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Ok")
			{
				string errstr=null;
				try
				{
					if(!dynaTable.GetInputValue())
						throw new Exception("请填写必填项！");
					if(InputControl.OnBeforeAdd(dynaTable))
					{
						dynaTable.CheckAndUpdate(false);
						InputControl.OnAfterAdd(dynaTable);
					}
				}
				catch(Exception ex)
				{
					errstr=ex.Message;
				}
				if(errstr!=null)
					InputControl.ChangeState("add","ADD_ERROR",errstr);
				else
					InputControl.ChangeState("add","ADD_TIP","添加记录成功,您可以继续添加下一记录或返回到数据表。");
			}
			else if(ib.CommandName=="Return")
			{
				InputControl.OnShowInfo(null,false);//清空外部错误信息显示
				InputControl.ChangeState("show");
			}
		}
		private WebDynamicTable dynaTable=null;
	}
	/// <summary>
	/// 修改数据状态
	/// </summary>
	internal class ModifyControlState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dynaTable=InputControl.GetWebDynamicTable();
			dynaTable.UploadFileVirtualPath=InputControl.UploadFileVirtualPath;
			dynaTable.FileUploadUrl=InputControl.BuildRequestUrl("upload");
			dynaTable.HtmlEditUrl=InputControl.BuildRequestUrl("htmleditor");
			dynaTable.CssUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.CssUrl);
			dynaTable.ScriptUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ScriptUrl);
			dynaTable.MaxFieldWidth=InputControl.MaxFieldWidth;
			dynaTable.IsMaxLengthShow=InputControl.IsMaxLengthShow;
			string errstr=StateArgs["MODIFY_ERROR"];
			//如果有错误信息表明是在修改提交后返回到当前状态的,此时应该保留用户输入的值,而不是重新从库里读原记录值。
			if(errstr==null)
			{
				foreach(string s in StateArgs.AllKeys)
				{
					if(s!="MODIFY_ERROR")
						dynaTable.SetFieldInitVal(s,StateArgs[s]);
					else
						errstr=StateArgs[s];
				}
				try
				{
					dynaTable.SelectRecord();
				}
				catch(Exception ex)
				{
					errstr=ex.Message;
				}
			}
			else
			{
				dynaTable.AppendState=false;
			}
			dynaTable.UI=WebDynamicTableUI.EDIT;
			InputControl.OnShowModify(dynaTable);
			LiteralControl lc=new LiteralControl(dynaTable.GenerateHtml());

			dynaTable.RegisterCss(InputControl.Page);
			dynaTable.RegisterScript(InputControl.Page);

			tc.Controls.Add(lc);

			if(errstr!=null && InputControl.OnShowInfo(errstr,true))
			{
				string[] errs=errstr.Split('\n');
				foreach(string err in errs)
				{
					if(err.Trim().Length<=0)continue;
					tr=new TableRow();
					tc=new TableCell();
					tr.Cells.Add(tc);
					t.Rows.Add(tr);

					tc.ForeColor=Color.Red;
					tc.Text=err;
				}
			}

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			ImageButton okBtn=new ImageButton();
			okBtn.ID="OK";
			okBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ModifyOKIcon);
			okBtn.ToolTip="提交修改的数据";
			okBtn.CommandName="Ok";
			okBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(okBtn);

			ImageButton returnBtn=new ImageButton();
			returnBtn.ID="Return";
			returnBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon);
			returnBtn.ToolTip="返回数据表";
			returnBtn.CommandName="Return";
			returnBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(returnBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;

			InputControl.Controls.Add(t);
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Ok")
			{
				string errstr=null;
				try
				{
					if(!dynaTable.GetInputValue())
						throw new Exception("请填写必填项！");
					if(InputControl.OnBeforeModify(dynaTable))
					{
						dynaTable.CheckAndUpdate(true);
						InputControl.OnAfterModify(dynaTable);
					}
				}
				catch(Exception ex)
				{
					errstr=ex.Message;
				}
				if(errstr!=null)
				{
					NameValueCollection nameValues=new NameValueCollection();
					foreach(string s in dynaTable.KeyFields)
					{
						nameValues[s]=dynaTable[s].GetStringValue();
					}
					foreach(string s in dynaTable.NormalFields)
					{
						nameValues[s]=dynaTable[s].GetStringValue();
					}
					nameValues["MODIFY_ERROR"]=errstr;
					InputControl.ChangeState("modify",nameValues);
				}
				else
					InputControl.ChangeState("show");
			}
			else if(ib.CommandName=="Return")
			{
				InputControl.OnShowInfo(null,false);//清空外部错误信息显示
				InputControl.ChangeState("show");
			}
		}
		private WebDynamicTable dynaTable=null;
	}
	/// <summary>
	/// 搜索数据状态
	/// </summary>
	internal class SearchControlState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dynaTable=InputControl.GetWebDynamicTable();
			dynaTable.UploadFileVirtualPath=InputControl.UploadFileVirtualPath;
			dynaTable.FileUploadUrl=InputControl.BuildRequestUrl("upload");
			dynaTable.HtmlEditUrl=InputControl.BuildRequestUrl("htmleditor");
			dynaTable.CssUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.CssUrl);
			dynaTable.ScriptUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ScriptUrl);
			dynaTable.MaxFieldWidth=InputControl.MaxFieldWidth;
			if(InputControl.Sorts!=null && InputControl.Sorts.Length>0)
			{
				for(int i=1;i<=InputControl.Sorts.Length;i++)
				{
					int sort=i;
					string field=InputControl.Sorts[i-1].Trim();
					if(field.ToUpper().EndsWith("DESC"))
					{
						sort=-sort;
						field=field.Substring(0,field.Length-4).Trim();
					}
					dynaTable.SetFieldSort(field,sort);
				}
			}
			dynaTable.UI=WebDynamicTableUI.QUERY;
			InputControl.OnShowSearch(dynaTable);
			LiteralControl lc=new LiteralControl(dynaTable.GenerateHtml());

			dynaTable.RegisterCss(InputControl.Page);
			dynaTable.RegisterScript(InputControl.Page);

			tc.Controls.Add(lc);

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			ImageButton okBtn=new ImageButton();
			okBtn.ID="OK";
			okBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.SearchIcon);
			okBtn.ToolTip="开始搜索符合条件的数据";
			okBtn.CommandName="Ok";
			okBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(okBtn);

			ImageButton returnBtn=new ImageButton();
			returnBtn.ID="Return";
			returnBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon);
			returnBtn.ToolTip="返回数据表";
			returnBtn.CommandName="Return";
			returnBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(returnBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;

			InputControl.Controls.Add(t);
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Ok")
			{
				InputControl.OnBuildCondition(dynaTable);
				string where=null;
				string having=null;
				string[] sorts=dynaTable.GetQuerySql(out where,out having);
				InputControl.WhereCondition=where;
				InputControl.HavingCondition=having;
				if(sorts.Length>0)
					InputControl.Sorts=sorts;
				else
					InputControl.Sorts=null;
				InputControl.ChangeState("show");
			}
			else if(ib.CommandName=="Return")
			{
				InputControl.ChangeState("show");
			}
		}
		private WebDynamicTable dynaTable=null;
	}
	/// <summary>
	/// 查看数据状态
	/// </summary>
	internal class ViewControlState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dynaTable=InputControl.GetWebDynamicTable();
			dynaTable.UploadFileVirtualPath=InputControl.UploadFileVirtualPath;
			dynaTable.FileUploadUrl=InputControl.BuildRequestUrl("upload");
			dynaTable.HtmlEditUrl=InputControl.BuildRequestUrl("htmleditor");
			dynaTable.CssUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.CssUrl);
			dynaTable.ScriptUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ScriptUrl);
			dynaTable.MaxFieldWidth=InputControl.MaxFieldWidth;

			foreach(string s in StateArgs.AllKeys)
			{
				dynaTable.SetFieldInitVal(s,StateArgs[s]);
			}
			string errstr=null;
			try
			{
				dynaTable.SelectRecord();
			}
			catch(Exception ex)
			{
				errstr=ex.Message;
			}
			dynaTable.UI=WebDynamicTableUI.VIEW;
			InputControl.OnShowView(dynaTable);
			LiteralControl lc=new LiteralControl(dynaTable.GenerateHtml());

			tc.Controls.Add(lc);
			
			if(errstr!=null && InputControl.OnShowInfo(errstr,true))
			{
				string[] errs=errstr.Split('\n');
				foreach(string err in errs)
				{
					if(err.Trim().Length<=0)continue;
					tr=new TableRow();
					tc=new TableCell();
					tr.Cells.Add(tc);
					t.Rows.Add(tr);

					tc.ForeColor=Color.Red;
					tc.Text=err;
				}
			}

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);
			/*由于服务器端控件状态存储在缓存中,返回到显示状态必须明确引起服务器端的状态改变,
			 * 因此不能使用下面这段客户端代码,如果服务器端状态没有缓存的话则可使用.			 
			HtmlGenericControl gc=new HtmlGenericControl("img");
			gc.Attributes.Add("src",ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon));
			gc.Attributes.Add("title","返回数据表");
			gc.Attributes.Add("onclick","javascript:history.back();");
			*/
			ImageButton returnBtn=new ImageButton();
			returnBtn.ID="Return";
			returnBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon);
			returnBtn.ToolTip="返回数据表";
			returnBtn.CommandName="Return";
			returnBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(returnBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;

			InputControl.Controls.Add(t);
			InputControl.Page.RegisterClientScriptBlock("InfoServiceCss","<LINK href='"+InputControl.CssUrl+"' type='text/css' rel='stylesheet'>");
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Return")
			{
				InputControl.OnShowInfo(null,false);//清空外部错误信息显示
				InputControl.ChangeState("show");
			}
		}
		private WebDynamicTable dynaTable=null;
	}
	/// <summary>
	/// 文件上传状态
	/// </summary>
	internal class FileUploadState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			t.Width=Unit.Percentage(100.0);
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			inputFile=new HtmlInputFile();
			inputFile.ID="InputFile";
			inputFile.Style.Add("font-size","10pt");
			inputFile.Style.Add("border-style","groove");

			tc.Controls.Add(inputFile);
			tc.HorizontalAlign=HorizontalAlign.Left;
			
			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			inputText=new HtmlInputText();
			inputText.ID="InputText";
			inputText.Style.Add("font-size","10pt");
			inputText.Style.Add("border-style","groove");
			inputText.Attributes.Add("alreadyEdit","no");
			inputText.Attributes.Add("onkeypress","javascript:this.alreadyEdit='yes';");
			
			tc.Controls.Add(inputText);
			tc.HorizontalAlign=HorizontalAlign.Left;

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			ImageButton uploadBtn=new ImageButton();
			uploadBtn.ID="Upload";
			uploadBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(InputControl.SubmitIcon);
			uploadBtn.ToolTip="上传文件";
			uploadBtn.CommandName="Upload";
			uploadBtn.Click+=new ImageClickEventHandler(this.ButtonClick);
			
			tc.Controls.Add(uploadBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;
			InputControl.Controls.Add(t);

			InputControl.Page.RegisterClientScriptBlock("InfoServiceCss","<LINK href='"+InputControl.CssUrl+"' type='text/css' rel='stylesheet'>");
			InputControl.Page.RegisterClientScriptBlock("UploadClientScript",@"
		<script language='javascript'>
			<!--
			function returnValue(fileUrl,docName)
			{
				try
				{
					if(window.opener)
					{
						var obj=window.opener.document.getElementById(window.name);
						if(obj)
						{
							window.opener.addLinkToParent(obj,fileUrl,docName);
						}
					}
					window.returnValue=fileUrl+'#'+docName;
					window.close();
				}
				catch(e)
				{
					alert(e.description);
					window.close();
				}
			}
			function onLocalFileChanged(upFile,docName)
			{
				var t=''+window.event.propertyName;
				if(t=='value')
				{
					var fileFullName=''+upFile.value;
					var fileName='';
					if(docName.alreadyEdit=='yes')return;
					var pos1=fileFullName.lastIndexOf('\\');
					if(pos1<0)pos1=-1;
					var pos2=fileFullName.lastIndexOf('.');
					if(pos2<1)
					{
						pos2=fileFullName.length;
					}
					fileName=fileFullName.substring(pos1+1,pos2);
					docName.value=fileName;
				}
			}
			-->
		</script>				
				");
			InputControl.Page.RegisterOnSubmitStatement("SubmitClientScript","if("+inputText.ClientID+".value=='' || "+inputFile.ClientID+".value==''){alert('文档名或文件名不能为空！');return false;}return true;");
			inputFile.Attributes.Add("onpropertychange","javascript:onLocalFileChanged("+inputFile.ClientID+","+inputText.ClientID+")");
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Upload")
			{
				if(inputFile.PostedFile==null)return;
				if(inputFile.PostedFile.FileName.Length<=0)return;
				if(inputText.Value.Trim().Length<=0)return;
				
				string docName=inputText.Value.Trim();
				string fileUrl=null;
				InputControl.OnFileUpload(inputFile.PostedFile,docName,out fileUrl);

				if(fileUrl==null)
				{
					if(InputControl.UploadFileVirtualPath==null || InputControl.UploadFileVirtualPath.Trim().Length<=0)return;

					string file=inputFile.PostedFile.FileName;
					string extName=Path.GetExtension(file);	
					string filePath=HttpContext.Current.Server.MapPath(InputControl.UploadFileVirtualPath);
                    
					string fileName="upload"+Guid.NewGuid().ToString("N")+extName;
					string subPath1=null,subPath2=null;
					FileField.GenFilePath(filePath,out subPath1,out subPath2);
					while(File.Exists(filePath+"\\"+subPath1+"\\"+subPath2+"\\"+fileName))
					{
						fileName="upload"+Guid.NewGuid().ToString("N")+extName;
					}
					inputFile.PostedFile.SaveAs(filePath+"\\"+subPath1+"\\"+subPath2+"\\"+fileName);
					fileUrl=InputControl.UploadFileVirtualPath+"/"+subPath1+"/"+subPath2+"/"+fileName;
				}
				if(fileUrl==null)
					return;
				InputControl.Page.RegisterClientScriptBlock("AfterUploadClientScript","<script>returnValue('"+ContentEncoder.StringEncode(fileUrl)+"','"+ContentEncoder.StringEncode(docName)+"');</script>");
			}
		}
		HtmlInputFile inputFile=null;
		HtmlInputText inputText=null;
	}
	/// <summary>
	/// HTML编辑状态
	/// </summary>
	internal class HtmlEditorState : ControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			t.Width=Unit.Percentage(100.0);
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			editor=new HtmlEditor();
			editor.ID="Editor";
			editor.Width=Unit.Percentage(100.0);
			editor.ConfigFile=InputControl.HtmlEditorConfigFile;

			tc.Controls.Add(editor);

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			HtmlGenericControl gc=new HtmlGenericControl("img");
			gc.Style.Add("cursor","hand");
			gc.Attributes.Add("src",ControlStateUrl.BuildResourceRequestUrl(InputControl.ReturnIcon));
			gc.Attributes.Add("title","将当前HTML内容返回前页");
			
			gc.Attributes.Add("onclick","javascript:returnValue("+editor.ClientID+")");
			tc.Controls.Add(gc);
			tc.HorizontalAlign=HorizontalAlign.Center;
			
			InputControl.Controls.Add(t);
			InputControl.OnShowHtmlEdit(editor);
			InputControl.Page.RegisterStartupScript("StartupScript","<script language='javascript'>getValue('"+editor.ClientID+"');</script>");
			InputControl.Page.RegisterClientScriptBlock("InfoServiceCss","<LINK href='"+InputControl.CssUrl+"' type='text/css' rel='stylesheet'>");
			InputControl.Page.RegisterClientScriptBlock("HtmlEditClientScript",@"
		<script language='javascript'>
			<!--
			function getValue(id)
			{
				try
				{
					if(window.opener)
					{
						var vobj=document.getElementById(id);
						var obj=window.opener.document.getElementById(window.name);
						if(vobj && obj)
						{
							vobj.value=obj.value;
						}
					}
				}
				catch(e)
				{
					alert(e.description);
				}				
			}
			function returnValue(vobj)
			{
				try
				{
					if(window.opener)
					{
						var obj=window.opener.document.getElementById(window.name);
						if(obj)
						{
							obj.value=vobj.value;
							window.opener.addHtmlLinkToParent(obj);
						}
					}
					window.returnValue=vobj.value;
					window.close();
				}
				catch(e)
				{
					alert(e.description);
					window.close();
				}
			}
			-->
		</script>				
				");
		}
		HtmlEditor editor=null;
	}
}

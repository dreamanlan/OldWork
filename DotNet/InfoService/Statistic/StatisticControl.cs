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

namespace Dreaman.InfoService
{
	public delegate void StatTableUseDynamicTable(DynamicTable dynamicTable);
	public delegate void ShowStatTable(Table table,Table statTable);
	public delegate bool ExportStatTable(Table table);
	/// <summary>
	/// StatisticControl 的摘要说明。
	/// </summary>
	[ToolboxData("<{0}:StatisticControl runat=server></{0}:StatisticControl>")]
	public class StatisticControl : System.Web.UI.WebControls.WebControl,INamingContainer,IMultiFacadeControl
	{		
		/// <summary>
		/// 给用户创建WebDynamicTable等描述SQL结果集的对象并使用元数据初始化一些
		/// 特性的机会,返回值为空表明使用用缺省的类创建对象并使用缺省的元数据来初始化。
		/// </summary>
		public event CreateWebDynamicTable CreateWebDynamicTable;
		/// <summary>		
		/// 此事件给用户在动态表创建与初始设置后一次设置其属性的机会，这一事件主要用于
		/// 取代原GetWebDynamicTable公有方法（现已变为内部方法），用于为控件设置各个状态共
		/// 享的属性（show,search）
		/// </summary>
		public event SharedWebDynamicTable SharedWebDynamicTable;
		/// <summary>
		/// 在统计表使用DynamicTable前给用户一次设置DynamicTable的机会
		/// </summary>
		public event StatTableUseDynamicTable StatTableUseDynamicTable;
		/// <summary>
		/// 在显示统计结果前提供对统计结果的调整机会。第一个参数为显示统计结果表的父元素表，第
		/// 二个参数为显示统计结果的表
		/// </summary>
		public event ShowStatTable ShowStatTable;
		/// <summary>
		/// 在导出统计结果表之前提供对统计结果表的调整机会。参数为Table。
		/// </summary>
		public event ExportStatTable ExportStatTable;
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
		/// 显示统计表的表头与总计行的颜色。
		/// </summary>
		public int BaseColor
		{
			get
			{
				return baseColor;
			}
			set
			{
				baseColor=value;
			}
		}
		/// <summary>
		/// 显示统计表的各分组行的颜色增量0x00HHSSVV，每个子分组的颜色在父组上增加这个值。
		/// H: -120~120 S:-100~100 V:-100~100 H值表示色相的增量，S值除100表示饱和度的增量，V值除100表示亮度的增量。
		/// </summary>
		public int DeltaColor
		{
			get
			{
				return deltaColor;
			}
			set
			{
				deltaColor=value;
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
		[Browsable(false)]
		public Table GetStatTable()
		{
			string state=HttpContext.Current.Request["StatisticControlState"];
			if(showTable==null)
			{
				showTable=new Table();
				showTable.Width=Unit.Percentage(100.0);
				showTable.CssClass="LanStatTable";
				showTable.Style.Add("border-collapse","collapse");
			}
			return showTable;
		}
		[Browsable(false)]
		public string BuildRequestUrl(string state)
		{
			return ControlStateUrl.BuildStateRequestUrl("StatisticControlState",state);
		}
		/// <summary>
		/// 因为状态改变需要清空webDynaTable,这个方法仅供控件内部使用,不再为公有(它已经不能正确的返回当前状态用来
		/// 设置属性的动态表,因为稍后可能被清空了重新实例化),实际使用需要设置动态表属性的请使用事件处理.
		/// </summary>
		/// <returns></returns>
		[Browsable(false)]
		internal WebDynamicTable GetWebDynamicTable()
		{
			string state=HttpContext.Current.Request["StatisticControlState"];
			if(webDynaTable==null)
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
		internal void OnStatTableUseDynamicTable(DynamicTable dynamicTable)
		{
			if(StatTableUseDynamicTable!=null)
				StatTableUseDynamicTable(dynamicTable);
		}
		internal void OnShowStatTable(Table table,Table statTable)
		{
			if(ShowStatTable!=null)
				ShowStatTable(table,statTable);
		}
		internal bool OnExportStatTable(Table statTable)
		{
			if(ExportStatTable!=null)
				return ExportStatTable(statTable);
			return true;
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
		/// 分组字段列表，请注意分组字段的顺序应该与排序中的顺序一致（前后序一致）。
		/// </summary>
		public string[] Groups
		{
			get
			{
				return HttpContext.Current.Cache["Groups"+UniqueControlID] as string[];
			}
			set
			{
				if(value==null)
				{
					HttpContext.Current.Cache.Remove("Groups"+UniqueControlID);
					return;
				}
				HttpContext.Current.Cache["Groups"+UniqueControlID]=value;
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
			}
		}
		public StatisticFieldType GetStatisticFieldType(string fname)
		{
			HybridDictionary ht=HttpContext.Current.Cache["StatisticFieldTypes"+UniqueControlID] as HybridDictionary;
			if(ht==null)
				return StatisticFieldType.AUTO;
			else
			{
				object o=ht[fname];
				if(o==null)
					return StatisticFieldType.AUTO;
				else
					return (StatisticFieldType)o;
			}
		}
		public void SetStatisticFieldType(string fname,StatisticFieldType sft)
		{
			HybridDictionary ht=HttpContext.Current.Cache["StatisticFieldTypes"+UniqueControlID] as HybridDictionary;
			if(ht==null)
			{
				ht=new HybridDictionary(true);
				HttpContext.Current.Cache["StatisticFieldTypes"+UniqueControlID]=ht;
			}
			ht[fname]=sft;
		}
		internal DataTable Data
		{
			get
			{
				if(ConnectionString==null || SQL==null)
					return null;
				SQLSelectParser parser=new SQLSelectParser(SQL);
				string sqlstr=parser.BuildSQL(WhereCondition,HavingCondition);

				if(Groups==null || Groups.Length==0)
				{
					string[] groups=parser.GetGroupByList();
					if(groups!=null && groups.Length>0)
					{
						Groups=groups;
					}
				}

				if(Sorts==null || Sorts.Length==0)
				{
					string[] sorts=parser.GetOrderByList();
					if(sorts!=null && sorts.Length>0)
					{
						Sorts=sorts;
					}
					else if(Groups!=null && Groups.Length>0)
					{	
						Sorts=new string[Groups.Length];
						Groups.CopyTo(Sorts,0);
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
			string state=HttpContext.Current.Request["StatisticControlState"];
			if(forAdd)
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
				controlState=new StatShowControlState();
				controlState.Handle(this,StateArgs);
			}
			else if(State=="search")
			{
				controlState=new StatSearchControlState();
				controlState.Handle(this,StateArgs);
			}
		}
		protected override void CreateChildControls()
		{
			base.CreateChildControls();
			string state=Page.Request["StatisticControlState"];
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
		private StatControlState controlState=null;
		private WebDynamicTable webDynaTable=null;
		private Table showTable=null;

		private DataAccessType dataAccessType=DataAccessType.OleDb;
		private string connStr=null;
		private string originalSql=null;
		private int maxRecordNumber=100;
		private int maxFieldWidth=16;

		private int baseColor=0x00FFFF99;
		private int deltaColor=0x001E0000;

		private DisplayButtons displayBtns=Dreaman.InfoService.DisplayButtons.QUERY;
		private string uploadFileVPath="../uploadFiles";

		private string exportContentType="application/vnd.ms-excel";
		private string exportContentDisposition="attachment;filename=datagrid.xls";
		private string exportContentEncoding="GB2312";//"GB18030";
		private string exportToolTip="将当前数据导出到EXCEL中...";

		private string searchIcon="../images/search.gif";
		private string returnIcon="../images/return.gif";
		private string exportIcon="../images/export.gif";
		private string cssUrl="../html/TreeTable.css";
		private string scriptUrl="../html/calendar.js";
	}
	/// <summary>
	/// 描述复合控件某个独立的状态
	/// </summary>
	internal abstract class StatControlState : IControlState
	{
		public void Handle(IMultiFacadeControl statctrl,string stateargs)
		{
			statControl=(StatisticControl)statctrl;
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
			statControl.Controls.Clear();
			Handle();
		}
		protected abstract void Handle();
		protected StatisticControl StatisticControl
		{
			get
			{
				return statControl;
			}
		}
		protected NameValueCollection StateArgs
		{
			get
			{
				return stateArgs;
			}
		}
		private StatisticControl statControl=null;
		private NameValueCollection stateArgs=new NameValueCollection();
	}
	internal class StatShowControlState : StatControlState
	{
		protected override void Handle()
		{
			dynamicTable=StatisticControl.GetWebDynamicTable();
			StatisticControl.OnStatTableUseDynamicTable(dynamicTable);
			DataTable data=StatisticControl.Data;
			DataView dataView=new DataView(data);
			string[] sorts=StatisticControl.Sorts;
			if(sorts!=null)
				dataView.Sort=string.Join(",",sorts);
			string[] groups=StatisticControl.Groups;
			int groupNum=0;
			if(groups!=null)
				groupNum=groups.Length;
			StringCollection sc=new StringCollection();
			foreach(DataColumn dc in dataView.Table.Columns)
			{
				sc.Add(dc.ColumnName);
			}
			table=StatisticControl.GetStatTable();
			StatisticRow statRow=null,lastRow=null;
			if(statRow==null)
			{
				statRow=StatisticRow.CreateTotalRow(table,groupNum,dynamicTable,StatisticControl.MaxFieldWidth,StatisticControl.BaseColor,StatisticControl.DeltaColor);
				lastRow=statRow;
			}
			for(int i=0;i<groupNum;i++)
			{
				string field=groups[i];
				sc.Remove(field);
				lastRow=lastRow.CreateSubGroup(dataView.Table.Columns.IndexOf(field));
			}
			foreach(string field in sc)
			{
				DataColumn dc=dataView.Table.Columns[field];
				lastRow=statRow;
				while(lastRow!=null)
				{
					lastRow.AddField(dc,StatisticControl.GetStatisticFieldType(field));
					lastRow=lastRow.SubGroup;
				}
			}
			statRow.DisplayHead(statRow,dataView);
			for(int ii=0;ii<dataView.Count;ii++)
			{
				DataRowView drv=dataView[ii];
				statRow.ExecStatistic(drv,false);
				if(ii==dataView.Count-1)
				{
					statRow.ExecStatistic(drv,true);//结束统计
				}
			}
			
			Table t=new Table();
			t.Width=Unit.Percentage(100.0);
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);
			
			if((StatisticControl.DisplayButtons & DisplayButtons.EXPORT) == DisplayButtons.EXPORT)
			{
				ImageButton exportBtn=new ImageButton();
				exportBtn.ID="ExportBtn";
				exportBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.ExportIcon);
				exportBtn.ToolTip=StatisticControl.ExportToolTip;
				exportBtn.CommandName="Export";
				exportBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

				tc.Controls.Add(exportBtn);
			}			
			if((StatisticControl.DisplayButtons & DisplayButtons.SEARCH) == DisplayButtons.SEARCH)
			{
				ImageButton searchBtn=new ImageButton();
				searchBtn.ID="SearchBtn";
				searchBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.SearchIcon);
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
			tc.Controls.Add(table);

			StatisticControl.Controls.Add(t);
			StatisticControl.OnShowStatTable(t,table);
			
			StatisticControl.Page.RegisterClientScriptBlock("InfoServiceCss","<LINK href='"+StatisticControl.CssUrl+"' type='text/css' rel='stylesheet'>");
			StatisticControl.Page.RegisterClientScriptBlock("ShowControlClientScript",@"
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
		}
		private void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Export")
			{
				DataTable data=StatisticControl.Data;
				DataView dataView=new DataView(data);
				string[] sorts=StatisticControl.Sorts;
				if(sorts!=null)
					dataView.Sort=string.Join(",",sorts);
				string[] groups=StatisticControl.Groups;
				int groupNum=0;
				if(groups!=null)
					groupNum=groups.Length;
				StringCollection sc=new StringCollection();
				foreach(DataColumn dc in dataView.Table.Columns)
				{
					sc.Add(dc.ColumnName);
				}
				Table export=new Table();				
				export.Width=table.Width;
				export.Font.Size=FontUnit.Point(10);
				foreach(string key in table.Style.Keys)
				{
					export.Style.Add(key,table.Style[key]);
				}
				export.CssClass=table.CssClass;
				
				StatisticRow statRow=null,lastRow=null;
				if(statRow==null)
				{
					statRow=StatisticRow.CreateTotalRow(export,groupNum,dynamicTable,StatisticControl.MaxFieldWidth,StatisticControl.BaseColor,StatisticControl.DeltaColor,true);
					lastRow=statRow;
				}
				for(int i=0;i<groupNum;i++)
				{
					string field=groups[i];
					sc.Remove(field);
					lastRow=lastRow.CreateSubGroup(dataView.Table.Columns.IndexOf(field));
				}
				foreach(string field in sc)
				{
					DataColumn dc=dataView.Table.Columns[field];
					lastRow=statRow;
					while(lastRow!=null)
					{
						lastRow.AddField(dc,StatisticControl.GetStatisticFieldType(field));
						lastRow=lastRow.SubGroup;
					}
				}
				statRow.DisplayHead(statRow,dataView);
				for(int ii=0;ii<dataView.Count;ii++)
				{
					DataRowView drv=dataView[ii];
					statRow.ExecStatistic(drv,false);
					if(ii==dataView.Count-1)
					{
						statRow.ExecStatistic(drv,true);//结束统计
					}
				}

				if(StatisticControl.OnExportStatTable(export))
				{
					System.IO.StringWriter tw = new System.IO.StringWriter();
					export.RenderControl(new System.Web.UI.HtmlTextWriter(tw));
					tw.Close();

					HttpResponse res = HttpContext.Current.Response; 
					res.Clear();
					res.ContentType = StatisticControl.ExportContentType;
					res.ContentEncoding = System.Text.Encoding.GetEncoding(StatisticControl.ExportContentEncoding);

					res.AppendHeader("Content-Disposition", StatisticControl.ExportContentDisposition);
					res.Write(tw.ToString());   
					res.End();
				}

				StatisticControl.ChangeState("show");
			}
			else if(ib.CommandName=="Search")
			{
				StatisticControl.ChangeState("search");
			}
		}
		private Table table=null;
		private DynamicTable dynamicTable=null;
	}
	/// <summary>
	/// 搜索数据状态
	/// </summary>
	internal class StatSearchControlState : StatControlState
	{
		protected override void Handle()
		{
			Table t=new Table();
			TableRow tr=new TableRow();
			TableCell tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			dynaTable=StatisticControl.GetWebDynamicTable();
			dynaTable.CssUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.CssUrl);
			dynaTable.ScriptUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.ScriptUrl);
			dynaTable.MaxFieldWidth=StatisticControl.MaxFieldWidth;
			dynaTable.UseGroups=true;
			if(StatisticControl.Groups!=null && StatisticControl.Groups.Length>0)
			{
				foreach(string g in StatisticControl.Groups)
				{
					dynaTable.SetFieldGroup(g,true);
				}
			}
			if(StatisticControl.Sorts!=null && StatisticControl.Sorts.Length>0)
			{
				for(int i=1;i<=StatisticControl.Sorts.Length;i++)
				{
					int sort=i;
					string field=StatisticControl.Sorts[i-1].Trim();
					if(field.ToUpper().EndsWith("DESC"))
					{
						sort=-sort;
						field=field.Substring(0,field.Length-4).Trim();
					}
					dynaTable.SetFieldSort(field,sort);
				}
			}
			foreach(string s in dynaTable.KeyFields)
			{
				dynaTable[s].StatMethod=StatisticControl.GetStatisticFieldType(s);
			}
			foreach(string s in dynaTable.NormalFields)
			{
				dynaTable[s].StatMethod=StatisticControl.GetStatisticFieldType(s);				
			}
			dynaTable.UI=WebDynamicTableUI.QUERY;
			StatisticControl.OnShowSearch(dynaTable);
			LiteralControl lc=new LiteralControl(dynaTable.GenerateHtml());

			dynaTable.RegisterCss(StatisticControl.Page);
			dynaTable.RegisterScript(StatisticControl.Page);

			tc.Controls.Add(lc);

			tr=new TableRow();
			tc=new TableCell();
			tr.Cells.Add(tc);
			t.Rows.Add(tr);

			ImageButton okBtn=new ImageButton();
			okBtn.ID="OK";
			okBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.SearchIcon);
			okBtn.ToolTip="开始搜索符合条件的数据";
			okBtn.CommandName="Ok";
			okBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(okBtn);

			ImageButton returnBtn=new ImageButton();
			returnBtn.ID="Return";
			returnBtn.ImageUrl=ControlStateUrl.BuildResourceRequestUrl(StatisticControl.ReturnIcon);
			returnBtn.ToolTip="返回数据表";
			returnBtn.CommandName="Return";
			returnBtn.Click+=new ImageClickEventHandler(this.ButtonClick);

			tc.Controls.Add(returnBtn);
			tc.HorizontalAlign=HorizontalAlign.Center;

			StatisticControl.Controls.Add(t);
		}
		void ButtonClick(object sender,ImageClickEventArgs e)
		{
			ImageButton ib=(ImageButton)sender;
			if(ib.CommandName=="Ok")
			{
				StatisticControl.OnBuildCondition(dynaTable);
				string where=null;
				string having=null;
				string[] sorts=dynaTable.GetQuerySql(out where,out having);
				string[] groups=dynaTable.GetGroupInfo(StatisticControl);
				StatisticControl.WhereCondition=where;
				StatisticControl.HavingCondition=having;
				if(sorts.Length>0)
					StatisticControl.Sorts=sorts;
				else
					StatisticControl.Sorts=null;
				if(groups.Length>0)
					StatisticControl.Groups=groups;
				else
					StatisticControl.Groups=null;
				StatisticControl.ChangeState("show");
			}
			else if(ib.CommandName=="Return")
			{
				StatisticControl.ChangeState("show");
			}
		}
		private WebDynamicTable dynaTable=null;
	}
}

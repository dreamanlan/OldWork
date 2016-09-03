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
using Dreaman.Library.HtmlEditor;

namespace Dreaman.InfoService
{
	/// <summary>
	/// IEditFieldDisplay 的摘要说明。
	/// </summary>	
	public interface IEditFieldDisplay
	{
		HtmlGenericControl EditControl
		{
			get;
		}
		//此字段是否生成客户代码
		bool Visible
		{
			get;set;
		}
		//此字段是否在客户端隐藏
		bool Hidden
		{
			get;set;
		}
		void BuildDisplayControl();
		void BuildFieldValue();
	}
	/// <summary>
	/// IQueryFieldDisplay 的摘要说明。
	/// </summary>	
	public interface IQueryFieldDisplay
	{
		/// <summary>
		/// 用于构造查询条件的控件
		/// </summary>
		HtmlGenericControl QueryControl
		{
			get;
		}
		/// <summary>
		/// 用于构造排序的控件
		/// </summary>
		HtmlGenericControl SortControl
		{
			get;
		}
		/// <summary>
		/// 用来构造分组统计的控件
		/// </summary>
		HtmlGenericControl GroupControl
		{
			get;
		}
		//此字段是否生成客户代码
		bool Visible
		{
			get;set;
		}
		//此字段是否在客户端隐藏
		bool Hidden
		{
			get;set;
		}
		void BuildDisplayControl();
		void BuildFieldValue();
	}
	/// <summary>
	/// 由于编辑的显示可能是单记录或者多记录两种情形，需要对两种情形下的域结构进行抽象，提取公共接口；
	/// </summary>
	public interface IEditField
	{
		string ID{get;}
		string Name{get;}
		Type Type{get;}
		int Length{get;}
		Encoding Encoding{get;}
		bool Nullable{get;}
		string BaseTable{get;}
		string BaseField{get;}
		string Alias{get;}
		bool ReadOnly{get;}
		ShowType ShowType{get;}
		bool UseClassValue{get;}

		object Value{get;set;}
		string OldValue{get;set;}

		string GetStringValue();
		string GetFormatValue();

		string StylePrefix{get;}
	}
	public abstract class EditField : IEditField
	{
		#region IEditField 成员
		public abstract string ID{get;}
		public abstract string Name{get;}
		public abstract Type Type{get;}
		public abstract int Length{get;}
		public abstract Encoding Encoding{get;}
		public abstract bool Nullable{get;}
		public abstract string BaseTable{get;}
		public abstract string BaseField{get;}
		public abstract string Alias{get;}
		public abstract bool ReadOnly{get;}
		public abstract ShowType ShowType{get;}
		public abstract bool UseClassValue{get;}

		public abstract object Value{get;set;}
		public abstract string OldValue{get;set;}

		public abstract string GetStringValue();
		public abstract string GetFormatValue();
		
		public abstract string StylePrefix{get;}
		#endregion

		public static IEditField Create(TableField field)
		{
			return new TableFieldBind(field);
		}
		public static IEditField Create(BatchEditField field,int recordIndex)
		{
			return new BatchEditFieldBind(field,recordIndex);
		}
	}

	internal class TableFieldBind : EditField
	{
		public override string ID
		{
			get
			{
				return field.ID;
			}
		}
		public override string Name
		{
			get
			{
				return field.Name;
			}
		}
		public override Type Type
		{
			get
			{
				return field.Type;
			}
		}
		public override int Length
		{
			get
			{
				return field.Length;
			}
		}
		public override Encoding Encoding
		{
			get
			{
				return field.Encoding;
			}
		}
		public override bool Nullable
		{
			get
			{
				return field.Nullable;
			}
		}
		public override string BaseTable
		{
			get
			{
				return field.BaseTable;
			}
		}
		public override string BaseField
		{
			get
			{
				return field.BaseField;
			}
		}
		public override string Alias
		{
			get
			{
				return field.Alias;
			}
		}
		public override bool ReadOnly
		{
			get
			{
				return field.ReadOnly;
			}
		}
		public override ShowType ShowType
		{
			get
			{
				return field.ShowType;
			}
		}
		public override bool UseClassValue
		{
			get
			{
				return field.UseClassValue;
			}
		}
		public override object Value
		{
			get
			{
				return field.Value;
			}
			set
			{
				field.Value=value;
			}
		}
		public override string OldValue
		{
			get
			{
				return field.OldValue;
			}
			set
			{
				field.OldValue=value;
			}
		}
		public override string GetStringValue()
		{
			return field.GetStringValue();
		}
		public override string GetFormatValue()
		{
			return field.GetFormatValue();
		}
		
		public override string StylePrefix
		{
			get
			{
				return "";
			}
		}
		public TableFieldBind(TableField _field)
		{
			field=_field;
		}
		private TableField field=null;
	}

	internal class BatchEditFieldBind : EditField
	{
		public override string ID
		{
			get
			{
				return field.ID+"_"+recordIndex;
			}
		}
		public override string Name
		{
			get
			{
				return field.Name;
			}
		}
		public override Type Type
		{
			get
			{
				return field.Type;
			}
		}
		public override int Length
		{
			get
			{
				return field.Length;
			}
		}
		public override Encoding Encoding
		{
			get
			{
				return field.Encoding;
			}
		}
		public override bool Nullable
		{
			get
			{
				return field.Nullable;
			}
		}
		public override string BaseTable
		{
			get
			{
				return field.BaseTable;
			}
		}
		public override string BaseField
		{
			get
			{
				return field.BaseField;
			}
		}
		public override string Alias
		{
			get
			{
				return field.Alias;
			}
		}
		public override bool ReadOnly
		{
			get
			{
				return field.ReadOnly;
			}
		}
		public override ShowType ShowType
		{
			get
			{
				return field.ShowType;
			}
		}
		public override bool UseClassValue
		{
			get
			{
				return field.UseClassValue;
			}
		}
		public override object Value
		{
			get
			{
				if(recordIndex<0 || recordIndex>=field.Values.Count)
					return null;
				return field.Values[recordIndex];
			}
			set
			{
				if(recordIndex<0)
					return;
				while(field.Values.Count<=recordIndex)
					field.Values.Add(null);
				field.Values[recordIndex]=value;
			}
		}
		public override string OldValue
		{
			get
			{
				if(recordIndex<0 || recordIndex>=field.OldValues.Count)
					return null;
				return field.OldValues[recordIndex];
			}
			set
			{
				if(recordIndex<0)
					return;
				while(field.OldValues.Count<=recordIndex)
					field.OldValues.Add(null);
				field.OldValues[recordIndex]=value;
			}
		}
		public override string GetStringValue()
		{
			return field.GetStringValue(recordIndex);
		}
		public override string GetFormatValue()
		{
			return field.GetFormatValue(recordIndex);
		}
		
		public override string StylePrefix
		{
			get
			{
				return "M";
			}
		}
		public BatchEditFieldBind(BatchEditField _field,int _recordIndex)
		{
			field=_field;
			recordIndex=_recordIndex;
		}
		private BatchEditField field=null;
		private int recordIndex=0;
	}

	public sealed class FieldDisplayUtility
	{
		public static HtmlInputText CreateInput(string id,string val,Type type,bool readOnly,int len,string stylePrefix)
		{
			HtmlInputText ctrl=new HtmlInputText();
			ctrl.ID=id;
			ctrl.Name=id;
			if(val==null)
				val="";
			ctrl.Value=val;
			if(type==typeof(string))
			{
				ctrl.Attributes.Add("onchange","javascript:checkStr(this.value,"+len+")");
				ctrl.Attributes.Add("class",stylePrefix+"LanInput");
			}
			else if(!type.IsArray && type!=typeof(DateTime))
			{
				ctrl.Attributes.Add("onchange",stylePrefix+"javascript:checkNum(this.value)");
				ctrl.Attributes.Add("class",stylePrefix+"LanInput");
			}
			else if(type==typeof(DateTime))
			{
				ctrl.Attributes.Add("onchange","javascript:checkDate(this.value)");
				if(!readOnly)
				{
					ctrl.Attributes.Add("ondblclick","javascript:calendar()");
					ctrl.Attributes.Add("title","双击选择日期");
				}
				ctrl.Attributes.Add("class",stylePrefix+"LanInput");
			}
			else				
				ctrl.Attributes.Add("class",stylePrefix+"LanInput");
			if(readOnly)
				ctrl.Attributes.Add("readonly","true");
			return ctrl;
		}
		public static HtmlTextArea CreateTextArea(string id,string val,bool readOnly,int rows,int len,string stylePrefix)
		{
			HtmlTextArea ctrl=new HtmlTextArea();
			ctrl.ID=id;
			ctrl.Name=id;
			if(val==null)
				val="";
			ctrl.Value=val;
			ctrl.Rows=rows;
			ctrl.Attributes.Add("onchange","javascript:checkStr(this.value,"+len+")");
			ctrl.Attributes.Add("class",stylePrefix+"LanTextArea");
			ctrl.Attributes.Add("wrap","off");
			if(readOnly)
				ctrl.Attributes.Add("readonly","true");
			return ctrl;
		}
		public static HtmlInputHidden CreateHidden(string id,string val)
		{
			HtmlInputHidden ctrl=new HtmlInputHidden();
			ctrl.ID=id;
			ctrl.Name=id;
			if(val==null)
				val="";
			ctrl.Value=val;
			return ctrl;
		}
		public static HtmlImage CreateImage(string url,string title,ShowType type,string id)
		{
			HtmlImage ctrl=new HtmlImage();
			ctrl.Src=url;
			ctrl.Attributes.Add("title",title);
			ctrl.Style.Add("cursor","hand");
			if(type==ShowType.FILEUPLOAD)
				ctrl.Attributes.Add("onclick","javascript:selectDoc('"+id+"')");
			else if(type==ShowType.DATETIME)
				ctrl.Attributes.Add("onclick","javascript:selectTime('"+id+"')");
			else if(type==ShowType.HTMLOUTEREDIT)
				ctrl.Attributes.Add("onclick","javascript:editHtml('"+id+"')");
			return ctrl;

		}
		public static HtmlEditor CreateHtmlEditor(string id,string val,string cfgFile)
		{			
			HtmlEditor editor=new HtmlEditor();
			editor.ID=id;
			editor.ConfigFile=cfgFile;
			editor.Text=val;
			return editor;
		}
		public static HtmlGenericControl CreateSelect(string id,string val,NameValueCollection vals,bool useClassValue,string stylePrefix)
		{
			//因为HtmlSelect不支持选项字符串前面的空格,这里直接用HTML代码构造它
			HtmlGenericControl ctrl=new HtmlGenericControl("select");
			ctrl.ID=id;
			ctrl.Attributes.Add("name",id);
			ctrl.Attributes.Add("class",stylePrefix+"LanSelect");

			if(vals==null)
				return ctrl;
			StringBuilder sb=new StringBuilder();
			foreach(string key in vals)
			{
				string v=vals[key];
				int ci=0;
				for(;ci<v.Length;ci++)
				{
					if(!Char.IsWhiteSpace(v,ci))
						break;
				}
				v=v.Trim();
				for(;ci>=0;ci--)
				{
					v="&nbsp;"+v;
				}
				if(useClassValue)
				{
					sb.Append("<option");
					if(val==vals[key].Trim())
						sb.Append(" selected=\"selected\"");
					sb.Append(" value=\""+vals[key].Trim()+"\">");
					sb.Append(v);
					sb.Append("</option>");
				}
				else
				{
					sb.Append("<option");
					if(val==key)
						sb.Append(" selected=\"selected\"");
					sb.Append(" value=\""+key+"\">");
					sb.Append(v);
					sb.Append("</option>");
				}

			}
			ctrl.InnerHtml=sb.ToString();
			return ctrl;
		}
		public static HtmlTable CreateSearchSelect(string id,string val,NameValueCollection vals,bool useClassValue,string filterurl,string closeurl,string openurl,string stylePrefix)
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellSpacing=0;
			table.CellPadding=0;
			table.Attributes.Add("class",stylePrefix+"LanSearchSelectTable");

			if(vals==null)
				return table;
			
			HtmlTableRow row=new HtmlTableRow();
			table.Rows.Add(row);
			HtmlTableCell cell=new HtmlTableCell();
			cell.Attributes.Add("class",stylePrefix+"LanSearchSelectHeaderCell");
			row.Cells.Add(cell);

			HtmlTable htable=new HtmlTable();
			cell.Controls.Add(htable);
			htable.Border=0;
			htable.CellSpacing=0;
			htable.CellPadding=0;

			HtmlTableRow hrow=new HtmlTableRow();
			htable.Rows.Add(hrow);
			HtmlTableCell tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			HtmlInputText input=new HtmlInputText();
			tcell.Controls.Add(input);
			input.ID=id+"_filter";
			input.Name=id+"_filter";
			if(val==null)
				val="";
			input.Value=val;
			if(!useClassValue)
			{
				string s=vals[val];
				if(s!=null)
				{
					input.Value=s.Trim();
				}
			}
			input.Attributes.Add("class",stylePrefix+"LanFilter");
			input.Attributes.Add("title","在此处输入条件,点'查找'过滤选择列表,然后在列表中选择合适的值");

			HtmlInputHidden hidden=new HtmlInputHidden();
			tcell.Controls.Add(hidden);
			hidden.ID=id;
			hidden.Name=id;
			hidden.Value=val;

			tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			HtmlImage ctrl=new HtmlImage();						
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_open";
			ctrl.Src=openurl;
			ctrl.Attributes.Add("title","打开查找界面以过滤选择条件");
			ctrl.Style.Add("cursor","hand");
			ctrl.Attributes.Add("onclick","javascript:openClass('"+id+"')");

			ctrl=new HtmlImage();
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_find";
			ctrl.Src=filterurl;
			ctrl.Attributes.Add("title","按指定条件过滤选择列表,条件为空显示全部选择列表");
			ctrl.Style.Add("cursor","hand");
			ctrl.Style.Add("display","none");
			ctrl.Attributes.Add("onclick","javascript:filterClass('"+id+"')");

			tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			ctrl=new HtmlImage();
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_close";
			ctrl.Src=closeurl;
			ctrl.Attributes.Add("title","关闭选择列表");
			ctrl.Style.Add("cursor","hand");
			ctrl.Style.Add("display","none");
			ctrl.Attributes.Add("onclick","javascript:closeClass('"+id+"')");

			row=new HtmlTableRow();
			table.Rows.Add(row);
			cell=new HtmlTableCell();
			cell.Attributes.Add("class",stylePrefix+"LanSearchSelectBodyCell");
			row.Cells.Add(cell);

			HtmlGenericControl gc=new HtmlGenericControl("div");			
			cell.Controls.Add(gc);
			gc.ID=id+"_div";
			gc.Attributes.Add("class",stylePrefix+"LanSelectFrame");
			gc.Style.Add("display","none");

			HtmlTable btable=new HtmlTable();
			gc.Controls.Add(btable);
			btable.ID=id+"_list";
			btable.Border=0;
			btable.CellSpacing=0;
			btable.CellPadding=2;
			btable.Style.Add("width","100%");
			btable.Attributes.Add("class",stylePrefix+"LanSelectTable");
			btable.Attributes.Add("onclick","javascript:selectClass('"+id+"')");

			bool first=true;
			foreach(string key in vals)
			{
				if(useClassValue)
				{
					HtmlTableRow brow=new HtmlTableRow();
					btable.Rows.Add(brow);
					brow.Attributes.Add("onmouseover","javascript:this.className='LanMouseOver'");
					brow.Attributes.Add("onmouseout","javascript:this.className='LanMouseOut'");
					tcell=new HtmlTableCell();
					brow.Cells.Add(tcell);
					if(vals[key].Trim()=="" && first)
						tcell.InnerText="---空---";
					else
					{
						string v=vals[key];
						int ci=0;
						for(;ci<v.Length;ci++)
						{
							if(!Char.IsWhiteSpace(v,ci))
								break;
						}
						v=v.Trim();
						for(;ci>=0;ci--)
						{
							v="&nbsp;"+v;
						}
						tcell.InnerHtml=v;
					}
					tcell.Attributes.Add("val",vals[key].Trim());
					if(val==vals[key].Trim())
						tcell.Attributes.Add("class",stylePrefix+"LanSelectItemCellSelect");
					else
						tcell.Attributes.Add("class",stylePrefix+"LanSelectItemCell");
				}
				else
				{
					HtmlTableRow brow=new HtmlTableRow();
					btable.Rows.Add(brow);
					brow.Attributes.Add("onmouseover","javascript:this.className='LanMouseOver'");
					brow.Attributes.Add("onmouseout","javascript:this.className='LanMouseOut'");
					tcell=new HtmlTableCell();
					brow.Cells.Add(tcell);
					if(vals[key].Trim()=="" && first)
						tcell.InnerText="---空---";
					else
					{
						string v=vals[key];
						int ci=0;
						for(;ci<v.Length;ci++)
						{
							if(!Char.IsWhiteSpace(v,ci))
								break;
						}
						v=v.Trim();
						for(;ci>=0;ci--)
						{
							v="&nbsp;"+v;
						}
						tcell.InnerHtml=v;
					}
					tcell.Attributes.Add("val",key);
					if(val==key)
						tcell.Attributes.Add("class",stylePrefix+"LanSelectItemCellSelect");
					else
						tcell.Attributes.Add("class",stylePrefix+"LanSelectItemCell");
				}
				if(first)
					first=false;
			}
			return table;
		}
		public static HtmlInputCheckBox CreateCheckBox(string id,bool _checked)
		{
			HtmlInputCheckBox checkBox=new HtmlInputCheckBox();
			checkBox.ID=id;
			checkBox.Name=id;
			checkBox.Checked=_checked;
			return checkBox;
		}
		public static HtmlTable CreateCheckBoxes(string id,string val,NameValueCollection vals,bool useClassValue,int cols,string stylePrefix)
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellSpacing=0;
			table.CellPadding=0;
			table.Attributes.Add("class",stylePrefix+"SLanCheckBoxTable");

			if(vals==null)
				return table;

			HtmlTableRow row=null;
			HtmlTableCell cell=null;
			HtmlInputCheckBox checkBox=null;

			int ii=0;
			val+=",";
			//确定需要的行数如果行数多于列数则生成这些行,以便于后面按列放置各选项,
			//已存在的行就像空的桶一样,现在依次往各个桶放入列即可(每个桶放第一个,然后每个桶放第二个...)
			//(目前主要使用按列顺序放置)			
			int rows=vals.Count/cols;
			if(vals.Count%cols!=0)
				rows+=1;
			int rowi=0;
			if(rows!=2 || cols-vals.Count%cols<=1)
			{
				for(int ri=0;ri<rows;ri++)
				{
					row=new HtmlTableRow();
					table.Rows.Add(row);
				}
			}
			foreach(string key in vals)
			{	
				string id2=id+"_"+ii.ToString();
				string id3=id2+"text";
				if(rows!=2 || cols-vals.Count%cols<=1)
				{
					row=table.Rows[rowi];
					rowi=(rowi+1)%rows;
				}
				else if(ii%cols==0)
				{
					row=new HtmlTableRow();
					table.Rows.Add(row);
				}
				ii++;
				
				cell=new HtmlTableCell();
				cell.NoWrap=true;
				row.Cells.Add(cell);
				checkBox=new HtmlInputCheckBox();
				cell.Controls.Add(checkBox);

				checkBox.Attributes.Add("class",stylePrefix+"LanCheckBox");
				checkBox.ID=id2;
				checkBox.Name=id2;
				if(useClassValue)
				{
					if(val.IndexOf(vals[key].Trim()+",")>=0)
						checkBox.Checked=true;
					else
						checkBox.Checked=false;

					HtmlInputHidden hidden=new HtmlInputHidden();
					hidden.ID=id3;
					hidden.Name=id3;
					hidden.Value=vals[key].Trim();
					cell.Controls.Add(hidden);
				}
				else
				{
					if(val.IndexOf(key+",")>=0)
						checkBox.Checked=true;
					else
						checkBox.Checked=false;

					HtmlInputHidden hidden=new HtmlInputHidden();
					hidden.ID=id3;
					hidden.Name=id3;
					hidden.Value=key;
					cell.Controls.Add(hidden);
				}
				string v=vals[key];
				int ci=0;
				for(;ci<v.Length;ci++)
				{
					if(!Char.IsWhiteSpace(v,ci))
						break;
				}
				v=v.Trim();
				for(;ci>=0;ci--)
				{
					v="&nbsp;"+v;
				}
				HtmlGenericControl hgc=new HtmlGenericControl();
				hgc.InnerHtml=v;
				cell.Controls.Add(hgc);
			}
			return table;
		}
		public static HtmlTable CreateSearchCheckBoxes(string id,string val,NameValueCollection vals,bool useClassValue,int cols,string url,string closeurl,string openurl,string stylePrefix)
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellSpacing=0;
			table.CellPadding=0;
			table.Attributes.Add("class",stylePrefix+"LanSearchCheckBoxesTable");

			if(vals==null)
				return table;

			HtmlTableRow row=new HtmlTableRow();
			table.Rows.Add(row);
			HtmlTableCell cell=new HtmlTableCell();
			cell.Attributes.Add("class",stylePrefix+"LanSearchCheckBoxesHeaderCell");
			row.Cells.Add(cell);

			HtmlTable htable=new HtmlTable();
			cell.Controls.Add(htable);
			htable.Border=0;
			htable.CellSpacing=0;
			htable.CellPadding=0;

			HtmlTableRow hrow=new HtmlTableRow();
			htable.Rows.Add(hrow);
			HtmlTableCell tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			HtmlInputText input=new HtmlInputText();
			tcell.Controls.Add(input);
			input.ID=id+"_filter";
			input.Name=id+"_filter";
			if(val==null)
				val="";
			if(useClassValue)
				input.Value=val;
			else
			{
				string[] vs=val.Split(',');
				for(int i=0;i<vs.Length;i++)
				{
					string s=vals[vs[i]];
					if(s!=null)
						vs[i]=s.Trim();
				}
				input.Value=string.Join(",",vs);
			}
			input.Attributes.Add("class",stylePrefix+"LanFilter");
			input.Attributes.Add("title","在此处输入条件,点'查找'过滤选择列表,然后在列表中选择合适的值");

			tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			HtmlImage ctrl=new HtmlImage();						
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_open";
			ctrl.Src=openurl;
			ctrl.Attributes.Add("title","打开查找界面以过滤选择条件");
			ctrl.Style.Add("cursor","hand");
			ctrl.Attributes.Add("onclick","javascript:openMultiClass('"+id+"')");

			ctrl=new HtmlImage();
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_find";
			ctrl.Src=url;
			ctrl.Attributes.Add("title","按指定条件过滤选择列表,条件为空显示全部选择列表");
			ctrl.Style.Add("cursor","hand");
			ctrl.Attributes.Add("onclick","javascript:filterMultiClass('"+id+"')");
			ctrl.Style.Add("display","none");

			tcell=new HtmlTableCell();
			hrow.Cells.Add(tcell);

			ctrl=new HtmlImage();
			tcell.Controls.Add(ctrl);
			ctrl.ID=id+"_close";
			ctrl.Src=closeurl;
			ctrl.Attributes.Add("title","关闭查找界面");
			ctrl.Style.Add("cursor","hand");
			ctrl.Attributes.Add("onclick","javascript:closeMultiClass('"+id+"',"+vals.Count+")");
			ctrl.Style.Add("display","none");

			row=new HtmlTableRow();
			table.Rows.Add(row);
			cell=new HtmlTableCell();
			cell.Attributes.Add("class",stylePrefix+"LanSearchCheckBoxesBodyCell");
			row.Cells.Add(cell);

			HtmlGenericControl gc=new HtmlGenericControl("div");			
			cell.Controls.Add(gc);
			gc.ID=id+"_div";
			gc.Attributes.Add("class",stylePrefix+"LanListFrame");
			gc.Style.Add("display","none");

			HtmlTable btable=new HtmlTable();
			gc.Controls.Add(btable);
			btable.ID=id+"_list";
			btable.Border=0;
			btable.CellSpacing=0;
			btable.CellPadding=0;
			btable.Attributes.Add("class",stylePrefix+"LanCheckBoxTable");

			HtmlTableRow bakrow=null;
			HtmlTableCell bakcell=null;
			HtmlInputCheckBox checkBox=null;

			int ii=0;
			val+=",";
			//确定需要的行数如果行数多于列数则生成这些行,以便于后面按列放置各选项,
			//已存在的行就像空的桶一样,现在依次往各个桶放入列即可(每个桶放第一个,然后每个桶放第二个...)
			//(目前主要按列顺序放置)
			int rows=vals.Count/cols;
			if(vals.Count%cols!=0)
				rows+=1;
			int rowi=0;
			if(rows!=2 || cols-vals.Count%cols<=1)
			{
				for(int ri=0;ri<rows;ri++)
				{
					bakrow=new HtmlTableRow();
					btable.Rows.Add(bakrow);

					if(ri==0)
					{
						HtmlTableCell imgCell=new HtmlTableCell();
						bakrow.Cells.Add(imgCell);
						imgCell.Width="20px";

						ctrl=new HtmlImage();						
						imgCell.Controls.Add(ctrl);
						ctrl.ID=id+"_clear";
						ctrl.Src=closeurl;
						ctrl.Attributes.Add("title","清除已选择内容");
						ctrl.Style.Add("cursor","hand");
						ctrl.Attributes.Add("onclick","javascript:cancelSelect('"+id+"',"+vals.Count+")");						
					}
					else
					{
						HtmlTableCell imgCell=new HtmlTableCell();
						bakrow.Cells.Add(imgCell);
					}
				}
			}
			foreach(string key in vals)
			{	
				string id2=id+"_"+ii.ToString();
				string id3=id2+"text";
				if(rows!=2 || cols-vals.Count%cols<=1)
				{
					bakrow=btable.Rows[rowi];
					rowi=(rowi+1)%rows;
				}
				else if(ii%cols==0)
				{
					bakrow=new HtmlTableRow();
					btable.Rows.Add(bakrow);

					if(ii==0)
					{
						HtmlTableCell imgCell=new HtmlTableCell();
						bakrow.Cells.Add(imgCell);
						imgCell.Width="20px";

						ctrl=new HtmlImage();						
						imgCell.Controls.Add(ctrl);
						ctrl.ID=id+"_clear";
						ctrl.Src=closeurl;
						ctrl.Attributes.Add("title","清除已选择内容");
						ctrl.Style.Add("cursor","hand");
						ctrl.Attributes.Add("onclick","javascript:cancelSelect('"+id+"',"+vals.Count+")");						
					}
					else
					{
						HtmlTableCell imgCell=new HtmlTableCell();
						bakrow.Cells.Add(imgCell);
					}
				}	
				ii++;
				
				bakcell=new HtmlTableCell();
				bakcell.NoWrap=true;
				bakrow.Cells.Add(bakcell);
				checkBox=new HtmlInputCheckBox();
				bakcell.Controls.Add(checkBox);

				checkBox.Attributes.Add("class",stylePrefix+"LanCheckBox");
				//checkBox.Attributes.Add("onclick","javascript:changeCheck('"+id+"','"+id2+"')");
				checkBox.ID=id2;
				checkBox.Name=id2;
				if(useClassValue)
				{
					if(val.IndexOf(vals[key].Trim()+",")>=0)
						checkBox.Checked=true;
					else
						checkBox.Checked=false;

					HtmlInputHidden hidden=new HtmlInputHidden();
					hidden.ID=id3;
					hidden.Name=id3;
					hidden.Value=vals[key].Trim();
					bakcell.Controls.Add(hidden);
				}
				else
				{
					if(val.IndexOf(key+",")>=0)
						checkBox.Checked=true;
					else
						checkBox.Checked=false;

					HtmlInputHidden hidden=new HtmlInputHidden();
					hidden.ID=id3;
					hidden.Name=id3;
					hidden.Value=key;
					bakcell.Controls.Add(hidden);
				}
				bakcell.Attributes.Add("val",vals[key].Trim());
				string v=vals[key];
				int ci=0;
				for(;ci<v.Length;ci++)
				{
					if(!Char.IsWhiteSpace(v,ci))
						break;
				}
				v=v.Trim();
				for(;ci>=0;ci--)
				{
					v="&nbsp;"+v;
				}
				HtmlGenericControl hgc=new HtmlGenericControl();
				hgc.InnerHtml=v;
				bakcell.Controls.Add(hgc);
			}
			return table;
		}
		public static HtmlSelect CreateSortSelect(string id,int sort,int maxSort,string stylePrefix)
		{
			HtmlSelect ctrl=new HtmlSelect();
			ctrl.Attributes.Add("class",stylePrefix+"LanSelectSort");
			ctrl.ID=id;
			ctrl.Name=id;
			ctrl.Items.Add(new ListItem(" ","0"));
			for(int i=1;i<maxSort;i++)
			{
				ListItem li=new ListItem(i.ToString()+"+",i.ToString());
				if(i==sort)
					li.Selected=true;
				ctrl.Items.Add(li);
				li=new ListItem(i.ToString()+"-",(-i).ToString());
				if(i==-sort)
					li.Selected=true;
				ctrl.Items.Add(li);
			}
			return ctrl;
		}
		public static HtmlSelect CreateStatMethodSelect(string id,StatisticFieldType sft,string stylePrefix)
		{
			HtmlSelect ctrl=new HtmlSelect();
			ctrl.Attributes.Add("class",stylePrefix+"LanStatMethodSelect");
			ctrl.ID=id;
			ctrl.Name=id;
			for(int i=(int)StatisticFieldType.MINVALUE;i<=(int)StatisticFieldType.MAXVALUE;i++)
			{
				StatisticFieldType tsft=i;
				string name=tsft.ToString();
				ListItem li=new ListItem(name,i.ToString());
				if(tsft==sft)
					li.Selected=true;
				ctrl.Items.Add(li);
			}
			return ctrl;
		}
	}
	//-------------------------------------------------------------------------------------
	public abstract class EditFieldDisplay : IEditFieldDisplay
	{
		#region IEditFieldDisplay 成员
		public HtmlGenericControl EditControl
		{
			get
			{
				return editCtrl;
			}
		}

		public bool Visible
		{
			get
			{
				return visible;
			}
			set
			{
				visible=value;
			}
		}
		public bool Hidden
		{
			get
			{
				return hidden;
			}
			set
			{
				hidden=value;
			}
		}

		public void BuildDisplayControl()
		{
			if(Field.ShowType!=ShowType.NOVALUE)
			{
				if(Field.ReadOnly && Field.ShowType!=ShowType.NOVALUE 
					&& Field.ShowType!=ShowType.RAWVALUE
					&& Field.ShowType!=ShowType.HTML
					&& Field.ShowType!=ShowType.FILE)
				{
					Visible=false;
				}
				else
				{
					BuildCtrlEdit();
				}
			}
		}

		public void BuildFieldValue()
		{
			string oldVal=HttpContext.Current.Request[Field.ID+"_old"];
			string val=null;
			if(Field.ShowType == ShowType.CHECKBOX)//多选择分类必须将多选值合成,约定采用分号分隔
			{
				NameValueCollection vals=dynaTable.GetClassVals(Field.Name);
				if(vals!=null)
				{
					int ii = vals.Count;
					string prestr="";
					for (int m=0;m<=ii-1;m++)
					{
						if (HttpContext.Current.Request[Field.ID + "_" + m]=="on")								
						{
							if(val==null)
								val="";						
							string val2=HttpContext.Current.Request.Form[Field.ID+"_"+m+"text"];
							val+=prestr+val2.Trim();
							prestr=",";
						}
					}
				}
			}
			else
			{
				val=HttpContext.Current.Request[Field.ID];
			}
			if(val==null)return;
			val=val.Trim();
			if(oldVal!=null)
				oldVal=oldVal.Trim();

			Field.Value=val;
			Field.OldValue=oldVal;
		}
		#endregion

		public static IEditFieldDisplay Create(IEditField field,SQLInfo _dynaTable)
		{
			EditFieldDisplay fd=null;
            switch(field.ShowType)
			{
				case ShowType.TEXTBOX:
				case ShowType.READONLYTEXTBOX:
					fd=new TextBoxEditFieldDisplay();
					break;
				case ShowType.TEXTAREA:
				case ShowType.READONLYTEXTAREA:
					fd=new TextAreaEditFieldDisplay();
					break;
				case ShowType.DATETIME:
					fd=new DateTimeEditFieldDisplay();
					break;
				case ShowType.FILEUPLOAD:
					fd=new FileUploadEditFieldDisplay();
					break;
				case ShowType.HTMLEDIT:
					fd=new HtmlEditEditFieldDisplay();
					break;
				case ShowType.HTMLOUTEREDIT:
					fd=new HtmlOuterEditEditFieldDisplay();
					break;
				case ShowType.FILE:
					fd=new FileEditFieldDisplay();
					break;
				case ShowType.HTML:
					fd=new HtmlEditFieldDisplay();
					break;
				case ShowType.HIDDEN:
					fd=new HiddenEditFieldDisplay();
					break;
				case ShowType.RAWVALUE:
					fd=new RawValueEditFieldDisplay();
					break;
				case ShowType.NOVALUE:
					fd=new NoValueEditFieldDisplay();
					break;
				case ShowType.COMBOBOX:
					fd=new ComboBoxEditFieldDisplay();
					break;
				case ShowType.CHECKBOX:
					fd=new CheckBoxEditFieldDisplay();
					break;
			}
			if(fd==null)
			{
				throw new Exception("不可知的显示域类型!");
			}
			fd.Field=field;
			fd.dynaTable=_dynaTable;
			return fd;
		}

		protected virtual void BuildCtrlEdit()
		{}
		protected string GetStringValue()
		{
			return Field.GetStringValue();
		}
		protected string GetFormatValue()
		{
			return Field.GetFormatValue();
		}
		protected IEditField Field
		{
			get
			{
				return tableField;
			}
			set
			{
				tableField=value;
			}
		}
		protected SQLInfo dynaTable=null;

		private IEditField tableField=null;
		private HtmlGenericControl editCtrl=new HtmlGenericControl();
		private bool visible=true;
		private bool hidden=false;
	}
	//---------------------------------------------------------------
	internal sealed class TextBoxEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			bool readOnly=false;
			if(Field.ShowType==ShowType.READONLYTEXTBOX)
				readOnly=true;
			EditControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID,GetStringValue(),Field.Type,readOnly,Field.Length,Field.StylePrefix));
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class TextAreaEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			bool readOnly=false;
			if(Field.ShowType==ShowType.READONLYTEXTAREA)
				readOnly=true;
			EditControl.Controls.Add(FieldDisplayUtility.CreateTextArea(Field.ID,GetStringValue(),readOnly,dynaTable.TextAreaRows,Field.Length,Field.StylePrefix));
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class DateTimeEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			bool readOnly=false;
			if(Field.ShowType==ShowType.READONLYTEXTBOX)
				readOnly=true;
			EditControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID,GetStringValue(),Field.Type,readOnly,Field.Length,Field.StylePrefix));
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class FileUploadEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellPadding=0;
			table.CellSpacing=0;
			EditControl.Controls.Add(table);
			HtmlTableRow row=new HtmlTableRow();
			table.Rows.Add(row);

			HtmlTableCell tcell=new HtmlTableCell();
			tcell.Attributes.Add("class","LanFileOrHtmlCell");
			tcell.Align="center";
			row.Cells.Add(tcell);
			if(GetStringValue()!=null)
			{
				tcell.Controls.Add(new LiteralControl(GetStringValue().ToString()));
			}
			tcell.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID,GetStringValue()));
			tcell=new HtmlTableCell();
			row.Cells.Add(tcell);
			tcell.Controls.Add(FieldDisplayUtility.CreateImage(dynaTable.BrowseIcon,"选取文件",Field.ShowType,Field.ID));
			tcell.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class HtmlEditEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellPadding=0;
			table.CellSpacing=0;
			EditControl.Controls.Add(table);
			HtmlTableRow row=new HtmlTableRow();
			table.Rows.Add(row);

			HtmlTableCell tcell=new HtmlTableCell();
			tcell.Attributes.Add("class","LanHtmlEditorCell");
			tcell.Align="center";
			row.Cells.Add(tcell);

			tcell.Controls.Add(FieldDisplayUtility.CreateHtmlEditor(Field.ID,GetStringValue(),dynaTable.HtmlEditorConfigFile));
			tcell.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class HtmlOuterEditEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			HtmlTable table=new HtmlTable();
			table.Border=0;
			table.CellPadding=0;
			table.CellSpacing=0;
			EditControl.Controls.Add(table);
			HtmlTableRow row=new HtmlTableRow();
			table.Rows.Add(row);

			HtmlTableCell tcell=new HtmlTableCell();
			tcell.Attributes.Add("class","LanFileOrHtmlCell");
			tcell.Align="center";
			row.Cells.Add(tcell);
			if(GetStringValue()!=null)
			{
				tcell.Controls.Add(new LiteralControl("<a href=\"javascript:openHtml('"+Field.ID+"')\" title=\"点此查看HTML字段的内容...\">查看内容</a>"));
			}
			tcell.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID,GetStringValue()));
			tcell=new HtmlTableCell();
			row.Cells.Add(tcell);
			tcell.Controls.Add(FieldDisplayUtility.CreateImage(dynaTable.EditIcon,"编辑内容",Field.ShowType,Field.ID));
			tcell.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class FileEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			EditControl.InnerHtml=GetStringValue();
		}
	}
	internal sealed class HtmlEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			EditControl.InnerHtml=GetStringValue();
		}
	}
	internal sealed class HiddenEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID,GetStringValue()));
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
			Hidden=true;
		}
	}
	internal sealed class RawValueEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			EditControl.InnerHtml=GetFormatValue();
		}
	}
	internal sealed class NoValueEditFieldDisplay : EditFieldDisplay
	{}
	internal sealed class ComboBoxEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			NameValueCollection vals0=dynaTable.GetClassVals(Field.Name);
			if(vals0==null)
				return;
			NameValueCollection vals=vals0;
			if(Field.Nullable)
			{
				vals=new NameValueCollection();
				vals.Add("","");
				vals.Add(vals0);
			}
			if(vals0.Count>dynaTable.MaxSelectItems)
			{
				EditControl.Controls.Add(FieldDisplayUtility.CreateSearchSelect(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.FilterIcon,dynaTable.CloseIcon,dynaTable.OpenIcon,Field.StylePrefix));
			}
			else
			{
				EditControl.Controls.Add(FieldDisplayUtility.CreateSelect(Field.ID,GetStringValue(),vals,Field.UseClassValue,Field.StylePrefix));
			}
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	internal sealed class CheckBoxEditFieldDisplay : EditFieldDisplay
	{
		protected override void BuildCtrlEdit()
		{
			NameValueCollection vals=dynaTable.GetClassVals(Field.Name);
			if(vals==null)
				return;
			if(vals.Count>dynaTable.MaxCheckBoxesRows*dynaTable.CheckBoxesCols)
				EditControl.Controls.Add(FieldDisplayUtility.CreateSearchCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.CheckBoxesCols,dynaTable.FilterIcon,dynaTable.CloseIcon,dynaTable.OpenIcon,Field.StylePrefix));
			else
				EditControl.Controls.Add(FieldDisplayUtility.CreateCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.CheckBoxesCols,Field.StylePrefix));
			EditControl.Controls.Add(FieldDisplayUtility.CreateHidden(Field.ID+"_old",Field.OldValue));
		}
	}
	//-----------------------------------------------------------------
	public abstract class QueryFieldDisplay : IQueryFieldDisplay
	{
		#region IQueryFieldDisplay 成员
		public HtmlGenericControl QueryControl
		{
			get
			{
				return queryCtrl;
			}
		}
		public HtmlGenericControl SortControl
		{
			get
			{
				return sortCtrl;
			}
		}
		public HtmlGenericControl GroupControl
		{
			get
			{
				return groupCtrl;
			}
		}
		public bool Visible
		{
			get
			{
				return visible;
			}
			set
			{
				visible=value;
			}
		}
		public bool Hidden
		{
			get
			{
				return hidden;
			}
			set
			{
				hidden=value;
			}
		}

		public void BuildDisplayControl()
		{
			if(Field.ShowType!=ShowType.NOVALUE)
			{
				BuildCtrlQuery();
				BuildCtrlSort();
				BuildCtrlGroup();
			}
		}

		public void BuildFieldValue()
		{
			string sqlRet="";
			if(Field.ShowType==ShowType.CHECKBOX || Field.ShowType==ShowType.COMBOBOX && Field.ComboBoxAsCheckBox)
			{
				NameValueCollection vals=dynaTable.GetClassVals(Field.Name);
				if(vals!=null)
				{
					string id=Field.ID;
					string valq,valq2;
					int ii = vals.Count;
					string sqland="";
					for (int m=0;m<ii;m++)
					{
						valq=HttpContext.Current.Request[id+"_"+m];
						if(valq!=null && valq.Length>0) 
						{
							valq2=HttpContext.Current.Request.Form[id+"_"+m+"text"];
							valq2=valq2.Trim();
							if(Field.ShowType==ShowType.CHECKBOX)
							{
								sqlRet+=sqland+"( "+dynaTable.EscapeName(Field.Alias)+" like '%"+dynaTable.EscapeValue(valq2)+"%' )";
							}
							else if(Field.Type==typeof(bool))
							{
								if(valq2=="True")
									sqlRet+=sqland+"( "+dynaTable.EscapeName(Field.Alias)+" = 1 )";
								else
									sqlRet+=sqland+"( "+dynaTable.EscapeName(Field.Alias)+" = 0 )";
							}
							else
							{
								sqlRet+=sqland+"( "+dynaTable.EscapeName(Field.Alias)+" = '"+dynaTable.EscapeValue(valq2)+"' )";
							}
							//we think it is logical or
							sqland=" or ";
						}
					}
				}

				if (sqlRet.Length>0)
				{
					sqlRet=" ( "+sqlRet+" ) ";
				}
			}
			else if(Field.Type==typeof(DateTime))
			{
				string id=Field.ID;
				string valq=HttpContext.Current.Request[id+"q"];
				string valz=HttpContext.Current.Request[id+"z"];
				string sqland="";
				if(valq!=null&&valq.Length>0) 
				{
					valq=valq.Trim();
					if(dynaTable.DBType==DataBaseType.ORACLE)
					{							
						sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" >= to_date('"+valq+"','yyyy-MM-dd')";
					}
					else
					{
						sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" >= '"+valq+"'";
					}
					sqland=" and ";
				}

				if(valz!=null&&valz.Length>0)
				{
					valz=valz.Trim();
					if(dynaTable.DBType==DataBaseType.ORACLE)
					{							
						sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" <= to_date('"+valz+"','yyyy-MM-dd')";
					}
					else
					{
						sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" <= '"+valz+"'";
					}
					sqland=" and ";
				}
			}
			else if(Field.Type==typeof(string) && Field.ShowType!=ShowType.FILEUPLOAD && Field.ShowType!=ShowType.FILE && Field.ShowType!=ShowType.HTMLEDIT && Field.ShowType!=ShowType.HTML && Field.ShowType!=ShowType.HTMLOUTEREDIT)
			{
				string id=Field.ID;
				string val=HttpContext.Current.Request[id];
				if(val!=null&&val.Length>0) 
				{
					val=val.Trim();
					sqlRet+=dynaTable.EscapeName(Field.Alias)+" like '%"+dynaTable.EscapeValue(val)+"%' ";	
				}
			}
			else if(!Field.Type.IsArray && Field.ShowType!=ShowType.FILEUPLOAD && Field.ShowType!=ShowType.FILE && Field.ShowType!=ShowType.HTMLEDIT && Field.ShowType!=ShowType.HTML && Field.ShowType!=ShowType.HTMLOUTEREDIT)
			{
				string id=Field.ID;
				string valq=HttpContext.Current.Request[id+"q"];
				string valz=HttpContext.Current.Request[id+"z"];
				string sqland="";
				if(valq!=null&&valq.Length>0) 
				{
					valq=valq.Trim();
					sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" >= "+valq;
					sqland=" and ";
				}

				if(valz!=null&&valz.Length>0)
				{
					valz=valz.Trim();
					sqlRet+=sqland+dynaTable.EscapeName(Field.Alias)+" <= "+valz;
					sqland=" and ";
				}
			}
			else
			{
				//something may be wrong!
			}
			Field.WhereClause=sqlRet;
			string sort=HttpContext.Current.Request[Field.ID+"_sort"];
			if(sort==null)
				sort="0";
			Field.SortOrder=int.Parse(sort);
			string group=HttpContext.Current.Request[Field.ID+"_group"];
			if(group=="on")
				Field.IsGroup=true;
			else
				Field.IsGroup=false;
			string stat=HttpContext.Current.Request[Field.ID+"_stat"];
			if(stat==null)
				stat="0";
			Field.StatMethod=(StatisticFieldType)int.Parse(stat);			
		}
		#endregion

		public static IQueryFieldDisplay Create(TableField field,SQLInfo _dynaTable)
		{
			QueryFieldDisplay fd=null;
            switch(field.ShowType)
			{
				case ShowType.TEXTBOX:
				case ShowType.READONLYTEXTBOX:
					fd=new TextBoxQueryFieldDisplay();
					break;
				case ShowType.TEXTAREA:
				case ShowType.READONLYTEXTAREA:
					fd=new TextAreaQueryFieldDisplay();
					break;
				case ShowType.DATETIME:
					fd=new DateTimeQueryFieldDisplay();
					break;
				case ShowType.FILEUPLOAD:
					fd=new FileUploadQueryFieldDisplay();
					break;
				case ShowType.HTMLEDIT:
					fd=new HtmlEditQueryFieldDisplay();
					break;
				case ShowType.HTMLOUTEREDIT:
					fd=new HtmlOuterEditQueryFieldDisplay();
					break;
				case ShowType.FILE:
					fd=new FileQueryFieldDisplay();
					break;
				case ShowType.HTML:
					fd=new HtmlQueryFieldDisplay();
					break;
				case ShowType.HIDDEN:
					fd=new HiddenQueryFieldDisplay();
					break;
				case ShowType.RAWVALUE:
					fd=new RawValueQueryFieldDisplay();
					break;
				case ShowType.NOVALUE:
					fd=new NoValueQueryFieldDisplay();
					break;
				case ShowType.COMBOBOX:
					fd=new ComboBoxQueryFieldDisplay();
					break;
				case ShowType.CHECKBOX:
					fd=new CheckBoxQueryFieldDisplay();
					break;
			}
			if(fd==null)
			{
				throw new Exception("不可知的显示域类型!");
			}
			fd.Field=field;
			fd.dynaTable=_dynaTable;
			return fd;
		}

		protected virtual void BuildCtrlQuery()
		{}
		protected virtual void BuildCtrlSort()
		{
			if(Field.ShowType!=ShowType.NOVALUE)
			{
				if(dynaTable.UseSorts || dynaTable.UseGroups)
				{
					SortControl.Controls.Add(FieldDisplayUtility.CreateSortSelect(Field.ID+"_sort",Field.SortOrder,dynaTable.MaxSort,""));
				}
			}
		}
		protected virtual void BuildCtrlGroup()
		{
			if(Field.ShowType!=ShowType.NOVALUE)
			{
				if(dynaTable.UseGroups)
				{
					GroupControl.Controls.Add(FieldDisplayUtility.CreateCheckBox(Field.ID+"_group",Field.IsGroup));	
					GroupControl.Controls.Add(FieldDisplayUtility.CreateStatMethodSelect(Field.ID+"_stat",Field.StatMethod,""));	
				}
			}
		}
		protected string GetStringValue()
		{
			return Field.GetStringValue();
		}
		protected string GetFormatValue()
		{
			return Field.GetFormatValue();
		}
		protected TableField Field
		{
			get
			{
				return tableField;
			}
			set
			{
				//tableField=value.Clone();
				tableField=value;//似乎直接引用不会引起冲突,并且不需要额外的拷贝操作
			}
		}
		protected SQLInfo dynaTable=null;

		private TableField tableField=null;
		private HtmlGenericControl queryCtrl=new HtmlGenericControl();
		private HtmlGenericControl sortCtrl=new HtmlGenericControl();
		private HtmlGenericControl groupCtrl=new HtmlGenericControl();
		private bool visible=true;
		private bool hidden=false;
	}
	//-----------------------------------------------------------------
	internal sealed class TextBoxQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			if(Field.Type!=typeof(string) && !Field.Type.IsArray)
			{
				QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID+"q",GetStringValue(),Field.Type,false,Field.Length,"S"));
				QueryControl.Controls.Add(new LiteralControl(" "));
				QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID+"z",GetStringValue(),Field.Type,false,Field.Length,"S"));
			}
			else
			{
				QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID,GetStringValue(),Field.Type,false,Field.Length,""));
			}
		}
	}
	internal sealed class TextAreaQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID,GetStringValue(),Field.Type,false,Field.Length,""));
		}
	}
	internal sealed class DateTimeQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID+"q",GetStringValue(),Field.Type,false,Field.Length,"S"));
			QueryControl.Controls.Add(new LiteralControl(" "));
			QueryControl.Controls.Add(FieldDisplayUtility.CreateInput(Field.ID+"z",GetStringValue(),Field.Type,false,Field.Length,"S"));
		}
	}
	internal sealed class FileUploadQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class HtmlEditQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class HtmlOuterEditQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class FileQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class HtmlQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class HiddenQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Hidden=true;
		}
	}
	internal sealed class RawValueQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			Visible=false;
		}
	}
	internal sealed class NoValueQueryFieldDisplay : QueryFieldDisplay
	{}
	internal sealed class ComboBoxQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			if(!Field.ComboBoxAsCheckBox)
			{
				NameValueCollection vals0=dynaTable.GetClassVals(Field.Name);
				if(vals0==null)
					return;
				NameValueCollection vals=vals0;
				if(Field.Nullable)
				{
					vals=new NameValueCollection();
					vals.Add("","");
					vals.Add(vals0);
				}
				if(vals0.Count>dynaTable.MaxSelectItems)
				{
					QueryControl.Controls.Add(FieldDisplayUtility.CreateSearchSelect(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.FilterIcon,dynaTable.CloseIcon,dynaTable.OpenIcon,""));
				}
				else
				{
					QueryControl.Controls.Add(FieldDisplayUtility.CreateSelect(Field.ID,GetStringValue(),vals,Field.UseClassValue,""));
				}
			}
			else
			{
				NameValueCollection vals=dynaTable.GetClassVals(Field.Name);
				if(vals==null)
					return;
				if(vals.Count>dynaTable.MaxCheckBoxesRows*dynaTable.QueryCheckBoxesCols)
					QueryControl.Controls.Add(FieldDisplayUtility.CreateSearchCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.QueryCheckBoxesCols,dynaTable.FilterIcon,dynaTable.CloseIcon,dynaTable.OpenIcon,""));
				else
					QueryControl.Controls.Add(FieldDisplayUtility.CreateCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.QueryCheckBoxesCols,""));
			}
		}
	}
	internal sealed class CheckBoxQueryFieldDisplay : QueryFieldDisplay
	{
		protected override void BuildCtrlQuery()
		{
			NameValueCollection vals=dynaTable.GetClassVals(Field.Name);
			if(vals==null)
				return;
			if(vals.Count>dynaTable.MaxCheckBoxesRows*dynaTable.QueryCheckBoxesCols)
				QueryControl.Controls.Add(FieldDisplayUtility.CreateSearchCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.QueryCheckBoxesCols,dynaTable.FilterIcon,dynaTable.CloseIcon,dynaTable.OpenIcon,""));
			else
				QueryControl.Controls.Add(FieldDisplayUtility.CreateCheckBoxes(Field.ID,GetStringValue(),vals,Field.UseClassValue,dynaTable.QueryCheckBoxesCols,""));
		}
	}
}

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

namespace Dreaman.InfoService
{
	public struct StatisticFieldType
	{
		public static readonly StatisticFieldType MINVALUE=new StatisticFieldType(0);
		public static readonly StatisticFieldType AUTO=new StatisticFieldType(0);
		public static readonly StatisticFieldType SUM=new StatisticFieldType(1);
		public static readonly StatisticFieldType AVG=new StatisticFieldType(2);
		public static readonly StatisticFieldType MAX=new StatisticFieldType(3);
		public static readonly StatisticFieldType MIN=new StatisticFieldType(4);
		public static readonly StatisticFieldType DISTINCTCOUNT=new StatisticFieldType(5);
		public static readonly StatisticFieldType COUNT=new StatisticFieldType(6);
		public static readonly StatisticFieldType MAXVALUE=new StatisticFieldType(6);

		StatisticFieldType(int val)
		{
			_value=val;
		}
		public static explicit operator int(StatisticFieldType sft)
		{
			return sft._value;
		}
		public static implicit operator StatisticFieldType(int val)
		{
			return new StatisticFieldType(val);
		}
		public static bool operator ==(StatisticFieldType sft1,StatisticFieldType sft2)
		{
			return sft1._value==sft2._value;
		}
		public static bool operator !=(StatisticFieldType sft1,StatisticFieldType sft2)
		{
			return sft1._value!=sft2._value;
		}
		public override bool Equals(object obj)
		{
			try
			{
				return this==(StatisticFieldType)obj;
			}
			catch
			{
				return false;
			}
		}
		public override int GetHashCode()
		{
			return _value;
		}
		public override string ToString()
		{
			if(this==AUTO)
				return "自动";
			else if(this==SUM)
				return "累计";
			else if(this==AVG)
				return "平均";
			else if(this==MAX)
				return "最大";
			else if(this==MIN)
				return "最小";
			else if(this==DISTINCTCOUNT)
				return "计数";
			else if(this==COUNT)
				return "数数";
			else
				return "未知";
		}

		private int _value;
	}
	public class StatisticField
	{
		public int Index=0;
		public double Value=0.0;
		public StatisticFieldType Type=StatisticFieldType.COUNT;
		public HybridDictionary DistinctCount=new HybridDictionary(true);

		private int count=0;
		private double sum=0.0;
		private bool first=true;

		public StatisticField Clone()
		{
			StatisticField sf=new StatisticField();
			sf.Index=Index;
			sf.Type=Type;
			foreach(DictionaryEntry de in DistinctCount)
			{
				sf.DistinctCount[de.Key]=de.Value;
			}

			sf.count=count;
			sf.sum=sum;
			sf.first=first;
			return sf;
		}
		public void Reset()
		{
			DistinctCount=new HybridDictionary(true);
			Value=0.0;
			count=0;
			sum=0.0;
			first=true;
		}
		public void Calculate(object o)
		{
			if(Type==StatisticFieldType.SUM)
			{
				if(o!=null && o!=DBNull.Value)
				{
					Value+=double.Parse(o.ToString().Trim());
				}
			}
			else if(Type==StatisticFieldType.AVG)
			{
				count++;
				if(o!=null && o!=DBNull.Value)
				{
					sum+=double.Parse(o.ToString().Trim());
				}
				Value=sum/count;
			}
			else if(Type==StatisticFieldType.MAX)
			{
				if(o!=null && o!=DBNull.Value)
				{
					double val=double.Parse(o.ToString().Trim());
					if(val>Value || first)
						Value=val;
					first=false;
				}
			}
			else if(Type==StatisticFieldType.MIN)
			{
				if(o!=null && o!=DBNull.Value)
				{
					double val=double.Parse(o.ToString().Trim());
					if(val<Value || first)
						Value=val;
					first=false;
				}
			}
			else if(Type==StatisticFieldType.COUNT)
			{
				Value+=1.0;
			}
			else if(Type==StatisticFieldType.DISTINCTCOUNT)
			{
				if(o!=null && o!=DBNull.Value)
					DistinctCount[o.ToString().Trim()]=true;
				Value=(double)DistinctCount.Count;
			}
		}
	}
	/// <summary>
	/// StatRow 的摘要说明。
	/// </summary>
	public class StatisticRow
	{
		public StatisticRow SubGroup
		{
			get
			{
				return subGroup;
			}
			set
			{
				subGroup=value;
				value.GroupLevel=GroupLevel+1;
			}
		}
		public int GroupLevel
		{
			get
			{
				return groupLevel;
			}
			set
			{
				groupLevel=value;
				if(SubGroup!=null)
					SubGroup.GroupLevel=GroupLevel+1;
			}
		}
		public int GroupField
		{
			get
			{
				return groupField;
			}
			set
			{
				groupField=value;
			}
		}
		public StatisticField this[int index]
		{
			get
			{
				if(Fields==null)
					return null;
				else
					return Fields[index] as StatisticField;
			}
		}
		public ArrayList Fields
		{
			get
			{
				return fields;
			}
		}
		public void AddField(DataColumn dc,StatisticFieldType sft)
		{
			if(dynamicTable[dc.ColumnName]==null || 
				dynamicTable[dc.ColumnName].ShowType==ShowType.HIDDEN)
				return;
			StatisticField sf=new StatisticField();
			sf.Index=dc.Ordinal;
			if(sft==StatisticFieldType.AUTO)
			{
				if(dc.DataType.IsArray || (dc.DataType==typeof(string) && dc.MaxLength>0x7fff))
					sf.Type=StatisticFieldType.COUNT;
				else if(dc.DataType==typeof(string) || dc.DataType==typeof(DateTime) || dc.DataType==typeof(bool))
					sf.Type=StatisticFieldType.DISTINCTCOUNT;
				else
					sf.Type=StatisticFieldType.SUM;
			}
			else
			{
				sf.Type=sft;
			}
			Fields.Add(sf);
		}
		public void DisplayHead(StatisticRow totalRow,DataView dv)
		{
			int headRows=1;
			for(int i=0;i<Fields.Count;i++)
			{
				string colname=dv.Table.Columns[this[i].Index].ColumnName;
				if(headRows<=dynamicTable[colname].Indent)
					headRows=dynamicTable[colname].Indent+1;
			}
			TableRow row=new TableRow();
			row.BackColor=Color.FromArgb(baseColor);
			outputTable.Rows.Add(row);
			StatisticRow lastRow=totalRow.SubGroup;
			while(lastRow!=null)
			{
				string colname=dv.Table.Columns[lastRow.GroupField].ColumnName;
				TableCell cell=new TableCell();
				cell.CssClass="LanStatHeadCell1";
				if(headRows>1)
				{
					cell.RowSpan=headRows;
				}
				row.Cells.Add(cell);
				cell.Text=dynamicTable[colname].ShowName;
				lastRow=lastRow.SubGroup;
			}
			for(int i=1;i<headRows;i++)
			{
				TableRow trow=new TableRow();
				trow.BackColor=Color.FromArgb(baseColor);
				outputTable.Rows.Add(trow);
			}
			for(int i=0;i<Fields.Count;)
			{
				string colname=dv.Table.Columns[this[i].Index].ColumnName;
				if(dynamicTable[colname].ShowType==ShowType.HIDDEN)continue;
				BuildField(dv,headRows,false,dynamicTable[colname].Indent,ref i);
			}
		}
		private int BuildField(DataView dv,int headRows,bool haveGroup,int indent,ref int i)
		{
			int j=i;
			string colname=dv.Table.Columns[this[j].Index].ColumnName;
			int colSpan=0;
			if(i==Fields.Count-1 || dynamicTable[colname].ShowType!=ShowType.NOVALUE)
			{
				i++;
			}
			else
			{
				for(i++;i<Fields.Count;i++)
				{
					string tcolname=dv.Table.Columns[this[i].Index].ColumnName;
					if(dynamicTable[tcolname].ShowType==ShowType.HIDDEN)continue;
					if(dynamicTable[tcolname].Indent>indent)
					{
						colSpan+=BuildField(dv,headRows,true,dynamicTable[tcolname].Indent,ref i);
						i--;
					}
					else
					{					
						break;
					}
				}
			}
			TableCell cell=new TableCell();
			cell.CssClass="LanStatHeadCell2";
			if(colSpan>1)
				cell.ColumnSpan=colSpan;
			else if(colSpan<=0)//没有更低层的列时，判断需要的行跨度
			{
				if(headRows>1)
				{
					if(haveGroup)
					{
						cell.RowSpan=headRows-indent;
					}
					else
					{
						cell.RowSpan=headRows;
						indent=0;
					}
				}
				else
					outputTable.Rows[0].Cells.Add(cell);
				colSpan=1;
			}
			outputTable.Rows[indent].Cells.Add(cell);
			cell.Text=dynamicTable[colname].ShowName;
			return colSpan;
		}
		public void ExecStatistic(DataRowView drv,bool endGroup)
		{
			bool findEnd=false;
			if(!first)
			{
				if(GroupField>=0 && !endGroup)//如果上级组没有发现组结束,则本组进行判断,否则按上级组的结论执行
				{
					object o=drv[GroupField];
					string tempVal=null;
					if(o!=null && o!=DBNull.Value)
					{
						tempVal=o.ToString().Trim();
					}
					string tempVal0=null;
					if(groupValue!=null && groupValue!=DBNull.Value)
						tempVal0=groupValue.ToString().Trim();
					if(tempVal0!=tempVal)
					{
						endGroup=true;
						findEnd=true;//当前组发现了新的分组。
					}
				}
			}
			//让子组先更新
			if(SubGroup!=null)
			{
				SubGroup.ExecStatistic(drv,endGroup);
			}
			//输出本组当前结果
			if(endGroup)
			{
				double[] hsl=ColorTransform.RGB2HSL((uint)baseColor);
				uint ccc=ColorTransform.HSL2RGB(hsl[0]+groupLevel*deltaH,hsl[1]+groupLevel*deltaS/100.0,hsl[2]+groupLevel*deltaL/100.0);
				Color color=Color.FromArgb((int)ccc);
				TableRow row=new TableRow();				
				outputTable.Rows.Add(row);

				for(int i=0;i<groupNum;i++)
				{
					TableCell tcell=new TableCell();
					row.Cells.Add(tcell);
					if(i>=GroupLevel)
					{
						tcell.CssClass="LanStatGroupCell2";
						tcell.BackColor=color;
					}
					else
					{
						tcell.CssClass="LanStatGroupCell1";
					}
					if(i!=GroupLevel || groupValue==null || groupValue==DBNull.Value)
					{
						tcell.Text="&nbsp;";
					}
					else
					{
						string fieldName=drv.Row.Table.Columns[GroupField].ColumnName;
						string val=TableField.ValueToString(groupValue,dynamicTable[fieldName].Format);
						if(!dynamicTable[fieldName].UseClassValue)
						{
							val=groupValue.ToString().Trim();
							if(dynamicTable[fieldName].ShowType==ShowType.COMBOBOX)
							{
								NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
								if(vals!=null && vals[val]!=null)
								{
									val=vals[val].Trim();
								}
							}
							else if(dynamicTable[fieldName].ShowType==ShowType.CHECKBOX)
							{
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
									val=string.Join(",",keys,0,keys.Length-1);
								}
							}
						}
						if(!forExport)
						{
							if(dynamicTable[fieldName].ShowType==ShowType.HTML || 
								dynamicTable[fieldName].ShowType==ShowType.HTMLEDIT || 
								dynamicTable[fieldName].ShowType==ShowType.HTMLOUTEREDIT)
							{
								tcell.Attributes.Add("dreamanHtml",val);
								tcell.ToolTip="";
								tcell.Text="<a onclick='openHtml(this)' href='#' title='点此查看HTML字段的内容...'>查看内容</a>";
							}
							else if(dynamicTable[fieldName].ShowType==ShowType.FILE || 
								dynamicTable[fieldName].ShowType==ShowType.FILEUPLOAD)
							{
								tcell.ToolTip=val;
								tcell.Text=val;
							}
							else if(dynamicTable[fieldName].ShowType==ShowType.RAWVALUE)
							{
								tcell.ToolTip="";
								tcell.Text=val;
							}
							else if(val.Length>maxFieldWidth+1)
							{
								tcell.ToolTip=val;
								tcell.Text=val.Substring(0,maxFieldWidth)+"...";
							}
							else
							{
								tcell.ToolTip=val;
								tcell.Text=val;
							}
						}
						else
						{
							tcell.ToolTip="";
							tcell.Text=val;
						}						
					}
				}
				
				foreach(StatisticField field in fields)
				{
					string fieldName=drv.Row.Table.Columns[field.Index].ColumnName;
					if(dynamicTable[fieldName].ShowType==ShowType.HIDDEN)continue;
					if(dynamicTable[fieldName].ShowType==ShowType.NOVALUE)continue;//分组字段不产生新列

					TableCell tcell=new TableCell();
					tcell.CssClass="LanStatGroupCell3";
					row.Cells.Add(tcell);
					tcell.BackColor=color;
					if(field.Type==StatisticFieldType.COUNT || field.Type==StatisticFieldType.DISTINCTCOUNT)
						tcell.Text=""+field.Type+":"+field.Value.ToString("###,###,###,###");
					else
						tcell.Text=""+field.Type+":"+TableField.ValueToString(field.Value,dynamicTable[fieldName].Format);
				}
				//当前组结果输出完毕,清空统计值以开始新组统计
				foreach(StatisticField field in fields)
				{
					field.Reset();
				}
			}
			//计算统计值
			if(GroupField>=0)
			{
				object o=drv[GroupField];
				if(o==null || o==DBNull.Value)
					groupValue=null;
				else
					groupValue=o;
			}
			foreach(StatisticField field in fields)
			{
				field.Calculate(drv[field.Index]);
			}
			//检查看是否要输出数据行
			if(first)
			{
				//首先输出第一个分组的数据
				if(GroupLevel<0 && GroupField<0)
				{
					DisplayRow(drv,false);
				}
				first=false;
			}
			else if(findEnd)//本组发现的新分组，则应由本组输出数据行
			{
				DisplayRow(drv,true);
			}
			else if(!endGroup && SubGroup==null)//到达最低级分组时没有发现新分组，则由最低级分组输出数据行
			{
				DisplayRow(drv,false);
			}
		}
		private void DisplayRow(DataRowView drv,bool includeThisGroup)
		{			
			TableRow row=new TableRow();
			outputTable.Rows.Add(row);
			int level=this.GroupLevel;
			if(!includeThisGroup)
				level++;
			for(int i=0;i<level;i++)
			{
				TableCell cell=new TableCell();
				cell.CssClass="LanStatNormalCell1";
				row.Cells.Add(cell);
				cell.Text="&nbsp;";
			}
			StatisticRow lastRow=this;
			if(!includeThisGroup)
				lastRow=this.SubGroup;
			while(lastRow!=null)
			{				
				string fieldName=drv.Row.Table.Columns[lastRow.GroupField].ColumnName;
				TableCell cell=new TableCell();
				cell.CssClass="LanStatNormalCell2";
				row.Cells.Add(cell);
				object o=drv[lastRow.GroupField];
				if(o==null || o==DBNull.Value)
					cell.Text="&nbsp;";
				else
				{
					string val=TableField.ValueToString(o,dynamicTable[fieldName].Format);
					if(!dynamicTable[fieldName].UseClassValue)
					{
						val=o.ToString().Trim();
						if(dynamicTable[fieldName].ShowType==ShowType.COMBOBOX)
						{
							NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
							if(vals!=null && vals[val]!=null)
							{
								val=vals[val].Trim();
							}
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.CHECKBOX)
						{
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
								val=string.Join(",",keys,0,keys.Length-1);
							}
						}
					}
					if(!forExport)
					{
						if(dynamicTable[fieldName].ShowType==ShowType.HTML || 
							dynamicTable[fieldName].ShowType==ShowType.HTMLEDIT || 
							dynamicTable[fieldName].ShowType==ShowType.HTMLOUTEREDIT)
						{
							cell.Attributes.Add("dreamanHtml",val);
							cell.ToolTip="";
							cell.Text="<a onclick='openHtml(this)' href='#' title='点此查看HTML字段的内容...'>查看内容</a>";
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.FILE || 
							dynamicTable[fieldName].ShowType==ShowType.FILEUPLOAD)
						{
							cell.ToolTip=val;
							cell.Text=val;
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.RAWVALUE)
						{
							cell.ToolTip="";
							cell.Text=val;
						}
						else if(val.Length>lastRow.maxFieldWidth+1)
						{
							cell.ToolTip=val;
							cell.Text=val.Substring(0,lastRow.maxFieldWidth)+"...";
						}
						else
						{
							cell.ToolTip=val;
							cell.Text=val;
						}
					}
					else
					{
						cell.ToolTip="";
						cell.Text=val;
					}
				}
				lastRow=lastRow.SubGroup;
			}
			for(int i=0;i<Fields.Count;i++)
			{
				string fieldName=drv.Row.Table.Columns[this[i].Index].ColumnName;
				if(dynamicTable[fieldName].ShowType==ShowType.HIDDEN)continue;
				if(dynamicTable[fieldName].ShowType==ShowType.NOVALUE)continue;//分组字段不产生新列

				TableCell cell=new TableCell();
				cell.CssClass="LanStatNormalCell3";
				row.Cells.Add(cell);
				object o=drv[this[i].Index];
				if(o==null || o==DBNull.Value)
					cell.Text="&nbsp;";
				else
				{
					string val=TableField.ValueToString(o,dynamicTable[fieldName].Format);
					if(!dynamicTable[fieldName].UseClassValue)
					{
						val=o.ToString().Trim();
						if(dynamicTable[fieldName].ShowType==ShowType.COMBOBOX)
						{
							NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
							if(vals!=null && vals[val]!=null)
							{
								val=vals[val].Trim();
							}
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.CHECKBOX)
						{
							NameValueCollection vals=dynamicTable.GetClassVals(fieldName);
							string[] keys=val.Split(',');
							for(int ii=0;ii<keys.Length-1;ii++)
							{
								string v=vals[keys[ii]];
								if(v!=null)
									keys[ii]=v.Trim();
							}
							val=string.Join(",",keys,0,keys.Length-1);
						}
					}
					if(!forExport)
					{
						if(dynamicTable[fieldName].ShowType==ShowType.HTML || 
							dynamicTable[fieldName].ShowType==ShowType.HTMLEDIT || 
							dynamicTable[fieldName].ShowType==ShowType.HTMLOUTEREDIT)
						{
							cell.Attributes.Add("dreamanHtml",val);
							cell.ToolTip="";
							cell.Text="<a onclick='openHtml(this)' href='#' title='点此查看HTML字段的内容...'>查看内容</a>";
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.FILE || 
							dynamicTable[fieldName].ShowType==ShowType.FILEUPLOAD)
						{
							cell.ToolTip=val;
							cell.Text=val;
						}
						else if(dynamicTable[fieldName].ShowType==ShowType.RAWVALUE)
						{
							cell.ToolTip="";
							cell.Text=val;
						}
						else if(val.Length>maxFieldWidth+1)
						{
							cell.ToolTip=val;
							cell.Text=val.Substring(0,maxFieldWidth)+"...";
						}
						else
						{
							cell.ToolTip=val;
							cell.Text=val;
						}
					}
					else
					{
						cell.ToolTip="";
						cell.Text=val;
					}
				}
			}
		}
		public StatisticRow CreateSubGroup(int field)
		{
			if(field<0)
				throw new Exception("分组列中有不存在的列名，可能指定了原始名而非别名？");
			StatisticRow subRow=new StatisticRow();
			subRow.GroupField=field;
			subRow.groupNum=groupNum;
			subRow.outputTable=outputTable;
			subRow.dynamicTable=dynamicTable;
			subRow.maxFieldWidth=maxFieldWidth;

			subRow.baseColor=baseColor;
			subRow.deltaH=deltaH;
			subRow.deltaS=deltaS;
			subRow.deltaL=deltaL;

			SubGroup=subRow;
			return subRow;
		}
		public static StatisticRow CreateTotalRow(Table output,int num,DynamicTable dynaTable,int maxWidth,int _baseColor,int _deltaColor)
		{
			StatisticRow sr=new StatisticRow();
			sr.GroupLevel=-1;
			sr.GroupField=-1;
			sr.groupNum=num;
			sr.outputTable=output;
			sr.dynamicTable=dynaTable;
			sr.maxFieldWidth=maxWidth;

			sr.baseColor=_baseColor;
			int dh=(int)(((uint)(_deltaColor & 0x00FF0000))>>16);
			int ds=(int)(((uint)(_deltaColor & 0x0000FF00))>>8);
			int dl=(int)(((uint)(_deltaColor & 0x000000FF)));
			dh=dh > 127 ? 127-dh : dh;
			ds=ds > 127 ? 127-ds : ds;
			dl=dl > 127 ? 127-dl : dl;
			sr.deltaH=dh;
			sr.deltaS=ds;
			sr.deltaL=dl;
			return sr;
		}
		public static StatisticRow CreateTotalRow(Table output,int num,DynamicTable dynaTable,int maxWidth,int _baseColor,int _deltaColor,bool _forExport)
		{
			StatisticRow sr=CreateTotalRow(output,num,dynaTable,maxWidth,_baseColor,_deltaColor);
			sr.forExport=_forExport;
			return sr;
		}

		private StatisticRow subGroup=null;
		private int groupLevel=0;
		private int groupNum=0;
		private bool first=true;
		private int groupField=0;
		private object groupValue=null;
		private Table outputTable=null;

		private int baseColor;
		private int deltaH,deltaS,deltaL;

		private int maxFieldWidth=16;
		private bool forExport=false;

		private ArrayList fields=new ArrayList();
		private DynamicTable dynamicTable=null;
	}
}

using System;
using System.Data;
using System.Data.OleDb;
using System.Data.Odbc;
using System.Data.SqlClient;
using System.Data.OracleClient;
using System.IO;
using System.Collections;
using System.Collections.Specialized;
using System.Text;
using Dreaman.DataAccess;

namespace Dreaman.InfoService
{
	/// <summary>
	/// QueryResult 的摘要说明。
	/// </summary>
	public class QueryResult
	{
		private DataTable dataTable=null;
		public QueryResult(string sqlstr,DynamicTable dynaTable,string virtualpath,int maxRecord)
		{
			HybridDictionary linkColNames=new HybridDictionary(true);
			DataAccessType datype=dynaTable.DAType;
			string connstr=dynaTable.ConnectionString;
			IDataAccess dataAccess=DataAccessFactory.Produce(datype,connstr);
			dataAccess.CommandTimeout=600;
			DataTable dt=new DataTable("TABLE");
			IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
			try
			{
				int ct=myReader.FieldCount;
				for(int i=0;i<ct;i++)
				{
					if (dt.Columns.IndexOf(myReader.GetName(i))!= -1)
						dt.Columns.Remove(myReader.GetName(i));

					if(dynaTable[myReader.GetName(i)]==null)//不显示自增长列
						continue;

					linkColNames[myReader.GetName(i)]=false;

					Type t=myReader.GetFieldType(i);
					if(t.IsArray)
					{
						dt.Columns.Add(myReader.GetName(i),typeof(string));
						linkColNames[myReader.GetName(i)]=true;
					}
					else
					{						
						dt.Columns.Add(myReader.GetName(i),t);
					}
				}
				int num=0;
				while(myReader.Read() && num<maxRecord)
				{
					DataRow dr=dt.NewRow();
					for(int i=0;i<dt.Columns.Count;i++)
					{
						if(dynaTable[dt.Columns[i].ColumnName]==null)//不显示自增长列
							continue;
						if(!(bool)linkColNames[dt.Columns[i].ColumnName])
						{
							dr[dt.Columns[i].ColumnName]=myReader[dt.Columns[i].ColumnName];
						}
					}
					dt.Rows.Add(dr);
					num++;
				}
			}
			finally
			{
				if(myReader!=null)
					myReader.Close();
			}
			for(int i=0;i<dt.Columns.Count;i++)
			{
				if((bool)linkColNames[dt.Columns[i].ColumnName])
				{
					myReader=dataAccess.ExecuteDataReader(sqlstr,CommandBehavior.SequentialAccess);
					try
					{
						int rowI=0;
						int colI=myReader.GetOrdinal(dt.Columns[i].ColumnName);
						while(myReader.Read() && rowI<maxRecord)
						{				
							DataRow dr=dt.Rows[rowI];
							if(myReader.GetFieldType(colI).IsArray)
							{
								if(!myReader.IsDBNull(colI))
								{
									long size=myReader.GetBytes(colI,0,null,0,0);
									if(size>0)
									{
										byte[] content=new byte[size];
										myReader.GetBytes(colI,0,content,0,(int)size);
										dr[dt.Columns[i].ColumnName]=FileField.Content(content,virtualpath);
									}
									else
										dr[dt.Columns[i].ColumnName]=null;
								}
								else
									dr[dt.Columns[i].ColumnName]=null;
							}
							else
							{
								dr[dt.Columns[i].ColumnName]="";
							}
							rowI++;
						}
					}
					finally
					{
						if(myReader!=null)
							myReader.Close();
					}
				}
			}
			dataTable=dt;
		}
		public DataTable GetData()
		{
			return dataTable;
		}
	}
}

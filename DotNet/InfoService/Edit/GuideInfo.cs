using System;
using System.Collections;
using System.ComponentModel;
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
using Dreaman.DataAccess;
using NUnit.Framework;

namespace Dreaman.InfoService
{
	/// <summary>
	/// 指标的显示属性
	/// </summary>
	public enum ShowAttr : int
	{
		UNKNOWN=-1,
		MINVALUE=0,
		HIDDEN=0,
		VISIBLE=1,
		COMBOBOX=2,
		CHECKBOX=3,
		FILE=4,
		HTML=5,
		NOVALUE=6,
		RAWVALUE=7,
		USECODECOMBOBOX=8,
		USECODECHECKBOX=9,
		OUTEREDITHTML=10,
		MAXVALUE=10
	}
	/// <summary>
	/// 指标数据结构
	/// </summary>	
	public class Guide
	{
		public string Qualifier;
		public string ID;
		public string Name;
		public string Unit;
		public ShowAttr ShowAttr;
		public string Description;
		public string Format;
		public int Indent;
		public void Copy(Guide g)
		{
			Qualifier=g.Qualifier;
			ID=g.ID;
			Name=g.Name;
			Unit=g.Unit;
			ShowAttr=g.ShowAttr;
			Description=g.Description;
			Format=g.Format;
			Indent=g.Indent;
		}
		public override string ToString()
		{
			return "Qualifier:"+Qualifier+" ID:"+ID+" Name:"+Name+" Unit:"+Unit+" ShowAttr:"+ShowAttr+" Description:"+Description+" Format:"+Format+" Indent:"+Indent;
		}
	}
	public class GuideInfo : DataAccessInfo
	{
		public string UpdateGuide(Guide guide)
		{		
			if(guide.Qualifier==null)
			{
				guide.Qualifier="__global__";
			}	
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,ConnectionString);
			DataSet ds=dataAccess.BeginUpdate("select * from 辅助_指标 where 限定ID = '"+guide.Qualifier+"' and 指标ID = '"+guide.ID+"'");
			DataTable dt=ds.Tables[0];
			DataRow dr=null;
			if(dt.Rows.Count<=0)
			{
				dr=dt.NewRow();
				dt.Rows.Add(dr);
			}
			else
			{
				dr=dt.Rows[0];
				dr.BeginEdit();
			}
			dr["限定ID"]=guide.Qualifier;
			dr["指标ID"]=guide.ID;
			dr["指标名称"]=guide.Name;
			dr["指标单位"]=guide.Unit;
			dr["显示特征"]=guide.ShowAttr;
			dr["指标描述"]=guide.Description;
			dr["显示格式"]=guide.Format;
			dr["缩进"]=guide.Indent;
			dr.EndEdit();
			dataAccess.EndUpdate(ds);
			if(dataAccess.Error!=null)
				return dataAccess.Error.Message;
			else
			{
				ResetMetadata();
				return null;
			}
		}
		public string DeleteGuide(string qualifier,string id)
		{
			if(qualifier==null)
			{
				qualifier="__global__";
			}
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,ConnectionString);
			dataAccess.ExecuteNonQuery("delete from 辅助_指标 where  限定ID = '"+qualifier+"' and 指标ID = '"+id+"'");
			if(dataAccess.Error!=null)
				return dataAccess.Error.Message;
			else
			{
				ResetMetadata();
				return null;
			}
		}
		public Guide GetGuide(string qualifier,string id)
		{
			Guide guide=new Guide();
			if(id==null)
			{
				guide.Qualifier=null;
				guide.ID=null;
				guide.Name=null;
				guide.Unit=null;
				guide.ShowAttr=ShowAttr.UNKNOWN;
				guide.Description=null;
				guide.Format=null;
				guide.Indent=0;
				return guide;
			}
			else
			{
				if(myDataSet!=null)
				{
					string filter;
					if(qualifier==null)
					{
						filter="限定ID = '__global__' and 指标ID = '"+id+"'";
					}
					else
					{
						filter="限定ID = '"+qualifier+"' and 指标ID = '"+id+"'";
					}
					DataTable dt=myDataSet.Tables[0];
					DataRow[] dr=dt.Select(filter);
					if(dr.Length<=0 && qualifier!=null)
					{
						dr=dt.Select("限定ID = '__global__' and 指标ID = '"+id+"'");
					}
					if(dr.Length>0)
					{
						guide.Qualifier=qualifier;
						guide.ID=id;
						guide.Name=dr[0]["指标名称"] as string;
						guide.Unit=dr[0]["指标单位"] as string;
						object o=dr[0]["显示特征"];
						if(o==null || o==DBNull.Value)
							guide.ShowAttr=ShowAttr.VISIBLE;
						else
							guide.ShowAttr=(ShowAttr)o;
						guide.Description=dr[0]["指标描述"] as string;
						guide.Format=dr[0]["显示格式"] as string;
						o=dr[0]["缩进"];
						if(o==null || o==DBNull.Value)
							guide.Indent=0;
						else
							guide.Indent=(int)o;
						return guide;
					}
				}
				guide.Qualifier=qualifier;
				guide.ID=id;
				guide.Name=id;
				guide.ShowAttr=ShowAttr.UNKNOWN;
				guide.Description=null;
				guide.Format=null;
				guide.Indent=0;
				return guide;
			}
		}
		public void GenerateMetadata(string oledbConnStr)
		{
			MetadataUtility.OleDbConnectionString=oledbConnStr;
			DataTable tables=MetadataUtility.GetTables(null,"TABLE");
			DataTable dt=MetadataUtility.GetColumns(null,null);

			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,ConnectionString);
			DataSet ds=dataAccess.BeginUpdate("select * from 辅助_指标");
			DataTable dt0=ds.Tables[0];
			foreach(DataRow dr in dt.Rows)
			{
				DataRow[] drs=tables.Select("TABLE_NAME = '"+dr["TABLE_NAME"]+"'");
				if(drs.Length<=0)continue;

				drs=dt0.Select("限定ID = '__global__' and 指标ID = '"+dr["COLUMN_NAME"]+"'");
				if(drs.Length<=0)
				{
					DataRow dr0=dt0.NewRow();
					dt0.Rows.Add(dr0);
					dr0["限定ID"]="__global__";
					dr0["指标ID"]=dr["COLUMN_NAME"];
					dr0["指标名称"]=dr["COLUMN_NAME"];
				
					object leno=dr["CHARACTER_MAXIMUM_LENGTH"];
					long len=0;
					if(leno!=null && leno!=DBNull.Value)
					{
						len=(long)Convert.ChangeType(leno,typeof(long));
					}
					dr0["显示特征"]=1;

					object o=dr["DATA_TYPE"];
					int type=0;
					if(o!=null && o!=DBNull.Value)
					{
						type=(int)Convert.ChangeType(o,typeof(int));
					}
					if(type==128)//128=binary,varbinary,image
					{
						dr0["显示特征"]=3;
					}
					else if(type==129 || type==130)//129=char,varchar,text;130=nchar,nvarchar,ntext;
					{
						if(len>0x7fff)
						{
							dr0["显示特征"]=4;
						}
					}
					dr0.EndEdit();
				}
				drs=dt0.Select("限定ID = '"+dr["TABLE_NAME"]+"' and 指标ID = '"+dr["COLUMN_NAME"]+"'");
				if(drs.Length<=0)
				{
					DataRow dr1=dt0.NewRow();
					dt0.Rows.Add(dr1);
					dr1["限定ID"]=dr["TABLE_NAME"];
					dr1["指标ID"]=dr["COLUMN_NAME"];
					dr1["指标名称"]=dr["COLUMN_NAME"];
				
					object leno=dr["CHARACTER_MAXIMUM_LENGTH"];
					long len=0;
					if(leno!=null && leno!=DBNull.Value)
					{
						len=(long)Convert.ChangeType(leno,typeof(long));
					}
					dr1["显示特征"]=1;

					object o=dr["DATA_TYPE"];
					int type=0;
					if(o!=null && o!=DBNull.Value)
					{
						type=(int)Convert.ChangeType(o,typeof(int));
					}
					if(type==128)//128=binary,varbinary,image
					{
						dr1["显示特征"]=3;
					}
					else if(type==129 || type==130)//129=char,varchar,text;130=nchar,nvarchar,ntext;
					{
						if(len>0x7fff)
						{
							dr1["显示特征"]=4;
						}
					}
					dr1.EndEdit();
				}
			}
			dataAccess.EndUpdate(ds);
			if(dataAccess.Error!=null)
			{
				//Error
			}
		}
		public GuideInfo(DataAccessType type,string connstr):base(type,connstr)
		{
			ResetMetadata();
		}		
		private void ResetMetadata()
		{
			//下面的SQL语句明确列出各字段用于检查元数据表的结构
			string sqlstr="select 限定ID, 指标ID, 指标名称, 指标单位, 显示特征, 指标描述, 显示格式, 缩进 from 辅助_指标";
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,ConnectionString);
			myDataSet=dataAccess.ExecuteDataSet(sqlstr);
			if(myDataSet==null && !alreadyCheckMetadata)
			{//创建元数据表
				alreadyCheckMetadata=true;
				object o=dataAccess.ExecuteScalar("select count(*) from 辅助_指标");
				if(o!=null && o!=DBNull.Value)
				{
					int recNo=(int)o;
					if(recNo<=0)
					{
						//若表存在且没有记录则先删除
						string dropDDL="DROP TABLE 辅助_指标";
						dataAccess.ExecuteNonQuery(dropDDL);
					}
					else
					{
						throw new Exception("辅助_指标表的结构与当前要求不符,但它已经存在并且有记录,请重命名后再执行本程序生成新的辅助_指标表!");
					}
				}
				//创建新表
				string sqlDDL=@"
					CREATE TABLE 辅助_指标
					(
						限定ID varchar (255) NOT NULL ,
						指标ID varchar (255) NOT NULL ,
						指标名称 varchar (255) NULL ,
						指标单位 varchar (255) NULL ,
						显示特征 int NULL ,
						指标描述 varchar (255) NULL ,
						显示格式 varchar (255) NULL ,
						缩进 int NULL ,
						CONSTRAINT pk_辅助_指标 PRIMARY KEY (限定ID,指标ID)
					)
					";
				dataAccess.ExecuteNonQuery(sqlDDL);
				//
				myDataSet=dataAccess.ExecuteDataSet(sqlstr);
				if(myDataSet==null)
				{
					//ERROR
				}
			}
		}
		private DataSet myDataSet=new DataSet();
		private bool alreadyCheckMetadata=false;
	}
	[TestFixture]
	public class GuideInfoTest
	{
		[Test]
		public void SimpleTest()
		{
			Guide g=new Guide();
			g.ID="test1";
			g.Name="test2";
			g.Description="test3";
			g.ShowAttr=ShowAttr.VISIBLE;
			GuideInfo gm=new GuideInfo(DataAccessType.OleDb,"provider=SQLOLEDB;data source=lan;initial catalog=huairou;user id=sa;password=sa;");
			gm.UpdateGuide(g);
			Guide g2=gm.GetGuide(null,"test1");
			Assert.AreEqual(g.Name,g2.Name,"UpdateGuide or GetGuide test failed.");
			Console.Out.WriteLine(g2);
			gm.DeleteGuide(null,"test1");
			Guide g3=gm.GetGuide(null,"test1");
			Assert.IsNull(g3.Name,"DeleteGuide test failed.");			
		}
	}
}

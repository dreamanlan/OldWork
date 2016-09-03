using System;
using System.Collections;
using System.Collections.Specialized;
using System.Data;
using System.Data.OleDb;
using System.Text;
using System.Xml;
using System.IO;
using Dreaman.DataAccess;

namespace Dreaman.InfoService
{
	/// <summary>
	/// 一个模块由一个唯一标识,一个描述,一个后台处理模型与一个UI构成。
	/// 考虑到展示与交互部分都是非常个性化的方面，我们不采用像MVC模式分三块的做法，而是把V与C合并到UI里
	/// ，启动一个模块就是调用UI，并传给它模块ID，UI借此向模块管理器查询模型并使用它（这允许UI并不使用模
	/// 块定义里的模型，这里这样的定义主要是考虑到提供共用模型或者共用UI的可能性）
	/// </summary>
	public struct Module
	{
		public int ModuleID;
		public string Description;
		public string Model;
		public string UI;
		public override string ToString()
		{
			return "ModuleID:"+ModuleID+" Description:"+Description+" Model:"+Model+" UI:"+UI;
		}

	}
	/// <summary>
	/// 模块管理器，通常是一个持久化存储的模块集合，因为模块组织是表现层的东西，是非常个性化的，模块管理器
	/// 并不提供模块组织的相关信息。
	/// 模块的各部分均应完全持久化，当前假设模型与UI均可以用一个字符串来描述，这
	/// 个描述的字符串可认为是模型与UI的标识。
	/// </summary>
	public class ModuleManager
	{
		static string metaConn=null;
		static string uploadFileVirtualPath=null;
		static HybridDictionary libConns=new HybridDictionary(true);
		static HybridDictionary libConnTypes=new HybridDictionary(true);
		static HybridDictionary modelFactorys=new HybridDictionary(true);
		static DataAccessType daType;
		//配置数据
		public static void SetMetaConn(DataAccessType datype,string metaconn)
		{
			daType=datype;
			metaConn=metaconn;
			SetDB("0",metaConn,daType);
		}
		public static string UploadFileVirtualPath
		{
			set
			{
				uploadFileVirtualPath=value;
			}
			get
			{
				return uploadFileVirtualPath;
			}
		}
		public static void SetDB(string libId,string provider,string server,string database,string user,string pass)
		{	
			string connstr="";
			DataAccessType type=DataAccessType.OleDb;
			string prov=provider.ToUpper();
			if(prov.IndexOf("ORAOLEDB.ORACLE")>=0)
			{
				connstr="Provider="+prov+";Data Source="+server+";User Id="+user+";Password="+pass+";";
				type=DataAccessType.OleDb;
			}
			
			else if(prov.IndexOf("SQLOLEDB")>=0)
			{
				connstr="Provider="+prov+";Data Source="+server+";Initial Catalog="+database+";User Id="+user+";Password="+pass+";";
				type=DataAccessType.OleDb;
			}
			else if(prov.IndexOf("[ODBC.NET]")>=0)
			{
				prov=prov.Substring(10);
				connstr="DSN="+prov+";SRVR="+server+";DB="+database+";UID="+user+";PWD="+pass+";";
				type=DataAccessType.Odbc;
			}
			else if(prov.IndexOf("[ORACLE.NET]")>=0)
			{
				connstr="Data Source="+server+";User Id="+user+";Password="+pass+";";
				type=DataAccessType.Oracle;
			}
			else if(prov.IndexOf("[SQL.NET]")>=0)
			{
				connstr="Data Source="+server+";Initial Catalog="+database+";User Id="+user+";Password="+pass+";";
				type=DataAccessType.SQL;
			}
			else
			{
				connstr="";
				type=DataAccessType.OleDb;
			}
			SetDB(libId,connstr,type);
		}
		public static void SetDB(string libId,string connstr,DataAccessType type)
		{
			libConns[libId]=connstr;
			libConnTypes[libId]=type;
		}
		public static string GetDBConn(string libId)
		{
			return libConns[libId] as string;
		}
		public static DataAccessType GetDBType(string libId)
		{
			return (DataAccessType)libConnTypes[libId];
		}
		//工厂功能
		public static IDataAccess NewDataAccess(string libId)
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(GetDBType(libId),GetDBConn(libId));
			return dataAccess;
		}
		public static InputControl NewInputControl(string sqlstr,string libId)
		{
			InputControl input=new InputControl();
			input.DataAccessType=GetDBType(libId);
			input.ConnectionString=GetDBConn(libId);			
			input.SQL=sqlstr;
			return input;
		}
		public static StatisticControl NewStatisticControl(string sqlstr,string libId)
		{
			StatisticControl stat=new StatisticControl();
			stat.DataAccessType=GetDBType(libId);
			stat.ConnectionString=GetDBConn(libId);			
			stat.SQL=sqlstr;
			return stat;
		}
		public static void SetModelFactory(string id,IModelFactory val)
		{
			modelFactorys[id]=val;
		}
		public static IModelFactory GetModelFactory(string id)
		{
			return modelFactorys[id] as IModelFactory;
		}
		public static object GetModel(int id,NameValueCollection args)
		{
			Module m=GetModule(id);
			string modelId=m.Model;
			if(modelId==null)
				return null;
			int si=modelId.IndexOf("@");
			if(si>0)
			{
				string factory=modelId.Substring(0,si);
				string leftId=modelId.Substring(si+1);
				IModelFactory mf=GetModelFactory(factory);
				return mf.GetModel(leftId,args);
			}			
			return null;
		}
		//模块信息管理功能
		public static Module NewModule(string desc,string model,string ui)
		{
			Module m=new Module();
			m.ModuleID=GetNextCode();
			m.Description=desc;
			m.Model=model;
			m.UI=ui;
			return m;
		}
		public static void UpdateModule(Module m)
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,metaConn);
			string sqlstr="select * from MODULES where MODULE_ID='"+m.ModuleID+"'";
			DataSet ds=dataAccess.BeginUpdate(sqlstr);
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
			dr["MODULE_ID"]=m.ModuleID;
			dr["DESCRIPTION"]=m.Description;
			dr["MODEL"]=m.Model;
			dr["UI"]=m.UI;
			dr.EndEdit();
			dataAccess.EndUpdate(ds);
			if(dataAccess.Error!=null)
				throw dataAccess.Error;
		}
		public static void DeleteModule(int id)
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,metaConn);
			string sqlstr="delete from MODULES where MODULE_ID="+id;
			dataAccess.ExecuteNonQuery(sqlstr);
		}
		public static Module GetModule(int id)
		{
			Module mi=new Module();
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,metaConn);
			string sqlstr="select MODULE_ID,DESCRIPTION,MODEL,UI from MODULES where MODULE_ID="+id;
			IDataReader myReader=dataAccess.ExecuteDataReader(sqlstr);
			try
			{
				if(myReader.Read())
				{
					mi.ModuleID=(int)myReader["MODULE_ID"];
					mi.Description=myReader["DESCRIPTION"] as string;
					mi.Model=myReader["MODEL"] as string;
					mi.UI=myReader["UI"] as string;					
				}
			}
			finally
			{
				if(myReader!=null)
					myReader.Close();
			}
			return mi;
		}
		private static int GetNextCode()
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(daType,metaConn);
			string sqlstr="select max(MODULE_ID) from MODULES";
			object o=dataAccess.ExecuteScalar(sqlstr);
			if(o==null || o==DBNull.Value)
				return 1;
			else
				return (int)o+1;
		}
	}
}

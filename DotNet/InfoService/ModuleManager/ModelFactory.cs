using System;
using System.Collections.Specialized;
using Dreaman.DataAccess;

namespace Dreaman.InfoService
{
	/// <summary>
	/// Model 的摘要说明。
	/// </summary>
	public interface IModelFactory
	{
		object GetModel(string moduleId,NameValueCollection args);
	}
	public abstract class DataModelFactory : IModelFactory
	{
		#region IModelFactory 成员
		public abstract object GetModel(string moduleId, NameValueCollection args);
		#endregion
		//与实例化模型有关的方法
		public static string HandleArgs(string statement,NameValueCollection args)
		{
			if(statement==null)
				return null;
			foreach(string name in args.Keys)
			{				
				statement=statement.Replace("#"+name.ToUpper()+"#",args[name]);
			}
			return statement;
		}
		public static void HandleArgs(DynamicTable dt,NameValueCollection args)
		{
			if(dt==null)
				return;
			foreach(string name in args.Keys)
			{				
				dt.SetFieldInitVal(name,args[name]);
			}
		}
	}

	public class EditModelFactory : DataModelFactory
	{
		#region IModelFactory 成员
		public override object GetModel(string moduleId, NameValueCollection args)
		{
			if(moduleId==null)
				return null;
			int si=moduleId.IndexOf(":");
			string libId=moduleId.Substring(0,si);
			string connStr=ModuleManager.GetDBConn(libId);
			DataAccessType type=ModuleManager.GetDBType(libId);
			if(connStr==null)
				return null;
			string sqlstr=HandleArgs(moduleId.Substring(si+1),args);
			InputControl ctrl=new InputControl();
			ctrl.DataAccessType=type;
			ctrl.ConnectionString=connStr;
			ctrl.SQL=sqlstr;
			ctrl.UploadFileVirtualPath=ModuleManager.UploadFileVirtualPath;
			DynamicTable dt=ctrl.GetWebDynamicTable();
			HandleArgs(dt,args);
			dt=ctrl.GetWebDynamicTable();
			HandleArgs(dt,args);
			return ctrl;
		}
		#endregion
	}

	public class StatModelFactory : DataModelFactory
	{
		#region IModelFactory 成员
		public override object GetModel(string moduleId, NameValueCollection args)
		{
			if(moduleId==null)
				return null;
			int si=moduleId.IndexOf(":");
			string libId=moduleId.Substring(4,si-4);
			DataAccessType type=ModuleManager.GetDBType(libId);
			string connStr=ModuleManager.GetDBConn(libId);
			if(connStr==null)
				return null;
			string sqlstr=HandleArgs(moduleId.Substring(si+1),args);
			StatisticControl ctrl=new StatisticControl();
			ctrl.DataAccessType=type;
			ctrl.ConnectionString=connStr;
			ctrl.SQL=sqlstr;
			ctrl.UploadFileVirtualPath=ModuleManager.UploadFileVirtualPath;
			DynamicTable dt=ctrl.GetWebDynamicTable();
			HandleArgs(dt,args);
			dt=ctrl.GetWebDynamicTable();
			HandleArgs(dt,args);
			return ctrl;
		}
		#endregion
	}
}

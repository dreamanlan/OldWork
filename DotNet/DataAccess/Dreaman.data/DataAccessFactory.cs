using System;
using System.Data;

namespace Dreaman.DataAccess
{
	/// <summary>
	/// DataAccessFactory 的摘要说明。
	/// </summary>	
	
	public sealed class DataAccessFactory
	{
		/// <summary>
		/// 构造一个数据访问对象实例，参数指明了提供者类型与对应的连接串。
		/// </summary>
		/// <param name="_type"></param>
		/// <param name="connstr"></param>
		/// <returns></returns>
		public static IDataAccess Produce(DataAccessType _type,string connstr)
		{
			switch(_type)
			{
				case DataAccessType.SQL:
					return new SQLDataAccess(connstr);
				case DataAccessType.Oracle:
					return new OracleDataAccess(connstr);
				case DataAccessType.OleDb:
					return new OleDbDataAccess(connstr);
				case DataAccessType.Odbc:
					return new OdbcDataAccess(connstr);
				default:
					return null;
			}			
		}
		/// <summary>
		/// 构造存储过程调用的SQL语句：exec 过程名 参数列表
		/// </summary>
		/// <param name="name"></param>
		/// <param name="ps"></param>
		/// <returns></returns>
		public static string BuildProcSQL(string name,params string[] ps)
		{
			string sqlstr="exec "+name+" ";
			string prestr="";
			foreach(string s in ps)
			{
				sqlstr+=prestr+"'"+s.Replace("'","''")+"'";
				prestr=",";
			}
			return sqlstr;
		}
	}
}

using System;
using System.Data;

namespace Dreaman.DataAccess
{
	/// <summary>
	/// IDataAccess接口，通用的与提供者无关的数据访问接口，在与标准SQL搭配使用时希望能实现
	/// 与具体数据库无关的数据访问层。
	/// </summary>
	public interface IDataAccess
	{
		/// <summary>
		/// 执行命令的最长等待时间
		/// </summary>
		int CommandTimeout
		{
			get;set;
		}
		/// <summary>
		/// 最近一次操作的异常信息
		/// </summary>
		Exception Error
		{
			get;
		}
		/// <summary>
		/// 当前的数据库提供者
		/// </summary>
		string Driver
		{
			get;
		}
		/// <summary>
		/// 构造一个参数对象
		/// </summary>
		/// <param name="name"></param>
		/// <param name="val"></param>
		/// <returns></returns>
		IDbDataParameter CreateParameter(string name,object val);
		/// <summary>
		/// 得到SQL语句结果集的描述信息
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		DataTable GetSchemaTable(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 得到SQL语句结果集的描述信息
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		DataTable GetSchemaStruct(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 执行SQL语句返回一个IDataReader，内部数据库连接在IDataReader.Close时关闭。
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		IDataReader ExecuteDataReader(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 执行SQL语句返回一个IDataReader，内部数据库连接在IDataReader.Close时关闭。
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="behavior"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		IDataReader ExecuteDataReader(string sqlstr,CommandBehavior behavior,params IDbDataParameter[] args);
		/// <summary>
		/// 执行SQL语句返回一个DataSet
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		DataSet ExecuteDataSet(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 执行SQL语句返回一个标量值
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		object ExecuteScalar(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 执行不返回结果集的SQL语句，通常是DDL或非SELECT DML
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		void ExecuteNonQuery(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 在同一个事务中执行多条非查询SQL
		/// </summary>
		/// <param name="sqlstrs"></param>
		void ExecuteNonQuery2(params string[] sqlstrs);
		/// <summary>
		/// 在同一个事务中执行多条查询SQL，返回一个DataSet
		/// </summary>
		/// <param name="sqlstrs"></param>
		/// <returns></returns>
		DataSet ExecuteDataSet2(params string[] sqlstrs);
		/// <summary>
		/// 开始一个更新事务，返回供更新的DataSet
		/// </summary>
		/// <param name="sqlstr"></param>
		/// <param name="args"></param>
		/// <returns></returns>
		DataSet BeginUpdate(string sqlstr,params IDbDataParameter[] args);
		/// <summary>
		/// 开始一个更新事务，返回供更新的DataSet
		/// </summary>
		/// <param name="sqlstrs"></param>
		/// <returns></returns>
		DataSet BeginUpdate2(params string[] sqlstrs);
		/// <summary>
		/// 结束更新事务，与BeginUpdate/BeginUpdate2成对使用，参数必须是前面开始更新事务时返回的DataSet，
		/// 当然，其中的数据已经被更新过。
		/// </summary>
		/// <param name="ds"></param>
		void EndUpdate(DataSet ds);
	}
	/// <summary>
	/// 数据访问类型，对应.NET中的几类数据提供者，用于引导数据访问工厂创建对应的数据访问对象
	/// </summary>
	public enum DataAccessType : int
	{
		SQL,OleDb,Oracle,Odbc
	}
}

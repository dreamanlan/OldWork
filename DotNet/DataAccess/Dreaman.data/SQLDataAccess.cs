using System;
using System.Data;
using System.Data.SqlClient;

namespace Dreaman.DataAccess
{
	/// <summary>
	/// SQLDataAccess 的摘要说明。
	/// </summary>
	public class SQLDataAccess : IDataAccess
	{
		public SQLDataAccess(string connstr)
		{
			this.ConnStr=connstr;
		}
		public int CommandTimeout
		{
			get
			{
				return cmdTimeout;
			}
			set
			{
				cmdTimeout=value;
			}
		}
		public Exception Error
		{
			get{return error;}
		}
		public string Driver
		{
			get
			{
				error=null;
				return "SQLSERVER";
			}
		}

		public IDbDataParameter CreateParameter(string name,object val)
		{
			return new SqlParameter(name,val);
		}

		public DataTable GetSchemaTable(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlCommand myCmd=new SqlCommand(sqlstr,myConn);
				myCmd.CommandTimeout=CommandTimeout;
				try
				{
					myConn.Open();
					foreach(IDbDataParameter arg in args)
					{
						if(myCmd.CommandType!=CommandType.StoredProcedure)
							myCmd.CommandType=CommandType.StoredProcedure;
						myCmd.Parameters.Add(arg);
					}				
					SqlDataReader myReader=myCmd.ExecuteReader(CommandBehavior.KeyInfo);
					return myReader.GetSchemaTable();
				}
				catch(SqlException ex)
				{
					error=ex;
					return null;
				}
				finally
				{
					myConn.Close();
					myCmd.Dispose();
					myConn.Dispose();
				}
			}
		}
		public DataTable GetSchemaStruct(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlCommand myCmd=new SqlCommand(sqlstr,myConn);
				myCmd.CommandTimeout=CommandTimeout;
				try
				{
					DataTable dt=new DataTable();
					myConn.Open();
					foreach(IDbDataParameter arg in args)
					{
						if(myCmd.CommandType!=CommandType.StoredProcedure)
							myCmd.CommandType=CommandType.StoredProcedure;
						myCmd.Parameters.Add(arg);
					}
					SqlDataAdapter myAdapter=new SqlDataAdapter(myCmd);
					myAdapter.MissingMappingAction=MissingMappingAction.Passthrough;
					myAdapter.MissingSchemaAction=MissingSchemaAction.AddWithKey;
					myAdapter.FillSchema(dt,SchemaType.Mapped);
					myAdapter.Dispose();
					return dt;
				}
				catch(SqlException ex)
				{
					error=ex;
					return null;
				}
				finally
				{
					myConn.Close();
					myCmd.Dispose();
					myConn.Dispose();
				}
			}
		}
		public IDataReader ExecuteDataReader(string sqlstr,params IDbDataParameter[] args)
		{
			return ExecuteDataReader(sqlstr,CommandBehavior.CloseConnection,args);
		}
		public IDataReader ExecuteDataReader(string sqlstr,CommandBehavior behavior,params IDbDataParameter[] args)
		{
			error=null;
			behavior |= CommandBehavior.CloseConnection;
			SqlConnection myConn=new SqlConnection(this.ConnStr);
			myConn.StateChange+=new StateChangeEventHandler(Connection_StateChange);
			SqlCommand myCmd=new SqlCommand(sqlstr,myConn);
			myCmd.CommandTimeout=CommandTimeout;
			SqlDataReader myReader;
			try
			{
				myConn.Open();
				foreach(IDbDataParameter arg in args)
				{
					if(myCmd.CommandType!=CommandType.StoredProcedure)
						myCmd.CommandType=CommandType.StoredProcedure;
					myCmd.Parameters.Add(arg);
				}
				myReader=myCmd.ExecuteReader(behavior);
			}
			catch(SqlException ex)
			{
				error=ex;
				return null;
			}
			finally
			{
				//myConn.Close();
				//myCmd.Dispose();
				//myConn.Dispose();
			}
			return myReader;
		}
		private void Connection_StateChange(object sender, StateChangeEventArgs e)
		{
			if(e.CurrentState==ConnectionState.Closed)
			{
				SqlConnection myConn = sender as SqlConnection;
				myConn.Dispose();
			}
		}

		public DataSet ExecuteDataSet(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlDataAdapter myDataAdapter=new SqlDataAdapter();
				myDataAdapter.SelectCommand=new SqlCommand();
				myDataAdapter.SelectCommand.Connection=myConn;
				DataSet dataSet=new DataSet();
				try
				{
					myConn.Open();
					SqlCommand myCmd=myDataAdapter.SelectCommand;
					myCmd.CommandTimeout=CommandTimeout;
					myCmd.CommandText=sqlstr;
					foreach(IDbDataParameter arg in args)
					{
						if(myCmd.CommandType!=CommandType.StoredProcedure)
							myCmd.CommandType=CommandType.StoredProcedure;
						myCmd.Parameters.Add(arg);
					}
					myDataAdapter.Fill(dataSet);
				}
				catch(SqlException ex)
				{
					error=ex;
					return null;
				}
				finally
				{
					myConn.Close();
					myDataAdapter.SelectCommand.Dispose();
					myDataAdapter.Dispose();
					myConn.Dispose();
				}
				return dataSet;
			}
		}

		public Object ExecuteScalar(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlCommand myCmd=new SqlCommand(sqlstr,myConn);
				myCmd.CommandTimeout=CommandTimeout;
				Object Result;
				try
				{
					myConn.Open();
					foreach(IDbDataParameter arg in args)
					{
						if(myCmd.CommandType!=CommandType.StoredProcedure)
							myCmd.CommandType=CommandType.StoredProcedure;
						myCmd.Parameters.Add(arg);
					}
					Result=myCmd.ExecuteScalar();
				}
				catch(SqlException ex)
				{
					error=ex;
					return null;
				}
				finally
				{
					myConn.Close();
					myCmd.Dispose();
					myConn.Dispose();
				}
				return Result;
			}
		}

		public void ExecuteNonQuery(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlCommand myCmd=new SqlCommand();
				myCmd.CommandTimeout=CommandTimeout;
				myCmd.Connection=myConn;
				try
				{
					myConn.Open();
					myCmd.CommandText=sqlstr;
					foreach(IDbDataParameter arg in args)
					{
						if(myCmd.CommandType!=CommandType.StoredProcedure)
							myCmd.CommandType=CommandType.StoredProcedure;
						myCmd.Parameters.Add(arg);
					}
					myCmd.ExecuteNonQuery();
				}
				catch(SqlException ex)
				{
					error=ex;
				}
				finally
				{
					myConn.Close();
					myCmd.Dispose();
					myConn.Dispose();
				}
			}
		}

		public void ExecuteNonQuery2(params string[] sqlstrs)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlCommand myCmd=new SqlCommand();
				myCmd.CommandTimeout=CommandTimeout;
				myCmd.Connection=myConn;
				SqlTransaction myTrans=null;
				try
				{
					myConn.Open();
					myTrans=myConn.BeginTransaction();
					myCmd.Transaction=myTrans;
					foreach(string sqlstr in sqlstrs)
					{
						myCmd.CommandText=sqlstr;
						myCmd.ExecuteNonQuery();
					}
					myTrans.Commit();
				}
				catch(SqlException ex)
				{
					error=ex;
					if(myTrans!=null)
						myTrans.Rollback();
				}
				finally
				{
					myConn.Close();
					myCmd.Dispose();
					myConn.Dispose();
				}
			}
		}
		public DataSet ExecuteDataSet2(params string[] sqlstrs)
		{
			error=null;
			using(SqlConnection myConn=new SqlConnection(this.ConnStr))
			{
				SqlDataAdapter myDataAdapter=new SqlDataAdapter();
				myDataAdapter.SelectCommand=new SqlCommand();
				myDataAdapter.SelectCommand.CommandTimeout=CommandTimeout;
				myDataAdapter.SelectCommand.Connection=myConn;
				DataSet dataSet=new DataSet();
				SqlTransaction myTrans=null;
				try
				{
					myConn.Open();
					myTrans=myConn.BeginTransaction();
					myDataAdapter.SelectCommand.Transaction=myTrans;
					//string sqlstrt="",prestr="";
					string tableName="TABLE";
					int tableIndex=0;
					foreach(string sqlstr in sqlstrs)
					{
						myDataAdapter.SelectCommand.CommandText=sqlstr;
						if(tableIndex==0)
							myDataAdapter.Fill(dataSet,tableName);
						else
							myDataAdapter.Fill(dataSet,tableName+tableIndex);
						tableIndex++;
						//sqlstrt+=prestr+sqlstr;
						//prestr=";";
					}
					//myDataAdapter.SelectCommand.CommandText=sqlstrt;
					//myDataAdapter.Fill(dataSet);
					myTrans.Commit();
				}
				catch(SqlException ex)
				{
					error=ex;
					if(myTrans!=null)
						myTrans.Rollback();
					return null;
				}
				finally
				{
					myConn.Close();
					myDataAdapter.SelectCommand.Dispose();
					myDataAdapter.Dispose();
					myConn.Dispose();
				}
				return dataSet;
			}
		}
		
		public DataSet BeginUpdate(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			if(updateConn!=null || updateAdapter!=null || updateCmdBuilder!=null)
			{
				error=new Exception("BeginUpdate/BeginUpdate2与EndUpdate必须成对使用,不能嵌套!");
				return null;
			}
			updateConn=new SqlConnection(this.ConnStr);
			updateAdapter=new SqlDataAdapter();
			updateAdapter.SelectCommand=new SqlCommand();
			updateAdapter.SelectCommand.Connection=updateConn;
			updateCmdBuilder=new SqlCommandBuilder(updateAdapter);
			DataSet dataSet=new DataSet();
			try
			{
				updateConn.Open();
				SqlCommand myCmd=updateAdapter.SelectCommand;
				myCmd.CommandTimeout=CommandTimeout;
				myCmd.CommandText=sqlstr;
				foreach(IDbDataParameter arg in args)
				{
					if(myCmd.CommandType!=CommandType.StoredProcedure)
						myCmd.CommandType=CommandType.StoredProcedure;
					myCmd.Parameters.Add(arg);
				}
				updateAdapter.Fill(dataSet);
			}
			catch(SqlException ex)
			{
				error=ex;
				return null;
			}
			return dataSet;
		}
		public DataSet BeginUpdate2(params string[] sqlstrs)
		{
			error=null;
			if(updateConn!=null || updateAdapter!=null || updateCmdBuilder!=null)
			{
				error=new Exception("BeginUpdate/BeginUpdate2与EndUpdate必须成对使用,不能嵌套!");
				return null;
			}
			updateConn=new SqlConnection(this.ConnStr);
			updateAdapter=new SqlDataAdapter();
			updateAdapter.SelectCommand=new SqlCommand();
			updateAdapter.SelectCommand.CommandTimeout=CommandTimeout;
			updateAdapter.SelectCommand.Connection=updateConn;
			updateCmdBuilder=new SqlCommandBuilder(updateAdapter);
			DataSet dataSet=new DataSet();
			SqlTransaction myTrans=null;
			try
			{
				updateConn.Open();
				myTrans=updateConn.BeginTransaction();
				updateAdapter.SelectCommand.Transaction=myTrans;
				//string sqlstrt="",prestr="";
				string tableName="TABLE";
				int tableIndex=0;
				foreach(string sqlstr in sqlstrs)
				{
					updateAdapter.SelectCommand.CommandText=sqlstr;
					if(tableIndex==0)
						updateAdapter.Fill(dataSet,tableName);
					else
						updateAdapter.Fill(dataSet,tableName+tableIndex);
					tableIndex++;
					//sqlstrt+=prestr+sqlstr;
					//prestr=";";
				}
				//updateAdapter.SelectCommand.CommandText=sqlstrt;
				//updateAdapter.Fill(dataSet);
				myTrans.Commit();
			}
			catch(SqlException ex)
			{
				error=ex;
				if(myTrans!=null)
					myTrans.Rollback();
				return null;
			}
			return dataSet;
		}
		public void EndUpdate(DataSet ds)
		{
			error=null;
			if(updateConn==null || updateAdapter==null || updateCmdBuilder==null)
			{
				error=new Exception("BeginUpdate/BeginUpdate2与EndUpdate必须成对使用,不能嵌套!");
			}
			using(updateConn)
			{
				SqlTransaction myTrans=null;
				try
				{
					myTrans=updateConn.BeginTransaction();
					updateAdapter.SelectCommand.Transaction=myTrans;
					updateCmdBuilder.RefreshSchema();
					updateAdapter.Update(ds);
					myTrans.Commit();
				}
				catch(SqlException ex)
				{
					error=ex;
					if(myTrans!=null)
						myTrans.Rollback();
				}
				finally
				{
					updateConn.Close();
					updateAdapter.SelectCommand.Dispose();
					updateAdapter.Dispose();
					updateCmdBuilder.Dispose();
					updateConn.Dispose();
				
					updateAdapter=null;
					updateCmdBuilder=null;
					updateConn=null;
				}
			}
		}

		private string ConnStr=null;
		private Exception error=null;
		private SqlConnection updateConn=null;
		private SqlCommandBuilder updateCmdBuilder=null;
		private SqlDataAdapter updateAdapter=null;
		private int cmdTimeout=30;

	}//类SQLDataAccess  结束定义
}

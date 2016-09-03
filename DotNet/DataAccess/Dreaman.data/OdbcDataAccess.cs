using System;
using System.Data;
using System.Data.Odbc;

namespace Dreaman.DataAccess
{
	/// <summary>
	/// OdbcDataAccess 的摘要说明。
	/// </summary>
	public class OdbcDataAccess : IDataAccess
	{
		public OdbcDataAccess(string connstr)
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
				using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
				{
					try
					{
						myConn.Open();
						return myConn.Driver;
					}
					catch(OdbcException ex)
					{
						error=ex;
						return null;
					}
					finally
					{
						myConn.Close();
						myConn.Dispose();
					}
				}
			}
		}

		public IDbDataParameter CreateParameter(string name,object val)
		{
			return new OdbcParameter(name,val);
		}

		public DataTable GetSchemaTable(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcCommand myCmd=new OdbcCommand(sqlstr,myConn);
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
					OdbcDataReader myReader=myCmd.ExecuteReader(CommandBehavior.KeyInfo);
					return myReader.GetSchemaTable();
				}
				catch(OdbcException ex)
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
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcCommand myCmd=new OdbcCommand(sqlstr,myConn);
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
					OdbcDataAdapter myAdapter=new OdbcDataAdapter(myCmd);
					myAdapter.MissingMappingAction=MissingMappingAction.Passthrough;
					myAdapter.MissingSchemaAction=MissingSchemaAction.AddWithKey;
					myAdapter.FillSchema(dt,SchemaType.Mapped);
					myAdapter.Dispose();
					return dt;
				}
				catch(OdbcException ex)
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
			OdbcConnection myConn = new OdbcConnection(this.ConnStr);
			myConn.StateChange+=new StateChangeEventHandler(Connection_StateChange);
			OdbcCommand myCmd=new OdbcCommand(sqlstr,myConn);
			myCmd.CommandTimeout=CommandTimeout;
			OdbcDataReader myReader;
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
			catch(OdbcException ex)
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
				OdbcConnection myConn = sender as OdbcConnection;
				myConn.Dispose();
			}
		}
		public DataSet ExecuteDataSet(string sqlstr,params IDbDataParameter[] args)
		{
			error=null;
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcDataAdapter myDataAdapter=new OdbcDataAdapter();
				myDataAdapter.SelectCommand=new OdbcCommand();
				myDataAdapter.SelectCommand.Connection=myConn;
				DataSet dataSet=new DataSet();
				try
				{
					myConn.Open();
					OdbcCommand myCmd=myDataAdapter.SelectCommand;
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
				catch(OdbcException ex)
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
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcCommand myCmd=new OdbcCommand(sqlstr,myConn);
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
				catch(OdbcException ex)
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
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcCommand myCmd=new OdbcCommand();
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
				catch(OdbcException ex)
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
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcCommand myCmd=new OdbcCommand();
				myCmd.CommandTimeout=CommandTimeout;
				myCmd.Connection=myConn;
				OdbcTransaction myTrans=null;
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
				catch(OdbcException ex)
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
			using(OdbcConnection myConn=new OdbcConnection(this.ConnStr))
			{
				OdbcDataAdapter myDataAdapter=new OdbcDataAdapter();
				myDataAdapter.SelectCommand=new OdbcCommand();			
				myDataAdapter.SelectCommand.CommandTimeout=CommandTimeout;
				myDataAdapter.SelectCommand.Connection=myConn;
				DataSet dataSet=new DataSet();
				OdbcTransaction myTrans=null;
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
				catch(OdbcException ex)
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
			updateConn = new OdbcConnection(this.ConnStr);
			updateAdapter=new OdbcDataAdapter();
			updateAdapter.SelectCommand=new OdbcCommand();
			updateAdapter.SelectCommand.Connection=updateConn;
			updateCmdBuilder=new OdbcCommandBuilder(updateAdapter);
			DataSet dataSet=new DataSet();
			try
			{
				updateConn.Open();
				OdbcCommand myCmd=updateAdapter.SelectCommand;
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
			catch(OdbcException ex)
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
			updateConn = new OdbcConnection(this.ConnStr);
			updateAdapter=new OdbcDataAdapter();
			updateAdapter.SelectCommand=new OdbcCommand();
			updateAdapter.SelectCommand.CommandTimeout=CommandTimeout;
			updateAdapter.SelectCommand.Connection=updateConn;
			updateCmdBuilder=new OdbcCommandBuilder(updateAdapter);
			DataSet dataSet=new DataSet();
			OdbcTransaction myTrans=null;
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
			catch(OdbcException ex)
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
				OdbcTransaction myTrans=null;
				try
				{
					myTrans=updateConn.BeginTransaction();
					updateAdapter.SelectCommand.Transaction=myTrans;
					updateCmdBuilder.RefreshSchema();
					updateAdapter.Update(ds);
					myTrans.Commit();
				}
				catch(OdbcException ex)
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
		private OdbcConnection updateConn=null;
		private OdbcCommandBuilder updateCmdBuilder=null;
		private OdbcDataAdapter updateAdapter=null;
		private int cmdTimeout=30;
		
	}//类OdbcDataAccess  结束定义
}

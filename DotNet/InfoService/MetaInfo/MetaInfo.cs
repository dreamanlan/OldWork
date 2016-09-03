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

namespace Dreaman.InfoService
{
	/// <summary>
	/// 数据库类型,服务器端常用的三类数据库(不考虑客户端常用的ACCESS)
	/// </summary>
	public enum DataBaseType : int
	{
		SQLSERVER,
		ORACLE,
		SYBASE,
		OTHER
	}
	public class DataAccessInfo
	{
		public string ConnectionString
		{
			get{return connStr;}
			set
			{
				connStr=value;
				IDataAccess dataAccess=DataAccessFactory.Produce(DAType,value);
				string driver=dataAccess.Driver.ToUpper();
				if(driver.IndexOf("ORA")>=0)
				{
					dbType=DataBaseType.ORACLE;
					leftEsc="\"";
					rightEsc="\"";
				}
				else if(driver.IndexOf("SYB")>=0)
				{
					dbType=DataBaseType.SYBASE;
					leftEsc="";
					rightEsc="";
				}
				else if(driver.IndexOf("SQL")>=0)
				{
					dbType=DataBaseType.SQLSERVER;
					leftEsc="[";
					rightEsc="]";
				}
				else
				{
					dbType=DataBaseType.OTHER;
					leftEsc="";
					rightEsc="";
				}				
			}
		}
		public DataAccessType DAType
		{
			get{return type;}
			set
			{
				type=value;
			}
		}
		public DataBaseType DBType
		{
			get
			{
				return dbType;
			}
		}
		public string LeftEscape
		{
			get{return leftEsc;}
		}
		public string RightEscape
		{
			get{return rightEsc;}
		}
		public string EscapeName(string name)
		{
			bool useEscape=true;
			char[] expChar={' ','	','+','-','*','/','%','&','|','~','!','^','(',')',',',';','?',':','\'','"','{','}','=','<','>','[',']'};
			string[] names=name.Split('.');
			for(int i=0;i<names.Length;i++)
			{
				if(names[i].Trim().IndexOfAny(expChar)>=0)
				{
					useEscape=false;
					break;
				}
				else
				{
					names[i]=names[i].Trim();
				}
			}
			if(useEscape)
			{
				names[names.Length-1]=LeftEscape+names[names.Length-1]+RightEscape;
				return string.Join(".",names);
			}
			else
			{
				return name;
			}
		}
		public string EscapeValue(string val)
		{
			return val.Replace("'","''");
		}
		/// <summary>
		/// 返回表的各字段如下:
		///		["IsReadOnly"]			bool
		///		["ColumnOrdinal"]		int32
		///		["BaseTableName"]		string
		///		["IsKey"]				bool
		///		["ColumnSize"]			int32
		///		["NumericPrecision"]	int16
		///		["ColumnName"]			string
		///		["BaseColumnName"]		string
		///		["NumericScale"]		int16
		///		["AllowDBNull"]			bool
		///		["IsAutoIncrement"]		bool
		///		["BaseCatalogName"]		string
		///		["ProviderType"]		int32
		///		["IsLong"]				bool
		///		["IsUnique"]			bool
		///		["IsRowVersion"]		bool
		///		["DataType"]			System.Type
		///		["BaseSchemaName"]		string
		/// </summary>
		/// <param name="sqlstr">这个SQL语句最好仅返回空的表头,不返回任何记录,特别是表中包含二进制字段的时候!</param>
		/// <returns></returns>
		public DataTable GetFieldsSchema(string sqlstr)
		{
			IDataAccess dataAccess=DataAccessFactory.Produce(DAType,ConnectionString);
			DataTable dt=dataAccess.GetSchemaTable(sqlstr);
			if(dt==null)
			{
				throw dataAccess.Error;
			}
			return dt;
		}
		public DataAccessInfo(DataAccessType daType,string connstr)
		{
			DAType=daType;
			ConnectionString=connstr;
		}

		private DataAccessType type=DataAccessType.OleDb;
		private string connStr=null;
		private DataBaseType dbType=DataBaseType.SQLSERVER;
		private string leftEsc="[";
		private string rightEsc="]";
	}
}

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
	public class MetadataUtility
	{
		public static string OleDbConnectionString
		{
			get
			{
				return connStr;
			}
			set
			{
				connStr=value;
			}
		}
		public static DataTable GetCatalogs()
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Catalogs,new object[]{null});
			myConn.Close();
			return dt;
		}
		public static DataTable GetSchemata()
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Schemata,new object[]{null,null,null});
			myConn.Close();
			return dt;
		}
		public static DataTable GetTables(string tablename,string tabletype)
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Tables,new object[]{null,null,tablename,tabletype});
			myConn.Close();
			return dt;
		}
		public static DataTable GetColumns(string tablename,string columnname)
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Columns,new object[]{null,null,tablename,columnname});
			myConn.Close();
			return dt;
		}
		public static DataTable GetPrimaryColumns(string tablename)
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Primary_Keys,new object[]{null,null,tablename});
			myConn.Close();
			return dt;
		}
		public static DataTable GetForeignColumns(string pktablename,string fktablename)
		{
			OleDbConnection myConn=new OleDbConnection(OleDbConnectionString);
			myConn.Open();
			DataTable dt=myConn.GetOleDbSchemaTable(OleDbSchemaGuid.Foreign_Keys,new object[]{null,null,pktablename,null,null,fktablename});
			myConn.Close();
			return dt;
		}
		private MetadataUtility()
		{}
		private static string connStr=null;
	}
}

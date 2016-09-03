using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using Dreaman.DataAccess;

namespace TestApp
{
	/// <summary>
	/// Form1 的摘要说明。
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.DataGrid dgSql;
		private System.Windows.Forms.DataGrid dgOleDb;
		private System.Windows.Forms.DataGrid dgOdbc;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Button btnOracle;
		private System.Windows.Forms.Button btnSql;
		private System.Windows.Forms.Button btnOleDb;
		private System.Data.SqlClient.SqlConnection sqlConnection1;
		private System.Windows.Forms.TextBox txtResult;
		private System.Windows.Forms.DataGrid dgOracle;
		private System.Data.OracleClient.OracleConnection oracleConnection1;
		private System.Data.Odbc.OdbcConnection odbcConnection1;
		private System.Data.OleDb.OleDbConnection oleDbConnection1;
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Windows 窗体设计器支持所必需的
			//
			InitializeComponent();

			//
			// TODO: 在 InitializeComponent 调用后添加任何构造函数代码
			//
		}

		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows 窗体设计器生成的代码
		/// <summary>
		/// 设计器支持所需的方法 - 不要使用代码编辑器修改
		/// 此方法的内容。
		/// </summary>
		private void InitializeComponent()
		{
			System.Configuration.AppSettingsReader configurationAppSettings = new System.Configuration.AppSettingsReader();
			this.dgSql = new System.Windows.Forms.DataGrid();
			this.dgOleDb = new System.Windows.Forms.DataGrid();
			this.dgOracle = new System.Windows.Forms.DataGrid();
			this.dgOdbc = new System.Windows.Forms.DataGrid();
			this.button1 = new System.Windows.Forms.Button();
			this.btnOracle = new System.Windows.Forms.Button();
			this.btnSql = new System.Windows.Forms.Button();
			this.btnOleDb = new System.Windows.Forms.Button();
			this.sqlConnection1 = new System.Data.SqlClient.SqlConnection();
			this.txtResult = new System.Windows.Forms.TextBox();
			this.oracleConnection1 = new System.Data.OracleClient.OracleConnection();
			this.odbcConnection1 = new System.Data.Odbc.OdbcConnection();
			this.oleDbConnection1 = new System.Data.OleDb.OleDbConnection();
			((System.ComponentModel.ISupportInitialize)(this.dgSql)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOleDb)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOracle)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOdbc)).BeginInit();
			this.SuspendLayout();
			// 
			// dgSql
			// 
			this.dgSql.DataMember = "";
			this.dgSql.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dgSql.Location = new System.Drawing.Point(32, 48);
			this.dgSql.Name = "dgSql";
			this.dgSql.Size = new System.Drawing.Size(360, 120);
			this.dgSql.TabIndex = 0;
			// 
			// dgOleDb
			// 
			this.dgOleDb.DataMember = "";
			this.dgOleDb.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dgOleDb.Location = new System.Drawing.Point(24, 232);
			this.dgOleDb.Name = "dgOleDb";
			this.dgOleDb.Size = new System.Drawing.Size(368, 128);
			this.dgOleDb.TabIndex = 1;
			// 
			// dgOracle
			// 
			this.dgOracle.AllowSorting = ((bool)(configurationAppSettings.GetValue("dgOracle.AllowSorting", typeof(bool))));
			this.dgOracle.DataMember = "";
			this.dgOracle.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dgOracle.Location = new System.Drawing.Point(544, 56);
			this.dgOracle.Name = "dgOracle";
			this.dgOracle.ReadOnly = ((bool)(configurationAppSettings.GetValue("dgOracle.ReadOnly", typeof(bool))));
			this.dgOracle.Size = new System.Drawing.Size(360, 112);
			this.dgOracle.TabIndex = 2;
			// 
			// dgOdbc
			// 
			this.dgOdbc.DataMember = "";
			this.dgOdbc.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dgOdbc.Location = new System.Drawing.Point(536, 232);
			this.dgOdbc.Name = "dgOdbc";
			this.dgOdbc.Size = new System.Drawing.Size(368, 128);
			this.dgOdbc.TabIndex = 3;
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(544, 192);
			this.button1.Name = "button1";
			this.button1.TabIndex = 4;
			this.button1.Text = "Odbc";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// btnOracle
			// 
			this.btnOracle.Location = new System.Drawing.Point(544, 8);
			this.btnOracle.Name = "btnOracle";
			this.btnOracle.TabIndex = 5;
			this.btnOracle.Text = "Oracle";
			this.btnOracle.Click += new System.EventHandler(this.btnOracle_Click);
			// 
			// btnSql
			// 
			this.btnSql.Location = new System.Drawing.Point(32, 8);
			this.btnSql.Name = "btnSql";
			this.btnSql.TabIndex = 6;
			this.btnSql.Text = "Sql";
			this.btnSql.Click += new System.EventHandler(this.btnSql_Click);
			// 
			// btnOleDb
			// 
			this.btnOleDb.Location = new System.Drawing.Point(32, 192);
			this.btnOleDb.Name = "btnOleDb";
			this.btnOleDb.TabIndex = 7;
			this.btnOleDb.Text = "OleDb";
			this.btnOleDb.Click += new System.EventHandler(this.btnOleDb_Click);
			// 
			// sqlConnection1
			// 
			this.sqlConnection1.ConnectionString = "workstation id=ZHENG;packet size=4096;user id=sa;data source=ZHENG;persist securi" +
				"ty info=False;initial catalog=pubs";
			// 
			// txtResult
			// 
			this.txtResult.Location = new System.Drawing.Point(392, 184);
			this.txtResult.Name = "txtResult";
			this.txtResult.TabIndex = 8;
			this.txtResult.Text = "";
			// 
			// oracleConnection1
			// 
			this.oracleConnection1.ConnectionString = "user id=scott;data source=oracle9;persist security info=False";
			// 
			// odbcConnection1
			// 
			this.odbcConnection1.ConnectionString = "Trusted_Connection=Yes;UID=wangchao;DATABASE=pubs;APP={Microsoft? Visual Studio ." +
				"NET};DRIVER=SQL Server;WSID=ZHENG;SERVER=ZHENG";
			// 
			// oleDbConnection1
			// 
			this.oleDbConnection1.ConnectionString = "Provider=MSDAORA;User ID=scott;Data Source=oracle9;Password=tiger";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(6, 14);
			this.ClientSize = new System.Drawing.Size(936, 382);
			this.Controls.Add(this.txtResult);
			this.Controls.Add(this.btnOleDb);
			this.Controls.Add(this.btnSql);
			this.Controls.Add(this.btnOracle);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.dgOdbc);
			this.Controls.Add(this.dgOracle);
			this.Controls.Add(this.dgOleDb);
			this.Controls.Add(this.dgSql);
			this.Name = "Form1";
			this.Text = "Form1";
			((System.ComponentModel.ISupportInitialize)(this.dgSql)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOleDb)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOracle)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.dgOdbc)).EndInit();
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// 应用程序的主入口点。
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void btnSql_Click(object sender, System.EventArgs e)
		{
			string SqlConn="workstation id=lan;packet size=4096;user id=sa;password=sa;data source=lan;persist security info=False;initial catalog=pubs";
			IDataAccess dataAccess=DataAccessFactory.Produce(DataAccessType.SQL,SqlConn);
			DataSet ds=dataAccess.ExecuteDataSet2("select * from authors","select * from jobs");
			dgSql.DataSource=dataAccess.GetSchemaTable("select * from authors");

			txtResult.Text=dataAccess.ExecuteScalar("select * from authors").ToString();
			IDataReader dr=dataAccess.ExecuteDataReader("select * from authors");
			while(dr.Read())
			{
				txtResult.Text+=dr[1];
			}
			dr.Close();
			dataAccess.ExecuteNonQuery("select * from authors");
		}

		private void btnOracle_Click(object sender, System.EventArgs e)
		{
			string OracleConn="user id=scott;data source=richway;password=tiger";
			IDataAccess dataAccess=DataAccessFactory.Produce(DataAccessType.Oracle,OracleConn);
			DataSet ds=dataAccess.ExecuteDataSet2("select * from emp","select * from dept");
			dgOracle.DataSource=ds.Tables[1];

			txtResult.Text=dataAccess.ExecuteScalar("select * from emp").ToString();
			IDataReader dr=dataAccess.ExecuteDataReader("select * from emp");
			while(dr.Read())
			{
				txtResult.Text+=dr[1];
			}
			dr.Close();
			dataAccess.ExecuteNonQuery("select * from emp");
		}

		private void button1_Click(object sender, System.EventArgs e)
		{
			string OdbcConn="DSN=gisserver;SRVR=lan;DB=water;UID=sa;PWD=;";
			IDataAccess dataAccess=DataAccessFactory.Produce(DataAccessType.Odbc,OdbcConn);
			DataSet ds=dataAccess.ExecuteDataSet2("select * from authors","select * from jobs");
			dgOdbc.DataSource=dataAccess.GetSchemaTable("select * from authors");

			txtResult.Text=dataAccess.ExecuteScalar("select * from authors").ToString();
			IDataReader dr=dataAccess.ExecuteDataReader("select * from authors");
			while(dr.Read())
			{
				txtResult.Text+=dr[1];
			}
			dr.Close();
			dataAccess.ExecuteNonQuery("select * from authors");
		}

		private void btnOleDb_Click(object sender, System.EventArgs e)
		{
			string OleDbConn="Provider=SQLOLEDB;user id=sa;password=sa;data source=richway;persist security info=False;initial catalog=pubs";
			IDataAccess dataAccess=DataAccessFactory.Produce(DataAccessType.OleDb,OleDbConn);
			DataSet ds=dataAccess.ExecuteDataSet2("select * from authors","select * from jobs");
			dgOleDb.DataSource=dataAccess.GetSchemaTable("select * from authors");

			txtResult.Text=dataAccess.ExecuteScalar("select * from authors").ToString();
			IDataReader dr=dataAccess.ExecuteDataReader("select * from authors");
			while(dr.Read())
			{
				txtResult.Text+=dr[1];
			}
			dr.Close();
			dataAccess.ExecuteNonQuery("select * from authors");

			DataSet ds2=dataAccess.BeginUpdate("select * from jobs where job_id=2");
			DataTable dt=ds2.Tables[0];
			DataRow row=dt.Rows[0];
			row.BeginEdit();
			row["job_desc"]="test test test test test";
			row.EndEdit();
			//row.Delete();
			dataAccess.EndUpdate(ds2);
		}
	}
}

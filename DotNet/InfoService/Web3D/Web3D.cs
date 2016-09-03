using System;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.ComponentModel;
using System.Collections;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.IO;
using System.Text;
using System.Threading;

namespace Dreaman.InfoService
{	
	[ToolboxData("<{0}:Web3DControl runat=server></{0}:Web3DControl>")]
	public class Web3DControl : WebControl
	{
		/// <summary>
		/// 所用模板文件的虚似路径名(包括文件名)
		/// </summary>
		public string TemplateFile
		{
			set
			{
				templateFile=value;
			}
			get
			{
				return templateFile;
			}
		}
		public string FileKey
		{
			set
			{
				fileKey=value;
			}
			get
			{
				return fileKey;
			}
		}
		public string FileExt
		{
			set
			{
				fileExt=value;
			}
			get
			{
				return fileExt;
			}
		}
		protected override HtmlTextWriterTag TagKey
		{
			get
			{
				return HtmlTextWriterTag.Embed;
			}
		}
		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad (e);
			string vfilePath=TemplateGC.RequestFile(FileKey,FileExt);
			string filePath=this.Page.Server.MapPath(vfilePath);			
			StreamWriter sw=new StreamWriter(filePath);
			sw.Write(CodeGenerator.Exec(this.Page,TemplateFile).Trim());
			sw.Close();
			this.Attributes.Add("SRC",vfilePath);
		}
		private string templateFile=null;
		private string fileKey="UNKNOWN";
		private string fileExt="WRL";
	}
}

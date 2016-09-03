using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Drawing.Design;
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
using System.IO;
using System.Threading;

namespace Dreaman.InfoService
{	
	public class TemplateGC
	{		
		public static string TemplatePhysicalPath
		{
			set
			{
				templatePhysicalPath=value;
			}
			get
			{
				return templatePhysicalPath;
			}
		}
		public static string TemplateVirtualPath
		{
			set
			{
				templateVirtualPath=value;
			}
			get
			{
				return templateVirtualPath;
			}
		}
		public static void StartGC(HttpApplicationState app,int seconds)
		{
		{
			if(Directory.Exists(TemplatePhysicalPath+"\\one"))
				Directory.Delete(TemplatePhysicalPath+"\\one",true);			
			if(Directory.Exists(TemplatePhysicalPath+"\\two"))
				Directory.Delete(TemplatePhysicalPath+"\\two",true);
			fileCount=0;
			useFolder="One";
		}

			TemplateGC gc=new TemplateGC();
			app["TemplateGC"]=gc;
			Timer timer=new Timer(new TimerCallback(gc.GCTimerCallback),null,0,seconds);
			app["TemplateGCTimer"]=timer;
		}
		public static void EndGC(HttpApplicationState app)
		{
			Timer timer=app["TemplateGCTimer"] as Timer;
			if(timer!=null)
			{
				timer.Change(Timeout.Infinite,Timeout.Infinite);
				timer.Dispose();
			}
			app["TemplateGCTimer"]=null;
			app["TemplateGC"]=null;
		}
		public static string RequestFile(string key,string ext)
		{
			if(!Directory.Exists(TemplatePhysicalPath+"\\"+useFolder))
				Directory.CreateDirectory(TemplatePhysicalPath+"\\"+useFolder);
			fileCount++;
			string guidStr=Guid.NewGuid().ToString("N")+"_"+fileCount;
			string fileName=TemplateVirtualPath+"/"+useFolder+"/"+key+guidStr+"."+ext;
			return fileName;
		}
		private static string templatePhysicalPath=null;		
		private static string templateVirtualPath=null;
		private static ulong fileCount=0;
		private static string useFolder="One";

		public void GCTimerCallback(object o)
		{
			string oldFolder=useFolder;
			if(useFolder=="One")
			{
				useFolder="Two";
			}
			else
			{
				useFolder="One";
			}
			if(Directory.Exists(TemplatePhysicalPath+"\\"+oldFolder))
				Directory.Delete(TemplatePhysicalPath+"\\"+oldFolder,true);
		}
	}
	/// <summary>
	/// CodeGenerator 的摘要说明。
	/// </summary>
	public class CodeGenerator
	{
		public static string Exec(Page page,string tempFile)
		{
			Control c=page.LoadControl(tempFile);
			StringWriter sw=new StringWriter();
			c.RenderControl(new HtmlTextWriter(sw));
			sw.Close();
			return sw.ToString();
		}
	}
}

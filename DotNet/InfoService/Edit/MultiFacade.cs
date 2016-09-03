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
using Microsoft.Win32;
using System.Reflection;

namespace Dreaman.InfoService
{
	/// <summary>
	/// IMultiFacadeControl 的摘要说明。
	/// </summary>
	public interface IMultiFacadeControl
	{
		/// <summary>
		/// 将控件加入到父控件中,只要不使用界面设计器,应总是调用此方法来将控件加入到页面中,
		/// 此方法将触发控件状态的实际处理以生成控件当前界面。
		/// 返回值表明是否继续构造界面，为真时应该终止后续的任何界面相关的操作（此时响应流已关闭）。
		/// </summary>
		/// <param name="parent"></param>
		bool AddToParent(Control parent);
		/// <summary>
		/// 调整控件显示的上下文环境,使用界面设计器时,应调用此方法,因为控件的某些状态可能需要完整的
		/// 页面来显示，控件需要对页面作相应处理，不使用界面设计器时用上一方法即可。
		/// 此外,控件的客户端资源URL也需要借此处理。返回值表明是否继续构造界面，为真时应该终止后
		/// 续的任何界面相关的操作（此时响应流已关闭）。
		/// </summary>
		bool AdjustControlEnvironment();
		/// <summary>
		/// 改变控件到指定状态
		/// </summary>
		/// <param name="state">状态名</param>
		/// <param name="args">参数集合（名字/值对）</param>
		void ChangeState(string state,NameValueCollection args);
		/// <summary>
		/// 改变控件到指定状态
		/// </summary>
		/// <param name="state">状态名</param>
		/// <param name="args">参数数组，交替为：名，值，名，值，...</param>
		void ChangeState(string state,params string[] args);
	}
	public interface IControlState
	{
		/// <summary>
		/// 控件状态接口，第一个参数为组合控件，组合控件与其状态对象之间是紧耦合
		/// 所以这一参数总是会向下转型到具体的组合控件，用参数化类型是一个较好的
		/// 选择。（组合控件承担状态对象工厂的职责，同时为状态对象提供上下文）
		/// </summary>
		/// <param name="ctrl"></param>
		/// <param name="stateargs"></param>
		void Handle(IMultiFacadeControl ctrl,string stateargs);
	}
	public sealed class ContentEncoder
	{
		private ContentEncoder()
		{}
		/// <summary>
		/// 用作客户端HTML内容的字符串用此方法编码(客户端源码中看到编码后的内容)
		/// </summary>
		/// <param name="s"></param>
		/// <returns></returns>
		public static string HtmlEncode(string s)
		{
			string str=HttpContext.Current.Server.HtmlEncode(s);
			return str.Replace("'","&#39;");
		}
		/// <summary>
		/// 用作客户端脚本参数的字符串用此方法编码(这些字符串在客户端源代码中是常量字符串,客户端源码中看到编码后的内容)
		/// </summary>
		/// <param name="s"></param>
		/// <returns></returns>
		public static string StringEncode(string s)
		{
			return s.Replace("'","\\'").Replace("\"","\\\"\\\"");
		}
		/// <summary>
		/// 用作URL参数名或值的字符串的编码
		/// </summary>
		/// <param name="s"></param>
		/// <returns></returns>
		public static string UrlEncode(string s)
		{
			string str=HttpContext.Current.Server.UrlEncode(s);
			return str;
		}
	}
	public sealed class ControlStateUrl
	{		
		private ControlStateUrl()
		{}
		/// <summary>
		/// 构造请求特定状态界面的URL
		/// </summary>
		public static string BuildStateRequestUrl(string stateKey,string stateVal)
		{		
			UriBuilder ub=new UriBuilder(HttpContext.Current.Request.Url);
			if(ub.Query==null || ub.Query.Trim().Length<=0)
			{
				ub.Query=stateKey+"="+stateVal;
			}
			else
			{
				string val=HttpContext.Current.Request[stateKey];
				if(val==null)
					ub.Query=ub.Query.Substring(1)+"&"+stateKey+"="+stateVal;
				else
					ub.Query.Replace(stateKey+"="+val,stateKey+"="+stateVal);
			}
			return ub.Uri.ToString();
		}
		/// <summary>
		/// 构造资源请求URL
		/// </summary>
		/// <param name="resName"></param>
		/// <returns></returns>
		public static string BuildResourceRequestUrl(string resName)
		{
			if(resName.ToLower().StartsWith("res://"))
				return BuildStateRequestUrl("getresource",resName.Substring(6));
			else
				return resName;
		}
		/// <summary>
		/// 分析请求参数，若为资源请求则清空当前响应流写入资源响应并终止响应流
		/// </summary>
		/// <returns></returns>
		internal static bool HandleResourceRequest()
		{
			string resName=HttpContext.Current.Request["getresource"];
			if(resName!=null)
			{
				RequestEmbedResource(resName,typeof(ControlStateUrl).Assembly);
				return true;
			}
			return false;
		}
		/// <summary>
		/// 分析请求参数，若为资源请求则清空当前响应流写入资源响应并终止响应流
		/// </summary>
		/// <returns></returns>
		public static bool HandleResourceRequest(Assembly assembly)
		{
			string resName=HttpContext.Current.Request["getresource"];
			if(resName!=null)
			{
				RequestEmbedResource(resName,assembly);
				return true;
			}
			return false;
		}
		public static void RequestEmbedResource(string resName,Assembly assembly)
		{
			HttpResponse response=HttpContext.Current.Response;
			int li=resName.LastIndexOf('.');
			string ext=".bin";
			if(li>0)
				ext=resName.Substring(li).Trim();
			RegistryKey reg=Registry.ClassesRoot;
			RegistryKey subKey=reg.OpenSubKey(ext);
			string s=subKey.GetValue("Content Type") as string;
			if(s!=null)
				response.ContentType=s;
			else
				response.ContentType="application/octet-stream";

			string[] resNames=assembly.GetManifestResourceNames();
			foreach(string res in resNames)
			{
				if(string.Compare(res,resName,true)==0)
				{
					Stream stream=assembly.GetManifestResourceStream(res);
					response.Clear();
					if(stream==null)
					{
						response.StatusCode=404;
						response.End();
					}
					else
					{
						response.Clear();
						byte[] buf=new byte[stream.Length];
						stream.Read(buf,0,buf.Length);
						stream.Close();
						response.BinaryWrite(buf);
						response.End();
					}
					break;
				}
			}
		}
	}
}

using System;
using System.Collections;
using System.Collections.Specialized;
using System.Text;
using System.Text.RegularExpressions;
using Dreaman.DataAccess;
using Dreaman.InfoService;

namespace Dreaman.InfoService.Report
{
	/// <summary>
	/// IDataBlock 的摘要说明。
	/// </summary>
	public interface IDataBlock
	{
		/// <summary>
		/// 用当前数据块的值替换指定模板内容中的数据标签,一个值对应一个数据标签
		/// ,多出的标签被替换为空,多出的值不使用
		/// 这一方法主要用于基于模板的报表,模板通过数据标签被划分为若干数据块,
		/// 每个数据块对应一个IDataBlock,模板的求值过程便成为模板数据依次流过各
		/// 个IDataBlock后的输出(管道-过滤器模式)
		/// </summary>
		/// <param name="templateContent"></param>
		/// <param name="dataTag">
		/// 数据标签格式如下：(数据标签总是出现在单元格中，前后不要有空格,>出现在标签中用于替换为单元格中数据的类型)
		/// >$dataTag!fieldName$
		/// 或
		/// >$dataTag$
		/// 
		/// 识别正则表达式:
		/// 1、特定数据标签
		/// >\$dataTag(?:!(\w+))*\$
		/// 2、所有符合格式的可能标签
		/// \$(\w+)(?:!(\w+))*\$
		/// </param>
		/// <returns></returns>
		string Filter(string templateContent,string dataTag);
		/// <summary>
		/// 用于读取当前数据块UI的HTML代码,这里假定数据块知道它自己应如何显示,
		/// 或者委托给显示对象,不过我们假定数据块有一些实例数据指明它将要采用
		/// 哪个显示对象,并且数据块会调用相应的显示对象来求得显示结果（或者简
		/// 单的情形下数据块自己就知道如何生成它的显示）（换句话说，如果从MVC
		/// 的角度考虑，数据块既是模型，又是控制器，或者MVC全在数据块）
		/// 这一方法用于不使用模板的数据块或者对应于模板中的一个数据块标签(从
		/// 而有这样的情形,一个模板确定总的布局,它上面的每个数据标签对应一个数
		/// 据块,这样的数据块负责自己的显示)
		/// 现在看到的主要应用情形是作为模板里的数据块标签的替换，并且模板是基
		/// 于HTML的，典型情形是用EXCEL制作模板，另存为HTML文件（或MHTML文件，
		/// 因此可以嵌入图片之类的其它文件）作为模板文件
		/// </summary>
		string GetDataBlockUI(string[] fieldNames);
		/// <summary>
		/// 用于数据标签未指列的情形，即得到数据默认的显示UI
		/// </summary>
		/// <returns></returns>
		string GetDataBlockUI();
	}
	/// <summary>
	/// 用作替换一个数据标签的事件处理,fieldName为空表明标签中没有指明fieldName,index为
	/// 对应fieldName的标签序号
	/// </summary>
	public delegate string FilterDataLabel(string fieldName,int index);

	public sealed class DataBlockUtility
	{
		public static SQLDataBlock NewSQLDataBlock(string sql,DataAccessType datype,string connstr)
		{
			return new SQLDataBlock(sql,datype,connstr);
		}
		public HybridDictionary DataLabels
		{
			get
			{
				return dataLabels;
			}
		}
		public void ParseTemplate(string templateContent)
		{			
			templateContent=PreprocessTemplate(templateContent);
			//使用正则表达式来列出模板中所有可能的数据标签
			string regex = @"\$(\w+)(?:!(\w+))*\$";
			System.Text.RegularExpressions.RegexOptions options = ((System.Text.RegularExpressions.RegexOptions.IgnorePatternWhitespace | System.Text.RegularExpressions.RegexOptions.Multiline) 
				| System.Text.RegularExpressions.RegexOptions.IgnoreCase);
			System.Text.RegularExpressions.Regex reg = new System.Text.RegularExpressions.Regex(regex, options);
			MatchCollection mc=reg.Matches(templateContent);
			foreach(Match m in mc)
			{
				if(m.Groups[1].Captures.Count>0)
				{
					string tag=m.Groups[1].Value;
					StringCollection sc=DataLabels[tag] as StringCollection;
					if(sc==null)
					{
						sc=new StringCollection();
						DataLabels[tag]=sc;
					}
					foreach(Capture c in m.Groups[2].Captures)
					{
						string field=c.Value;
						if(sc.IndexOf(field)<0)
						{
							sc.Add(field);
						}
					}
				}
			}
		}

		public event FilterDataLabel FilterDataLabel;
		public string Filter(string templateContent, string dataTag)
		{
			templateContent=PreprocessTemplate(templateContent);
			lock(this)
			{				
				indexes=new HybridDictionary(true);
				nullIndex=0;
				//使用正则表达式来识别符合格式的数据标签,数据标签里包括的>是单元格TD标签的一部分,用来设定单元格数据类型,
				//如 x:num>,替换时应给出" x:num>"+fieldValue或">"+fieldValue的形式
				string regex = ">\\$"+dataTag+"(?:!(\\w+))*\\$";
				RegexOptions options = (RegexOptions.IgnorePatternWhitespace | RegexOptions.IgnoreCase);
				Regex reg = new Regex(regex,options);
				return reg.Replace(templateContent,new MatchEvaluator(this.MatchFilter));
			}
		}

		private string OnFilterDataLabel(string fieldName,int index)
		{
			if(FilterDataLabel!=null)
				return FilterDataLabel(fieldName,index);
			return ">";
		}

		//替换一个数据标签
		private string MatchFilter(Match match)
		{
			//对应Filter方法中的正则表达式，第二个组是数据标签里的fieldName部分，它可能为0个，1个或者多个
			//为1个是通常的按列替换，为0个采用数据块默认UI替换，为多个采用多列数据块UI替换。
			int ct=match.Groups[1].Captures.Count;
			if(ct>1)
			{
				string fieldName="",prestr="";
				foreach(Capture c in match.Groups[1].Captures)
				{
					fieldName+=prestr+c.Value;
					prestr=",";
				}

				object o=indexes[fieldName];
				if(o==null)
				{
					indexes[fieldName]=0;
					return OnFilterDataLabel(fieldName,0);
				}
				else
				{
					int i=(int)o+1;
					indexes[fieldName]=i;
					return OnFilterDataLabel(fieldName,i);
				}
			}
			else if(ct==1)
			{
				string fieldName=match.Groups[1].Value;

				object o=indexes[fieldName];
				if(o==null)
				{
					indexes[fieldName]=0;
					return OnFilterDataLabel(fieldName,0);
				}
				else
				{
					int i=(int)o+1;
					indexes[fieldName]=i;
					return OnFilterDataLabel(fieldName,i);
				}
			}
			else
			{
				return OnFilterDataLabel(null,nullIndex++);
			}
		}
		private string PreprocessTemplate(string templateContent)
		{
			//将公式定义单元格的内容清除
			string regex0 = @"
<td
	(?:
		(?:\s+(?!x:fmla)(?:\w+(?::\w+)?)(?:=(?:""[^""]*""|'[^']*'|\w*))?)*
		\s+x:fmla=(?:""[^""]*""|'[^']'|\w*)
		(?:\s+(?!x:fmla)(?:\w+(?:\:\w+)?)(?:=(?:""[^""]*""|'[^']*'|\w*))?)*
	)+
\s*>
(
	(?:
		<(?:(?!td)\w+)[^>]*>
		|
		</\s*(?:(?!td)\w+)\s*>
		|
		[^<]+
	)*
)
</\s*td\s*>";
			System.Text.RegularExpressions.RegexOptions options0 = ((System.Text.RegularExpressions.RegexOptions.IgnorePatternWhitespace | System.Text.RegularExpressions.RegexOptions.Multiline) 
				| System.Text.RegularExpressions.RegexOptions.IgnoreCase);
			System.Text.RegularExpressions.Regex reg0 = new System.Text.RegularExpressions.Regex(regex0, options0);
			templateContent=reg0.Replace(templateContent,new MatchEvaluator(this.ClearFormulaValue));
			//清除数据标签中的嵌入HTML标签,因为写成一个正则表达式对某些文档会倒致正则表达式分析死锁，我们将它分成若干个层次来处理
			//找出<td></td>中以$开头以$结尾的模式，在$与$之间有可能有<td></td>，在开始<td>与第一个$间只有非<td></td>HTML标签与&nbsp;
			//在第二个$与结束</td>之间也只有非<td></td>HTML标签与&nbsp;
			string regex = @"
<td[^>]*>
	(
		(?:
			(?:</\s*(?:(?!td)\w+)\s*>)
			|
			\s*&nbsp;\s*
		)*
	)
	(
		\$[^\$]+
	)
	(
		\$
		(?:
			<(?:(?!td)\w+)[^>]*>
			|
			(?:</\s*(?:(?!td)\w+)\s*>)
			|
			\s*&nbsp;\s*
		)*
	)
</\s*td\s*>";
			System.Text.RegularExpressions.RegexOptions options = ((System.Text.RegularExpressions.RegexOptions.IgnorePatternWhitespace | System.Text.RegularExpressions.RegexOptions.Multiline) 
				| System.Text.RegularExpressions.RegexOptions.IgnoreCase);
			System.Text.RegularExpressions.Regex reg = new System.Text.RegularExpressions.Regex(regex, options);
			return reg.Replace(templateContent,new MatchEvaluator(this.RemoveHtmlTag));
		}
		private string ClearFormulaValue(Match match)
		{
			if(match.Groups[1].Value.Length<=0)
				return match.Value;
			return match.Value.Replace(match.Groups[1].Value," ");
		}
		private string RemoveHtmlTag(Match match)
		{
			string tdContent=match.Value;

			string frontSpace=match.Groups[1].Value;
			string dataLabel=match.Groups[2].Value;
			string followSpace=match.Groups[3].Value;
			string repTarget=frontSpace+dataLabel+followSpace;
			//检查两个$之间的部分是否符合一个数据标签的模式，即除了非<td></td>HTML标签外，为“标识符 、 ！ 、 =\r\n” 的组合
			string regex0 = @"
\$
(?:
	(?:
		<(?:(?!td)\w+)[^>]*>
		|
		(?:</\s*(?:(?!td)\w+)\s*>)
	)*
	(?:
		!
		|
		\w+
		|
		=[\r\n]+
	)+
	(?:
		<(?:(?!td)\w+)[^>]*>
		|
		(?:</\s*(?:(?!td)\w+)\s*>)
	)*
)+";
			System.Text.RegularExpressions.RegexOptions options0 = ((System.Text.RegularExpressions.RegexOptions.IgnorePatternWhitespace | System.Text.RegularExpressions.RegexOptions.Multiline) 
				| System.Text.RegularExpressions.RegexOptions.IgnoreCase);
			System.Text.RegularExpressions.Regex reg0 = new System.Text.RegularExpressions.Regex(regex0, options0);

			Match m=reg0.Match(dataLabel);
			if(!(m.Success && m.Index==0 && m.Length==dataLabel.Length))
				return tdContent;

			string regex = @"<[^>]*>";
			System.Text.RegularExpressions.RegexOptions options = ((System.Text.RegularExpressions.RegexOptions.IgnorePatternWhitespace | System.Text.RegularExpressions.RegexOptions.Multiline) 
				| System.Text.RegularExpressions.RegexOptions.IgnoreCase);
			System.Text.RegularExpressions.Regex reg = new System.Text.RegularExpressions.Regex(regex, options);

			if(frontSpace.Trim().Length>0)
			{
				frontSpace=reg.Replace(frontSpace,"");
			}
			else
			{
				frontSpace="";
			}
			if(followSpace.Trim().Length>0)
			{
				followSpace=reg.Replace(followSpace,"");
			}
			else
			{
				followSpace="";
			}
			dataLabel=reg.Replace(dataLabel,"");
			//MHTML文件可能会有=\r\n出现在数据标签中，删除它们
			dataLabel=dataLabel.Replace("=","");
			dataLabel=dataLabel.Replace("\r","");
			dataLabel=dataLabel.Replace("\n","");
			return tdContent.Replace(repTarget,frontSpace+dataLabel+followSpace);
		}

		//用于记录模板处理过程中的字段值索引
		private HybridDictionary indexes=null;
		private int nullIndex=0;
		//用于记录模板中的数据标签的信息
		private HybridDictionary dataLabels=new HybridDictionary(true);
	}
}

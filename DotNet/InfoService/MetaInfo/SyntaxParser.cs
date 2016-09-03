using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Drawing.Design;
using System.IO;
using System.Data;
using System.Data.OleDb;
using System.Diagnostics;
using System.Text;
using Dreaman.DataAccess;
using NUnit.Framework;

namespace Dreaman.InfoService
{
	/// <summary>
	/// 标识符类型
	/// </summary>
	public enum ParserTokenType
	{
		KEYWORD,
		OPERATOR,
		IDENTIFY,
		SEPARATOR
	}
	/// <summary>
	/// 标识符类，一个标识符主要包括其单词与类型，这些信息在词法分析时确定
	/// </summary>
	public sealed class ParserToken
	{
		public string Word;
		public ParserTokenType Type;
		public ParserToken(){}
		public ParserToken(string word,ParserTokenType type)
		{
			Word=word;
			Type=type;
		}
	}
	/// <summary>
	/// 分析器使用的上下文接口,主要目的:
	/// 1、提供词法分析的结果
	/// 2、分析结果的处理
	/// </summary>
	public interface IParserContext
	{
		ParserToken PeekToken();//读取当前标识
		void AdvanceToken();//推进标识符缓冲队列
		void PushClause(object arg);//压入一个关键字子句，参数由消费方解释
									//通常应该传入子句类型一类的信息
		void AppendToClause(ParserToken t);//往栈顶关键字子句中加入一个标识
		void PopClause();//弹出一个关键字子句，通常在这里应针对此子句作些处理，
						 //通常应该将处理结果写入上一级的子句中
		int TokenPosition//标识符缓冲队列当前位置
		{
			get;set;
		}
	}
	/// <summary>
	/// 抽象子句，提供了子句行为的接口与复合子句的基本操作与方法
	/// </summary>
	public abstract class AbstractClause
	{
		/// <summary>
		/// 分析方法接口，分析功能委托ParseImpl实现,在这里调整公共的匹配失败时回溯需要的
		/// 标识符队列状态，因为这个分析器基于EBNF语法来解析，所以它必须支持回溯以确保正
		/// 确性，但EBNF通常是可以写成无需回溯的，如果是按LL（1）构造出的EBNF，则本分析
		/// 器不会回溯。另外一个功能是子句的处理（分析树的生成等），这些均委托到
		/// IParserContext的实现类。
		/// </summary>
		/// <param name="context"></param>
		/// <returns></returns>
		public bool Parse(IParserContext context)
		{
			//记忆标识符缓冲队列的状态
			context.PushClause(ClauseArgument);
			try
			{
				int pos=context.TokenPosition;
				if(!ParseImpl(context))
				{
					//如果失败则将标识符缓冲队列设定到进入此子句时的状态
					context.TokenPosition=pos;
					return false;
				}
				return true;
			}
			finally
			{
				context.PopClause();
			}
		}
		/// <summary>
		/// 分析功能的具体实现
		/// </summary>
		/// <param name="context"></param>
		/// <returns></returns>
		protected abstract bool ParseImpl(IParserContext context);
		protected virtual object ClauseArgument
		{
			get
			{
				return null;
			}
		}
		/// <summary>
		/// 用于存储调用IParserContext::PushClause的参数
		/// </summary>
		public AbstractClause this[object arg]
		{
			get
			{
				return new ArgumentClause(this,arg);
			}
		}
		public AbstractClause Or(params object[] args)
		{
			object[] clauses=new object[args.Length+1];
			clauses[0]=this;
			for(int i=1;i<=args.Length;i++)
			{
				clauses[i]=args[i-1];
			}
			return new OrClause(clauses);
		}
		public AbstractClause Repeat()//{0,}重复
		{
			return new RepeatClause(this,0,0);
		}		
		public AbstractClause Repeat(int n)//{n,}重复
		{
			return new RepeatClause(this,n,n);
		}
		public AbstractClause Repeat(int m,int n)//{m,n}重复
		{
			return new RepeatClause(this,m,n);
		}
		public AbstractClause And(params object[] args)
		{
			object[] clauses=new object[args.Length+1];
			clauses[0]=this;
			for(int i=1;i<=args.Length;i++)
			{
				clauses[i]=args[i-1];
			}
			return new AndClause(clauses);
		}
		public AbstractClause Alternative(params object[] args)
		{
			object[] clauses=new object[args.Length+1];
			clauses[0]=this;
			for(int i=1;i<=args.Length;i++)
			{
				clauses[i]=args[i-1];
			}
			return new AlternativeClause(clauses);
		}
		public static AbstractClause Nilpotent
		{
			get
			{
				return nilpotent;
			}
		}
		public static AbstractClause Identic
		{
			get
			{
				return identic;
			}
		}
		public static TerminalClause Terminal
		{
			get
			{
				return terminal;
			}
		}
		public static AndClause NewAnd
		{
			get
			{
				return new AndClause();
			}
		}
		public static OrClause NewOr
		{
			get
			{
				return new OrClause();
			}
		}
		public static AlternativeClause NewAlternative
		{
			get
			{
				return new AlternativeClause();
			}
		}
		protected static void BuildClauses(ArrayList clauseList,params object[] clauses)
		{
			foreach(object clause in clauses)
			{
				if(clause is String)
				{
					clauseList.Add(new KeywordClause(clause as string));
				}
				else if(clause is AbstractClause)
				{
					clauseList.Add(clause);
				}
				else
				{
					throw new Exception("参数只能是字符串或者AbstractClause实例！");
				}
			}
		}
		private static NilpotentClause nilpotent=new NilpotentClause();
		private static IdenticClause identic=new IdenticClause();
		private static TerminalClause terminal=new TerminalClause();
	}
	/// <summary>
	/// 零元子句，用于引导一个二选一/或子句
	/// </summary>
	public sealed class NilpotentClause : AbstractClause
	{
		protected override bool ParseImpl(IParserContext context)
		{
			return false;
		}
	}
	/// <summary>
	/// 幺元子句，用于引导一个与子句
	/// </summary>
	public sealed class IdenticClause : AbstractClause
	{
		protected override bool ParseImpl(IParserContext context)
		{
			return true;
		}
	}
	/// <summary>
	/// 参数子句,用于分析到该子句时传递特定的参数给IParserContext::PushClause，
	/// 以指导语法树的构造
	/// </summary>
	public sealed class ArgumentClause : AbstractClause
	{
		public ArgumentClause(AbstractClause _clause,object arg)
		{
			clause=_clause;
			clauseArg=arg;
		}
		protected override bool ParseImpl(IParserContext context)
		{
			return clause.Parse(context);
		}
		protected override object ClauseArgument
		{
			get
			{
				return clauseArg;
			}
		}
		private AbstractClause clause;
		/// <summary>
		/// 用于IParserContext::PushClause的参数
		/// </summary>
		private object clauseArg=null;
	}
	/// <summary>
	/// 与子句依次执行构成它的子句，并且仅在所有子句匹配时返回匹配
	/// </summary>
	public sealed class AndClause : AbstractClause
	{
		public AndClause(){}
		public AndClause(params object[] clauses)
		{
			Build(clauses);
		}
		protected override bool ParseImpl(IParserContext context)
		{
			foreach(AbstractClause clause in clauseList)
			{
				if(!clause.Parse(context))
					return false;
			}
			return true;
		}
		public void Build(params object[] clauses)
		{
			BuildClauses(clauseList,clauses);
		}
		private ArrayList clauseList=new ArrayList();
	}
	/// <summary>
	/// 二选一子句依次执行构成它的子句，只要有一个子句匹配则返回匹配（之后的子句不再执行）
	/// </summary>
	public sealed class AlternativeClause : AbstractClause
	{
		public AlternativeClause(){}
		public AlternativeClause(params object[] clauses)
		{
			Build(clauses);
		}
		protected override bool ParseImpl(IParserContext context)
		{
			foreach(AbstractClause clause in clauseList)
			{
				if(clause.Parse(context))
					return true;
			}
			return false;
		}
		public void Build(params object[] clauses)
		{
			BuildClauses(clauseList,clauses);
		}
		private ArrayList clauseList=new ArrayList();
	}
	/// <summary>
	/// 或子句依次执行构成它的子句，不管子句是否匹配均返回匹配
	/// </summary>
	public sealed class OrClause : AbstractClause
	{
		public OrClause(){}
		public OrClause(params object[] clauses)
		{
			Build(clauses);
		}
		protected override bool ParseImpl(IParserContext context)
		{
			foreach(AbstractClause clause in clauseList)
			{
				clause.Parse(context);
			}
			return true;
		}
		public void Build(params object[] clauses)
		{
			BuildClauses(clauseList,clauses);
		}
		private ArrayList clauseList=new ArrayList();
	}
	/// <summary>
	/// 重复子句,重复子句不需要支持递归(因此没有BUILD方法)
	/// </summary>
	public sealed class RepeatClause : AbstractClause
	{
		public RepeatClause(AbstractClause _clause,int minnum,int maxnum)
		{
			clause=_clause;
			minNum=minnum;
			maxNum=maxnum;
		}
		protected override bool ParseImpl(IParserContext context)
		{
			//必要执行次数
			for(int i=0;i<minNum;i++)
			{
				if(!clause.Parse(context))
					return false;
			}
			//可选执行次数
			for(int i=minNum;i<maxNum || maxNum<=minNum;i++)
			{
				if(!clause.Parse(context))
					return true;
			}
			return true;
		}
		private int minNum=0,maxNum=0;
		private AbstractClause clause;
	}
	/// <summary>
	/// 终截符子句匹配非关键字/算符/分隔符的终截符
	/// </summary>
	public sealed class TerminalClause : AbstractClause
	{
		protected override bool ParseImpl(IParserContext context)
		{
			ParserToken t=context.PeekToken();
			if(t==null)
			{
				return false;
			}
			else if(t.Type==ParserTokenType.KEYWORD || t.Type==ParserTokenType.OPERATOR || t.Type==ParserTokenType.SEPARATOR)
			{
				return false;
			}
			else
			{
				context.AdvanceToken();				
				context.AppendToClause(t);
			}
			return true;
		}
	}
	/// <summary>
	/// 关键字子句匹配指定的关键字/算符/分隔符
	/// </summary>
	public sealed class KeywordClause : AbstractClause
	{
		public KeywordClause(string key)
		{
			keyword=key;
		}
		protected override bool ParseImpl(IParserContext context)
		{
			ParserToken t=context.PeekToken();
			if(t==null)
				return false;
			else if(t.Type==ParserTokenType.KEYWORD || t.Type==ParserTokenType.OPERATOR || t.Type==ParserTokenType.SEPARATOR)
			{
				if(keyword==t.Word)
				{
					context.AdvanceToken();
					context.AppendToClause(t);
					return true;
				}
			}
			return false;
		}
		private string keyword=null;
	}
}

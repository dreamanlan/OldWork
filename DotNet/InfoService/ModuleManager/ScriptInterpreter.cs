using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.CodeDom;
using System.CodeDom.Compiler;
using System.IO;

namespace Dreaman.InfoService
{
	public class ScriptInterpreter
	{
		/// <summary>
		/// 借用一个模板文件来构造一个含有一个装配与一个类的script源代码,并返回构造类的实例。
		/// 模板文件中必须有三个可替换变量:#ASSEMBLYNAME#,#CLASSNAME#,#SCRIPTCODE#,分别对应
		/// 装配名、类名以及要执行的脚本。（装配名、类名由解释器自动分配）
		/// </summary>
		public ScriptInterpreter(string templateFile)
		{
			StreamReader sr=new StreamReader(templateFile);
			templateCode=sr.ReadToEnd();
			sr.Close();
		}
		public StringCollection ReferencedAssemblies
		{
			get
			{
				return referencedAssemblies;
			}
		}
		public string CompilerOptions
		{
			get
			{
				return compilerOptions;
			}
			set
			{
				compilerOptions=value;
			}
		}
		public StringCollection Results
		{
			get
			{
				return compilerResults;
			}
		}
		public object Eval(CodeDomProvider cdp,string scriptCode)
		{
			ICodeCompiler cc=cdp.CreateCompiler();
			CompilerParameters args=new CompilerParameters();
			args.GenerateExecutable=false;
			args.GenerateInMemory=true;
			foreach(string s in ReferencedAssemblies)
			{
				args.ReferencedAssemblies.Add(s);
			}
			args.CompilerOptions=CompilerOptions;
			fileCount++;
			string guidStr=Guid.NewGuid().ToString("N");
			string assemblyName="DynamicAssembly"+guidStr;
			string className="DynamicClass"+guidStr;
			CompilerResults res=cc.CompileAssemblyFromSource(args,templateCode.Replace("#ASSEMBLYNAME#",assemblyName).Replace("#CLASSNAME#",className).Replace("#SCRIPTCODE#",scriptCode));
			Results.Clear();
			foreach(string s in res.Output)
			{
				Results.Add(s);
			}
			if(res.Output.Count>0)
				return null;
			return res.CompiledAssembly.CreateInstance(assemblyName+"."+className);
		}

		private StringCollection referencedAssemblies=new StringCollection();
		private string compilerOptions=null;
		private StringCollection compilerResults=new StringCollection();
		private string templateCode=null;
		private static long fileCount=0;
	}
	public class CLSCodeLoader
	{
		public CLSCodeLoader()
		{
		}
		public StringCollection ReferencedAssemblies
		{
			get
			{
				return referencedAssemblies;
			}
		}
		public string CompilerOptions
		{
			get
			{
				return compilerOptions;
			}
			set
			{
				compilerOptions=value;
			}
		}
		public StringCollection Results
		{
			get
			{
				return compilerResults;
			}
		}
		public object LoadFile(CodeDomProvider cdp,string file,string assemblyName,string className)
		{
			try
			{
				StreamReader sr=new StreamReader(file);
				string scriptCode=sr.ReadToEnd();
				sr.Close();
				return LoadCode(cdp,scriptCode,assemblyName,className);
			}
			catch(Exception)
			{
				return null;
			}
		}
		public object LoadCode(CodeDomProvider cdp,string scriptCode,string assemblyName,string className)
		{
			ICodeCompiler cc=cdp.CreateCompiler();
			CompilerParameters args=new CompilerParameters();
			args.GenerateExecutable=false;
			args.GenerateInMemory=true;
			foreach(string s in ReferencedAssemblies)
			{
				args.ReferencedAssemblies.Add(s);
			}
			args.CompilerOptions=CompilerOptions;
			CompilerResults res=cc.CompileAssemblyFromSource(args,scriptCode);
			Results.Clear();
			foreach(string s in res.Output)
			{
				Results.Add(s);
			}
			if(res.Output.Count>0)
				return null;
			return res.CompiledAssembly.CreateInstance(assemblyName+"."+className);
		}

		private StringCollection referencedAssemblies=new StringCollection();
		private string compilerOptions=null;
		private StringCollection compilerResults=new StringCollection();
	}
}

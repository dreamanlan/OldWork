#pragma once

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;
using namespace System::CodeDom::Compiler;
using namespace System::IO;

__gc class ScriptInterpreter
{
public:
	ScriptInterpreter(void)
	{
		referencedAssemblies = new StringCollection();
		compilerOptions = NULL;
		compilerResults = new StringCollection();
	}
    /// <summary>
    /// 借用一个模板文件来构造一个含有一个装配与一个类的script源代码,模板文件中必须有二个可替换变量:#ASSEMBLYNAME#,#CLASSNAME#,分别对应装配名、类名。
    /// </summary>
    static String* ReadTemplate(String* templateFile, String* assemblyName, String* className)
    {
        try
        {
            StreamReader* sr = new StreamReader(templateFile);
            String* templateCode = sr->ReadToEnd();
            sr->Close();
            return templateCode->Replace("#ASSEMBLYNAME#", assemblyName)->Replace("#CLASSNAME#", className);
        }
        catch(...)
        {
            return "";
        }
    }
    __property StringCollection* get_ReferencedAssemblies(void)
    {
		return referencedAssemblies;
    }
    __property String* get_CompilerOptions(void)
    {
        return compilerOptions;
    }
    __property void set_CompilerOptions(String* value)
    {
        compilerOptions = value;
    }
    __property StringCollection* get_Results(void)
    {
		return compilerResults;
    }
	Object* LoadCode(CodeDomProvider* _cdp,String* scriptCode, String* assemblyName, String* className)
    {
        try
        {
			ICodeCompiler* cdp=_cdp->CreateCompiler();
            CompilerParameters* args = new CompilerParameters();
            args->GenerateExecutable = false;
            args->GenerateInMemory = true;
            for(int i=0;i<this->ReferencedAssemblies->Count;i++)
            {
				String* s=this->ReferencedAssemblies->Item[i];
                args->ReferencedAssemblies->Add(s);
            }
            args->CompilerOptions = CompilerOptions;
            CompilerResults* res = cdp->CompileAssemblyFromSource(args, scriptCode);
            Results->Clear();
            for(int i=0;i<res->Output->Count;i++)
            {
				String* s=res->Output->Item[i];
                Results->Add(s);
            }
            if (res->Output->Count > 0)
                return NULL;
			return res->CompiledAssembly->CreateInstance(String::Concat(assemblyName , "." , className));
        }
        catch(Exception* eee)
        {
            Results->Add(eee->Message);
            return NULL;
        }
    }
	Object* LoadFile(CodeDomProvider* cdp, String* file, String* assemblyName, String* className)
    {
        String* content = ReadTemplate(file, assemblyName, className);
        if (content->Length <= 0)
            return NULL;
        return LoadCode(cdp, content, assemblyName, className);
    }
private:
	StringCollection* referencedAssemblies;
    String* compilerOptions;
    StringCollection* compilerResults;
};
	
__gc class Options
{
public:
	[Category("C# Compiler Option")]
	[Description("please refer to MSDN")]
	__property String* get_Option(void)
	{
		return option;
	}
	[Category("C# Compiler Option")]
	[Description("please refer to MSDN")]
	__property void set_Option(String* value)
	{
		option=value;
	}
	[Category("C# Compiler Option")]
	[Description("system DLL don't need path,other DLL need full path")]
	__property String* get_References(void) []
	{
		return references;
	}
	[Category("C# Compiler Option")]
	[Description("system DLL don't need path,other DLL need full path")]
	__property void set_References(String* value[])
	{
		references=value;
	}
public:
	Options()
	{
		option="/unsafe /optimize";
		references=new String*[6];
		references[0]="System.dll";
		references[1]="System.Data.Dll";
		references[2]="System.Drawing.dll";
		references[3]="System.Web.dll";
		references[4]="System.Xml.dll";
		references[5]="System.Windows.Forms.dll";
	}
private:
	String* option;
	String* references[];
};

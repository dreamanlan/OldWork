
#pragma once
#include "stdafx.h"
#include "FlexLexer.h"
#include "Interpreter.h"

#define YYSTYPE int

class Parser
{
	typedef struct
	{
		istringstream* pStr;
		yyFlexLexer* pLexer;
		int file;
	}LexerInfo;	
	typedef std::vector<CString> NameTable;
	typedef std::stack<LexerInfo> Lexers;
	typedef std::stack<int> Namespaces;
	NameTable nameTable;
	yyFlexLexer* lexer;
	int curFile;
	ScriptcRuntime* vmachine;
	Lexers lexers;
	Namespaces namespaces;

	bool hasError;
	CString errInfo;
private:
	bool ExistLexer(void)
	{
		return !lexers.empty();
	}
	void PushLexer(const char* str,const char* filePath)
	{	
		int file;
		NameTable::iterator it=std::find(nameTable.begin(),nameTable.end(),CString(filePath));
		if(it==nameTable.end())
		{
			nameTable.push_back(filePath);
			file=nameTable.size()-1;
		}
		else
		{
			file=std::distance(nameTable.begin(),it);
		}

		LexerInfo li;
		li.pStr=new istringstream(str);
		li.pLexer=new yyFlexLexer(li.pStr);
		li.file=file;
		lexers.push(li);
		lexer=li.pLexer;
		curFile=li.file;
	}
	bool PopLexer(void)
	{
		LexerInfo& li=lexers.top();
		delete li.pLexer;
		delete li.pStr;
		lexers.pop();
		if(lexers.empty())
			return false;
		LexerInfo& li2=lexers.top();
		lexer=li2.pLexer;
		curFile=li2.file;
		return true;
	}
	int yylex(YYSTYPE *lvalp)
	{
		int r=lexer->yylex();
		if(r==0)
		{
			bool ok=PopLexer();
			if(!ok)
				return 0;
			else
			{
				r=lexer->yylex();
			}
		}
		const char* p=lexer->YYText();
		NameTable::iterator it=std::find(nameTable.begin(),nameTable.end(),CString(p));
		if(it==nameTable.end())
		{
			nameTable.push_back(p);
			*lvalp=nameTable.size()-1;
		}
		else
		{
			*lvalp=std::distance(nameTable.begin(),it);
		}
		return r;
	}
	void yyerror(const char* str)
	{
		hasError=true;
		CString err;
		err.Format("parser error [file:%s, line %d]: %s\n", nameTable[curFile], lexer->lineno(), str);
		errInfo+=err;
	}
private:
	void GenInclude(int name)
	{
		CString d=nameTable[name];
		d=d.Mid(1,d.GetLength()-2);
		d.Replace("\\\\","\\");
		COMPILEINFO_PRINT("include file %s\n",d);
		CString curFilePath=ScriptFile::GetDirectory(nameTable[curFile]);
		d=ScriptFile::ConvertPath(d,curFilePath);

		char* fbuf;
		int size=ScriptFile::Read(d,fbuf);
		if(size<0)
		{
			char errbuf[1024];
			::sprintf(errbuf,"can't open include file %s\n",d);
			yyerror(errbuf);
			return;
		}
		char* buf=new char[size+1];
		buf[size]=0;
		ScriptFile::MemCpy(buf,fbuf,size);
		delete[] fbuf;
		PushLexer(buf,d);
		delete[] buf;
	}
	void GenTextBlock(int text)
	{
		CString temp(nameTable[text]);
		temp.Replace("@@","@");
		temp.Replace("$$","$");
		COMPILEINFO_PRINT("text block:\n%s\n",temp);
		vmachine->GenTextBlock(temp);
	}
	void PushNamespace(int name)
	{
		namespaces.push(name);
	}
	int PopNamespace(int count)
	{
		CString ns="",ms="";
		for(int i=0;i<count;i++)
		{
			ns=nameTable[namespaces.top()]+ms+ns;
			namespaces.pop();
			ms="::";
		}
		NameTable::iterator it=std::find(nameTable.begin(),nameTable.end(),ns);
		if(it==nameTable.end())
		{
			nameTable.push_back(ns);
			return nameTable.size()-1;
		}
		else
		{
			return std::distance(nameTable.begin(),it);
		}
	}
	void StartNamespace(int name)
	{
		COMPILEINFO_PRINT("start namespace %s\n",nameTable[name]);
		vmachine->StartNamespace(nameTable[name]);
	}
	void EndNamespace(int name)
	{
		COMPILEINFO_PRINT("end namespace %s\n",nameTable[name]);
		vmachine->EndNamespace(nameTable[name]);		
	}
	void OuterArgSize(int argsize,bool isNewFunc=false)
	{
		COMPILEINFO_PRINT("outer function argsize %s\n",nameTable[argsize]);
		if(!vmachine->OuterArgSize(nameTable[argsize],isNewFunc))
		{
			CString temp;
			temp.Format("外部API的参数类型[%s]不是整型常量！",nameTable[argsize]);
			yyerror(temp);
		}
	}
	void DeclOuterFunc(int lib,int name,int retsize,int origin,bool isNewFunc=false)
	{
		CString libname=nameTable[lib];	
		libname=libname.Mid(1,libname.GetLength()-2);
		libname.Replace("\\\\","\\");
		COMPILEINFO_PRINT("declare outer function [%s] %d %s (%d) origin:%s\n",libname,nameTable[name],nameTable[retsize],nameTable[origin]);
		if(!vmachine->DeclOuterFunc(libname,nameTable[name],nameTable[retsize],nameTable[origin]))
		{
			CString temp;
			temp.Format("外部API的返回类型[%s]不是整型常量！",nameTable[retsize]);
			yyerror(temp);
		}
	}
	void DefConst(int id,int v)
	{
		COMPILEINFO_PRINT("define constant %s = %s\n",nameTable[id],nameTable[v]);
		if(!vmachine->DefConst(nameTable[id],nameTable[v]))
		{
			CString temp;
			temp.Format("符号常量[%s]定义的值[%s]不是常量！",nameTable[id],nameTable[v]);
			yyerror(temp);
		}
	}
	void DefVar(int id,int v=-1)
	{
		CString val="0";
		if(v>=0)
			val=nameTable[v];
		COMPILEINFO_PRINT("define variable %s = %s\n",nameTable[id],val);
		if(vmachine->DefVar(nameTable[id],val)<0)
		{
			CString temp;
			temp.Format("全部变量[%s]的初值[%s]不是常量！",nameTable[id],val);
			yyerror(temp);
		}
	}
	void GenPush(int id,int type,int nsnum=0)
	{
		COMPILEINFO_PRINT("push %s,%d(%d)\n",nameTable[id],type,nsnum);
		vmachine->GenPush(nameTable[id],type,nsnum);
	}
	void GenPushConst(int c)
	{
		COMPILEINFO_PRINT("push const %d\n",c);
		vmachine->GenPush(c);
	}
	void GenPushCstr(int id)
	{
		COMPILEINFO_PRINT("push const %s\n",nameTable[id]);
		vmachine->GenPush(nameTable[id]);
	}
	void GenPop(void)
	{
		COMPILEINFO_PRINT("pop useless value\n");
		vmachine->GenPop();
	}
	void GenCall(int argnum)
	{
		COMPILEINFO_PRINT("call (%d)\n",argnum);
		vmachine->GenCall(argnum);
	}
	void GenObjGetAttr(void)
	{
		COMPILEINFO_PRINT("get obj attr\n");
		vmachine->GenObjGetAttr();
	}
	void GenObjSetAttr(void)
	{
		COMPILEINFO_PRINT("set obj attr\n");
		vmachine->GenObjSetAttr();
	}
	void GenObjCall(int argnum)
	{
		COMPILEINFO_PRINT("obj call (%d)\n",argnum);
		vmachine->GenObjCall(argnum);
	}
	void GenContinue(void)
	{
		COMPILEINFO_PRINT("continue\n");
		vmachine->GenContinue();
	}
	void GenBreak(void)
	{
		COMPILEINFO_PRINT("break\n");
		vmachine->GenBreak();
	}
	void GenReturn(void)
	{
		COMPILEINFO_PRINT("return\n");
		vmachine->GenReturn();
	}
	void GenPtrInfo(void)
	{
		COMPILEINFO_PRINT("build ptr info\n");
		vmachine->GenPtrInfo();
	}
	void GenPtrCalc(void)
	{
		COMPILEINFO_PRINT("calc ptr value\n");
		vmachine->GenPtrCalc();
	}
	void GenAddress(int id,int nsnum)
	{
		COMPILEINFO_PRINT("calc var address %s(%d)\n",nameTable[id],nsnum);
		vmachine->GenAddress(nameTable[id],nsnum);
	}
	//分支信息
	void PushIfThen(void)
	{
		COMPILEINFO_PRINT("ifthen\n");
		vmachine->PushIfThen();
	}
	void PopIfThen(void)
	{
		COMPILEINFO_PRINT("end then\n");
		vmachine->PopIfThen();
	}
	void PushIfElse(void)
	{
		COMPILEINFO_PRINT("else\n");
		vmachine->PushIfElse();
	}
	void PopIfElse(void)
	{
		COMPILEINFO_PRINT("end else\n");
		vmachine->PopIfElse();
	}
	void PushSwitch(void)
	{
		COMPILEINFO_PRINT("switch\n");
		vmachine->PushSwitch();
	}
	void GenCase(int data)
	{
		COMPILEINFO_PRINT("case %s\n",nameTable[data]);
		if(!vmachine->GenCase(nameTable[data]))			
		{
			CString temp;
			temp.Format("case的参数[%s]不是整型常量！",nameTable[data]);
			yyerror(temp);
		}
	}
	void GenDefault(void)
	{
		COMPILEINFO_PRINT("default\n");
		vmachine->GenDefault();
	}
	void PopSwitch(void)
	{
		COMPILEINFO_PRINT("end switch\n");
		vmachine->PopSwitch();
	}
	//循环信息
	void PushLoop(int type)
	{
		COMPILEINFO_PRINT("push loop %d\n",type);
		vmachine->PushLoop(type);
	}
	void GenLoopLogicStart(void)
	{
		COMPILEINFO_PRINT("loop logic start\n");
		vmachine->GenLoopLogicStart();
	}
	void GenLoopLogicEnd(void)
	{
		COMPILEINFO_PRINT("loop logic end\n");
		vmachine->GenLoopLogicEnd();
	}
	void PushFor3thExp(void)
	{
		COMPILEINFO_PRINT("push for 3th exp\n");
		vmachine->PushFor3thExp();
	}
	void PauseFor3thExp(void)
	{
		COMPILEINFO_PRINT("pause for 3th exp\n");
		vmachine->PauseFor3thExp();
	}
	void PopFor3thExp(void)
	{
		COMPILEINFO_PRINT("pop for 3th exp\n");
		vmachine->PopFor3thExp();
	}
	void PopLoop(void)
	{
		COMPILEINFO_PRINT("pop loop\n");
		vmachine->PopLoop();
	}
	void PushLogicCheck(int type)
	{
		COMPILEINFO_PRINT("push logic check %d\n",type);
		vmachine->PushLogicCheck(type);
	}
	void PopLogicCheck(int type)
	{
		COMPILEINFO_PRINT("pop logic check %d\n",type);
		vmachine->PopLogicCheck(type);
	}
	void GenCalc(int op,int opnum=2)
	{
		COMPILEINFO_PRINT("calc %s,%d\n",nameTable[op],opnum);
		vmachine->GenCalc(nameTable[op],opnum);
	}
	void DeclFunction(int id)
	{
		COMPILEINFO_PRINT("declare function %s\n",nameTable[id]);
		if(!vmachine->DeclFunction(nameTable[id]))
		{
			CString temp;
			temp.Format("函数%s与内部或外部函数重名或者当前定义的函数数目已经大于系统允许的数目%d",nameTable[id],USER_FUNCTION_NUM);
			yyerror(temp);
		}
	}
	void GenArg(int type=0)
	{
		COMPILEINFO_PRINT("calc arg\n");
		vmachine->GenArg(type);
	}
	void DeclArg(int id)
	{
		COMPILEINFO_PRINT("declare arg:%s\n",nameTable[id]);
		vmachine->DeclArg(nameTable[id]);
	}
	void StartFunction(int id)
	{
		COMPILEINFO_PRINT("start function %s\n",nameTable[id]);
		if(!vmachine->StartFunction(nameTable[id]))
		{
			CString temp;
			temp.Format("函数%s与内部或外部重名或者当前定义的函数数目已经大于系统允许的数目%d",nameTable[id],USER_FUNCTION_NUM);
			yyerror(temp);
		}
	}
	void EndFunction(int id)
	{
		COMPILEINFO_PRINT("end function %s\n",nameTable[id]);
		vmachine->EndFunction(nameTable[id]);
	}	
	//objsql处理
	void PushQuery(int ix)
	{
		COMPILEINFO_PRINT("push query %s\n",nameTable[ix]);
		int objsqlIndex=::atoi(nameTable[ix]);		
		if(objsqlIndex<0 || objsqlIndex>=MAXQUERY)
		{
			yyerror("编译时错误：自定义查询的索引值应该在0-255之间");
		}
		else
			vmachine->PushQuery(objsqlIndex);
	}
	void PopQuery(void)
	{
		COMPILEINFO_PRINT("pop query\n");
		vmachine->PopQuery();
	}
	void GenExecQuery(int index)
	{		
		COMPILEINFO_PRINT("exec query %s\n",nameTable[index]);
		int ix=::atoi(nameTable[index]);
		if(ix<0 || ix>=MAXQUERY)
		{
			yyerror("编译时错误：自定义查询的索引值应该在0-255之间");			
		}
		else
			vmachine->GenExecQuery(ix);
	}	
	//
	int GenExpression(void)
	{
		COMPILEINFO_PRINT("record expression\n");
		return vmachine->GenExpression();
	}
	void AddSelect(int id)
	{
		COMPILEINFO_PRINT("select list %s\n",nameTable[id]);
		vmachine->AddSelect(nameTable[id]);
	}
	void AddFrom(int id)
	{
		COMPILEINFO_PRINT("from list %s\n",nameTable[id]);
		vmachine->AddFrom(nameTable[id]);
	}
	void AddFromExp(int exp)
	{
		COMPILEINFO_PRINT("from exp %d\n",exp);
		vmachine->AddFromExp(exp);
	}
	void GenJoin(int exp)
	{
		COMPILEINFO_PRINT("get join %d\n",exp);
		vmachine->GenJoin(exp);
	}
	void GenSort(int exp,int order)
	{
		COMPILEINFO_PRINT("sort by list %d order %d\n",exp,order);
		vmachine->GenSort(exp,order);
	}
public:
	Parser(const char* buf,const char* filePath,ScriptcRuntime* _vmachine)
	{	
		errInfo="";
		hasError=false;
		PushLexer(buf,filePath);		
		vmachine=_vmachine;
	}
	virtual ~Parser()
	{
		while(ExistLexer())
			PopLexer();
	}
public:	
	bool haserror(void)
	{
		return hasError;
	}
	const CString& error(void)
	{
		return errInfo;
	}
	int parse();
};

//将主分析函数作为类成员定义
#define yyparse Parser::parse
#define yyparseret int
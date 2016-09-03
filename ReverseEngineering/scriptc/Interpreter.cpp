#pragma once
#include "stdafx.h"
#include "Interpreter.h"

#ifdef INCLUDE_COMPILE
#include "scriptc_compiler.cpp"
#endif

	//scriptc的内建对象与内建字符串对象接口的GUID定义
	extern "C"
	{
		const GUID IID_IObject = 
		{ 0xcde21b1c, 0x2cc4, 0x4236, {0x8c, 0x1f, 0x2e, 0x15, 0x29, 0x77, 0x62, 0xcc} };
	
		const GUID IID_IString = 
		{ 0xf58171c4, 0x1b72, 0x4dd8, {0xab, 0x4f, 0x29, 0xf0, 0x3b, 0x7e, 0x1c, 0xbb} };
	}
	
	int __cdecl nullprintf(const char *, ...)
	{
		return 0;
	}

	void OqlRuntime::ClearCompileInfo(void)
	{
#ifdef INCLUDE_COMPILE
		instructions.clear();
#endif
	}
#ifdef INCLUDE_COMPILE
	void OqlRuntime::AddSelect(const CString& select)
	{
		selectList.push_back(select);
	}
	void OqlRuntime::AddFrom(const CString& from)
	{
		fromList.push_back(from);
	}
	void OqlRuntime::AddFromExp(int exp)
	{
		fromExpList.push_back(exp);
	}
	void OqlRuntime::GenJoin(int exp)
	{
		join=exp;
	}
	void OqlRuntime::GenSort(int exp,int order)
	{
		sort=(order<<24)+exp;
	}
	int OqlRuntime::GenExpression(void)
	{
		Instructions ins;
		expressions.push_back(ins);
		int r=expressions.size()-1;
		expressions[r].assign(instructions.begin(),instructions.end());
		instructions.clear();
		return r;
	}
	Instructions* OqlRuntime::GetInstructions(void)
	{
		return &instructions;
	}
#endif
//-----------------------------------------------------------	
#ifdef INCLUDE_COMPILE
	CString ScriptcRuntime::Compile(const char* filePath)
	{
		char* fbuf=NULL;
		int size=ScriptFile::Read(filePath,fbuf);
		if(size<0)
			return "无法打开要编译的文件!";
		char* buf=new char[size+1];
		buf[size]=0;
		ScriptFile::MemCpy(buf,fbuf,size);
		delete[] fbuf;
		CString r=Compile(buf,filePath);
		delete[] buf;
		return r;
	}
	CString ScriptcRuntime::Compile(const char* buf,const char* filePath)
	{
		CriticalSectionOperator CSO(&compileCriticalSection);

		Parser p(buf,filePath,this);
		p.parse();
		if(p.haserror())
			return p.error();
		else
			return "";
	}
	int ScriptcRuntime::DecideOperator(const CString& data,int opnum)
	{
		if(data=="+")
		{
			return OP_ADD;
		}
		else if(data=="-")
		{
			if(opnum==1)
				return OP_USUB;
			return OP_SUB;
		}
		else if(data=="*")
		{
			return OP_MUL;
		}
		else if(data=="/")
		{
			return OP_DIV;	
		}
		else if(data=="%")
		{	
			return OP_MOD;	
		}
		else if(data=="&")
		{
			return OP_AND;	
		}
		else if(data=="|")
		{	
			return OP_OR;	
		}
		else if(data=="~")
		{	
			return OP_NEG;	
		}
		else if(data=="^")
		{	
			return OP_XOR;	
		}
		else if(data=="&&")
		{	
			return OP_ANDAND;
		}
		else if(data=="||")
		{	
			return OP_OROR;	
		}
		else if(data=="!")
		{
			return OP_NOT;
		}
		else if(data=="==")
		{		
			return OP_EQ;	
		}
		else if(data=="!=")
		{	
			return OP_NE;	
		}
		else if(data=="<<")
		{	
			return OP_LS;	
		}
		else if(data==">>")
		{	
			return OP_RS;
		}
		else if(data=="<")
		{		
			return OP_LT;	
		}
		else if(data==">")
		{	
			return OP_GT;
		}
		else if(data=="<=")
		{		
			return OP_LE;
		}
		else if(data==">=")
		{		
			return OP_GE;
		}
		else if(data=="++")
		{		
			return OP_INC;
		}
		else if(data=="--")
		{		
			return OP_DEC;
		}		
		else if(data=="=")
		{		
			return OP_ASSIGN;
		}		
		else if(data=="+=")
		{		
			return OP_ADD_ASSIGN;
		}		
		else if(data=="-=")
		{		
			return OP_SUB_ASSIGN;
		}		
		else if(data=="*=")
		{		
			return OP_MUL_ASSIGN;
		}		
		else if(data=="/=")
		{		
			return OP_DIV_ASSIGN;
		}		
		else if(data=="%=")
		{		
			return OP_MOD_ASSIGN;
		}		
		else if(data=="&=")
		{		
			return OP_AND_ASSIGN;
		}		
		else if(data=="|=")
		{		
			return OP_OR_ASSIGN;
		}		
		else if(data=="^=")
		{		
			return OP_XOR_ASSIGN;
		}		
		else if(data=="<<=")
		{		
			return OP_LS_ASSIGN;
		}		
		else if(data==">>=")
		{		
			return OP_RS_ASSIGN;
		}		
		else if(data==",")
		{		
			return OP_COMMA;
		}
		else if(data==":")
		{
			return OP_CAST;
		}
		return -1;
	}
#endif
#ifdef INCLUDE_COMPILE
	void ScriptcRuntime::InitSymbolConstants(void)
	{
		symbolConstants["byte"]			=	CComVariant(1);
		symbolConstants["short"]		=	CComVariant(2);
		symbolConstants["ushort"]		=	CComVariant(3);
		symbolConstants["long"]			=	CComVariant(4);
		symbolConstants["ulong"]		=	CComVariant(5);
		symbolConstants["double"]		=	CComVariant(8);
		symbolConstants["bstr"]			=	CComVariant(9);
		symbolConstants["cstr"]			=	CComVariant(10);
		symbolConstants["dispatch"]		=	CComVariant(11);
		symbolConstants["variant"]		=	CComVariant(12);
		symbolConstants["true"]			=	CComVariant(1);
		symbolConstants["false"]		=	CComVariant(0);
		symbolConstants["null"]			=	CComVariant(0);
	}
	int ScriptcRuntime::DecideGlobalVar(const CString& name,int nsnum,bool add)
	{
		NameTable::iterator it=std::find(globalNames.begin(),globalNames.end(),name);
		if(it==globalNames.end())
		{
			if(nsnum==0)
			{
				it=std::find(globalNames.begin(),globalNames.end(),nsPrefix+name);
				if(it==globalNames.end())
				{
					if(add)
					{
						globalVariables.push_back(CComVariant(0));
						globalNames.push_back(nsPrefix+name);
						return globalNames.size()-1;
					}
					else
					{
						return -1;
					}
				}
			}
			else
			{
				//提前引用的全局变量直接定义（因为局部变量不会出现名字空间引用且不是函数，所以肯定是全局变量）
				globalVariables.push_back(CComVariant(0));
				globalNames.push_back(name);
				return globalNames.size()-1;
			}
		}
		return std::distance(globalNames.begin(),it);
	}
	int ScriptcRuntime::DecideArg(const CString& name,bool add)
	{
		NameTable::iterator it=std::find(argNames.begin(),argNames.end(),name);
		if(it==argNames.end())
		{
			if(add)
			{
				argNames.push_back(name);
				return argNames.size()-1;		
			}
			return -1;
		}
		else
		{
			return std::distance(argNames.begin(),it);
		}
	}
	int ScriptcRuntime::DecideLocalVar(const CString& name)
	{
		NameTable::iterator it=std::find(localNames.begin(),localNames.end(),name);
		if(it==localNames.end())
		{
			localNames.push_back(name);
			return localNames.size()-1;		
		}
		else
		{
			return std::distance(localNames.begin(),it);
		}
	}
	int ScriptcRuntime::DecideFunction(const CString& name,int nsnum,bool add)
	{
		//名空间只是一种换名手段，其内函数与变量名会加上名空间前缀，即“名空间::名空间::函数名/变量名”，内部
		//函数与全局变量可以直接采用这种命名法来构造名空间效果。
		//亦即，如下两段代码效果相同（名空间的关键字有两个namespace与class，class主要用于构造一种类似面向对象
		//语言中类的概念的代码段）。
		/*
			scriptcRuntime.StartNamespace("sys");
			scriptcRuntime.DefApi("command");
			scriptcRuntime.DefVar("window");
			scriptcRuntime.EndNamespace("sys");
		*/
		/*
			scriptcRuntime.DefApi("sys::command");
			scriptcRuntime.DefVar("sys::window");
		*/
		//首先确定是否内部与外部函数
		int r=DecideInnerFunc(name);
		if(r>0)
			return r;
		r=DecideOuterFunc(name);
		if(r<0)
			return r;
		if(funcNames.size()>USER_FUNCTION_NUM)
		{
			return 0;
		}
		NameTable::iterator it=std::find(funcNames.begin(),funcNames.end(),name);
		if(it==funcNames.end())
		{
			if(nsnum==0)
			{
				it=std::find(funcNames.begin(),funcNames.end(),nsPrefix+name);
				if(it==funcNames.end())
				{
					if(add)
					{
						Instructions ins;
						functions.push_back(ins);
						funcVarNum.push_back(0);

						funcNames.push_back(nsPrefix+name);
						return funcNames.size();
					}
					else
					{
						return 0;
					}
				}
			}
			else
				return 0;
		}
		return std::distance(funcNames.begin(),it)+1;
	}
	int ScriptcRuntime::DecideOuterFunc(const CString& name)
	{
		OuterFuncNames::iterator it=outerFuncNames.find(name);
		if(it==outerFuncNames.end())
			return 0;
		return -it->second-1;
	}
	int ScriptcRuntime::DecideInnerFunc(const CString& name,bool add)
	{
		NameTable::iterator it=std::find(innerFuncNames.begin(),innerFuncNames.end(),name);
		if(it==innerFuncNames.end())
		{
			if(add)
			{
				innerFuncNames.push_back(name);
				return USER_FUNCTION_NUM+1+innerFuncNames.size();
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return USER_FUNCTION_NUM+1+std::distance(innerFuncNames.begin(),it);
		}
	}	
	int ScriptcRuntime::DecideConst(int d)
	{
		IntConstants::iterator it=std::find(intConstants.begin(),intConstants.end(),d);
		int i;
		if(it==intConstants.end())
		{
			intConstants.push_back(d);
			i=intConstants.size()-1;
		}
		else
		{
			i=std::distance(intConstants.begin(),it);
		}
		return i;
	}
	int ScriptcRuntime::DecideConst(double d)
	{	
		DoubleConstants::iterator it=std::find(doubleConstants.begin(),doubleConstants.end(),d);
		int i;
		if(it==doubleConstants.end())
		{
			doubleConstants.push_back(d);
			i=doubleConstants.size()-1;
		}
		else
		{
			i=std::distance(doubleConstants.begin(),it);
		}
		return i;
	}
	int ScriptcRuntime::DecideConst(const CString& d)
	{
#ifdef ENCODE_STRING
		int len=d.GetLength();
		char* buf=constStringBuffer;
		ScriptFile::MemCpy(buf,d,len+1);
		ScriptFile::RotateKey((UCHAR*)buf);
		CString data(buf);
#else
		CString& data=d;
#endif
		StrConstants::iterator it=std::find(strConstants.begin(),strConstants.end(),data);
		int i;
		if(it==strConstants.end())
		{
			strConstants.push_back(data);
			i=strConstants.size()-1;
		}
		else
		{
			i=std::distance(strConstants.begin(),it);
		}
		return i;
	}
#endif
#ifdef INCLUDE_COMPILE
#endif
	void ScriptcRuntime::ClearCompileInfo(void)
	{
#ifdef INCLUDE_COMPILE
		outerFuncNames.clear();

		innerFuncNames.clear();
		funcNames.clear();
		globalNames.clear();
		symbolConstants.clear();

		localNames.clear();
		argNames.clear();

		while(!logicCheck.empty())
            logicCheck.pop();
		while(!breaks.empty())
			breaks.pop();
		while(!continues.empty())
			continues.pop();
		while(!loops.empty())
			loops.pop();
		while(!for3thExps.empty())
			for3thExps.pop();
		while(!ifThens.empty())
			ifThens.pop();
		while(!ifElses.empty())
			ifElses.pop();
		while(!switchIndexes.empty())
			switchIndexes.pop();

		for(int i=0;i<MAXQUERY;i++)
		{
			if(oqls[i])
				oqls[i]->ClearCompileInfo();
		}
		oqlIndex=-1;
		curFuncIndex=-1;
		nsPrefix="";
#endif
	}
#ifdef INCLUDE_COMPILE	
	bool ScriptcRuntime::DefConst(const CString&name,const CString& val)
	{
		CComVariant v=GetConst(val);
		if(v.vt==VT_EMPTY)
		{
			return false;
		}
		symbolConstants[name]=v;
		return true;
	}
	CComVariant ScriptcRuntime::GetConst(const CString& data)
	{
		if(data.GetLength()>=2 && (data[0]=='\'' || data[0]=='"'))
		{//字符串
			//此处利用字符串中不可以出现''或""来处理字符串替换转义冲突的问题(\\\n与\\n在不同的替换顺序下会有问题)
			char quote[3]="",quote2[5]="",quote3[5]="";
			CString d=data;
			quote[0]=d[0];
			quote[1]=d[0];
			quote[2]=0;
			quote2[0]='\\';
			quote2[1]=quote[0];
			quote2[2]=quote[0];
			quote2[3]=quote[0];
			quote2[4]=0;
			quote3[0]='\\';
			quote3[1]=quote[0];
			quote3[2]='\\';
			quote3[3]='\\';
			quote3[4]=0;

			d=data.Mid(1,data.GetLength()-2);
			d.Replace("\\\\",quote);//连续的两个转义符\\替换成""
			d.Replace("\\?","?");	
			d.Replace("\\a","\a");				
			d.Replace("\\b","\b");				
			d.Replace("\\f","\f");				
			d.Replace("\\n","\n");
			d.Replace("\\r","\r");				
			d.Replace("\\t","\r");				
			d.Replace("\\v","\v");
			d.Replace(quote2,quote3);//将\"""还原为\"\\ 
			d.Replace(quote,"\\\\");//将""还原为\\ 
			d.Replace("\\'","'");				
			d.Replace("\\\"","\"");
			d.Replace("\\\\","\\");
			//字符串中的\ooo与\xhh暂不支持
			return CComVariant(d);
		}
		else if(data.Find('.')>=0)
		{//浮点数
			double d;
			d=::atof(data);
			return CComVariant(d);
		}
		else if(data.GetLength()>0 && data[0]>='0' && data[0]<='9')
		{//整数
			int d;
			if(data.GetLength()>=3 && data[0]=='0' && data[1]=='x')
			{//十六进制表示
				CString temp=data.Mid(2);
				temp.MakeLower();
				::sscanf(temp,"%x",&d);
			}
			else if(data.GetLength()>=2 && data[0]=='0')
			{//八进制
				::sscanf(data.Mid(1),"%o",&d);
			}
			else
			{//十进制
				d=::atoi(data);
			}
			return CComVariant(d);
		}
		else
		{//符号常量或者变量
			SymbolConstants::iterator it=symbolConstants.find(data);
			if(it!=symbolConstants.end())
				return it->second;
			else
				return CComVariant();
		}
	}
	int ScriptcRuntime::DefVar(const CString& data,const CString& val)
	{
		CComVariant v=GetConst(val);
		if(v.vt==VT_EMPTY)
			return -1;
		int r=DecideGlobalVar(data,0,true);
		SetVariable(r,v);
		return r;
	}
	int ScriptcRuntime::DefApi(const CString& data)
	{
		return DecideInnerFunc(data,true);
	}
	void ScriptcRuntime::StartNamespace(const CString& name)
	{
		if(nsPrefix.IsEmpty())
			nsPrefix=name+"::";
		else
			nsPrefix+=name+"::";
	}
	void ScriptcRuntime::EndNamespace(const CString& name)
	{
		int i=nsPrefix.Find(name);
		if(i>=0)
			nsPrefix=nsPrefix.Left(i);
		else
			nsPrefix="";
	}
	void ScriptcRuntime::GenTextBlock(const CString& text)
	{
		GenPush(101);
		GenPush(text);
		GenCall(1);
	}
	bool ScriptcRuntime::OuterArgSize(const CString& argsize,bool isNewFunc)
	{
		if(isNewFunc)
		{
			OuterFuncInfo info;
			outerFuncInfos.push_back(info);
		}
		OuterFuncInfo& finfo=outerFuncInfos[outerFuncInfos.size()-1];
		CComVariant v=GetConst(argsize);
		finfo.argsize[finfo.argnum]=v.lVal;
		finfo.argnum++;
		if(v.vt!=VT_I4 && v.vt!=VT_UI4 && v.vt!=VT_INT && v.vt!=VT_UINT)
			return false;
		return true;
	}
	bool ScriptcRuntime::DeclOuterFunc(const CString& lib,const CString& name,const CString& retsize,const CString& origin,bool isNewFunc)
	{
		char libNameBuffer[MAX_IDENTIFIER_SIZE];
		char funcNameBuffer[MAX_IDENTIFIER_SIZE];
		if(isNewFunc)
		{	
			OuterFuncInfo info;
			outerFuncInfos.push_back(info);
		}
		OuterFuncInfo& finfo=outerFuncInfos[outerFuncInfos.size()-1];
#ifdef ENCODE_STRING
		int liblen=lib.GetLength();
		int originlen=origin.GetLength();
		char* plib=libNameBuffer;
		char* porigin=funcNameBuffer;
		ScriptFile::MemCpy(plib,lib,liblen+1);
		ScriptFile::MemCpy(porigin,origin,originlen+1);
		ScriptFile::RotateKey((UCHAR*)plib);
		ScriptFile::RotateKey((UCHAR*)porigin);
		finfo.lib=CString(plib);
		finfo.origin=CString(porigin);
#else
		finfo.lib=lib;
		finfo.origin=origin;
#endif
		CComVariant v=GetConst(retsize);
		finfo.retsize=v.lVal;
		outerFuncNames[name]=outerFuncInfos.size()-1;		
		if(v.vt!=VT_I4 && v.vt!=VT_UI4 && v.vt!=VT_INT && v.vt!=VT_UINT)
			return false;
		return true;
	}
	void ScriptcRuntime::GenPush(int d)
	{
		int i=DecideConst(d);
		pInstructions->push_back((OP_PUSH<<24)+0x010000+i);				
	}
	void ScriptcRuntime::GenPush(double d)
	{	
		int i=DecideConst(d);
		pInstructions->push_back((OP_PUSH<<24)+0x020000+i);	
	}
	void ScriptcRuntime::GenPush(const CString& d)
	{
		int i=DecideConst(d);
		pInstructions->push_back((OP_PUSH<<24)+0x030000+i);
	}
	void ScriptcRuntime::GenPush(const CString& data,int type,int nsnum)
	{
		//PUSH指令 16~19 位 = 0局部变量1整数常量2浮点数常量3字符串常量4参数5全局变量6OQL查询对象
		//		   20~23 位 = 0x10左值
		//type==0 局部变量或全局变量或常量
		//type==1 左值变量			
		if(type==0 && oqlIndex>=0)
		{//对OQL中出现的变量检查看是否内部对象		
			FromList& fromList=oqls[oqlIndex]->fromList;
			FromList::iterator it=std::find(fromList.begin(),fromList.end(),data);
			if(it!=fromList.end())
			{
				int i=std::distance(fromList.begin(),it);
				pInstructions->push_back((OP_PUSH<<24)+0x060000+i);
				return;
			}
		}
		if(type==0)
		{
			//非左值首先检查是否常量
			CComVariant v=GetConst(data);
			if(v.vt!=VT_EMPTY)
			{
				if(v.vt==VT_BSTR)
				{
					GenPush(CString(v.bstrVal));
				}
				else if(v.vt==VT_R8)
				{
					GenPush(v.dblVal);
				}
				else
				{
					GenPush(v.lVal);
				}
				return;
			}
			else
			{//检查是否函数
				int i=DecideFunction(data,nsnum);
				if(i!=0)
				{
					GenPush(i);
					return;
				}
			}
		}
		int lv=0;
		if(type==1)lv=0x100000;
		//首先检查是否参数，参数会覆盖同名的全局变量
		if(nsnum==0)
		{
			int i=DecideArg(data);
			//参数
			if(i>=0)
			{
				pInstructions->push_back((OP_PUSH<<24)+lv+0x040000+i);
				return;	
			}
		}
		int i=DecideGlobalVar(data,nsnum);
		if(i<0)
		{
			i=DecideLocalVar(data);
			pInstructions->push_back((OP_PUSH<<24)+lv+i);
		}
		else
		{
			pInstructions->push_back((OP_PUSH<<24)+lv+0x050000+i);
		}
	}
	void ScriptcRuntime::GenPop(void)
	{
		pInstructions->push_back(OP_POP<<24);
	}
	void ScriptcRuntime::GenCall(int argnum)
	{
		pInstructions->push_back((OP_CALL<<24)+argnum);
	}
	void ScriptcRuntime::GenObjGetAttr(void)
	{
		pInstructions->push_back(OP_OBJGETATTR<<24);
	}
	void ScriptcRuntime::GenObjSetAttr(void)
	{
		pInstructions->push_back(OP_OBJSETATTR<<24);
	}
	void ScriptcRuntime::GenObjCall(int argnum)
	{
		pInstructions->push_back((OP_OBJCALL<<24)+argnum);
	}
	void ScriptcRuntime::GenContinue(void)
	{
		pInstructions->push_back(0);
		continues.push(pInstructions->size()-1);
	}
	void ScriptcRuntime::GenBreak(void)
	{
		pInstructions->push_back(0);
		breaks.push(pInstructions->size()-1);
	}
	void ScriptcRuntime::GenReturn(void)
	{
		pInstructions->push_back(OP_RETURN<<24);
	}	
	void ScriptcRuntime::GenPtrInfo(void)
	{
		pInstructions->push_back(OP_PTRINFO<<24);
	}
	void ScriptcRuntime::GenPtrCalc(void)
	{
		pInstructions->push_back(OP_PTRCALC<<24);
	}
	void ScriptcRuntime::GenAddress(const CString& name,int nsnum)
	{
		int i=DecideGlobalVar(name,nsnum);
		if(i>=0)
		{
			pInstructions->push_back((OP_ADDR<<24)+0x050000+i);
		}
		else
		{
			i=DecideLocalVar(name);
			pInstructions->push_back((OP_ADDR<<24)+0+i);
		}
	}
	void ScriptcRuntime::PushContinue(void)
	{
		continues.push(-1);
	}
	void ScriptcRuntime::PopContinue(int d)
	{
		for(;!continues.empty();)
		{
			int s=continues.top();
			continues.pop();
			if(s<0)
				break;
			else
			{
				int op=OP_JMP;
				if(d>s)
					(*pInstructions)[s]=(op<<24)+(d-s);
				else
					(*pInstructions)[s]=(op<<24)+0x010000+(s-d);
			}
		}
	}
	void ScriptcRuntime::PushBreak(void)
	{
		breaks.push(-1);
	}
	void ScriptcRuntime::PopBreak(int d)
	{
		for(;!breaks.empty();)
		{
			int s=breaks.top();
			breaks.pop();
			if(s<0)
				break;
			else
			{
				int op=OP_JMP;
				if(d>s)
					(*pInstructions)[s]=(op<<24)+(d-s);
				else
					(*pInstructions)[s]=(op<<24)+0x010000+(s-d);
			}
		}
	}
	//分支信息
	void ScriptcRuntime::PushIfThen(void)
	{
		pInstructions->push_back(0);
		ifThens.push(pInstructions->size()-1);
	}
	void ScriptcRuntime::PopIfThen(void)
	{
		int s=ifThens.top();
		ifThens.pop();
		int d=pInstructions->size()-1;
		int op=OP_JZ;
		if(d>s)
			(*pInstructions)[s]=(op<<24)+(d-s);
		else
			(*pInstructions)[s]=(op<<24)+0x010000+(s-d);
	}
	void ScriptcRuntime::PushIfElse(void)
	{
		pInstructions->push_back(0);
		ifElses.push(pInstructions->size()-1);
	}
	void ScriptcRuntime::PopIfElse(void)
	{
		int s=ifElses.top();
		ifElses.pop();
		int d=pInstructions->size()-1;
		int op=OP_JMP;
		if(d>s)
			(*pInstructions)[s]=(op<<24)+(d-s);
		else
			(*pInstructions)[s]=(op<<24)+0x010000+(s-d);
	}
	void ScriptcRuntime::PushSwitch(void)
	{
		PushBreak();

		SwitchInfo si;
		si.def=-1;
		switchInfos.push_back(si);
		int s=switchInfos.size()-1;
		pInstructions->push_back((OP_TABLE_JMP<<24)+s);
		SwitchIndex ix;
		ix.index=s;
		ix.source=pInstructions->size()-1;
		switchIndexes.push(ix);
	}
	bool ScriptcRuntime::GenCase(const CString& s)
	{
		int d=pInstructions->size()-1;
		CComVariant v=GetConst(s);
		switchInfos[switchIndexes.top().index].cases[v.lVal]=d-switchIndexes.top().source;		
		if(v.vt!=VT_I4 && v.vt!=VT_UI4 && v.vt!=VT_INT && v.vt!=VT_UINT)
			return false;
		return true;
	}
	void ScriptcRuntime::GenDefault(void)
	{
		int d=pInstructions->size()-1;
		switchInfos[switchIndexes.top().index].def=d-switchIndexes.top().source;
	}
	void ScriptcRuntime::PopSwitch(void)
	{
		int d=pInstructions->size()-1;
		if(switchInfos[switchIndexes.top().index].def<0)
		{
			switchInfos[switchIndexes.top().index].def=d-switchIndexes.top().source;
		}
		switchIndexes.pop();

		PopBreak(d);
	}
	//循环信息
	void ScriptcRuntime::PushLoop(int type)
	{
		PushBreak();
		PushContinue();

		LoopInfo loopInfo;
		loopInfo.type=type;
		loopInfo.loopStart=pInstructions->size()-1;
		loops.push(loopInfo);
	}
	void ScriptcRuntime::GenLoopLogicStart(void)
	{
		LoopInfo& info=loops.top();
		info.loopLogicStart=pInstructions->size()-1;
	}
	void ScriptcRuntime::GenLoopLogicEnd(void)
	{
		LoopInfo& info=loops.top();
		pInstructions->push_back(0);
		info.loopLogicEnd=pInstructions->size()-1;
	}
	void ScriptcRuntime::PushFor3thExp(void)
	{
		Instructions ins;
		for3thExps.push(ins);
		pInstructions=&for3thExps.top();
	}
	void ScriptcRuntime::PauseFor3thExp(void)
	{
		pInstructions=&functions[curFuncIndex];
	}
	void ScriptcRuntime::PopFor3thExp(void)
	{
		//for语句的continue指向第三个计算表达式
		int r=pInstructions->size()-1;
		PopContinue(r);

		Instructions& ins=for3thExps.top();		
		for(Instructions::iterator it=ins.begin();it!=ins.end();it++)
		{
			pInstructions->push_back(*it);
		}
		for3thExps.pop();
	}
	void ScriptcRuntime::PopLoop(void)
	{
		LoopInfo info=loops.top();
		loops.pop();
		if(info.type!=1)
		{
			pInstructions->push_back((OP_JMP<<24)+0x010000+pInstructions->size()-info.loopStart);
		}
		info.loopEnd=pInstructions->size()-1;

		int s=info.loopLogicEnd;
		int d=info.loopEnd;
		int op=OP_JZ;
		if(info.type==1)
		{
			d=info.loopStart;
			op=OP_JNZ;
		}
		if(d>s)
			(*pInstructions)[s]=(op<<24)+(d-s);
		else
			(*pInstructions)[s]=(op<<24)+0x010000+(s-d);

		if(info.type!=2)
			PopContinue(info.loopLogicStart);
		PopBreak(info.loopEnd);
	}
	void ScriptcRuntime::PushLogicCheck(int type)
	{
		pInstructions->push_back(0);
		logicCheck.push(pInstructions->size()-1);
	}
	void ScriptcRuntime::PopLogicCheck(int type)
	{
		int op=OP_JZ;
		switch(type)
		{
		case 0:
			op=OP_JZ;//andand
			break;
		case 1:
			op=OP_JNZ;//oror
			break;
		}
		int s=logicCheck.top();
		logicCheck.pop();
		int d=pInstructions->size()-1;
		if(d>s)
			(*pInstructions)[s]=(op<<24)+0x100000+(d-s);
		else
			(*pInstructions)[s]=(op<<24)+0x110000+(s-d);
	}
	void ScriptcRuntime::GenCalc(const CString& data,int opnum)
	{
		if(data=="+" && opnum==1)
		{//一元算符 '+' 不需要任何动作
			return;
		}
		int op=DecideOperator(data,opnum);
		pInstructions->push_back(op<<24);
	}
	bool ScriptcRuntime::DeclFunction(const CString& name)
	{
		int r=DecideFunction(name,0,true);
		if(r<=0 || r>USER_FUNCTION_NUM)
			return false;
		return true;
	}
	void ScriptcRuntime::GenArg(int type)
	{
		pInstructions->push_back((OP_ARG<<24)+(type<<16));
	}
	void ScriptcRuntime::DeclArg(const CString& name)
	{
		DecideArg(name,true);
	}
	bool ScriptcRuntime::StartFunction(const CString& name)
	{
		localNames.clear();

		int r=DecideFunction(name,0,true);		
		if(r<=0 || r>USER_FUNCTION_NUM)
			return false;
		curFuncIndex=r-1;		
		pInstructions=&functions[curFuncIndex];
		//预定义局部变量
		DecideLocalVar("this");
		DecideLocalVar("argnum");
		return true;
	}
	void ScriptcRuntime::EndFunction(const CString& name)
	{
		int r=DecideFunction(name);		
		if(r<=0 || r>USER_FUNCTION_NUM)
			return;
		funcVarNum[r-1]=localNames.size();

		localNames.clear();
		argNames.clear();
	}
	//oql处理,当前不支持嵌套子查询
	void ScriptcRuntime::PushQuery(int ix)
	{
		if(oqls[ix])
		{
			oqls[ix]->ClearAll();
		}
		else
			oqls[ix]=new OqlRuntime();
		oqlIndex=ix;
		pInstructions=oqls[oqlIndex]->GetInstructions();
	}
	void ScriptcRuntime::PopQuery(void)
	{
		oqlIndex=-1;
		pInstructions=&functions[curFuncIndex];
	}
	void ScriptcRuntime::GenExecQuery(int ix)
	{
		pInstructions->push_back((OP_EXECQUERY<<24)+ix);
	}
	int ScriptcRuntime::GenExpression(void)
	{
		GenPop();
		int r=oqls[oqlIndex]->GenExpression();
		pInstructions=oqls[oqlIndex]->GetInstructions();
		return r;
	}
	//
	void ScriptcRuntime::AddSelect(const CString& select)
	{
		oqls[oqlIndex]->AddSelect(select);
	}
	void ScriptcRuntime::AddFrom(const CString& from)
	{
		oqls[oqlIndex]->AddFrom(from);
	}
	void ScriptcRuntime::AddFromExp(int exp)
	{
		oqls[oqlIndex]->AddFromExp(exp);
	}
	void ScriptcRuntime::GenJoin(int exp)
	{
		oqls[oqlIndex]->GenJoin(exp);
	}
	void ScriptcRuntime::GenSort(int exp,int order)
	{
		oqls[oqlIndex]->GenSort(exp,order);
	}
#endif
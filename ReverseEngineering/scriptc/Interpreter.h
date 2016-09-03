#pragma once
#include "InnerClass.h"
#include "lzari.h"

#define INCLUDE_COMPILE

extern int __cdecl nullprintf(const char *, ...);

#define PRINT_NOTHING(p1,p2,p3,p4,p5,p6,p7,p8,p9)
#define COMPILEINFO_PRINT nullprintf
//#define COMPILEINFO_PRINT printf

#define ENCODE_STRING

#define USER_FUNCTION_NUM		100

#define INITIAL_APISTACK_COUNT	100
#define APISTACK_CHECK_TIME		10000

#define MAXCODEBUFFERSIZE		64*1024
#define MAXOQLBUFFERSIZE		8*1024
#define APISTACKSIZE			64*1024
#define APINESTEDLEVEL			8
#define MAXQUERY				64
#define OUTERFUNC_MAXARGNUM		32
#define TRAMPOLINE_SIZE			4*1024
#define MAX_CONST_STRING_SIZE	10*1024
#define MAX_IDENTIFIER_SIZE		1024

#define OP_PUSH			1
#define OP_POP			2
#define OP_JMP			3
#define OP_JZ			4
#define OP_JNZ			5
#define OP_TABLE_JMP	6
#define OP_CALL			7
#define OP_RETURN		8
#define OP_OBJCALL		9
#define OP_OBJGETATTR	10
#define OP_OBJSETATTR	11
#define OP_ADD			12
#define OP_SUB			13
#define OP_MUL			14
#define OP_DIV			15
#define OP_MOD			16
#define OP_AND			17
#define OP_OR			18
#define OP_NEG			19
#define OP_XOR			20
#define OP_ANDAND		21
#define OP_OROR			22
#define OP_NOT			23
#define OP_EQ			24
#define OP_NE			25
#define OP_LS			26
#define OP_RS			27
#define OP_LT			28
#define OP_GT			29
#define OP_LE			30
#define OP_GE			31
#define OP_INC			32
#define OP_DEC			33
#define OP_USUB			34
#define OP_ASSIGN		35
#define OP_ADD_ASSIGN	36
#define OP_SUB_ASSIGN	37
#define OP_MUL_ASSIGN	38
#define OP_DIV_ASSIGN	39
#define OP_MOD_ASSIGN	40
#define OP_AND_ASSIGN	41
#define OP_OR_ASSIGN	42
#define OP_XOR_ASSIGN	43
#define OP_LS_ASSIGN	44
#define OP_RS_ASSIGN	45
#define OP_COMMA		46
#define OP_EXECQUERY	47
#define OP_PTRINFO		48
#define OP_PTRCALC		49
#define OP_ADDR			50
#define OP_CAST			51
#define OP_ARG			52

#define FUNC_MIN_PREDEFINE  101
#define FUNC_OUTPUT			101
#define FUNC_CLEAROUTPUT	102
#define FUNC_GETOUTPUT		103
#define FUNC_MSG			104
#define FUNC_NEW			105
#define FUNC_DELETE			106
#define FUNC_CALLBACK		107
#define FUNC_MSGDISPATCH	108
#define FUNC_OQLCLASS		109
#define FUNC_ACTIVEX		110
#define FUNC_OBJECT			111
#define FUNC_VECTOR			112
#define FUNC_DEQUE			113
#define FUNC_LIST			114
#define FUNC_SETOBJ			115
#define FUNC_MATH			116
#define FUNC_LIKE			117
#define FUNC_IN				118
#define FUNC_INVARIANT		119
#define FUNC_DISTANCE		120
#define FUNC_MAX_PREDEFINE	120


typedef std::vector<CComVariant> Variables;
//typedef std::vector<CComVariant> Objects;
typedef std::list<CComVariant> Objects;//用链表存储OQL查询的结果，期望在排序方面会快些。
typedef std::vector<int> Instructions;

typedef std::vector<CString> SelectList;
typedef std::vector<CString> FromList;
typedef std::vector<int> FromExpList;

struct Buffer
{
	template<typename T>
		static inline bool Read(const char*& buf,T& data,UINT& leftsize)
	{
		data=*(T*)buf;
		buf+=sizeof(T);
		leftsize-=sizeof(T);
		if(leftsize<0)
			return false;
		return true;
	}
	static inline CString ReadString(const char* buf)
	{
		return CString(buf);
	}
	template<typename T>
		static inline void Write(T data,char*& buf,UINT& size)
	{
		*(T*)buf=data;
		buf+=sizeof(T);
		size+=sizeof(T);
	}
	static inline void WriteString(const char* data,char*& buf,UINT& size)
	{
		UINT len=::strlen(data);
		::strcpy(buf,data);
		buf+=len+1;
		size+=len+1;
	}
	template<typename T>
		static inline void ReWrite(T data,char* buf)
	{
		*(T*)buf=data;
	}
	static inline void CopyWrite(const void* src,char*& buf,UINT size)
	{
		::memcpy(buf,src,size);
		buf+=size;
	}
};


class OqlRuntime
{
public:
	typedef std::vector<Instructions> Expressions;
	friend class ScriptcRuntime;
private:
#ifdef INCLUDE_COMPILE
	Instructions instructions;
#endif
	Expressions expressions;
public:
	int join;
	int sort;
	SelectList selectList;
	FromList fromList;
	FromExpList fromExpList;
public:
	OqlRuntime()
	{
		join=-1;sort=-1;
	}
private:
	void ClearAll(void)
	{	
		ClearCompileInfo();

		expressions.clear();
		selectList.clear();
		fromList.clear();
		fromExpList.clear();
		join=-1;sort=-1;
	}
	void ClearCompileInfo(void);
private:
	inline bool LoadOql(const char*& p,UINT& leftsize)
	{
		ClearAll();

        char tag[4];
		const char* porigin=p;
		Buffer::Read(p,*(int*)tag,leftsize);
		if(tag[0]!='.' || tag[1]!='S' || tag[2]!='Q' ||tag[3]!='L')
			return false;
		//块大小与字符串起始偏移
		UINT size;
		UINT stroff;
		Buffer::Read(p,size,leftsize);
		Buffer::Read(p,stroff,leftsize);
        //表达式
		UINT len;
		Buffer::Read(p,len,leftsize);
		for(UINT i=0;i<len;i++)
		{
			Instructions tins;
			expressions.push_back(tins);
			Instructions& ins=expressions[i];
			int inum;
			Buffer::Read(p,inum,leftsize);
			for(int j=0;j<inum;j++)
			{
				int v;
				if(!Buffer::Read(p,v,leftsize))
					return false;
				ins.push_back(v);
			}
		}
		//join and sort
		Buffer::Read(p,join,leftsize);
		Buffer::Read(p,sort,leftsize);
		//SelectList
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			int offset;
			if(!Buffer::Read(p,offset,leftsize))
				return false;
			selectList.push_back(Buffer::ReadString(porigin+stroff+offset));
		}
		//FromList
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			int offset;
			if(!Buffer::Read(p,offset,leftsize))
				return false;
			fromList.push_back(Buffer::ReadString(porigin+stroff+offset));
		}
		//FromExpList
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{	
			int v;
			if(!Buffer::Read(p,v,leftsize))
				return false;
			fromExpList.push_back(v);
		}
		//判断正确性
		if(p-porigin!=stroff)
		{
			return false;
		}
		p+=size-stroff;
		leftsize-=size-stroff;
		return true;
	}
	inline void SaveOql(char*& p)
	{
		char tag[4]={'.','S','Q','L'};
		UINT dsize=0,ssize=0;;
		char* pdata=new char[MAXOQLBUFFERSIZE];
		char* pstr=new char[MAXOQLBUFFERSIZE];
		char* data=pdata;
		char* str=pstr;
		Buffer::Write(*(int*)tag,data,dsize);
		//预留整个块大小与字符串的起始偏移
		Buffer::Write((int)0,data,dsize);
		Buffer::Write((int)0,data,dsize);
		//表达式指令
		UINT len=expressions.size();
		Buffer::Write(len,data,dsize);
		for(UINT i=0;i<len;i++)
		{
			Instructions& ins=expressions[i];
			Buffer::Write(ins.size(),data,dsize);
			Instructions::iterator it=ins.begin();
			for(;it!=ins.end();it++)
				Buffer::Write(*it,data,dsize);
		}
		//join and sort
		Buffer::Write(join,data,dsize);
		Buffer::Write(sort,data,dsize);
		//SelectList
		len=selectList.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
            Buffer::Write(ssize,data,dsize);
			Buffer::WriteString((const char*)selectList[i],str,ssize);
		}
		//FromList
		len=fromList.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			Buffer::Write(ssize,data,dsize);
			Buffer::WriteString((const char*)fromList[i],str,ssize);
		}
		//FromExpList
		len=fromExpList.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			Buffer::Write(fromExpList[i],data,dsize);
		}
		//写入实际字符串偏移
		Buffer::ReWrite(dsize+ssize,pdata+4);
		Buffer::ReWrite(dsize,pdata+8);
		//合并到输出缓冲
		Buffer::CopyWrite(pdata,p,dsize);
		Buffer::CopyWrite(pstr,p,ssize);
		delete[] pstr;
		delete[] pdata;
	}
	inline CString ListOql(void)
	{
		CString temp="select ",prestr="";
		for(UINT i=0;i<selectList.size();i++)
		{
			temp+=prestr+selectList[i];
			prestr=",";
		}
		prestr=" from ";
		for(int i=0;i<fromList.size();i++)
		{
			CString t;
			t.Format("%d",fromExpList[i]);

			temp+=prestr+fromList[i];
			prestr=" ";
			temp+=prestr+t;
			prestr=",";
		}
		CString t;
		t.Format("%d",join);
		prestr=" join ";
		temp+=prestr+t;
		if(sort<0)
			t.Format("%d",sort);
		else
			t.Format("%8.8X",sort);
		prestr=" sort ";
		temp+=prestr+t;
		for(int i=0;i<expressions.size();i++)
		{
			Instructions& ins=expressions[i];
			t.Format("\n==>[expression:%d] [instruction number:%d]",i,ins.size());
			temp+=t;
			for(UINT ii=0;ii<ins.size();ii++)
			{
				t.Format("\n%8.8X",ins[ii]);
				temp+=t;
			}
		}
		return temp;
	}
	inline Instructions& GetExpression(int index)
	{
		return expressions[index];
	}
#ifdef INCLUDE_COMPILE
	void AddSelect(const CString& select);
	void AddFrom(const CString& from);
	void AddFromExp(int exp);
	void GenJoin(int exp);
	void GenSort(int exp,int order);
	int GenExpression(void);
	Instructions* GetInstructions(void);
#endif
};


template<class Scriptc,class Oql>
	class FilterObjectsCallbackArgT
{
public:
	Scriptc* pScriptc;
	Oql* pOql;
	int oqlIndex;
	int fromIndex;
	Objects* pObjects;
	CComVariant* externArgs;
	int argnum;
	Variables* pVariables;
public:	
	inline void SetObject(const CComVariant& object)
	{
		if(pOql->fromExpList[fromIndex]>=0)
		{
			Objects::iterator it=pObjects->begin();
			std::advance(it,fromIndex);
			*it=object;
		}
	}
	inline CComVariant CalcExpression(void)
	{
		if(pOql->fromExpList[fromIndex]<0)
			return CComVariant(1);
		return pScriptc->CalcExpression(oqlIndex,pOql->fromExpList[fromIndex],*pVariables,externArgs,argnum,pObjects);
	}
};

class ApiStack
{
	struct Info
	{
		char* apistack;
		char* papistack;
		int count;
		Info(void)
		{
			apistack=NULL;
			papistack=NULL;
			count=INITIAL_APISTACK_COUNT;
		}
		~Info()
		{
			Release();
		}
		Info(const Info& info)
		{
			apistack=info.apistack;
			papistack=info.papistack;
		}
		inline char* Top(void)
		{
			return papistack;
		}
		inline void PushFrame(void)
		{
			papistack-=APISTACKSIZE/APINESTEDLEVEL;
		}
		inline void PopFrame(void)
		{
			papistack+=APISTACKSIZE/APINESTEDLEVEL;
		}
		inline void Release(void)
		{
			if(apistack)
			{
				delete[] apistack;				
				apistack=NULL;
				papistack=NULL;
			}
		}
		inline void Reset(void)
		{
			if(!apistack)
				apistack=new char[APISTACKSIZE];			
			count=INITIAL_APISTACK_COUNT;
			papistack=apistack+APISTACKSIZE;
		}
	};
	typedef std::vector<Info> Infos;
	typedef std::map<UINT_PTR,Infos*> TimerID_Infos; 
public:
	inline char* Top(void)
	{
		return InfoRef().Top();
	}
	inline void PushFrame(void)
	{
		InfoRef().PushFrame();
	}
	inline void PopFrame(void)
	{
		InfoRef().PopFrame();
	}
	inline void Release(void)
	{
		InfoRef().Release();
	}
	inline void Clear(void)
	{
		infos.clear();
	}
public:
	ApiStack(void)
	{
		timerID=::SetTimer(NULL,NULL,APISTACK_CHECK_TIME,TimerProc);
		TimerID_Infos& tis=TimerID_InfosRef();
		tis[timerID]=&infos;
	}
	~ApiStack()
	{
		::KillTimer(NULL,timerID);
		TimerID_Infos& tis=TimerID_InfosRef();
		tis.erase(timerID);
		infos.clear();
	}
	//此处使用了静态全局变量，在多进程共享内存环境中可能引起异常。
	static TimerID_Infos& TimerID_InfosRef(void)
	{
		static TimerID_Infos timerID_Infos;
		return timerID_Infos;
	}
	//每隔一段时间对当前进程的所有ApiStack的计数减1，计数低于0时释放该栈空间。
	static VOID CALLBACK TimerProc(HWND hwnd,UINT uMsg,UINT_PTR idEvent,DWORD dwTime)
	{		
		TimerID_Infos& tis=TimerID_InfosRef();
		TimerID_Infos::iterator it=tis.find(idEvent);
		if(it!=tis.end())
		{
			Infos* pinfos=it->second;
			Infos::iterator iit=pinfos->begin();
			while(iit!=pinfos->end())
			{
				iit->count--;
				if(iit->count<=0)
				{
					iit->Release();
				}
				iit++;
			}
		}
	}
private:
	inline Info& InfoRef(void)
	{
		UINT ix=ThreadIndex::Get();
		if(infos.size()<=ix)
		{
			Info info;
			infos.push_back(info);
			Info& i=infos.back();
			i.Reset();
			return i;
		}
		else
		{
			Info& i=infos[ix];
			if(i.Top()==NULL)
				i.Reset();
			else
				i.count++;
			return i;
		}
	}
private:
	Infos infos;
	UINT_PTR timerID;
};

class ScriptcRuntime
{
public:
	typedef IEvent1<const char*> RuntimeErrorEvent;
	typedef SimpleEventTrigerT<RuntimeErrorEvent> RuntimeErrorEventTriger;
	typedef IEvent7<DWORD,Instructions&,Variables&,Variables&,CComVariant*,int,const Objects*> DebugEvent;
	typedef SimpleEventTrigerT<DebugEvent> DebugEventTriger;

	typedef IEvent4<const CComVariant&,CComVariant*,int,CComVariant*> CallFunctionEvent;
	typedef IEvent5<const CComVariant&,const CComVariant&,CComVariant*,int,CComVariant*> CallObjectEvent;
	typedef IEvent3<const CComVariant&,const CComVariant&,CComVariant*> AttrGetEvent;
	typedef IEvent3<const CComVariant&,const CComVariant&,const CComVariant&> AttrSetEvent;
	typedef SimpleEventTrigerT<CallFunctionEvent> CallFunctionEventTriger;
	typedef SimpleEventTrigerT<CallObjectEvent> CallObjectEventTriger;
	typedef SimpleEventTrigerT<AttrGetEvent> AttrGetEventTriger;
	typedef SimpleEventTrigerT<AttrSetEvent> AttrSetEventTriger;

	typedef FilterObjectsCallbackArgT<ScriptcRuntime,OqlRuntime> FilterObjectsCallbackArg;
	friend class FilterObjectsCallbackArg;
	typedef IEvent3<const CString&,Objects&,FilterObjectsCallbackArg&> FilterObjectsEvent;
	typedef SimpleEventTrigerT<FilterObjectsEvent> FilterObjectsEventTriger;
	
	typedef IEvent1<MSG*> PreTransMsgEvent;
	typedef SimpleEventTrigerT<PreTransMsgEvent> PreTransMsgEventTriger;
public:
	typedef struct
	{
		int type;
		int loopStart;
		int loopLogicStart;
		int loopLogicEnd;
		int loopEnd;
	}LoopInfo;
	typedef std::map<int,int> Cases;
	typedef struct
	{
		Cases cases;
		int def;
	}SwitchInfo;
	typedef struct
	{
		int index;
		int source;
	}SwitchIndex;
	
	typedef std::stack<LoopInfo> Loops;
	typedef std::stack<int> Continues;
	typedef std::stack<int> Breaks;
	typedef std::stack<int> LogicCheck;
	typedef std::stack<int> IfThens;
	typedef std::stack<int> IfElses;
	typedef std::stack<SwitchIndex> SwitchIndexes;

	typedef std::vector<int> IntConstants;
	typedef std::vector<double> DoubleConstants;
	typedef std::vector<CString> StrConstants;
	typedef std::vector<CComVariant> IStrConstants;
	typedef std::stack<CComVariant> RuntimeStack;
	typedef std::vector<CString> NameTable;
	typedef std::map<CString,CComVariant> SymbolConstants;
	
	typedef std::stack<Instructions> For3thExps;
	typedef std::vector<Instructions> Functions;
	typedef std::vector<int> FuncVarNum;

	struct OuterFuncInfo
	{
		CString lib;
		CString origin;
		int retsize;
		int argnum;
		int argsize[OUTERFUNC_MAXARGNUM];
		DWORD address;
		OuterFuncInfo()
		{
			retsize=0;
			argnum=0;
			for(int i=0;i<OUTERFUNC_MAXARGNUM;i++)
				argsize[i]=0;
			address=0;
		}
		OuterFuncInfo(const OuterFuncInfo& info)
		{
			lib=info.lib;
			origin=info.origin;
			retsize=info.retsize;
			argnum=info.argnum;
			for(int i=0;i<argnum;i++)
				argsize[i]=info.argsize[i];
			address=info.address;
		}
	};
	typedef std::vector<OuterFuncInfo> OuterFuncInfos;
	typedef std::vector<HMODULE> Librarys;
	typedef std::vector<SwitchInfo> SwitchInfos;
	typedef std::map<CString,int> OuterFuncNames;

	typedef std::map<__int64,int> CallbackFuncs;
//oql查询
	typedef std::set<CComVariant,Scriptc::VarLess> JoinObjs;
	typedef std::vector<JoinObjs> JOINLISTS;
	typedef std::vector<Objects> OBJLISTS;
	typedef std::map<CComVariant,CComVariant,Scriptc::VarLess> Orders;

	template<bool less>
		class CompareT
		{
			Orders* pOrders;
		public:
			CompareT(Orders* _pOrders)
			{
				pOrders=_pOrders;
			}
		public:
			inline bool operator() (const CComVariant& a,const CComVariant& b)
			{
				Orders::iterator ait=pOrders->find(a);
				Orders::iterator bit=pOrders->find(b);
				if(ait==pOrders->end())
				{
					return false;//表明顺序要调整
				}
				if(bit==pOrders->end())
				{
					return true;//表明顺序无需调整
				}
				if(ait->second == bit->second)
					return true;//相等无需调整顺序
				else if(Scriptc::VarCompare::LT(ait->second,bit->second))
					return less;
				else
					return !less;
			}
		};
private:
#ifdef INCLUDE_COMPILE
	CString nsPrefix;

	OuterFuncNames outerFuncNames;
	NameTable innerFuncNames;
	NameTable funcNames;
	NameTable globalNames;
	SymbolConstants symbolConstants;

	NameTable localNames;
	NameTable argNames;

	LogicCheck logicCheck;
	Breaks breaks;
	Continues continues;
	Loops loops;
	For3thExps for3thExps;
	IfThens ifThens;
	IfElses ifElses;
	SwitchIndexes switchIndexes;

	int curFuncIndex;
	int oqlIndex;
	Instructions* pInstructions;
#endif
	OuterFuncInfos outerFuncInfos;
	SwitchInfos switchInfos;

	IntConstants intConstants;
	DoubleConstants doubleConstants;
	StrConstants strConstants;
	IStrConstants istrConstants;
	Functions functions;
	FuncVarNum funcVarNum;

	Variables globalVariables;

	OqlRuntime* oqls[MAXQUERY];

	Librarys librarys;
	CString output;
	RuntimeStack runtimeStack;
	ApiStack apiStack;
	
	Scriptc::ClassObjects classObjects;

	char* trampoline;
	char* ptrampoline;
	CallbackFuncs callbackFuncs;
	MSG winMsg;

	char* constStringBuffer;
	//多线程同步的关键部分，其中LoadFile与UnloadLibrary可能会有冲突
	CriticalSection compileCriticalSection;
	CriticalSection loadMemCriticalSection;
	CriticalSection saveMemCriticalSection;
	CriticalSection loadLibraryCriticalSection;
	CriticalSection unloadLibraryCriticalSection;

	CriticalSection trampolineCriticalSection;
public:
	inline bool LoadScriptc(const char*& p,UINT& leftsize)
	{
		ClearAll();

		const char* porigin=p;
		char tag[4];
		Buffer::Read(p,*(int*)tag,leftsize);
		if(tag[0]!='S' || tag[1]!='C' || tag[2]!='0' || tag[3]!='5')
			return false;
		//文件大小
		UINT fsize;
		Buffer::Read(p,fsize,leftsize);
		//块大小与字符串起始偏移
		UINT size;
		UINT stroff;
		Buffer::Read(p,size,leftsize);
		Buffer::Read(p,stroff,leftsize);
		//外部函数信息
		UINT len;
		Buffer::Read(p,len,leftsize);
		for(UINT i=0;i<len;i++)
		{
			OuterFuncInfo info;
			UINT offset;
			//库
			Buffer::Read(p,offset,leftsize);
			info.lib=Buffer::ReadString(porigin+stroff+offset);
			//函数名
			Buffer::Read(p,offset,leftsize);
			info.origin=Buffer::ReadString(porigin+stroff+offset);
			//retsize
			Buffer::Read(p,info.retsize,leftsize);
			//argnum
			Buffer::Read(p,info.argnum,leftsize);
			for(int j=0;j<info.argnum;j++)
			{
				//argsize
				if(!Buffer::Read(p,info.argsize[j],leftsize))
					return false;
			}
			//address
			if(!Buffer::Read(p,info.address,leftsize))
				return false;
			outerFuncInfos.push_back(info);
		}
		//分支表
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			SwitchInfo si;
			switchInfos.push_back(si);
			SwitchInfo& info=switchInfos.back();
			if(!Buffer::Read(p,info.def,leftsize))
				return false;
			UINT cnum;
			Buffer::Read(p,cnum,leftsize);
			for(UINT j=0;j<cnum;j++)
			{
				int s,d;
				if(!Buffer::Read(p,s,leftsize))
					return false;
				if(!Buffer::Read(p,d,leftsize))
					return false;
				info.cases[s]=d;
			}
		}
		//整数常量表
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			int v;
			if(!Buffer::Read(p,v,leftsize))
				return false;
			intConstants.push_back(v);
		}
		//浮点常量表
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			double v;
			if(!Buffer::Read(p,v,leftsize))
				return false;
			doubleConstants.push_back(v);
		}
		//字符串常量表
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			int offset;
			if(!Buffer::Read(p,offset,leftsize))
				return false;
			strConstants.push_back(Buffer::ReadString(porigin+stroff+offset));
		}
		//函数表
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			UINT varnum;
			UINT inum;
			if(!Buffer::Read(p,varnum,leftsize))
				return false;
			if(!Buffer::Read(p,inum,leftsize))
				return false;
			funcVarNum.push_back(varnum);
			Instructions tins;
			functions.push_back(tins);
			Instructions& ins=functions.back();
			for(UINT j=0;j<inum;j++)
			{
				int op;
				if(!Buffer::Read(p,op,leftsize))
					return false;
				ins.push_back(op);
			}
		}
		//全局变量个数
		Buffer::Read(p,len,leftsize);
		for(int i=0;i<len;i++)
		{
			int ix=0;//高16位=1整数2浮点数3字符串；低16位为对应常量表索引
			if(!Buffer::Read(p,ix,leftsize))
				return false;
			int type=(ix & 0xFFFF0000)>>16;
			int index=ix & 0x0000FFFF;
			if(type==1)
			{
				if(index>=0 && index<intConstants.size())
					globalVariables.push_back(CComVariant(intConstants[index]));
				else
					globalVariables.push_back(CComVariant(0));
			}
			else if(type==2)
			{
				if(index>=0 && index<doubleConstants.size())
					globalVariables.push_back(CComVariant(doubleConstants[index]));
				else
					globalVariables.push_back(CComVariant(0));
			}
			else if(type==3)
			{
				if(index>=0 && index<strConstants.size())
				{
					if(istrConstants.size()<=0)
					{
						for(UINT ci=0;ci<strConstants.size();ci++)
							istrConstants.push_back(CComVariant(0));
					}
					CComVariant& str=istrConstants[index];
					if(str.vt!=VT_DISPATCH || !str.lVal)
					{
#ifdef ENCODE_STRING
						CString& d=strConstants[index];
						int len=d.GetLength();
						char* buf=constStringBuffer;
						ScriptFile::MemCpy(buf,d,len+1);
						ScriptFile::UnRotateKey((UCHAR*)buf);
						
						str=BuildIString(buf);
						globalVariables.push_back(str);
#else
						str=BuildIString((LPCSTR)strConstants[index]);
						globalVariables.push_back(str);
#endif						
					}
					else
					{
						globalVariables.push_back(str);
					}
				}
				else
					globalVariables.push_back(CComVariant(0));
			}
			else
				globalVariables.push_back(CComVariant(0));
		}		
		//判断正确性
		if(p-porigin!=stroff)
		{
			return false;
		}
		p+=size-stroff;
		leftsize-=size-stroff;
		//OQL数据
		for(;leftsize>0;)
		{
			int index;
			if(!Buffer::Read(p,index,leftsize))
				return false;
			if(index>=0 && index<MAXQUERY)
			{
				if(oqls[index])
				{
					oqls[index]->ClearAll();
				}
				else
					oqls[index]=new OqlRuntime();
				oqls[index]->LoadOql(p,leftsize);
			}
			else
				return false;
		}
		if(leftsize<0)
			return false;
		return true;
	}
#ifdef INCLUDE_COMPILE
	inline void SaveScriptc(char*& p)
	{
		//首先为全局变量的初值在常量表中建立入口，因为运行中全局变量的值会改变，因此持久化应该仅在编译完成后运行之前调用。
		for(int gi=0;gi<globalVariables.size();gi++)
		{
			const CComVariant& val=globalVariables[gi];
			if(val.vt==VT_DISPATCH)
			{
				if(IsIString(val))
					DecideConst(ReadIString(val));
				else
					DecideConst(0);
			}
			else if(val.vt==VT_BSTR)
			{
				DecideConst(CString(val.bstrVal));
			}
			else if(val.vt==VT_R8)
			{
				DecideConst(val.dblVal);
			}
			else
			{
				DecideConst(val.lVal);
			}
		}
		//开始持久化
		char* porigin=p;
		char tag[4]={'S','C','0','5'};
		UINT dsize=0,ssize=0;;
		char* pdata=new char[MAXCODEBUFFERSIZE];
		char* pstr=new char[MAXCODEBUFFERSIZE];
		char* data=pdata;
		char* str=pstr;
		Buffer::Write(*(int*)tag,data,dsize);
		//预留整个文件大小
		Buffer::Write((int)0,data,dsize);
		//预留脚本块大小（不包括OQL）与字符串的起始偏移
		Buffer::Write((int)0,data,dsize);
		Buffer::Write((int)0,data,dsize);
		//外部函数信息
		UINT len=outerFuncInfos.size();
		Buffer::Write(len,data,dsize);
		for(UINT i=0;i<len;i++)
		{
			OuterFuncInfo& info=outerFuncInfos[i];
			//库
			Buffer::Write(ssize,data,dsize);
			Buffer::WriteString(info.lib,str,ssize);
			//函数名
			Buffer::Write(ssize,data,dsize);
			Buffer::WriteString(info.origin,str,ssize);
			//retsize
			Buffer::Write(info.retsize,data,dsize);
			//argnum
			Buffer::Write(info.argnum,data,dsize);
			for(int j=0;j<info.argnum;j++)
			{
				//argsize
				Buffer::Write(info.argsize[j],data,dsize);
			}
			//address
			Buffer::Write(info.address,data,dsize);
		}
		//分支表
		len=switchInfos.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			SwitchInfo& si=switchInfos[i];
			//缺省分支
			Buffer::Write(si.def,data,dsize);
			//常量分支
			Buffer::Write(si.cases.size(),data,dsize);
			Cases::iterator it=si.cases.begin();
			for(;it!=si.cases.end();it++)
			{
				//分支数据
				Buffer::Write(it->first,data,dsize);
				Buffer::Write(it->second,data,dsize);
			}
		}
		//整数常量表
		len=intConstants.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			Buffer::Write(intConstants[i],data,dsize);
		}
		//浮点常量表
		len=doubleConstants.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			Buffer::Write(doubleConstants[i],data,dsize);
		}
		//字符串常量表
		len=strConstants.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			Buffer::Write(ssize,data,dsize);
			Buffer::WriteString(strConstants[i],str,ssize);
		}
		//函数表（并行函数局部变量个数与指令）
		len=functions.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			//局部变量个数
			int varnum=funcVarNum[i];
			Buffer::Write(varnum,data,dsize);
			//函数指令
			Instructions& ins=functions[i];
			Buffer::Write(ins.size(),data,dsize);
			Instructions::iterator it=ins.begin();
			for(;it!=ins.end();it++)
				Buffer::Write(*it,data,dsize);
		}
		//全部变量个数
		len=globalVariables.size();
		Buffer::Write(len,data,dsize);
		for(int i=0;i<len;i++)
		{
			const CComVariant& val=globalVariables[i];
			int ix=0;//高16位=1整数2浮点数3字符串；低16位为对应常量表索引
			if(val.vt==VT_DISPATCH)
			{
				if(IsIString(val))
				{
					ix=0x00030000;
					ix+=DecideConst(ReadIString(val));
				}
				else
				{
					ix=0x00010000;
					ix+=DecideConst(0);
				}
			}
			else if(val.vt==VT_BSTR)
			{
				ix=0x00030000;
				ix+=DecideConst(CString(val.bstrVal));
			}
			else if(val.vt==VT_R8)
			{
				ix=0x00020000;
				ix+=DecideConst(val.dblVal);
			}
			else
			{
				ix=0x00010000;
				ix+=DecideConst(val.lVal);
			}
			Buffer::Write(ix,data,dsize);
		}
		//写入实际字符串偏移
		Buffer::ReWrite(dsize+ssize,pdata+8);
		Buffer::ReWrite(dsize,pdata+12);
		//合并到输出缓冲
		Buffer::CopyWrite(pdata,p,dsize);
		Buffer::CopyWrite(pstr,p,ssize);
		delete[] pstr;
		delete[] pdata;
		UINT size=0;
		//OQL数据
		for(int i=0;i<MAXQUERY;i++)
		{
			if(!oqls[i])
				continue;
			if(oqls[i]->selectList.size()>0)
			{
				Buffer::Write(i,p,size);
				oqls[i]->SaveOql(p);
			}
		}
		//写入文件大小
		size=p-porigin;
		Buffer::ReWrite(size,porigin+4);
	}
#endif
private:
#ifdef INCLUDE_COMPILE
	int DecideOperator(const CString& data,int opnum);
#endif
	static inline bool InVariant(VARIANT vals,const CComVariant& v)
	{
		if(vals.vt==VT_EMPTY)
		{
			return false;
		}
		else if(vals.vt==VT_BSTR)
		{//脚本执行时不应该遇到VT_BSTR
			return CComVariant(vals)==v;
		}
		else if(vals.vt==VT_I4 || vals.vt==VT_INT || vals.vt==VT_UI4 || vals.vt==VT_UINT)
		{
			return CComVariant(vals)==v;
		}
		//对jscript传入数组的处理
		if(vals.vt==(VT_DISPATCH|VT_BYREF))
		{		
			vals.pdispVal=*vals.ppdispVal;
			vals.vt=VT_DISPATCH;
		}
		if(vals.vt==VT_DISPATCH)
		{
			CComDispatchDriver cddv(vals.pdispVal);			
			if(!IsIString(vals))
			{
				HRESULT hresult;
				CComVariant comvtl;
				hresult=cddv.GetPropertyByName(L"length",&comvtl);
				if(hresult==S_OK)
				{
					int l=comvtl.intVal;
					for(int i=0;i<l;i++)
					{				
						CString tt;
						tt.Format("%u",i);
						CComVariant comvt;
						hresult=cddv.GetPropertyByName(CComBSTR(tt),&comvt);
						if(SUCCEEDED(hresult))
						{
							if(IsIString(comvt) && ReadIStringVariant(comvt)==v)
								return true;
							else if(comvt==v)
								return true;
						}
					}
				}
				else
				{					
					return CComVariant(vals)==v;
				}
			}
			else
			{
				return ReadIStringVariant(vals)==v;
			}
		}
		else
		{
			//对VBSCRIPT脚本传递参数的转换
			VARIANT tempVT;
			tempVT=vals;
			if(tempVT.vt==(VT_VARIANT|VT_BYREF))
			{
				tempVT=*tempVT.pvarVal;
			}
			if(tempVT.vt==(VT_ARRAY|VT_BYREF|VT_VARIANT))
			{
				tempVT.parray=*tempVT.pparray;
				tempVT.vt=(VT_ARRAY|VT_VARIANT);
			}
			if(!(tempVT.vt&VT_ARRAY))
			{					
				return CComVariant(vals)==v;
			}
			LONG lBound,uBound;
			HRESULT hresult=::SafeArrayGetLBound(tempVT.parray,1,&lBound);
			hresult=::SafeArrayGetUBound(tempVT.parray,1,&uBound);
			long length=uBound-lBound+1;
			for(long i=lBound;i<=uBound;i++)
			{
				CComVariant ccv;
				hresult=::SafeArrayGetElement(tempVT.parray,&i,&ccv);
				if(SUCCEEDED(hresult))
				{
					if(IsIString(ccv) && ReadIStringVariant(ccv)==v)
						return true;
					else if(ccv==v)
						return true;
				}
			}			
		}
		return false;
	}
	inline BOOL DoPreTransMsg(MSG* pMsg)
	{
		PreTransMsgEvent* ptr=OnPreTransMsg.get();
		if(ptr)
		{
			return (BOOL)(*ptr)(pMsg);
		}
		else
		{
			return FALSE;
		}
	}
	inline CComVariant DoMessageLoopOnce(int isWait)
	{
		BOOL bRet=FALSE;
		if(isWait)
			bRet=::GetMessage(&winMsg,NULL,0,0);
		else
			bRet=::PeekMessage(&winMsg,NULL,0,0,PM_REMOVE);
		if(bRet)
		{
			if(!DoPreTransMsg(&winMsg))
			{
				::TranslateMessage(&winMsg);
				::DispatchMessage(&winMsg);
			}
		}
		return CComVariant(bRet);
	}
	/*
	index回调脚本函数
	outerFunc回调脚本函数对应的外部API信息
	obj是回调脚本函数的解释器对象
	stackptr为调用此函数的函数的入口时栈指针
	*/
	static inline __int64 __stdcall CallbackProxy(int index,int outerFunc,ScriptcRuntime* obj,int stackptr)
	{
		//分析外部函数信息然后从堆栈中取出相应参数(需要取出调用函数的参数信息)，调用对应脚本回调，并将返回值构造成
		//64位整形值返回。		
		int stacktop=stackptr-8;//跳过栈中的EBP与返回地址
		OuterFuncInfo& info=obj->outerFuncInfos[outerFunc];
		CComVariant* args=new CComVariant[info.argnum];
		for(int i=info.argnum-1;i>=0;i--)
		{
			if(info.argsize[i]==4)
			{
				args[i]=CComVariant(*(LONG*)stacktop);
				stacktop-=4;
			}
			else if(info.argsize[i]==8)
			{
				args[i]=CComVariant(*(DOUBLE*)stacktop);
				stacktop-=8;
			}
		}
		CComVariant r=obj->ExecFunction(index,args,info.argnum);
		delete[] args;
		if(r.vt!=VT_R8)
			return (__int64)r.lVal;
		else
			return (__int64)r.dblVal;
	}
	inline CComVariant CallFunction(const CComVariant& vname,CComVariant* args,int num)
	{
		if(vname.vt==VT_EMPTY || vname.lVal==0)
		{
#ifdef INCLUDE_COMPILE			
		RuntimeError("call unknown function,may be used before declare or define!");
#endif
			return CComVariant(0);
		}
		int fname=vname.lVal;
		if(fname>=FUNC_MIN_PREDEFINE && fname<=FUNC_MAX_PREDEFINE)
		{	
			switch(fname)
			{
			case FUNC_OUTPUT:
				{
					CString temp="";
					for(int i=0;i<num;i++)
					{
						CString fmt;
						if(IsIString(args[i]))
							fmt.Format("%s",ReadIString(args[i]));
						else if(args[i].vt==VT_BSTR)
							fmt.Format("%s",CString(args[i].bstrVal));
						else if(args[i].vt==VT_R8)
							fmt.Format("%f",args[i].dblVal);
						else
							fmt.Format("%d",args[i].lVal);
						temp+=fmt;
					}
					output+=temp;
					return CComVariant(1);
				}
			case FUNC_CLEAROUTPUT:
				{
					output="";
					return CComVariant(1);
				}
			case FUNC_GETOUTPUT:
				{
					return BuildIString(output);
				}
			case FUNC_MSG:
				{
					CString temp="",prestr="";
					for(int i=0;i<num;i++)
					{
						CString fmt;
						if(IsIString(args[i]))
							fmt.Format("%s",ReadIString(args[i]));
						else if(args[i].vt==VT_BSTR)
							fmt.Format("%s",CString(args[i].bstrVal));
						else if(args[i].vt==VT_R8)
							fmt.Format("%f",args[i].dblVal);
						else
							fmt.Format("%8.8X(%d)",args[i].lVal,args[i].lVal);
						temp+=prestr+fmt;
						prestr=",";
					}
					::MessageBox(NULL,temp,"",MB_OK);
					return CComVariant(1);
				}
			case FUNC_NEW:
				{
					if(num<=0)
						return CComVariant(0);
					UINT bufsize=args[0].ulVal;
					char* p=new char[bufsize];
					if(num>1)
						::memset(p,args[1].ulVal,bufsize);
					else
						::memset(p,0,bufsize);
					return CComVariant((LONG)p);
				}
			case FUNC_DELETE:
				{
					if(num!=1)
						return CComVariant(0);
					delete[] (char*)args[0].ulVal;
					return CComVariant(0);
				}
			case FUNC_CALLBACK:
				{
					if(num!=2)
						return CComVariant(0);
					int index=args[0].lVal-1;
					int outerFunc=-args[1].lVal-1;

					__int64 key=(__int64(outerFunc)<<32)+index;
					CallbackFuncs::iterator it=callbackFuncs.find(key);
					if(it!=callbackFuncs.end())
					{
						return CComVariant((LONG)it->second);
					}


					int vmobj=(int)this;
					int nbytes=0;//计算出的参数总字节数存在此
					OuterFuncInfo& info=outerFuncInfos[outerFunc];
					for(int i=0;i<info.argnum;i++)
					{
						nbytes+=info.argsize[i];
					}
					int cpaddr=(int)&ScriptcRuntime::CallbackProxy;

					CriticalSectionOperator CSO(&trampolineCriticalSection);

					char* faddr=ptrampoline;
					/*
					接着生成一段对应下面汇编的机器指令，存储到ptrampoline中
						55					push ebp
						8BEC				mov ebp,esp
						55					push ebp
						68 addr(4bytes)		push vmobj
											push outerFunc
											push index
						E8 offset(4bytes)	call cpaddr-curip-5
						8BE5				mov esp,ebp
						5D					pop ebp
						C2 nbytes(2bytes)	ret nbytes
						90					nop
						CC					int 3
					上述指令因为动态生成，各变量值均为已知，故可全部生成立即数指令或直接地址调用指令
					*/
					*ptrampoline++=(char)0x55;//push ebp
					*ptrampoline++=(char)0x8B;//mov ebp,esp
					*ptrampoline++=(char)0xEC;
					*ptrampoline++=(char)0x55;//push ebp
					*ptrampoline++=(char)0x68;//push imm32
					*(int*)ptrampoline=vmobj;
					ptrampoline+=4;
					*ptrampoline++=(char)0x68;//push imm32
					*(int*)ptrampoline=outerFunc;
					ptrampoline+=4;
					*ptrampoline++=(char)0x68;//push imm32
					*(int*)ptrampoline=index;
					ptrampoline+=4;
					int curip=(int)ptrampoline;
					*ptrampoline++=(char)0xE8;//call rel32
					*(int*)ptrampoline=cpaddr-curip-5;
					ptrampoline+=4;
					*ptrampoline++=(char)0x8B;//mov esp,ebp
					*ptrampoline++=(char)0xE5;
					*ptrampoline++=(char)0x5D;//pop ebp
					*ptrampoline++=(char)0xC2;//retn
					*(USHORT*)ptrampoline=(USHORT)nbytes;
					ptrampoline+=2;
					*ptrampoline++=(char)0x90;//nop
					*ptrampoline++=(char)0xCC;//int 3

					callbackFuncs[key]=(int)faddr;
					return CComVariant((LONG)faddr);
				}
			case FUNC_MSGDISPATCH:
				{
					if(num!=1)
						return CComVariant(0);
					return DoMessageLoopOnce(args[0].lVal);
				}
			case FUNC_OQLCLASS:
				{
					if(num<=0)
						return CComVariant(0);
					if(!IsIString(args[0]))
						return CComVariant(0);
					CString& key=ReadIString(args[0]);
					Scriptc::ClassObjects::iterator it=classObjects.find(key);
					if(it==classObjects.end())
					{
						Scriptc::VarVector varVector;
						classObjects[key]=varVector;
						it=classObjects.find(key);
					}
					Scriptc::VarVector& vv=it->second;

					Scriptc::VectorObj<ScriptcRuntime,false>* pObj=Scriptc::VectorObj<ScriptcRuntime,false>::CreateDispatchEx();
					pObj->SetVM(this);
					pObj->Init(&vv);
					for(int i=1;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_ACTIVEX:
				{
					if(num<=0 || !IsIString(args[0]))
						return CComVariant(0);
					CComBSTR& progid=ReadIStringUnicode(args[0]);
					if(progid==L"ScriptC.MaxPriorityQueue")
					{
						Scriptc::MaxPriorityQueueObj<ScriptcRuntime>* pObj=Scriptc::MaxPriorityQueueObj<ScriptcRuntime>::CreateDispatchEx();
						pObj->SetVM(this);
						for(int i=1;i<num;i++)
						{
							pObj->push(args[i]);
						}
						CComVariant ret(pObj);
						pObj->Release();
						return ret;						
					}
					else if(progid==L"ScriptC.MinPriorityQueue")
					{
						Scriptc::MinPriorityQueueObj<ScriptcRuntime>* pObj=Scriptc::MinPriorityQueueObj<ScriptcRuntime>::CreateDispatchEx();
						pObj->SetVM(this);
						for(int i=1;i<num;i++)
						{
							pObj->push(args[i]);
						}
						CComVariant ret(pObj);
						pObj->Release();
						return ret;	
					}
					else if(num!=1)
						return CComVariant(0);
					else
					{
						CComPtr<IDispatch> disp;
						HRESULT hr=disp.CoCreateInstance(progid,NULL,CLSCTX_SERVER);
						CComVariant ret(disp);
						return ret;
					}
				}
			case FUNC_OBJECT:
				{
					Scriptc::Object<ScriptcRuntime>* pObj=Scriptc::Object<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);
					for(int i=0;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_VECTOR:
				{					
					Scriptc::VectorObj<ScriptcRuntime>* pObj=Scriptc::VectorObj<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);					
					for(int i=0;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_DEQUE:
				{					
					Scriptc::DequeObj<ScriptcRuntime>* pObj=Scriptc::DequeObj<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);			
					for(int i=0;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_LIST:
				{
					Scriptc::ListObj<ScriptcRuntime>* pObj=Scriptc::ListObj<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);
					for(int i=0;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_SETOBJ:
				{
					Scriptc::SetObj<ScriptcRuntime>* pObj=Scriptc::SetObj<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);
					for(int i=0;i<num;i++)
					{
						pObj->push(args[i]);
					}
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_MATH:
				{
					Scriptc::MathObj<ScriptcRuntime>* pObj=Scriptc::MathObj<ScriptcRuntime>::CreateDispatchEx();
					pObj->SetVM(this);
					CComVariant ret(pObj);
					pObj->Release();
					return ret;
				}
			case FUNC_LIKE:
				{
					if(num<=0)
						return CComVariant(0);
					if(!IsIString(args[0]))
						return CComVariant(FALSE);
					CString& temp=ReadIString(args[0]);
					bool like=true;
					for(int i=1;i<num;i++)
					{
						if(!IsIString(args[i]) || temp.Find(ReadIString(args[i]))<0)
						{
							like=false;
							break;
						}
					}
					if(like)
						return CComVariant(TRUE);
					else
						return CComVariant(FALSE);
				}
			case FUNC_IN:
				{
					if(num<=0)
						return CComVariant(0);
					bool in=false;
					bool isStr=false;
					if(IsIString(args[0]))
						isStr=true;
					for(int i=1;i<num;i++)
					{
						if(isStr)
						{
							if(IsIString(args[i]))
							{
								CString& t1=ReadIString(args[0]);
								CString& t2=ReadIString(args[i]);
								if(t1==t2)
								{
									in=true;
									break;
								}
							}
						}
						else if(args[0]==args[i])
						{
							in=true;
							break;
						}
					}
					if(in)
						return CComVariant(TRUE);
					else
						return CComVariant(FALSE);
				}
			case FUNC_INVARIANT:
				{
					if(num!=2)
						return CComVariant(0);
					if(IsIString(args[0]))
					{
						CComVariant& v=ReadIStringVariant(args[0]);
						if(InVariant(args[1],v))
							return CComVariant(TRUE);
						else
							return CComVariant(FALSE);
					}
					else
					{
						if(InVariant(args[1],args[0]))
							return CComVariant(TRUE);
						else
							return CComVariant(FALSE);
					}
				}
			case FUNC_DISTANCE:
				{
					if(num!=4)
						return CComVariant(0);
					int x1=args[0].lVal;
					int y1=args[1].lVal;
					int x2=args[2].lVal;
					int y2=args[3].lVal;
					int r=(int)::sqrt((double)((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
					return CComVariant(r);
				}
			}
		}
		else if(fname<0)//外部函数调用,如果外部API又回调脚本函数，回调脚本函数又调外部API的话，
						//则每个外部API只有APISTACKSIZE/APINESTEDLEVEL的栈大小，这在通常没问题，
						//但特殊时也许会倒致严重的栈错误。
		{
			fname=-1-fname;
			OuterFuncInfo& info=outerFuncInfos[fname];
			int addr=info.address;
			if(!addr)
				return CComVariant(0);			
			int _EAX,_EDX,oldsp;
			int sn=APISTACKSIZE/sizeof(int);
			int* pstack=(int*)apiStack.Top();
			apiStack.PushFrame();
			pstack-=2;
			int* stacktop=pstack;
			/**************************************************************
			参数栈的基本形式：

				...
				参数1
				...
				参数N-1
				参数N
				旧栈指针
				空
			***************************************************************/			
			for(int i=info.argnum-1;i>=0;i--)
			{
				if(info.argsize[i]==4)
				{
					stacktop--;
					if(IsIString(args[i]))
						args[i]=ReadIStringVariant(args[i]);
					*stacktop=args[i].lVal;
				}
				else if(info.argsize[i]==8)
				{
					stacktop-=2;
					*(DOUBLE*)stacktop=args[i].dblVal;
				}
			}
			__asm
			{
				mov eax,esp
				mov oldsp,eax
			}
			pstack[0]=oldsp;
			__asm
			{
				mov eax,stacktop
				mov ebx,addr				
				mov esp,eax
				call ebx
				pop esp
				mov _EAX,eax
				mov _EDX,edx
			}
			apiStack.PopFrame();
			if(info.retsize>4)
			{
				__int64 v=(__int64(_EDX)<<32)+__int64(_EAX);
				return CComVariant((DOUBLE)v);
			}
			else
			{
				return CComVariant(_EAX);
			}
		}
		else
		{
			CallFunctionEvent* pEvent=OnCallFunction.get();
			if(pEvent)
			{
				CComVariant ret;
				if((*pEvent)(vname,args,num,&ret))
					return ret;
			}
		}
#ifdef INCLUDE_COMPILE
		CComVariant tempvar=vname;
		tempvar.ChangeType(VT_BSTR);
		CString temp;
		temp.Format("call unknown function : %s!",CString(tempvar.bstrVal));
		RuntimeError(temp);
#endif
		return CComVariant(0);
	}
	inline CComVariant CallObject(const CComVariant& obj,const CComVariant& fname,CComVariant* args,int num)
	{
		HRESULT hr=S_OK;
		if(obj.vt==VT_DISPATCH)
		{
			CComDispatchDriver disp(obj.pdispVal);
			IObject* pobj=GetIObject(obj);
			CComVariant ret;
			CComVariant* vargs=new CComVariant[num];
			for(int i=0;i<num;i++)
			{
				if(!pobj && IsIString(args[num-i-1]))
					vargs[i]=ReadIStringVariant(args[num-i-1]);
				else
					vargs[i]=args[num-i-1];
			}
			if(IsIString(fname))
			{
				DISPID did=DynamicDispatch::GetDispID(obj.pdispVal,fname.pdispVal);
				hr=disp.InvokeN(did,vargs,num,&ret);
				//CComBSTR& bstr=ReadIStringUnicode(fname);
				//hr=disp.InvokeN(bstr,vargs,num,&ret);
			}
			else
				hr=disp.InvokeN((DISPID)fname.lVal,vargs,num,&ret);
			delete[] vargs;
			if(SUCCEEDED(hr))
			{
				if(ret.vt==VT_BSTR)
					return VariantToScript(ret);
				else
					return ret;
			}
		}
		if(SUCCEEDED(hr))
		{
			CallObjectEvent* pEvent=OnCallObject.get();
			if(pEvent)
			{
				CComVariant ret;
				if(!(*pEvent)(obj,fname,args,num,&ret))
					hr=DISP_E_MEMBERNOTFOUND;
				else
					return ret;
			}
		}
#ifdef INCLUDE_COMPILE
		CComVariant tempvar;
		if(IsIString(fname))
			tempvar=ReadIStringVariant(fname);
		else
			tempvar.ChangeType(VT_BSTR);
		CString temp;
		temp.Format("call unknown method : %s!",CString(tempvar.bstrVal));
		RuntimeError(temp);
#endif
		return CComVariant(0);
	}
	inline CComVariant GetAttr(const CComVariant& obj,const CComVariant& attr)
	{
		HRESULT hr=S_OK;
		if(obj.vt==VT_DISPATCH)
		{
			CComDispatchDriver disp(obj.pdispVal);
			CComVariant ret;
			if(IsIString(attr))
			{
				DISPID did=DynamicDispatch::GetDispID(obj.pdispVal,attr.pdispVal);
				hr=disp.GetProperty(did,&ret);
				//CComBSTR& bstr=ReadIStringUnicode(attr);
				//hr=disp.GetPropertyByName(bstr,&ret);
			}
			else
			{
				hr=disp.GetProperty((DISPID)attr.lVal,&ret);
			}

			if(SUCCEEDED(hr))
			{
				if(ret.vt==VT_BSTR)
					return VariantToScript(ret);
				else
					return ret;
			}
		}
		if(SUCCEEDED(hr))
		{
			AttrGetEvent* pEvent=OnGetAttr.get();
			if(pEvent)
			{
				CComVariant ret;
				if(!(*pEvent)(obj,attr,&ret))
					return CComVariant(0);
				else
					return ret;
			}
		}
		return CComVariant(0);
	}
	inline void SetAttr(const CComVariant& obj,const CComVariant& attr,CComVariant& val)
	{
		HRESULT hr=S_OK;
		if(obj.vt==VT_DISPATCH)
		{
			CComDispatchDriver disp(obj.pdispVal);			
			IObject* pobj=GetIObject(obj);
			if(IsIString(attr))
			{
				//对写特性需要特殊处理，用以为自定义对象添加成员。
				if(!pobj)
				{
					DISPID did=DynamicDispatch::GetDispID(obj.pdispVal,attr.pdispVal);
					if(IsIString(val))
						hr=disp.PutProperty(did,&ReadIStringVariant(val));
					else
						hr=disp.PutProperty(did,&val);
					//CComBSTR& bstr=ReadIStringUnicode(attr);
					//hr=disp.PutPropertyByName(bstr,&val);
				}
				else
				{
					pobj->insert(attr,val);
				}
			}
			else
			{
				if(!pobj && IsIString(val))
					hr=disp.PutProperty(attr.lVal,&ReadIStringVariant(val));
				else
					hr=disp.PutProperty((DISPID)attr.lVal,&val);			
			}
			
			if(SUCCEEDED(hr))
				return;
		}
		if(SUCCEEDED(hr))
		{
			AttrSetEvent* pEvent=OnSetAttr.get();
			if(pEvent)
			{
				if(!(*pEvent)(obj,attr,val))
					hr=DISP_E_MEMBERNOTFOUND;
				else
					return;
			}
		}
#ifdef INCLUDE_COMPILE
		CComVariant tempvar;
		if(IsIString(attr))
			tempvar=ReadIStringVariant(attr);
		else
			tempvar.ChangeType(VT_BSTR);
		CString temp;
		temp.Format("set unknown attr : %s!",CString(tempvar.bstrVal));
		RuntimeError(temp);
#endif
	}
	inline void FilterObjects(const CString& className,Objects& objList,FilterObjectsCallbackArg& arg)
	{
		Scriptc::ClassObjects::iterator it=classObjects.find(className);
		if(it!=classObjects.end())
		{
			Scriptc::VarVector::iterator vit=it->second.begin();
			for(;vit!=it->second.end();vit++)
			{			
				arg.SetObject(*vit);
				CComVariant r=arg.CalcExpression();
				if(r.vt==VT_EMPTY || !r.lVal)
				{
					continue;
				}
				objList.push_back(*vit);
			}
			return;
		}
		FilterObjectsEvent* pEvent=OnFilterObjects.get();
		if(pEvent)
		{
			(*pEvent)(className,objList,arg);
		}
	}
	inline void RuntimeError(const char* msg)
	{
		RuntimeErrorEvent* pEvent=OnRuntimeError.get();
		if(pEvent)
		{
			(*pEvent)(msg);
		}
	}
	inline void Debug(DWORD code,Instructions& ins,Variables& localVariables,CComVariant* externArgs,int argnum,const Objects* pobjects)
	{
		DebugEvent* pDE=OnDebug.get();
		if(pDE)
		{
			(*pDE)(code,ins,globalVariables,localVariables,externArgs,argnum,pobjects);
		}
	}
private:
#ifdef INCLUDE_COMPILE
	void InitSymbolConstants(void);
	int DecideGlobalVar(const CString& name,int nsnum=0,bool add=false);
	int DecideArg(const CString& name,bool add=false);
	int DecideLocalVar(const CString& name);
	int DecideFunction(const CString& name,int nsnum=0,bool add=false);
	int DecideOuterFunc(const CString& name);
	int DecideInnerFunc(const CString& name,bool add=false);
	int DecideConst(int d);
	int DecideConst(double d);
	int DecideConst(const CString& d);
#endif	
	inline void ClearAll(void)
	{
		ClearCompileInfo();

		outerFuncInfos.clear();
		switchInfos.clear();

		intConstants.clear();
		doubleConstants.clear();
		strConstants.clear();
		istrConstants.clear();

		functions.clear();
		funcVarNum.clear();

		globalVariables.clear();

		UnloadLibrary();
		callbackFuncs.clear();
		output="";
		ptrampoline=trampoline;
		while(!runtimeStack.empty())
			runtimeStack.pop();
		apiStack.Clear();

		classObjects.clear();

		for(int i=0;i<MAXQUERY;i++)
		{
			if(oqls[i])
			{
				delete oqls[i];
				oqls[i]=NULL;
			}
		}
		RuntimeErrorEvent* pREE=OnRuntimeError.get();
		if(pREE)
		{
			OnRuntimeError-=pREE;
			delete pREE;
		}			
		DebugEvent* pDE=OnDebug.get();
		if(pDE)
		{
			OnDebug-=pDE;
			delete pDE;
		}
		CallFunctionEvent* pCFE=OnCallFunction.get();
		if(pCFE)
		{
			OnCallFunction-=pCFE;
			delete pCFE;
		}
		CallObjectEvent* pCOE=OnCallObject.get();
		if(pCOE)
		{
			OnCallObject-=pCOE;
			delete pCOE;
		}
		AttrGetEvent* pAGE=OnGetAttr.get();
		if(pAGE)
		{
			OnGetAttr-=pAGE;
			delete pAGE;
		}
		AttrSetEvent* pASE=OnSetAttr.get();
		if(pASE)
		{
			OnSetAttr-=pASE;
			delete pASE;
		}
		FilterObjectsEvent* pFOE=OnFilterObjects.get();
		if(pFOE)
		{
			OnFilterObjects-=pFOE;
			delete pFOE;
		}
		PreTransMsgEvent* pPTME=OnPreTransMsg.get();
		if(pPTME)
		{
			OnPreTransMsg-=pPTME;
			delete pPTME;
		}
	}
	void ClearCompileInfo(void);
	inline void Initialize(void)
	{
		output="";
		ptrampoline=trampoline;
#ifdef INCLUDE_COMPILE
		curFuncIndex=-1;
		oqlIndex=-1;
		nsPrefix="";
		InitSymbolConstants();

		DecideInnerFunc("output",true);
		DecideInnerFunc("clearoutput",true);
		DecideInnerFunc("getoutput",true);
		DecideInnerFunc("msg",true);
		DecideInnerFunc("new",true);
		DecideInnerFunc("delete",true);
		DecideInnerFunc("callback",true);
		DecideInnerFunc("msgdispatch",true);
		DecideInnerFunc("oqlclass",true);
		DecideInnerFunc("activex",true);
		DecideInnerFunc("object",true);
		DecideInnerFunc("vector",true);
		DecideInnerFunc("deque",true);
		DecideInnerFunc("list",true);
		DecideInnerFunc("setobj",true);
		DecideInnerFunc("math",true);
		DecideInnerFunc("like",true);
		DecideInnerFunc("in",true);
		DecideInnerFunc("invariant",true);	
		DecideInnerFunc("distance",true);

		DecideFunction("main",0,true);
#endif
		for(int i=0;i<MAXQUERY;i++)
		{
			oqls[i]=NULL;
		}
	}
public:
	ScriptcRuntime()
	{
		trampoline=new char[TRAMPOLINE_SIZE];
		constStringBuffer=new char[MAX_CONST_STRING_SIZE];
		Initialize();
	}
	virtual ~ScriptcRuntime()
	{
		ClearAll();
		delete[] constStringBuffer;
		delete[] trampoline;
	}
	inline void Reset(void)
	{
		ClearAll();
		Initialize();
	}
	inline void SetVariable(UINT index,const CComVariant& val)
	{
		if(index<0 || index>=globalVariables.size())
			return;
		globalVariables[index]=VariantToScript(val);
	}
	//返回脚本中的变量时不进行内部字符串对象到BSTR型VARIANT的转换，内部字符串提供了COM方法toString来转换为BSTR
	//，此外，使用者可以采用解释器提供的内部字符串处理方法来获取字符串内容(主要是考虑到BSTR的内存分配与回收)。
	inline CComVariant GetVariable(UINT index)
	{
		if(index<0 || index>=globalVariables.size())
			return CComVariant(0);

		CComVariant& val=globalVariables[index];
		return val;
	}
public:
#ifdef INCLUDE_COMPILE
	bool DefConst(const CString& name,const CString& val);
	CComVariant GetConst(const CString& name);
	int DefVar(const CString& data,const CString& val="0");
	int DefApi(const CString& data);
	void StartNamespace(const CString& name);
	void EndNamespace(const CString& name);
	void GenTextBlock(const CString& text);
	bool OuterArgSize(const CString& argsize,bool isNewFunc=false);
	bool DeclOuterFunc(const CString& lib,const CString& name,const CString& retsize,const CString& origin,bool isNewFunc=false);
	void GenPush(int d);
	void GenPush(double d);
	void GenPush(const CString& d);
	void GenPush(const CString& data,int type,int nsnum=0);
	void GenPop(void);
	void GenCall(int argnum);
	void GenObjGetAttr(void);
	void GenObjSetAttr(void);
	void GenObjCall(int argnum);
	void GenContinue(void);
	void GenBreak(void);
	void GenReturn(void);
	void GenPtrInfo(void);
	void GenPtrCalc(void);
	void GenAddress(const CString& name,int nsnum);
	void PushContinue(void);
	void PopContinue(int d);
	void PushBreak(void);
	void PopBreak(int d);
	//分支信息
	void PushIfThen(void);
	void PopIfThen(void);
	void PushIfElse(void);
	void PopIfElse(void);
	void PushSwitch(void);
	bool GenCase(const CString& s);
	void GenDefault(void);
	void PopSwitch(void);
	//循环信息
	void PushLoop(int type);
	void GenLoopLogicStart(void);
	void GenLoopLogicEnd(void);
	void PushFor3thExp(void);
	void PauseFor3thExp(void);
	void PopFor3thExp(void);
	void PopLoop(void);
	void PushLogicCheck(int type);
	void PopLogicCheck(int type);
	void GenCalc(const CString& data,int opnum=2);
	bool DeclFunction(const CString& name);	
	void GenArg(int type=0);
	void DeclArg(const CString& name);
	bool StartFunction(const CString& name);
	void EndFunction(const CString& name);
	//oql处理,当前不支持嵌套子查询
	void PushQuery(int ix);
	void PopQuery(void);
	void GenExecQuery(int ix);
	int GenExpression(void);
	//
	void AddSelect(const CString& select);
	void AddFrom(const CString& from);
	void AddFromExp(int exp);
	void GenJoin(int exp);
	void GenSort(int exp,int order);

	CString Compile(const char* filePath);
	CString Compile(const char* buf,const char* filePath);
	inline bool SaveFile(const char* path,const char* key=NULL)
	{
		char* buf=new char[MAXCODEBUFFERSIZE];
		int size=SaveMemory(buf,key);
		int r=ScriptFile::WriteLocal(path,buf,size);
		delete[] buf;
		if(r<0)
			return false;
		return true;
	}
	inline int SaveMemory(char* dbuf,const char* key=NULL)
	{
		CriticalSectionOperator CSO(&saveMemCriticalSection);

		char* buf=new char[MAXCODEBUFFERSIZE];
		char* p=buf;
		SaveScriptc(p);
		int size=p-buf;
		
		LZARI lzari;
		p=buf;
		buf=(char*)lzari.Compress((const BYTE*)buf,size,size);
		delete[] p;

		if(key)
		{
			UINT num=ScriptFile::CalcuRotateNum(key);
			ScriptFile::Encode((unsigned char*)buf,(const unsigned char*)key,size,num);
		}

		ScriptFile::MemCpy(dbuf,buf,size);
		delete[] buf;
		return size;
	}
	inline CString ListFunctions(void)
	{		
		CString temp;
		temp.Format("[global variable number:%d] [api number:%d] [function number:%d]",globalVariables.size(),outerFuncInfos.size(),functions.size());
		CString t;
		t.Format("\n[integer const number:%d]",intConstants.size());
		temp+=t;
		for(UINT ii=0;ii<intConstants.size();ii++)
		{
			t.Format("\n%8.8X",intConstants[ii]);
			temp+=t;
		}
		t.Format("\n[float const number:%d]",doubleConstants.size());
		temp+=t;
		for(int ii=0;ii<doubleConstants.size();ii++)
		{
			t.Format("\n%f",doubleConstants[ii]);
			temp+=t;
		}
		t.Format("\n[string const number:%d]",strConstants.size());
		temp+=t;
		for(int ii=0;ii<strConstants.size();ii++)
		{
#ifdef ENCODE_STRING
			CString d=strConstants[ii];
			int len=d.GetLength();
			char* buf=constStringBuffer;
			ScriptFile::MemCpy(buf,d,len+1);
			ScriptFile::UnRotateKey((UCHAR*)buf);
			t.Format("\n%s",buf);
#else
			t.Format("\n%s",strConstants[ii]);
#endif		
			
			temp+=t;
		}
		for(int ii=0;ii<functions.size();ii++)
		{
			Instructions& ins=functions[ii];
			t.Format("\n=>[function:%d] [instruntion number:%d] [local variable number:%d]",ii,ins.size(),funcVarNum[ii]);
			temp+=t;
			for(UINT i=0;i<ins.size();i++)
			{
				t.Format("\n%8.8X",ins[i]);
				temp+=t;
			}
		}
		return temp;
	}
	inline CString ListOqls(void)
	{
		CString temp="",prestr="";
		for(int i=0;i<MAXQUERY;i++)
		{
			if(oqls[i] && oqls[i]->selectList.size()>0)
			{
				CString t;
				t.Format("=>[oql:%d] %s",i,oqls[i]->ListOql());
				temp+=prestr+t;
				prestr="\n";
			}
		}
		return temp;
	}
#endif
public:
	RuntimeErrorEventTriger OnRuntimeError;
	DebugEventTriger OnDebug;
	//对于函数调用、对象方法调用、属性读写以及OQL回调，参数均为scriptc变量，也就是说其中包括内建字符串对象，
	//检查并读取实际的字符串是回调编写方的责任，对于需要返回值的，还应该将返回值转换为scriptc变量。
	//GetIObject,BuildIString,ReadIString,ReadIStringUnicode,ReadIStringVariant,IsIString,VariantToScript用于辅助这些工作。
	CallFunctionEventTriger OnCallFunction;
	CallObjectEventTriger OnCallObject;
	AttrGetEventTriger OnGetAttr;
	AttrSetEventTriger OnSetAttr;
	FilterObjectsEventTriger OnFilterObjects;
	PreTransMsgEventTriger OnPreTransMsg;
public:
	//检查一个变量是否内部对象并返回其指针
	static inline IObject* GetIObject(const CComVariant& v)
	{
		if(v.vt==VT_DISPATCH && v.pdispVal)
		{
			CComPtr<IObject> dispEx;
			v.pdispVal->QueryInterface(IID_IObject,(void**)&dispEx);
			if(!dispEx)
				return NULL;
			else
				return dispEx;
		}
		return NULL;
	}
	//构造内部字符串对象变量
	static inline CComVariant BuildIString(const char* s)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=Scriptc::StringObj<ScriptcRuntime>::CreateDispatchEx();
		strPtr->Init(s);
		CComVariant str((IDispatch*)strPtr);
		strPtr->Release();
		return str;
	}
	//构造内部字符串对象变量
	static inline CComVariant BuildIString(const BSTR s)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=Scriptc::StringObj<ScriptcRuntime>::CreateDispatchEx();
		strPtr->Init(s);
		CComVariant str((IDispatch*)strPtr);
		strPtr->Release();
		return str;
	}
	//构造内部字符串对象变量
	static inline CComVariant BuildIString(const VARIANT& s)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=Scriptc::StringObj<ScriptcRuntime>::CreateDispatchEx();
		strPtr->Init(s);
		CComVariant str((IDispatch*)strPtr);
		strPtr->Release();
		return str;
	}
	//直接读取内部字符串的内容引用，不检查参数是否为内部字符串，必须与IsIString联合使用
	static inline CStringA& ReadIString(const CComVariant& v)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=static_cast<Scriptc::StringObj<ScriptcRuntime>*>(v.pdispVal);
		CStringA& s=strPtr->Ref();
		return s;
	}
	//直接读取内部字符串的UNICODE内容引用，不检查参数是否为内部字符串，必须与IsIString联合使用
	static inline CComBSTR& ReadIStringUnicode(const CComVariant& v)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=static_cast<Scriptc::StringObj<ScriptcRuntime>*>(v.pdispVal);
		CComBSTR& s=strPtr->UnicodeRef();
		return s;
	}
	//直接读取内部字符串的VARIANT内容引用，不检查参数是否为内部字符串，必须与IsIString联合使用
	static inline CComVariant& ReadIStringVariant(const CComVariant& v)
	{
		Scriptc::StringObj<ScriptcRuntime>* strPtr=static_cast<Scriptc::StringObj<ScriptcRuntime>*>(v.pdispVal);
		CComVariant& s=strPtr->VariantRef();
		return s;
	}
	//检查一个变量是否内部字符串对象
	static inline bool IsIString(const CComVariant& v)
	{
		if(v.vt==VT_DISPATCH && v.pdispVal)
		{
			CComPtr<IDispatch> dispEx;
			v.pdispVal->QueryInterface(IID_IString,(void**)&dispEx);
			if(!(!dispEx))
			{
				return true;
			}
		}
		return false;
	}
	//将variant表示的变量转换为scriptc脚本里的一个变量，主要是将BSTR转换为内部字符串对象
	static inline CComVariant VariantToScript(const CComVariant& v)
	{
		if(v.vt==VT_BSTR)//将BSTR转换为内部字符串对象
		{
			Scriptc::StringObj<ScriptcRuntime>* strPtr=Scriptc::StringObj<ScriptcRuntime>::CreateDispatchEx();
			strPtr->Init(v.bstrVal);
			CComVariant ret((IDispatch*)strPtr);
			strPtr->Release();
			return ret;
		}
		else
			return v;
	}
	//将scriptc脚本里的一个变量转换为字符串
	static inline CString ScriptToString(const CComVariant& v)
	{
		if(IsIString(v))
		{
			return ReadIString(v);
		}
		else
		{
			CComVariant ret=v;
			ret.ChangeType(VT_BSTR);
			return CString(ret.bstrVal);
		}
	}
public:
	inline bool LoadFile(const char* path,const char* key=NULL)
	{
		char* buf=NULL;
		int size=ScriptFile::Read(path,buf);
		if(size<0)
			return false;
		
		if(!LoadMemory(buf,size,key))
		{
			delete[] buf;
			return false;
		}
		delete[] buf;
		return true;
	}
	inline bool LoadMemory(const char* sbuf,int size,const char* key=NULL)
	{
		CriticalSectionOperator CSO(&loadMemCriticalSection);
		if(size<0)
			return false;

		char* buf=new char[size];
		ScriptFile::MemCpy(buf,sbuf,size);

		if(key)
		{			
			UINT num=ScriptFile::CalcuRotateNum(key);
			ScriptFile::Decode((unsigned char*)buf,(const unsigned char*)key,size,num);
		}
		
		LZARI lzari;
		const char* p=buf;
		buf=(char*)lzari.Decompress((const BYTE*)buf,size,size);
		delete[] p;

		p=buf;
		UINT usize=(UINT)size;
		if(!LoadScriptc(p,usize))
		{
			delete[] buf;
			return false;
		}
		delete[] buf;
		return true;
	}
	inline void LoadLibrary(void)
	{
		char libNameBuffer[MAX_IDENTIFIER_SIZE];
		char funcNameBuffer[MAX_IDENTIFIER_SIZE];
		CriticalSectionOperator CSO(&loadLibraryCriticalSection);

		OuterFuncInfos::iterator it=outerFuncInfos.begin();
		for(;it!=outerFuncInfos.end();it++)
		{
#ifdef ENCODE_STRING
			int liblen=it->lib.GetLength();
			int originlen=it->origin.GetLength();
			char* plib=libNameBuffer;
			char* porigin=funcNameBuffer;
			ScriptFile::MemCpy(plib,it->lib,liblen+1);
			ScriptFile::MemCpy(porigin,it->origin,originlen+1);
			ScriptFile::UnRotateKey((UCHAR*)plib);
			ScriptFile::UnRotateKey((UCHAR*)porigin);
			CString lib(plib);
			CString origin(porigin);
#else
			CString& lib=it->lib;
			CString& origin=it->origin;
#endif
			if(lib=="callback")
			{
				it->address=0;
			}
			else
			{
				HMODULE hModule=::GetModuleHandle(lib);
				if(!hModule)
				{
					hModule=::LoadLibrary(lib);
					if(hModule)
					{
						librarys.push_back(hModule);
					}
				}
				if(hModule)
				{
					it->address=(DWORD)::GetProcAddress(hModule,origin);
				}
			}
			it->lib="";
			it->origin="";
		}
	}
	inline void UnloadLibrary(void)
	{
		CriticalSectionOperator CSO(&unloadLibraryCriticalSection);

		Librarys::iterator it=librarys.begin();
		for(;it!=librarys.end();it++)
		{
			::FreeLibrary(*it);
		}
		librarys.clear();
	}
	inline void ReleaseThreadApiStack(void)
	{
		apiStack.Release();
	}
	inline CComVariant ExecScript(CComVariant* externArgs=NULL,int argnum=0)
	{
		return ExecFunction(0,externArgs,argnum);
	}
	//函数返回值不进行内部字符串对象到BSTR型VARIANT的转换，内部字符串提供了COM方法toString来转换为BSTR
	//，此外，使用者可以采用解释器提供的内部字符串处理方法来获取字符串内容(主要是考虑到BSTR的内存分配与回收)。
	inline CComVariant ExecFunction(UINT index,CComVariant* externArgs=NULL,int argnum=0,CComVariant obj=CComVariant(0))
	{
		if(index<0 || index>=functions.size())
		{			
#ifdef INCLUDE_COMPILE
			CString temp;
			temp.Format("call unknown function : %d,may be error method or variable!",index);
			RuntimeError(temp);
#endif
			return CComVariant(0);
		}

		Variables localVariables;
		for(int ii=0;ii<funcVarNum[index];ii++)
			localVariables.push_back(CComVariant(0));
		//初始化预定义局部变量
		localVariables[0]=obj;//this
		localVariables[1]=CComVariant(argnum);//argnum

		if(index<0)
			return CComVariant(0);		
		Instructions& ins=functions[index];
		return Exec(ins,localVariables,externArgs,argnum);
	}
private:
	inline int ExecQuery(int index,int objnum,Variables& localVariables,CComVariant* externArgs,int argnum,CComVariant* result)
	{
		if(index<0 || index>=MAXQUERY || !oqls[index])
		{
#ifdef INCLUDE_COMPILE
			CString temp;
			temp.Format("execute unknown query : %d,please check the query index!",index);
			RuntimeError(temp);
#endif
			return 0;
		}

		Objects expargs;
		int size=oqls[index]->fromList.size();

		//得到FROM列表各对象表
		//按FROM列表中各表的WHERE子句过滤
		FilterObjectsCallbackArg arg;
		arg.pScriptc=this;
		arg.pOql=oqls[index];
		arg.oqlIndex=index;
		arg.pVariables=&localVariables;

		arg.externArgs=externArgs;
		arg.argnum=argnum;
		arg.pObjects=&expargs;

		OBJLISTS objlists;
		for(int i=0;i<size;i++)
		{
			arg.fromIndex=i;
			expargs.push_back(NULL);
			Objects objlist;
			objlists.push_back(objlist);
			if(oqls[index]->fromList[i]=="all")
			{				
				FilterObjects("",objlists[i],arg);
			}
			else
			{
				FilterObjects(oqls[index]->fromList[i],objlists[i],arg);
			}
		}
		OBJLISTS* pObjList=&objlists;
		Orders orders;
		//按JOIN子句执行连接过滤
		bool nullLink=false;
		for(int i=0;i<size;i++)
		{
			if((*pObjList)[i].size()==0)
				nullLink=true;
		}
		OBJLISTS objlists2;
		JOINLISTS joinlists;
		if(nullLink || oqls[index]->join>=0 || oqls[index]->sort!=-1)
		{
			if(nullLink || oqls[index]->join>=0)
			{
				for(int i=0;i<size;i++)
				{
					Objects objlist;
					objlists2.push_back(objlist);
					JoinObjs joinobjs;
					joinlists.push_back(joinobjs);
				}
			}
			if(!nullLink)
			{
				int* dim=new int[size];
				int* sub=new int[size];
				for(int i=0;i<size;i++)
				{
					dim[i]=(*pObjList)[i].size();
					sub[i]=0;
				}
				sub[size-1]=-1;
				while(sub[0]<dim[0])
				{
					int i=size-1;
					//模拟数的带进位加1运算,借此实现数个对象表的笛卡尔积,以计算连接
					for(;i>=0;i--)
					{
						if(sub[i]<dim[i]-1)
						{
							sub[i]++;
							break;
						}
						else
						{
							sub[i]=0;
						}
					}
					if(i<0)
						break;
					//计算连接过滤的结果
					for(int ii=0;ii<size;ii++)
					{
						Objects::iterator dit=expargs.begin();
						std::advance(dit,ii);
						Objects::iterator sit=(*pObjList)[ii].begin();
						std::advance(sit,sub[ii]);
						*dit=*sit;
					}
					//计算连接并按连接结果构造objlists2
					if(oqls[index]->join>=0)
					{
						CComVariant r=CalcExpression(index,oqls[index]->join,localVariables,externArgs,argnum,&expargs);
						if(r.vt==VT_EMPTY || !r.lVal)
							continue;
						for(int ii=0;ii<size;ii++)
						{
							Objects::iterator dit=expargs.begin();
							std::advance(dit,ii);
							JoinObjs& objs=joinlists[ii];
							JoinObjs::iterator it=objs.find(*dit);
							if(it==objs.end())
							{
								objs.insert(*dit);
								objlists2[ii].push_back(*dit);
							}
						}
					}
					//为ORDER BY子句计算排序值
					if(oqls[index]->sort!=-1)
					{
						int exp=oqls[index]->sort & 0x00FFFFFF;
						CComVariant r=CalcExpression(index,exp,localVariables,externArgs,argnum,&expargs);
						if(r.vt==VT_EMPTY)
							r.lVal=0;
						for(int ii=0;ii<size;ii++)
						{
							Objects::iterator dit=expargs.begin();
							std::advance(dit,ii);
							orders[*dit]=r;
						}
					}
				}
				delete[] dim;
				delete[] sub;
				joinlists.clear();
			}
			if(nullLink || oqls[index]->join>=0)
				pObjList=&objlists2;
		}
		//获取结果集
		Objects objects;
		size=oqls[index]->selectList.size();
		for(int i=0;i<size;i++)
		{
			FromList::iterator it=std::find(oqls[index]->fromList.begin(),oqls[index]->fromList.end(),oqls[index]->selectList[i]);
			int d=std::distance(oqls[index]->fromList.begin(),it);
			Objects& objs=(*pObjList)[d];
			Objects::iterator oit=objs.begin();
			while(oit!=objs.end())
			{
				objects.push_back(*oit);
				oit++;
			}
		}
		int len=objects.size();
		//实现ORDER BY子句的功能
		if(oqls[index]->sort!=-1 && len>0)
		{
			Objects::iterator it;
			int order=(oqls[index]->sort & 0xFF000000)>>24;
			switch(order)
			{
			case 0:
				//std::stable_sort(objects.begin(),objects.end(),CompareT<true>(&orders));
				objects.sort(CompareT<true>(&orders));
				break;
			case 1:
				//std::stable_sort(objects.begin(),objects.end(),CompareT<false>(&orders));
				objects.sort(CompareT<false>(&orders));
				break;
			case 2:
				{
					it=std::max_element(objects.begin(),objects.end(),CompareT<true>(&orders));
					Objects::iterator fit=objects.begin();
					CComVariant obj=*it;
					*it=*fit;
					*fit=obj;
				}
				break;
			case 3:
				{
					it=std::min_element(objects.begin(),objects.end(),CompareT<true>(&orders));
					Objects::iterator fit=objects.begin();
					CComVariant obj=*it;
					*it=*fit;
					*fit=obj;
				}
				break;
			}
		}
		if(objnum==1)
		{
			if(len<=0)
				return 0;		
			*result=objects.front();
			return 1;
		}
		else
		{
			//objnum<=0时取查询到的全部对象，否则取前num个对象
			if(objnum>1 && objnum<len)
				len=objnum;
			SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,0,len);
			Objects::iterator it=objects.begin();
			for(LONG ii=0;ii<len && it!=objects.end();ii++,it++)
			{			
				::SafeArrayPutElement(psa,&ii,&(*it));
			}			
			VARIANT var;
			::VariantInit(&var);
			var.vt=VT_ARRAY|VT_VARIANT;
			var.parray=psa;
			*result=var;
			::SafeArrayDestroy(psa);
			return len;
		}
	}
	inline CComVariant CalcExpression(int oqlix,int index,Variables& localVariables,CComVariant* externArgs,int argnum,const Objects* pobjects)
	{
		Instructions& ins=oqls[oqlix]->GetExpression(index);		
		return Exec(ins,localVariables,externArgs,argnum,pobjects);
	}
private:
	inline CComVariant GetLValue(Variables& localVariables,CComVariant* externArgs,int argnum,const CComVariant& vop)
	{
		if(vop.vt==VT_I4)
		{
			int op=vop.lVal;
			int type=(op & 0x0f0000)>>16;
			int index=(op & 0x00ffff);
			switch(type)
			{
			case 0://局部变量
				return localVariables[index];
			case 4://参数
				{
					if(index<0 || index>=argnum)
						return CComVariant(0);
					return externArgs[index];
				}
			case 5://全局变量
				return globalVariables[index];
			}
		}
		else if(vop.vt==VT_R8)
		{
			__int64 ptrinfo=(__int64)vop.dblVal;
			int addr=int(ptrinfo & 0x00000000ffffffff);
			int size=int((ptrinfo & 0xffffffff00000000)>>32);
			switch(size)
			{
			case 1:
				{
					return CComVariant(*(BYTE*)addr);
				}
			case 2:
				{	
					return CComVariant(*(SHORT*)addr);
				}
			case 3:
				{	
					return CComVariant(*(USHORT*)addr);
				}
			case 4:
				{
					return CComVariant(*(LONG*)addr);
				}
			case 5:
				{
					return CComVariant(*(ULONG*)addr);
				}
			case 8:
				{
					return CComVariant(*(double*)addr);
				}
			case 9:
				{
					return BuildIString(CString((BSTR)addr));
				}
			case 10:
				{
					return BuildIString((const char*)addr);
				}
			case 11:
				{
					return CComVariant(*(IDispatch**)addr);
				}
			case 12:
				{
					return *(CComVariant*)addr;
				}
			}
		}
		return CComVariant(0);
	}
	inline void SetLValue(Variables& localVariables,CComVariant* externArgs,int argnum,const CComVariant& vop,const CComVariant& newVal)
	{
		if(vop.vt==VT_I4)
		{
			int op=vop.lVal;
			int type=(op & 0x0f0000)>>16;
			int index=(op & 0x00ffff);
			switch(type)
			{
			case 0://局部变量
				localVariables[index]=newVal;
				break;
			case 4://参数
				{					
					if(index<0 || index>=argnum)
						return;
					externArgs[index]=newVal;
				}
				break;
			case 5://全局变量
				globalVariables[index]=newVal;
				break;
			}		
		}
		else if(vop.vt==VT_R8)
		{
			__int64 ptrinfo=(__int64)vop.dblVal;
			int addr=int(ptrinfo & 0x00000000ffffffff);
			int size=int((ptrinfo & 0xffffffff00000000)>>32);
			switch(size)
			{
			case 1:
				{
					*(BYTE*)addr=newVal.bVal;
				}
				break;
			case 2:
				{	
					*(SHORT*)addr=newVal.iVal;
				}
				break;
			case 3:
				{	
					*(USHORT*)addr=newVal.iVal;
				}
				break;
			case 4:
				{
					*(LONG*)addr=newVal.lVal;
				}
				break;
			case 5:
				{
					*(LONG*)addr=newVal.lVal;
				}
				break;
			case 8:
				{
					*(DOUBLE*)addr=newVal.dblVal;
				}
				break;
			case 9:
				{
					if(IsIString(newVal))
					{
						CString& t=ReadIString(newVal);
						BSTR bstr=t.AllocSysString();
						int len=::SysStringLen(bstr)*2+2;//BSTR 2字节0结尾且每个字母占2个字节
						::memcpy((void*)(addr-4),(void*)((int)bstr-4),len+4);//BSTR 4字节前导长度
						::SysFreeString(bstr);
					}
				}
				break;
			case 10:
				{
					if(IsIString(newVal))
					{
						CString& t=ReadIString(newVal);
						::strcpy((char*)addr,t);
					}					
				}
				break;
			case 11:
				{
					*(IDispatch**)addr=newVal.pdispVal;
					newVal.pdispVal->AddRef();
				}
				break;
			case 12:
				{
					*(CComVariant*)addr=newVal;
				}
				break;
			}
		}
	}
	inline CComVariant Exec(Instructions& ins,Variables& localVariables,CComVariant* externArgs,int argnum,const Objects* pobjects=NULL)
	{
		//外部处理参数，将BSTR转换为内部字符串对象
		for(int ii=0;ii<argnum;ii++)
		{
			CComVariant& arg=externArgs[ii];
			if(arg.vt==VT_BSTR)
			{
				arg=VariantToScript(arg);
			}
		}
		CComVariant popVal;
		Instructions::iterator it=ins.begin();
		while(it!=ins.end())
		{
			DWORD code=*it;
#ifdef INCLUDE_COMPILE
			Debug(code,ins,localVariables,externArgs,argnum,pobjects);
#endif
			int op=(code&0xff000000)>>24;
			int operand=(code&0x00ffffff);
			switch(op)
			{
			case OP_PUSH:
				{
					//16~19位 = 0局部变量1整数常量2浮点数常量3字符串常量4参数5全局变量6OQL查询对象
					//20~23位 = 0x10左值
					int lv=(operand&0xf00000)>>16;
					int type=(operand&0x0f0000)>>16;
					int index=(operand&0xffff);
					switch(type)
					{
					case 0:
						{
							if(lv>0)								
								runtimeStack.push(CComVariant(operand&0x0fffff));
							else
								runtimeStack.push(localVariables[index]);
						}
						break;
					case 1:
						{
							runtimeStack.push(CComVariant(intConstants[index]));
						}
						break;
					case 2:
						{
							runtimeStack.push(CComVariant(doubleConstants[index]));
						}
						break;
					case 3:
						{
							if(istrConstants.size()<=0)
							{
								for(UINT ci=0;ci<strConstants.size();ci++)
									istrConstants.push_back(CComVariant(0));
							}
							CComVariant& str=istrConstants[index];
							if(str.vt!=VT_DISPATCH || !str.lVal)
							{
#ifdef ENCODE_STRING
								CString& d=strConstants[index];
								int len=d.GetLength();
								char* buf=constStringBuffer;
								ScriptFile::MemCpy(buf,d,len+1);
								ScriptFile::UnRotateKey((UCHAR*)buf);
								
								str=BuildIString(buf);
								runtimeStack.push(str);
#else
								str=BuildIString((LPCSTR)strConstants[index]);
								runtimeStack.push(str);
#endif						
							}
							else
							{								
								runtimeStack.push(str);
							}
						}
						break;
					case 4:
						{
							if(lv>0)								
								runtimeStack.push(CComVariant(operand&0x0fffff));
							else
							{
								if(index<0 || index>=argnum)
									runtimeStack.push(CComVariant(0));
								else
									runtimeStack.push(externArgs[index]);
							}
						}
						break;
					case 5:
						{
							if(lv>0)								
								runtimeStack.push(CComVariant(operand&0x0fffff));
							else
								runtimeStack.push(globalVariables[index]);
						}
						break;
					case 6:
						{							
							Objects::const_iterator it=pobjects->begin();
							std::advance(it,index);
							runtimeStack.push(*it);
						}
						break;
					}
				}
				break;
			case OP_POP:
				{
					popVal=runtimeStack.top();
					runtimeStack.pop();
				}
				break;	
			case OP_JMP:
				{
					int type=(operand&0xff0000)>>16;
					int offset=(operand&0xffff);
					switch(type)
					{
					case 0:
						{
							it+=offset;
						}
						break;
					case 1:
						{
							it-=offset;
						}
						break;
					}
				}
				break;
			case OP_JZ:
				{
					int flag=(operand&0xf00000)>>16;
					CComVariant op1=runtimeStack.top();
					if(flag==0)
						runtimeStack.pop();
					if(!op1.lVal)
					{
						int type=(operand&0x0f0000)>>16;
						int offset=(operand&0xffff);
						switch(type)
						{
						case 0:
							{
								it+=offset;
							}
							break;
						case 1:
							{
								it-=offset;
							}
							break;
						}
					}
				}
				break;
			case OP_JNZ:
				{
					int flag=(operand&0xf00000)>>16;
					CComVariant op1=runtimeStack.top();
					if(flag==0)
						runtimeStack.pop();
					if(op1.lVal)
					{
						int type=(operand&0x0f0000)>>16;
						int offset=(operand&0xffff);
						switch(type)
						{
						case 0:
							{
								it+=offset;
							}
							break;
						case 1:
							{
								it-=offset;
							}
							break;
						}
					}
				}
				break;
			case OP_TABLE_JMP:
				{
					SwitchInfo& info=switchInfos[operand];
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					Cases::iterator cit=info.cases.find(op1.lVal);
					if(cit!=info.cases.end())
						it+=cit->second;
					else
						it+=info.def;
				}
				break;
			case OP_CALL:
				{
					CComVariant* args=new CComVariant[operand];
					for(int i=0;i<operand;i++)
					{
						args[operand-i-1]=runtimeStack.top();
						runtimeStack.pop();
					}
					CComVariant func=runtimeStack.top();
					runtimeStack.pop();
					if(func.lVal>0 && func.lVal<=USER_FUNCTION_NUM)
					{
						CComVariant res=ExecFunction(func.lVal-1,args,operand);
						runtimeStack.push(res);
					}
					else
					{
						//执行内外部函数调用
						CComVariant res=CallFunction(func,args,operand);
						runtimeStack.push(res);
					}
					delete[] args;
				}
				break;	
			case OP_RETURN:
				{					
					popVal=runtimeStack.top();
					runtimeStack.pop();
					goto funcexit;
				}
				break;
			case OP_OBJCALL:
				{
					CComVariant* args=new CComVariant[operand];
					for(int i=0;i<operand;i++)
					{
						args[operand-i-1]=runtimeStack.top();
						runtimeStack.pop();
					}
					CComVariant func=runtimeStack.top();
					runtimeStack.pop();
					CComVariant obj=runtimeStack.top();
					runtimeStack.pop();
					//执行对象调用
					CComVariant res=CallObject(obj,func,args,operand);
					runtimeStack.push(res);
					delete[] args;
				}
				break;	
			case OP_OBJGETATTR:
				{
					CComVariant attr=runtimeStack.top();
					runtimeStack.pop();
					CComVariant obj=runtimeStack.top();
					runtimeStack.pop();
					//执行读属性操作
					CComVariant res=GetAttr(obj,attr);
					runtimeStack.push(res);
				}
				break;	
			case OP_OBJSETATTR:
				{
					CComVariant val=runtimeStack.top();
					runtimeStack.pop();
					CComVariant attr=runtimeStack.top();
					runtimeStack.pop();
					CComVariant obj=runtimeStack.top();
					runtimeStack.pop();
					//执行写属性操作
					SetAttr(obj,attr,val);
					runtimeStack.push(val);
				}
				break;	
			case OP_ADD:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res;
					if(IsIString(op1))
					{
						CString& t1=ReadIString(op1);
						CString t2=ScriptToString(op2);
						res=BuildIString(t1+t2);
					}
					else if(IsIString(op2))
					{
						CString t1=ScriptToString(op1);
						CString& t2=ReadIString(op2);
						res=BuildIString(t1+t2);
					}
					else if(op1.vt==VT_R8 || op2.vt==VT_R8)
					{
						op1.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res=CComVariant(op1.dblVal+op2.dblVal);
					}
					else
						res=CComVariant(op1.lVal+op2.lVal);
					runtimeStack.push(res);
				}
				break;		
			case OP_SUB:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal-=op2.dblVal;
					}
					else
						res.lVal-=op2.lVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_MUL:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal*=op2.dblVal;
					}
					else
						res.lVal*=op2.lVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_DIV:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal/=op2.dblVal;
					}
					else
						res.lVal/=op2.lVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_MOD:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal=(DOUBLE)(((unsigned __int64)res.dblVal)%((unsigned __int64)op2.dblVal));
					}
					else
						res.ulVal%=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_AND:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal=(DOUBLE)(((unsigned __int64)res.dblVal)&((unsigned __int64)op2.dblVal));
					}
					else
						res.ulVal&=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_OR:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal=(DOUBLE)(((unsigned __int64)res.dblVal)|((unsigned __int64)op2.dblVal));
					}
					else
						res.ulVal|=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_NEG:
				{
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8)
					{
						res.dblVal=(DOUBLE)(~((unsigned __int64)res.dblVal));
					}
					else
						res.ulVal=~op1.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_XOR:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8 || op2.vt==VT_R8)
					{
						res.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						res.dblVal=(DOUBLE)(((unsigned __int64)res.dblVal)^((unsigned __int64)op2.dblVal));
					}
					else
						res.ulVal^=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_ANDAND:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(op1.boolVal && op2.boolVal)
						runtimeStack.push(CComVariant(TRUE));
					else						
						runtimeStack.push(CComVariant(FALSE));
				}
				break;	
			case OP_OROR:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(op1.boolVal || op2.boolVal)
						runtimeStack.push(CComVariant(TRUE));
					else						
						runtimeStack.push(CComVariant(FALSE));
				}
				break;		
			case OP_NOT:
				{
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(!op1.boolVal)
						runtimeStack.push(CComVariant(TRUE));
					else						
						runtimeStack.push(CComVariant(FALSE));
				}
				break;		
			case OP_EQ:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1==t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 && op2.vt==VT_R8)
					{
						if(op1.dblVal==op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{
						if(op1.lVal==op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;		
			case OP_NE:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1!=t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 && op2.vt==VT_R8)
					{
						if(op1.dblVal!=op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{
						if(op1.lVal!=op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;		
			case OP_LS:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8)
					{
						res.dblVal=(DOUBLE)(((unsigned __int64)res.dblVal)<<op2.ulVal);
					}
					else
						res.ulVal<<=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_RS:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant res=op1;
					if(res.vt==VT_R8)
					{
						res.dblVal=(DOUBLE)(((__int64)res.dblVal)>>op2.ulVal);
					}
					else
						res.ulVal>>=op2.ulVal;
					runtimeStack.push(res);
				}
				break;		
			case OP_LT:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1<t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 || op2.vt==VT_R8)
					{
						op1.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						if(op1.dblVal<op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{	
						if(op1.lVal<op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;		
			case OP_GT:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1>t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 || op2.vt==VT_R8)
					{
						op1.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						if(op1.dblVal>op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{	
						if(op1.lVal>op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;		
			case OP_LE:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1<=t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 || op2.vt==VT_R8)
					{
						op1.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						if(op1.dblVal<=op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{	
						if(op1.lVal<=op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;		
			case OP_GE:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					if(IsIString(op1) && IsIString(op2))
					{
						CString& t1=ReadIString(op1);
						CString& t2=ReadIString(op2);
						if(t1>=t2)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else if(op1.vt==VT_R8 || op2.vt==VT_R8)
					{
						op1.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						if(op1.dblVal>=op2.dblVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
					else
					{	
						if(op1.lVal>=op2.lVal)
							runtimeStack.push(CComVariant(TRUE));
						else
							runtimeStack.push(CComVariant(FALSE));
					}
				}
				break;	
			case OP_INC:
				{
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8)
						val.dblVal++;
					else
						val.lVal++;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);
				}
				break;	
			case OP_DEC:
				{
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8)
						val.dblVal--;
					else
						val.lVal--;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);
				}
				break;
			case OP_USUB:
				{
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=op1;
					if(val.vt==VT_R8)
						val.dblVal=-val.dblVal;
					else
						val.lVal=-val.lVal;
					runtimeStack.push(val);
				}
				break;
			case OP_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					SetLValue(localVariables,externArgs,argnum,op1,op2);
					runtimeStack.push(op2);
				}
				break;
			case OP_ADD_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(IsIString(val))
					{
						CString& t1=ReadIString(val);
						CString t2=ScriptToString(op2);
						val=BuildIString(t1+t2);
					}
					else if(IsIString(op2))
					{
						CString t1=ScriptToString(val);
						CString& t2=ReadIString(op2);
						val=BuildIString(t1+t2);
					}
					else if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val=CComVariant(val.dblVal+op2.dblVal);
					}
					else
						val=CComVariant(val.lVal+op2.lVal);
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_SUB_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal-=op2.dblVal;
					}
					else
						val.lVal-=op2.lVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_MUL_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal*=op2.dblVal;
					}
					else
						val.lVal*=op2.lVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_DIV_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal/=op2.dblVal;
					}
					else
						val.lVal/=op2.lVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_MOD_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)%((unsigned __int64)op2.dblVal));
					}
					else
						val.ulVal%=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_AND_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)&((unsigned __int64)op2.dblVal));
					}
					else
						val.ulVal&=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_OR_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)|((unsigned __int64)op2.dblVal));
					}
					else
						val.ulVal|=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_XOR_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8 || op2.vt==VT_R8)
					{
						val.ChangeType(VT_R8);
						op2.ChangeType(VT_R8);
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)^((unsigned __int64)op2.dblVal));
					}
					else
						val.ulVal^=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_LS_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8)
					{
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)<<op2.ulVal);
					}
					else
						val.ulVal<<=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_RS_ASSIGN:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					CComVariant val=GetLValue(localVariables,externArgs,argnum,op1);
					if(val.vt==VT_R8)
					{
						val.dblVal=(DOUBLE)(((unsigned __int64)val.dblVal)>>op2.ulVal);
					}
					else
						val.ulVal>>=op2.ulVal;
					SetLValue(localVariables,externArgs,argnum,op1,val);
					runtimeStack.push(val);					
				}
				break;
			case OP_COMMA:
				{
					CComVariant rhs_op=runtimeStack.top();
					runtimeStack.pop();
					runtimeStack.pop();
					runtimeStack.push(rhs_op);
				}
				break;
			case OP_EXECQUERY:
				{
					int ix=(operand & 0xFFFFFF);
					CComVariant onum=runtimeStack.top();
					runtimeStack.pop();
					int objnum=onum.lVal;
					CComVariant res;
					int r=ExecQuery(ix,objnum,localVariables,externArgs,argnum,&res);
					runtimeStack.push(res);
				}
				break;
			case OP_PTRINFO:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					__int64 addr=op1.lVal;
					__int64 size=op2.lVal;
					__int64 ptrinfo=(size<<32)+addr;
					runtimeStack.push(CComVariant((double)ptrinfo));
				}
				break;
			case OP_PTRCALC:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					__int64 addr=op1.lVal;
					__int64 size=op2.lVal;
					__int64 ptrinfo=(size<<32)+addr;
					CComVariant res=GetLValue(localVariables,externArgs,argnum,CComVariant((double)ptrinfo));
					runtimeStack.push(res);
				}
				break;
			case OP_ADDR:
				{
					int type=(operand & 0x0f0000)>>16;
					int index=(operand & 0x00ffff);
					CComVariant res;
					switch(type)
					{
					case 0://局部变量
						{
							res=CComVariant((long)&(localVariables[index]));
						}
						break;
					case 4://参数
						{
							res=CComVariant((long)&(externArgs[index]));
						}
						break;
					case 5://全局变量
						{
							res=CComVariant((long)&(globalVariables[index]));
						}
						break;
					}
					runtimeStack.push(res);
				}
				break;
			case OP_CAST:
				{
					CComVariant op2=runtimeStack.top();
					runtimeStack.pop();
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					int size=op2.lVal;
					CComVariant res=op1;
					switch(size)
					{
					case 1:
						{
							res.ChangeType(VT_UI1);
						}
						break;
					case 2:
						{
							res.ChangeType(VT_I2);
						}
						break;
					case 3:
						{
							res.ChangeType(VT_UI2);
						}
						break;
					case 4:
						{
							res.ChangeType(VT_I4);
						}
						break;
					case 5:
						{
							res.ChangeType(VT_UI4);
						}
						break;
					case 8:
						{
							res.ChangeType(VT_R8);
						}
						break;
					case 9:
						{
							res=BuildIString(ScriptToString(res));
						}
						break;
					case 10:
						{
							//无法对一个脚本里的变量强制转换成ASCII字符串，当前实现是这种转换没有效果
						}
						break;
					case 11:
						{
							res.ChangeType(VT_DISPATCH);
						}
						break;
					case 12:
						{
							//脚本里的变量已经是这种类型，无需实施任何转换
						}
						break;
					}
					runtimeStack.push(res);
				}
				break;
			case OP_ARG:					
				{
					int type=(operand&0x0f0000)>>16;
					CComVariant op1=runtimeStack.top();
					runtimeStack.pop();
					int index=op1.lVal;
					if(type==0)
					{
						if(index<0 || index>=argnum)
							runtimeStack.push(CComVariant(0));
						else
							runtimeStack.push(externArgs[index]);
					}
					else
					{						
						runtimeStack.push(CComVariant(0x040000+(index&0x0ffff)));
					}
				}
				break;
			}
			it++;
		}
funcexit:
#ifdef INCLUDE_COMPILE
		Debug(0xffffffff,ins,localVariables,externArgs,argnum,pobjects);
#endif
		return popVal;
	}
};



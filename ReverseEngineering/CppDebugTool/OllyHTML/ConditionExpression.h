#pragma once
#include "stdafx.h"
#include "resource.h"
#include "Plugin.h"
#include <vector>
#include <map>

#include <boost/regex.hpp>

class ConditionExpression
{
public:
	ConditionExpression()
	{
		TotalObjectsRef()++;
		refCount=1;
	}
	virtual ~ConditionExpression(void)
	{}
public:
	virtual bool operator () (t_disasm* p)=0;
public:
	virtual void AddRef(void)
	{
		refCount++;
	}
	virtual void Release(void)
	{
		refCount--;
		if(refCount==0)
		{
			TotalObjectsRef()--;
			/*
			CString temp;
			temp.Format("release one , left : %u",TotalObjectsRef());
			::MessageBox(NULL,temp,"TotalCount",MB_OK);
			*/

			delete this;
		}
	}
public:
	static inline int TotalObjects(void)
	{
		return TotalObjectsRef();
	}
private:
	static inline int& TotalObjectsRef(void)
	{
		static int totalCount=0;
		return totalCount;
	}
private:
    int refCount;
};

class AndCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!exp1 || !exp2)
			return true;
		//分开执行判断为了确保在exp1失败时不进行exp2的判断
		if(!(*exp1)(p))
			return false;
		else if(!(*exp2)(p))
			return false;
		else
			return true;
	}
	virtual ~AndCondition()
	{
		if(exp1)
			exp1->Release();
		if(exp2)
			exp2->Release();
	}
public:
	AndCondition(ConditionExpression* p1,ConditionExpression* p2)
	{
		exp1=p1;
		exp2=p2;
		if(p1)
			p1->AddRef();
		if(p2)
			p2->AddRef();
	}
private:
	ConditionExpression* exp1;
	ConditionExpression* exp2;
};

class OrCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!exp1 || !exp2)
			return true;
		//分开执行判断为了确保在exp1成功时不进行exp2的判断
		if((*exp1)(p))
			return true;
		else if((*exp2)(p))
			return true;
		else
			return false;
	}
	virtual ~OrCondition()
	{
		if(exp1)
			exp1->Release();
		if(exp2)
			exp2->Release();
	}
public:
	OrCondition(ConditionExpression* p1,ConditionExpression* p2)
	{
		exp1=p1;
		exp2=p2;
		if(p1)
			p1->AddRef();
		if(p2)
			p2->AddRef();
	}
private:
	ConditionExpression* exp1;
	ConditionExpression* exp2;
};

class NotCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!exp)
			return true;
		if(!(*exp)(p))
			return true;
		else
			return false;
	}
	virtual ~NotCondition()
	{
		if(exp)
			exp->Release();
	}
public:
	NotCondition(ConditionExpression* p)
	{
		exp=p;
		if(p)
			p->AddRef();
	}
private:
	ConditionExpression* exp;
};
class XorCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!exp1 || !exp2)
			return true;
		bool r1=(*exp1)(p);
		bool r2=(*exp2)(p);
		if(r1 && !r2 || !r1 && r2)
			return true;
		else
			return false;
	}
	virtual ~XorCondition()
	{
		if(exp1)
			exp1->Release();
		if(exp2)
			exp2->Release();
	}
public:
	XorCondition(ConditionExpression* p1,ConditionExpression* p2)
	{
		exp1=p1;
		exp2=p2;
		if(p1)
			p1->AddRef();
		if(p2)
			p2->AddRef();
	}
private:
	ConditionExpression* exp1;
	ConditionExpression* exp2;
};


typedef int (*IntValuePtr)(t_disasm* p);
typedef char* (*StrValuePtr)(t_disasm* p);
//--------------------------------------------------------
/*
 *CompareType : 0 = EQ , 1 = GE , -1 = LE
 */
//--------------------------------------------------------
template<int CompareType>
	class CompareCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!p || !fptr)
			return true;
		return Compare<CompareType>::Do(p,fptr,value);
	}
	virtual ~CompareCondition()
	{}
public:
	CompareCondition(IntValuePtr _fptr,int val)
	{
		fptr=_fptr;
		value=val;
	}	
private:
	IntValuePtr fptr;
	int value;	
private:
	template<int CT=0>
		class Compare
	{
	public:
		static inline bool Do(t_disasm* p,IntValuePtr fptr,int val)
		{
			return (*fptr)(p)==val;
		}
	};
	template<>
		class Compare<1>
	{
	public:
		static inline bool Do(t_disasm* p,IntValuePtr fptr,int val)
		{
			return (*fptr)(p)>=val;
		}
	};
	template<>
		class Compare<-1>
	{
	public:
		static inline bool Do(t_disasm* p,IntValuePtr fptr,int val)
		{
			return (*fptr)(p)<=val;
		}
	};
};
class StringLikeCondition : public ConditionExpression
{
	typedef std::vector<CString> Strings;
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!p || !fptr)
			return true;
		CString src=fptr(p);
		if(ignoreCase)
		{
			src.MakeLower();
		}
		//实现LIKE操作，strs代表了模式的出现顺序
		int lastEnd=0;
		Strings::iterator it=strs.begin();
		while(it!=strs.end())
		{
			//从上一个模式结束位置后开始搜索当前模式
			int ix=src.Find(*it,lastEnd);

			/*CString temp;
			temp.Format("%s %s %d %d",src,*it,lastEnd,ix);
			::MessageBox(NULL,temp,"",MB_OK);*/

			if(ix<0)
				return false;
			//调整已经匹配过的模式的结束
			lastEnd=ix+(*it).GetLength();
			it++;
		}
		return true;
	}
	virtual ~StringLikeCondition()
	{}
public:
	StringLikeCondition(StrValuePtr _fptr,const char* s,BOOL _ignoreCase)
	{
		fptr=_fptr;
		ignoreCase=_ignoreCase;
		char *buf=new char[::strlen(s)+1];
		::strcpy(buf,s);
		char* token = strtok(buf, "% ");
		while( token != NULL )
		{
			//::MessageBox(NULL,token,"",MB_OK);
			CString strToken(token);
			strToken.Trim();
			if(ignoreCase)
			{
				strToken.MakeLower();
			}
            strs.push_back(strToken);			
			token = strtok(NULL, "% ");
		}
		delete[] buf;
	}	
private:
	StrValuePtr fptr;
	Strings strs;
	BOOL ignoreCase;
};

class StringMatchCondition : public ConditionExpression
{
public:
	virtual bool operator () (t_disasm* p)
	{
		if(!p || !fptr)
			return true;
		if(!pRegExp)
			return true;
		CString src=fptr(p);

		if( boost::regex_search((LPCSTR)src,*pRegExp))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	virtual ~StringMatchCondition()
	{
		if(pRegExp)
		{
			delete pRegExp;
		}
	}
public:
	StringMatchCondition(StrValuePtr _fptr,const char* s,BOOL ignoreCase)
	{
		fptr=_fptr;
		try
		{
			boost::regex::flag_type f=boost::regex::normal | boost::regex::optimize | boost::regex::collate;
			if(ignoreCase)
			{
				f |= boost::regex::icase;
			}
			pRegExp=new boost::regex(s,f);
		}
		catch(boost::regex_error& ex)
		{
			pRegExp=NULL;
			error=ex.what();
		}
		catch(...)
		{
			pRegExp=NULL;
			error="unknown error !";
		}
	}
	bool IsValid(void)
	{
		return pRegExp!=NULL;
	}
	CString Error(void)
	{
		return error;
	}
private:
	StrValuePtr fptr;
	boost::regex* pRegExp;
	CString error;
};

#define FieldValueClass(NAME)	NAME##FieldValue

#define DefFieldValueClass(NAME,FN)	\
	class FieldValueClass(NAME)\
	{\
	public:\
		static inline int Value(t_disasm* p)\
		{\
			return (int)p->##FN;\
		}\
	};

#define DefStrFieldValueClass(NAME,FN)	\
	class FieldValueClass(NAME)\
	{\
	public:\
		static inline char* Value(t_disasm* p)\
		{\
			return (char*)p->##FN;\
		}\
	};

DefFieldValueClass(IP,ip)
DefFieldValueClass(CmdType,cmdtype)
DefFieldValueClass(MemType,memtype)
DefFieldValueClass(PrefixNum,nprefix)
DefFieldValueClass(Indexed,indexed)
DefFieldValueClass(JumpConst,jmpconst)
DefFieldValueClass(JumpTable,jmptable)
DefFieldValueClass(AddrConst,adrconst)
DefFieldValueClass(ImmConst,immconst)
DefFieldValueClass(ZeroImm,zeroconst)
DefFieldValueClass(FixupOffset,fixupoffset)
DefFieldValueClass(FixupSize,fixupsize)
DefFieldValueClass(JumpAddr,jmpaddr)
DefFieldValueClass(Error,error)
DefFieldValueClass(Warnings,warnings)
DefFieldValueClass(OPType1,op[0].optype)
DefFieldValueClass(OPType2,op[1].optype)
DefFieldValueClass(OPType3,op[2].optype)
DefFieldValueClass(OPSize1,op[0].opsize)
DefFieldValueClass(OPSize2,op[1].opsize)
DefFieldValueClass(OPSize3,op[2].opsize)
DefFieldValueClass(OPSeg1,op[0].seg)
DefFieldValueClass(OPSeg2,op[1].seg)
DefFieldValueClass(OPSeg3,op[2].seg)
DefFieldValueClass(OPConst1,op[0].opconst)
DefFieldValueClass(OPConst2,op[1].opconst)
DefFieldValueClass(OPConst3,op[2].opconst)
DefFieldValueClass(OPEaxScale1,op[0].regscale[REG_EAX])
DefFieldValueClass(OPEcxScale1,op[0].regscale[REG_ECX])
DefFieldValueClass(OPEdxScale1,op[0].regscale[REG_EDX])
DefFieldValueClass(OPEbxScale1,op[0].regscale[REG_EBX])
DefFieldValueClass(OPEspScale1,op[0].regscale[REG_ESP])
DefFieldValueClass(OPEbpScale1,op[0].regscale[REG_EBP])
DefFieldValueClass(OPEsiScale1,op[0].regscale[REG_ESI])
DefFieldValueClass(OPEdiScale1,op[0].regscale[REG_EDI])
DefFieldValueClass(OPEaxScale2,op[1].regscale[REG_EAX])
DefFieldValueClass(OPEcxScale2,op[1].regscale[REG_ECX])
DefFieldValueClass(OPEdxScale2,op[1].regscale[REG_EDX])
DefFieldValueClass(OPEbxScale2,op[1].regscale[REG_EBX])
DefFieldValueClass(OPEspScale2,op[1].regscale[REG_ESP])
DefFieldValueClass(OPEbpScale2,op[1].regscale[REG_EBP])
DefFieldValueClass(OPEsiScale2,op[1].regscale[REG_ESI])
DefFieldValueClass(OPEdiScale2,op[1].regscale[REG_EDI])
DefFieldValueClass(OPEaxScale3,op[2].regscale[REG_EAX])
DefFieldValueClass(OPEcxScale3,op[2].regscale[REG_ECX])
DefFieldValueClass(OPEdxScale3,op[2].regscale[REG_EDX])
DefFieldValueClass(OPEbxScale3,op[2].regscale[REG_EBX])
DefFieldValueClass(OPEspScale3,op[2].regscale[REG_ESP])
DefFieldValueClass(OPEbpScale3,op[2].regscale[REG_EBP])
DefFieldValueClass(OPEsiScale3,op[2].regscale[REG_ESI])
DefFieldValueClass(OPEdiScale3,op[2].regscale[REG_EDI])

DefStrFieldValueClass(Dump,dump)
DefStrFieldValueClass(Disasm,result)
DefStrFieldValueClass(Comment,comment)
DefStrFieldValueClass(OPComment1,opinfo[0])
DefStrFieldValueClass(OPComment2,opinfo[1])
DefStrFieldValueClass(OPComment3,opinfo[2])

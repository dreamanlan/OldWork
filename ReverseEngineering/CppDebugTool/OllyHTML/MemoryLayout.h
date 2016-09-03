#pragma once
#include "stdafx.h"

class MemoryLayoutObj : public IDispatch
{
	typedef MemoryLayoutObj* PMemoryLayoutObj;
	struct MemberInfo
	{
		int m_Offset;
		int m_Size;
		int m_Num;
		PMemoryLayoutObj* m_ppLayoutObj;

		MemberInfo(void):m_Offset(0),m_Size(0),m_Num(0),m_ppLayoutObj(NULL)
		{}
		~MemberInfo(void)
		{
			if(NULL!=m_ppLayoutObj)
			{
				for(int i=0;i<m_Num;++i)
				{
					m_ppLayoutObj[i]->Release();
				}
				delete[] m_ppLayoutObj;
				m_ppLayoutObj=NULL;
			}
		}
	};
	typedef MemoryLayoutObj ComObj;
	typedef std::map<CString,DISPID> NameIds;
	typedef std::vector<MemberInfo> Infos;
public:
	STDMETHODIMP QueryInterface(REFIID riid, void** ppv);
	STDMETHODIMP_(ULONG) AddRef(void);
	STDMETHODIMP_(ULONG) Release(void);
	STDMETHODIMP GetTypeInfoCount(UINT* pctinfo);
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo);
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId);
	STDMETHODIMP Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr);
public:
	static inline ComObj* CreateDispatch()
	{
		ComObj* p=new ComObj();
		p->AddRef();
		return p;
	}
public:
	void AttachLayout(const std::string& id,const DataScript::ScriptDatas& scriptDatas);
	void AttachMemory(char* pAddr);
private:
	inline MemoryLayoutObj(void):m_cRef(0),m_FirstMemberId(0),m_pAddr(NULL),m_Size(0)
	{}
private:
    static const int s_c_IdNumPerMember = 6;
private:
	unsigned int m_cRef;
    DISPID m_FirstMemberId;
	NameIds m_NameIds;
	Infos m_Infos;

	DWORD m_Size;
	char* m_pAddr;
};

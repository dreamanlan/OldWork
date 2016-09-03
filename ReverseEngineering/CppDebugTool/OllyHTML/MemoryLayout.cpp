#include "stdafx.h"
#include "MemoryLayout.h"

STDMETHODIMP MemoryLayoutObj::QueryInterface(REFIID riid, void** ppv)
{
	if (NULL == ppv) return E_POINTER;
	*ppv = NULL;

	HRESULT hr = S_OK;

	if ((IID_IUnknown == riid) || (IID_IDispatch == riid))
		*ppv = static_cast<IDispatch*>(this);

	if(*ppv!=NULL)
	{
		reinterpret_cast<IUnknown*>(*ppv)->AddRef();
		return hr;
	}
	return E_NOINTERFACE;
}
STDMETHODIMP_(ULONG) MemoryLayoutObj::AddRef(void)
{
	return ++m_cRef;
}
STDMETHODIMP_(ULONG) MemoryLayoutObj::Release(void)
{
	if (0 != --m_cRef) return m_cRef;
	delete this;
	return 0;
}
STDMETHODIMP MemoryLayoutObj::GetTypeInfoCount(UINT* pctinfo)
{
	if (NULL == pctinfo) return E_POINTER;
	*pctinfo = 0;
	return S_OK;
}
STDMETHODIMP MemoryLayoutObj::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo)
{
	if (NULL == ppTInfo) return E_POINTER;
	*ppTInfo = NULL;
	return E_FAIL;
}
STDMETHODIMP MemoryLayoutObj::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId)
{
	if (IID_NULL != riid)
		return DISP_E_UNKNOWNINTERFACE;

	if (NULL == rgDispId) return E_POINTER;
	if (NULL == rgszNames) return E_POINTER;
	if (cNames != 1) return E_INVALIDARG;
	CString name(*rgszNames);
	NameIds::iterator it=m_NameIds.find(name);
	if(it!=m_NameIds.end())
	{
		*rgDispId=it->second;
		return S_OK;
	}
	else
	{
		*rgDispId = 0;
		return DISP_E_MEMBERNOTFOUND;
	}
}
STDMETHODIMP MemoryLayoutObj::Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr)
{
	if (IID_NULL != riid)
		return DISP_E_UNKNOWNINTERFACE;
	if (NULL == pDispParams)
        return E_POINTER;

	HRESULT hr=S_OK;
	if(dispIdMember<m_FirstMemberId)
	{
		if(DISPATCH_PROPERTYGET==wFlags)
		{
			switch(dispIdMember)
			{
			case 1://MemoryLayoutPtr
				{
					pVarResult->vt=VT_UI4;
					pVarResult->ulVal=reinterpret_cast<DWORD>(this);
				}
				break;
			case 2://addr
				{
					pVarResult->vt=VT_UINT;
					pVarResult->uintVal=reinterpret_cast<UINT>(m_pAddr);
				}
				break;
			case 3://size
				{
					pVarResult->vt=VT_UINT;
					pVarResult->uintVal=static_cast<UINT>(m_Size);
				}
				break;
			case 4://value
				{
					AddRef();
					pVarResult->vt=VT_DISPATCH;
					pVarResult->pdispVal=static_cast<IDispatch*>(this);
				}
				break;
			default:
				hr=DISP_E_MEMBERNOTFOUND;
				break;
			}
		}
		else if(DISPATCH_PROPERTYPUT==wFlags)
		{
			VARIANT arg;
			VariantInit(&arg);
			if(1==pDispParams->cArgs)
			{
				arg=pDispParams->rgvarg[0];
			}
			switch(dispIdMember)
			{
			case 2://addr
				{
					AttachMemory(reinterpret_cast<char*>(arg.uintVal));
				}
				break;
			case 4://value
				if(VT_DISPATCH==arg.vt)
				{
					DWORD pCpp=DispatchDriver::GetProperty(arg.pdispVal,L"MemoryLayoutPtr",Type2Type<DWORD>());
					MemoryLayoutObj* p=reinterpret_cast<MemoryLayoutObj*>(pCpp);
					if(NULL!=p)
					{
						memcpy(m_pAddr,p->m_pAddr,m_Size);
					}
					else
					{
						hr=DISP_E_TYPEMISMATCH;
					}
				}
				else
				{
					hr=DISP_E_TYPEMISMATCH;
				}
				break;
			default:
				hr=DISP_E_MEMBERNOTFOUND;
				break;
			}
		}
		else
		{
			hr=DISP_E_MEMBERNOTFOUND;
		}
	}
	else
	{
        DWORD index=(dispIdMember-m_FirstMemberId)/s_c_IdNumPerMember;
        DWORD type=(dispIdMember-m_FirstMemberId)%s_c_IdNumPerMember;
        if(index>=0 && index<m_Infos.size())
        {
            MemberInfo& info=m_Infos[index];
            VARIANT arg,val;
            VariantInit(&arg);
            VariantInit(&val);
            if(1==pDispParams->cArgs)
            {
                arg=pDispParams->rgvarg[0];
            }
            else if(2==pDispParams->cArgs)
            {
                arg=pDispParams->rgvarg[1];
                val=pDispParams->rgvarg[0];
            }
            switch(wFlags)
            {
            case DISPATCH_METHOD:
			case DISPATCH_METHOD|DISPATCH_PROPERTYGET:
                {
                    if(arg.intVal>=0 && arg.intVal<info.m_Num)
                    {
                        switch(type)
                        {
                        case 4:
                            {
                                if(NULL==info.m_ppLayoutObj)
                                {
									pVarResult->vt=VT_UINT;
									pVarResult->uintVal=0;
                                    memcpy(reinterpret_cast<char*>(&(pVarResult->uintVal)),m_pAddr+info.m_Offset+info.m_Size*arg.intVal,info.m_Size);
                                }
                                else
                                {
                                    MemoryLayoutObj* p=info.m_ppLayoutObj[arg.intVal];
                                    if(NULL!=p)
                                    {
                                        p->AddRef();
                                        pVarResult->vt=VT_DISPATCH;
                                        pVarResult->pdispVal=p;
                                    }
									else
									{
										hr=DISP_E_TYPEMISMATCH;
									}
                                }
                            }
                            break;
                        case 5:
                            {
                                if(NULL==info.m_ppLayoutObj)
                                {
                                    memcpy(m_pAddr+info.m_Offset+info.m_Size*arg.intVal,reinterpret_cast<const char*>(&(val.uintVal)),info.m_Size);
                                }
                                else
                                {
									if(VT_DISPATCH==val.vt)
									{
										DWORD pCpp=DispatchDriver::GetProperty(val.pdispVal,L"MemoryLayoutPtr",Type2Type<DWORD>());
										MemoryLayoutObj* p=reinterpret_cast<MemoryLayoutObj*>(pCpp);
										if(NULL!=p)
										{
											memcpy(m_pAddr+info.m_Offset+info.m_Size*arg.intVal,p->m_pAddr,info.m_Size);
										}
										else
										{
											hr=DISP_E_TYPEMISMATCH;
										}
									}
									else
									{
										hr=DISP_E_TYPEMISMATCH;
									}
                                }
                            }
                            break;
						default:
							hr=DISP_E_MEMBERNOTFOUND;
							break;
                        }
                    }
                }
                break;
            case DISPATCH_PROPERTYGET:
                {
                    if(NULL!=pVarResult)
                    {
                        VariantInit(pVarResult);
                        switch(type)
                        {
                        case 0:
                            {
                                if(NULL==info.m_ppLayoutObj)
                                {
                                    pVarResult->vt=VT_UINT;
                                    pVarResult->uintVal=0;
                                    memcpy(reinterpret_cast<char*>(&(pVarResult->uintVal)),m_pAddr+info.m_Offset,info.m_Size);
                                }
                                else
                                {
                                    MemoryLayoutObj* p=info.m_ppLayoutObj[0];
                                    if(NULL!=p)
                                    {
                                        p->AddRef();
                                        pVarResult->vt=VT_DISPATCH;
                                        pVarResult->pdispVal=p;
                                    }
									else
									{
										hr=DISP_E_TYPEMISMATCH;
									}
                                }
                            }
                            break;
                        case 1:
                            {
                                pVarResult->vt=VT_UINT;
                                pVarResult->uintVal=reinterpret_cast<UINT>(m_pAddr+info.m_Offset);
                            }
                            break;
                        case 2:
                            {
                                pVarResult->vt=VT_UINT;
                                pVarResult->uintVal=static_cast<UINT>(info.m_Size);
                            }
                            break;
                        case 3:
                            {
                                pVarResult->vt=VT_UINT;
                                pVarResult->uintVal=static_cast<UINT>(info.m_Num);
                            }
                            break;
						default:
							hr=DISP_E_MEMBERNOTFOUND;
                        }
                    }
                }
                break;
            case DISPATCH_PROPERTYPUT:
                {
                    if(0==type)
                    {
                        if(NULL==info.m_ppLayoutObj)
                        {
                            memcpy(m_pAddr+info.m_Offset,reinterpret_cast<const char*>(&(arg.uintVal)),info.m_Size);
                        }
                        else
                        {
							if(VT_DISPATCH==arg.vt)
							{
								DWORD pCpp=DispatchDriver::GetProperty(arg.pdispVal,L"MemoryLayoutPtr",Type2Type<DWORD>());
								MemoryLayoutObj* p=reinterpret_cast<MemoryLayoutObj*>(pCpp);
								if(NULL!=p)
								{
									memcpy(m_pAddr+info.m_Offset,p->m_pAddr,info.m_Size);
								}
								else
								{
									hr=DISP_E_TYPEMISMATCH;
								}
							}
							else
							{
								hr=DISP_E_TYPEMISMATCH;
							}
                        }
                    }
					else
					{
						hr=DISP_E_MEMBERNOTFOUND;
					}
                }
                break;
			default:
				hr=DISP_E_MEMBERNOTFOUND;
				break;
            }
		}
		else
		{
			hr=DISP_E_MEMBERNOTFOUND;
		}
	}
	return hr;
}
void MemoryLayoutObj::AttachLayout(const std::string& id,const DataScript::ScriptDatas& scriptDatas)
{
	m_Size=0;
	m_NameIds.clear();
	m_Infos.clear();
	m_FirstMemberId=0;
	DataScript::ScriptDatas::const_iterator scpIt=scriptDatas.find(id);
	if(scpIt!=scriptDatas.end())
	{
		DISPID startId=1;
		m_NameIds[CString("MemoryLayoutPtr")]=startId++;
		m_NameIds[CString("addr")]=startId++;
		m_NameIds[CString("size")]=startId++;
		m_NameIds[CString("value")]=startId++;
		m_FirstMemberId=startId;
		const DataScript::StatementData& data=scpIt->second;
		for(DataScript::StatementDatas::const_iterator it=data.getStatements().begin();it!=data.getStatements().end();++it)
		{
			const std::string& id=it->getId();
			//每个成员对应4个DISPID：读/写值、取地址、取Size、取数量
			m_NameIds[CString(id.c_str())]=startId++;
			m_NameIds[CString("_")+CString(id.c_str())]=startId++;
			m_NameIds[CString("$")+CString(id.c_str())]=startId++;
			m_NameIds[CString("$$")+CString(id.c_str())]=startId++;
			m_NameIds[CString("get_")+CString(id.c_str())]=startId++;
			m_NameIds[CString("set_")+CString(id.c_str())]=startId++;

			m_Infos.push_back(MemberInfo());
			MemberInfo& info=m_Infos.back();
			if(it->getParamNum()>=1)
			{
				size_t size=sizeof(int);
				int num=1;
				if(it->getParamNum()==2 && it->getParam(1).getType()==DataScript::FunctionData::NUM_TOKEN)
				{
					num=atoi(it->getParamId(1).c_str());
				}
				if(num>=1)
				{
					if(it->getParam(0).getType()==DataScript::FunctionData::NUM_TOKEN)
					{
						size=atoi(it->getParamId(0).c_str());
					}
					else
					{
						const std::string& type=it->getParamId(0);
						if(std::string("long")==type)
						{
							size=sizeof(long);
						}
						else if(std::string("int")==type)
						{
							size=sizeof(int);
						}
						else if(std::string("short")==type)
						{
							size=sizeof(short);
						}
						else if(std::string("char")==type)
						{
							size=sizeof(short);
						}
						else if(std::string("ptr")==type)
						{
							size=sizeof(char*);
						}
						else
						{
							info.m_ppLayoutObj=new PMemoryLayoutObj[num];
							if(NULL!=info.m_ppLayoutObj)
							{
								for(int i=0;i<num;++i)
								{
									MemoryLayoutObj* p=MemoryLayoutObj::CreateDispatch();
									if(NULL!=p)
									{
										p->AttachLayout(type,scriptDatas);
										size=p->m_Size;
										info.m_ppLayoutObj[i]=p;
									}
									else
									{
										size=0;
										break;
									}
								}
							}
							else
							{
								size=0;
							}
						}
					}
				}

				info.m_Offset=m_Size;
				info.m_Size=size;
				info.m_Num=num;

				m_Size+=size*num;
			}
		}
	}
}
void MemoryLayoutObj::AttachMemory(char* pAddr)
{
	m_pAddr=pAddr;

	for(Infos::iterator it=m_Infos.begin();it!=m_Infos.end();++it)
	{
		if(NULL!=it->m_ppLayoutObj)
		{
			char* _pAddr=pAddr+it->m_Offset;
			for(int i=0;i<it->m_Num;++i,_pAddr+=it->m_Size)
			{
				MemoryLayoutObj* p=it->m_ppLayoutObj[i];
				if(NULL!=p)
				{
					p->AttachMemory(_pAddr);
				}
			}
		}
	}
}

#pragma once
#include <map>
#include <hash_map>
#include "Disasm.h"
using namespace std;

//IObject接口是所有语言内建对象及自定义对象都符合的接口。
// {CDE21B1C-2CC4-4236-8C1F-2E15297762CC}
extern "C" const GUID IID_IObject;

//IString接口是语言字符串对象的接口。
// {F58171C4-1B72-4dd8-AB4F-29F03B7E1CBB}
extern "C" const GUID IID_IString;
//内建字符串对象的数据部分
class StringBase
{
protected:
	CString str;
	CComBSTR bstr;
	CComVariant variant;	
public:
	inline void Init(const char* s)
	{
		str=s;
	}
	inline void Init(const BSTR s)
	{
		str=s;
	}
	inline void Init(const VARIANT& s)
	{
		if(s.vt==VT_BSTR)
			str=s.bstrVal;
		else
		{
			CComVariant v=s;
			v.ChangeType(VT_BSTR);
			str=v.bstrVal;
		}
	}
	inline CString& Ref(void)
	{
		return str;
	}
	inline CComBSTR& UnicodeRef(void)
	{
		if(bstr.Length()==0)
			bstr=str;
		return bstr;
	}
	inline CComVariant& VariantRef(void)
	{
		if(variant.vt==VT_EMPTY)
			variant=str;
		return variant;
	}
};

class IObject : public IDispatch
{
public:
	virtual void __stdcall insert(VARIANT key,VARIANT val)=0;	//添加成员，对数字特性，在使用索引时创建一同名字符串属性。
	virtual void __stdcall erase(VARIANT key)=0;				//删除对象成员	
	virtual void __stdcall put_length(int size)=0;				
	virtual int __stdcall get_length(void)=0;					//数字特性的最大DISPID值，不考虑字符名特性对应的DISPID值
};
//void __stdcall set(int pos,VARIANT v);						//数字特性写，这是供Invoke调用的，无需是虚函数
//VARIANT __stdcall get(int pos);								//数字特性读，这是供Invoke调用的，无需是虚函数

//语言内建字符串对象接口，采用多继承来解决IObject，DynamicDispatch对IString实例的引用
class IString : public IObject,public StringBase
{
public:
	//检查一个变量是否内部字符串对象并返回其指针
	static inline IString* GetIString(const CComVariant& v)
	{
		if(v.vt==VT_DISPATCH && v.pdispVal)
		{
			CComPtr<IDispatch> dispEx;
			v.pdispVal->QueryInterface(IID_IString,(void**)&dispEx);
			if(!dispEx)
			{
				return NULL;
			}
			else
			{
				return static_cast<IString*>(v.pdispVal);
			}
		}
		return NULL;
	}
	static inline CString ToString(const CComVariant& v)
	{
		IString* pstr=GetIString(v);
		if(pstr)
		{
			return pstr->Ref();
		}
		else
		{
			CComVariant ret=v;
			ret.ChangeType(VT_BSTR);
			return CString(ret.bstrVal);
		}
	}
};

//动态的解析IDispatch的成员到DISPID，因为语言内建字符串对象是一个IDispatch，在运行时字符串可以用
//IDispatch*来表示，通过动态的建立IDispatch*到DISPID的映射，可望比从BSTR到DISPID的映射快一些。
//动态建立的映射关系需要在对象释放时清除，为此需要对IDispatch对象的Release方法实施Hook,对于COM对
//象方法实施Hook比较简单，替换其虚函数表的对应表项即可。
//这里的动态映射采用全局静态数据，在多进程共享数据的DLL中可能产生异常。
class DynamicDispatch
{
	typedef unsigned long (__stdcall*DispatchReleasePtr)(IDispatch*);
	typedef stdext::hash_map<DWORD,DispatchReleasePtr> Vtbl_OldPtr;
	typedef stdext::hash_map<IDispatch*,DISPID> Member_Dispid;
	typedef stdext::hash_map<IDispatch*,Member_Dispid> Obj_Disps;
public:
	static DISPID GetDispID(IDispatch* obj,IDispatch* member)
	{
		//在IObject这样的IDispatch实现中，DISPID是与实例相关的，因此我们对每个实例建立映射，但对通常的COM对象，
		//DISPID其实是与类相关而非实例相关，对这些COM对象而言，这里的实现方式有点浪费空间。
		Obj_Disps& objdisps=ObjDispsRef();
		Obj_Disps::iterator it=objdisps.find(obj);
		//没有该对象入口时建立该对象入口
		if(it==objdisps.end())
		{
			//建立HOOK,因为VTBL是针对类而不是对象的，HOOK用VTBL地址作标识而不用对象实例指针
			DWORD pOBJ=(DWORD)obj;
			DWORD pVTBL=*(DWORD*)pOBJ;
			Vtbl_OldPtr& vop=VtblOldPtrRef();
			Vtbl_OldPtr::iterator vit=vop.find(pVTBL);
			if(vit==vop.end())
			{
				MemoryProtect mp((LPVOID)pVTBL);
				DWORD pFUNC=((DWORD*)pVTBL)[2];//Release方法是IDispatch虚函数表的第三个入口
				((DWORD*)pVTBL)[2]=(DWORD)DispatchRelease;
				DispatchReleasePtr ptr=(DispatchReleasePtr)pFUNC;
				VtblOldPtrRef()[pVTBL]=ptr;
			}
			//建立入口
			Member_Dispid md;
			objdisps[obj]=md;
			it=objdisps.find(obj);
		}
		//存在映射时从中取出DISPID，不存在则采用标准IDispatch接口方法取DISPID并建立新映射
		Member_Dispid& dispids=it->second;
		Member_Dispid::iterator mit=dispids.find(member);
		if(mit!=dispids.end())
		{
			return mit->second;
		}
		else
		{
			//向下转型，这里没有进行判断，通过接口查询可以确保这一转型是安全的。
			/*
			CComPtr<IDispatch> dispEx;
			member->QueryInterface(IID_IString,(void**)&dispEx);
			*/
			IString* pmember=static_cast<IString*>(member);
			CComBSTR& bstr=pmember->UnicodeRef();
			CComDispatchDriver disp(obj);
			DISPID dispid=0xffffffff;
			HRESULT hr=disp.GetIDOfName(bstr,&dispid);
			if(SUCCEEDED(hr))
			{
				dispids[member]=dispid;
			}
			return dispid;
		}
	}
	//对动态添加的成员，同一对象的同一成员在不同时间DISPID可能发生变化，
	//这一方法用于在变化前清除先前记录的DISPID
	static void Erase(IDispatch* obj,IDispatch* member)
	{
		Obj_Disps& objdisps=ObjDispsRef();
		Obj_Disps::iterator it=objdisps.find(obj);
		if(it!=objdisps.end())
		{
			it->second.erase(member);
		}
	}
	static void ClearAll(void)
	{
		ObjDispsRef().clear();
	}
private:
	static unsigned long __stdcall DispatchRelease(IDispatch* obj)
	{
		DWORD pOBJ=(DWORD)obj;
		DWORD pVTBL=*(DWORD*)pOBJ;
		Vtbl_OldPtr& oldptr=VtblOldPtrRef();
		Vtbl_OldPtr::iterator it=oldptr.find(pVTBL);
		if(it!=oldptr.end())
		{
			DispatchReleasePtr drPtr=it->second;
			unsigned long ct=(*drPtr)(obj);
			if(ct<=0)//引用计数为0时对象已经释放，此时清除与该对象对应的映射
			{
				ObjDispsRef().erase(obj);
			}
			return ct;
		}		
		//若代码从此处返回必然产生内存泄漏，发生这种情形需要重新审查前面的设计。
		throw 0;
	}
private:
	//这里的VTBL与IDispatch::Release的映射数据在运行中是递增的，占用空间只在进程退出时释放。
	static Vtbl_OldPtr& VtblOldPtrRef(void)
	{
		static Vtbl_OldPtr vtbloldptr;
		return vtbloldptr;
	}
	static Obj_Disps& ObjDispsRef(void)
	{
		static Obj_Disps objdisps;
		return objdisps;
	}
};

//利用模板推导技术来判断类的可转换性的模板。
template <class T, class U>
	class Conversion
{
    typedef char Small;
    struct Big { char dummy[2]; };
    static Small Test(U*);
    static Big Test(...);
    static T* MakeT();
public:
    enum { exists =
        sizeof(Test(MakeT())) == sizeof(Small) };
};
//自定义应从这个模板继承，用以处理虚拟机的引用问题
template<typename VM>
	class ObjectBaseT : public IObject
{	
	VM* vmachine;	
public:
	inline void SetVM(VM* p)
	{
		vmachine=p;
	}
	inline VM* GetVM(void)
	{
		return vmachine;
	}
	inline CComVariant ExecFunction(int index,CComVariant* externArgs,int argnum,CComVariant obj)
	{
		return vmachine->ExecFunction(index,externArgs,argnum,obj);
	}
};
//语言内建字符串对象从这个模板继承，用以处理虚拟机的引用问题
template<typename VM>
	class StringBaseT : public IString
{	
	VM* vmachine;	
public:
	inline void SetVM(VM* p)
	{
		vmachine=p;
	}
	inline VM* GetVM(void)
	{
		return vmachine;
	}
	inline CComVariant ExecFunction(int index,CComVariant* externArgs,int argnum,CComVariant obj)
	{
		return vmachine->ExecFunction(index,externArgs,argnum,obj);
	}
};

#define MEMBERID_FIRST		0x70000000
//利用模板提取类类型信息以实现IObject的支持模板。
template<typename T>
	class CDispatchExForScriptBaseT0 : public T
{
	typedef CDispatchExForScriptBaseT0<T> ComObj;	
	unsigned long m_refs;
    ITypeInfo * typeInfo;
protected:	
	typedef std::map<CStringW,DISPID> DispIDMap;
	typedef stdext::hash_map<DISPID,CComVariant> Members;

	DispIDMap dispIDMap;	//成员名与DISPID的对应关系
	Members members;		//成员列表
	DISPID nextDispId;
protected:
	CDispatchExForScriptBaseT0():m_refs(0),typeInfo(NULL),nextDispId(MEMBERID_FIRST)
	{}
	static inline void CreateObject(ITypeInfo* pTypeInfo,ComObj* p)
	{
		p->AddRef();
		pTypeInfo->AddRef();
		p->typeInfo=pTypeInfo;
	}
	inline int StrToInt(const CStringW& ws)
	{
		CString ss((LPCWSTR)ws);
		LPCSTR s=(LPCSTR)ss;
		if(::strlen(s)==1 && s[0]>='0' && s[0]<='9')
		{
			return int(s[0])-int('0');
		}
		int r=::atoi(s);
		if(r)return r;
		return -1;
	}
	inline CStringW IntToStr(int d)
	{
		char buf[256];
		::itoa(d,buf,10);
		return CStringW(buf);
	}
public:
    /* IUnknown methods */
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv)
	{
		if(IsEqualIID(riid, IID_IUnknown)
			|| IsEqualIID(riid, IID_IDispatch)
			|| IsEqualIID(riid, IID_IObject))
		{
			*ppv = this;
			AddRef();
			return NOERROR;
		}
		*ppv = NULL;
		return E_NOINTERFACE;
	}
    STDMETHOD_(unsigned long, AddRef)(void)
	{
		//ATLTRACE("retcount: %d\n",m_refs+1);
		return ++m_refs;
	}
    STDMETHOD_(unsigned long, Release)(void)
	{
		//ATLTRACE("retcount: %d\n",m_refs-1);
		if(--m_refs == 0)
		{
			if(typeInfo != NULL)
			{
				typeInfo->Release();
			}
			delete this;
			return 0;
		}
		return m_refs;
	}

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(unsigned int * pcTypeInfo)
	{
		*pcTypeInfo=1;
		return NOERROR;
	}
    STDMETHOD(GetTypeInfo)(
      unsigned int iTypeInfo,
      LCID lcid,
      ITypeInfo ** ppTypeInfo)
	{
		if(iTypeInfo != 0)
			return DISP_E_BADINDEX;
		
		typeInfo->AddRef();
		*ppTypeInfo = typeInfo;
		
		return NOERROR;
	}
    STDMETHOD(GetIDsOfNames)(
      REFIID riid,
      OLECHAR ** rgszNames,
      unsigned int cNames,
      LCID lcid,
      DISPID * rgdispid)
	{		
		//先取自定义的成员以实现对系统内建对象实例方法的替换。
		BSTR name=*rgszNames;					
		int temp=StrToInt(name);//如果是数字字符串，则对应数值为其DISPID值
		if(temp>=0 && temp<MEMBERID_FIRST)
		{
			*rgdispid=(DISPID)temp;
			return S_OK;
		}
		DispIDMap::iterator it=dispIDMap.find(name);
		if(it!=dispIDMap.end())
		{
			*rgdispid=it->second;
			return S_OK;
		}
		else
		{
			return DispGetIDsOfNames(typeInfo,rgszNames,1,rgdispid);			
		}	
	}
    STDMETHOD(Invoke)(
      DISPID id,
      REFIID riid,
      LCID lcid,
      unsigned short wFlags,
      DISPPARAMS * pdp,
      VARIANT * pvarRes,
      EXCEPINFO * pei,
      unsigned int * pwArgErr)
	{
		HRESULT hr=S_OK;
		//原IDispatch接口支持
		hr=DispInvoke(this,typeInfo,id,wFlags,pdp,pvarRes,pei,pwArgErr);
		if(hr==DISP_E_MEMBERNOTFOUND)//动态特性与方法的支持
		{			
			switch(wFlags)
			{
			case DISPATCH_METHOD:
				{
					Members::iterator it=members.find(id);
					CComVariant& obj=it->second;
					if(obj.vt==VT_I4)
					{
						CComVariant* parg=new CComVariant[pdp->cArgs];
						int ix=0;
						for(int i=pdp->cArgs-1;i>=0;i--)//参数是逆序传递的
						{				
							parg[ix++]=pdp->rgvarg[i];
						}
						CComVariant ret=T::ExecFunction(obj.lVal-1,parg,ix,CComVariant((IDispatch*)this));
						ret.Detach(pvarRes);
						hr=S_OK;
						delete[] parg;
					}
					else
					{
						hr=DISP_E_MEMBERNOTFOUND;
					}
				}
				break;
			}
		}
		return hr;
	}
public:
	/*IObject method*/
	virtual void __stdcall insert(VARIANT key,VARIANT val)
	{
		BSTR bstrName=NULL;
		if(key.vt==VT_DISPATCH)
		{
			IString* pstr=IString::GetIString(key);
			if(pstr)
				bstrName=pstr->UnicodeRef();
		}
		else if(key.vt==VT_BSTR)
		{
			bstrName=key.bstrVal;
		}
		if(bstrName)
		{
			DISPID dispid=-1;
			HRESULT hr=GetIDsOfNames(IID_NULL,&bstrName,1,LOCALE_SYSTEM_DEFAULT,&dispid);
			if(!FAILED(hr))
			{
				CComDispatchDriver disp(this);
				disp.PutProperty(dispid,&val);
			}
			if(hr==S_FALSE)
				hr=DISP_E_UNKNOWNNAME;
			if(hr==DISP_E_UNKNOWNNAME)
			{
				dispid=nextDispId;
				members[nextDispId]=val;
				dispIDMap[bstrName]=nextDispId;
				nextDispId++;
			}
		}
	}    
    void __stdcall erase(VARIANT key)
	{	
		BSTR name=NULL;
		if(key.vt==VT_DISPATCH)
		{
			IString* pstr=IString::GetIString(key);
			if(pstr)
				name=pstr->UnicodeRef();
		}
		else if(key.vt==VT_BSTR)
		{
			name=key.bstrVal;
		}
		if(name)
		{
			DispIDMap::iterator it=dispIDMap.find(name);
			if(it!=dispIDMap.end())
			{			
				Members::iterator it2=members.find(it->second);
				if(it2!=members.end())
					members.erase(it2);
				dispIDMap.erase(name);
			}
		}
	}
};
//提供对额外接口的查询支持
template<typename T,const IID* piid>
	class CDispatchExForScriptBaseT : public CDispatchExForScriptBaseT0<T>
{
protected:
	CDispatchExForScriptBaseT()
	{}
public:
    /* IUnknown methods */
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv)
	{
		if(IsEqualIID(riid, IID_IUnknown)
			|| IsEqualIID(riid, IID_IDispatch)
			|| IsEqualIID(riid, IID_IObject)
			|| IsEqualIID(riid, *piid))
		{
			*ppv = this;
			AddRef();
			return NOERROR;
		}
		*ppv = NULL;
		return E_NOINTERFACE;
	}
};
//局部特化实现无需可查询额外接口的对象
template<typename T>
	class CDispatchExForScriptBaseT<T,&IID_NULL> : public CDispatchExForScriptBaseT0<T>
{
};
//一般内部对象实现
template<typename T,const IID* piid,int container=0>
	class CDispatchExForScriptT : public CDispatchExForScriptBaseT<T,piid>
{	
	typedef CDispatchExForScriptBaseT<T,piid> BaseClass;
	typedef std::vector<DISPID> DISPIDS;
	int length;		//标识当前以数字为名的成员的最大值
private:
	CDispatchExForScriptT():length(0)
	{}
public:
	typedef CDispatchExForScriptT<T,piid,container> ComObj;
	static inline ComObj* CreateObject(ITypeInfo* pTypeInfo)
	{
		ComObj* p=new ComObj();
		BaseClass::CreateObject(pTypeInfo,p);
		return p;
	}
public:
    STDMETHOD(Invoke)(
      DISPID id,
      REFIID riid,
      LCID lcid,
      unsigned short wFlags,
      DISPPARAMS * pdp,
      VARIANT * pvarRes,
      EXCEPINFO * pei,
      unsigned int * pwArgErr)
	{
		HRESULT hr=S_OK;
		hr=BaseClass::Invoke(id,riid,lcid,wFlags,pdp,pvarRes,pei,pwArgErr);
		if(hr==DISP_E_MEMBERNOTFOUND)//动态特性的支持
		{			
			Members::iterator it=members.find(id);
			if(id>=0 && id<MEMBERID_FIRST && it==members.end() && (wFlags==DISPATCH_PROPERTYPUT || wFlags==DISPATCH_PROPERTYPUTREF))
			{
				if(length<=id)length=id+1;
				members[id]=CComVariant();
				it=members.find(id);
			}
			if(it!=members.end())
			{
				CComVariant& obj=it->second;
				switch(wFlags)
				{
				case DISPATCH_PROPERTYGET:
					{
						CComVariant ret=obj;
						ret.Detach(pvarRes);
						hr=S_OK;
					}
					break;
				case DISPATCH_PROPERTYPUT:
					obj=pdp->rgvarg[0];
					hr=S_OK;
					break;
				case DISPATCH_PROPERTYPUTREF:
					obj=pdp->rgvarg[0];
					hr=S_OK;
					break;
				}
			}
		}
		return hr;
	}
public:
	/*IObject method*/
	virtual void __stdcall insert(VARIANT key,VARIANT val)
	{
		if(key.vt==VT_BSTR || key.vt==VT_DISPATCH)
		{
			BaseClass::insert(key,val);
		}
		else if(key.lVal>=0 && key.lVal<MEMBERID_FIRST)
		{
			int v=key.lVal;
			CComDispatchDriver disp(this);
			for(int i=length;i>v;i++)
			{
				CComVariant r;
				disp.GetProperty((DISPID)(i-1),&r);
				disp.PutProperty((DISPID)i,&r);
			}
			disp.PutProperty(key.lVal,&val);
		}
	}    
    virtual void __stdcall erase(VARIANT key)
	{		
		if(key.vt==VT_BSTR || key.vt==VT_DISPATCH)
		{
			BaseClass::erase(key);
		}
		else if(key.lVal>=0 && key.lVal<MEMBERID_FIRST)
		{
			members.erase(key.lVal);
			if(length=key.lVal+1)length--;
		}
	}
	virtual void __stdcall put_length(int size)
	{
		if(size<0 || size>MEMBERID_FIRST)
			return;
		if(size<length)
		{
			DISPIDS disps;
			Members::iterator it=members.begin();
			while(it!=members.end())
			{
				if(it->first>=size)
				{
					disps.push_back(it->first);
				}
				it++;
			}
			DISPIDS::iterator it2=disps.begin();
			while(it2!=disps.end())
			{
				members.erase(*it2);
				it2++;
			}
		}		
		length=size;
	}
	virtual int __stdcall get_length(void)
	{
		return length;
	}
};
//线索容器实现
template<typename T,const IID* piid>
	class CDispatchExForScriptT<T,piid,1> : public CDispatchExForScriptBaseT<T,piid>
{	
	typedef CDispatchExForScriptBaseT<T,piid> BaseClass;
private:
	CDispatchExForScriptT()
	{}
public:
	typedef CDispatchExForScriptT<T,piid,1> ComObj;
	static inline ComObj* CreateObject(ITypeInfo* pTypeInfo)
	{
		ComObj* p=new ComObj();
		BaseClass::CreateObject(pTypeInfo,p);
		return p;
	}
public:
    STDMETHOD(Invoke)(
      DISPID id,
      REFIID riid,
      LCID lcid,
      unsigned short wFlags,
      DISPPARAMS * pdp,
      VARIANT * pvarRes,
      EXCEPINFO * pei,
      unsigned int * pwArgErr)
	{
		HRESULT hr=S_OK;
		hr=BaseClass::Invoke(id,riid,lcid,wFlags,pdp,pvarRes,pei,pwArgErr);
		if(hr==DISP_E_MEMBERNOTFOUND)//动态特性的支持
		{			
			Members::iterator it=members.find(id);
			if(it!=members.end())
			{
				CComVariant& obj=it->second;
				switch(wFlags)
				{
				case DISPATCH_PROPERTYGET:
					{
						CComVariant ret=obj;
						ret.Detach(pvarRes);
						hr=S_OK;
					}
					break;
				case DISPATCH_PROPERTYPUT:
					obj=pdp->rgvarg[0];
					hr=S_OK;
					break;
				case DISPATCH_PROPERTYPUTREF:
					obj=pdp->rgvarg[0];
					hr=S_OK;
					break;
				}
			}
			else if(id>=0 && id<MEMBERID_FIRST)//容器元素索引
			{
				switch(wFlags)
				{
				case DISPATCH_PROPERTYGET:
					{
						*pvarRes=T::get(id);
						hr=S_OK;
					}
					break;
				case DISPATCH_PROPERTYPUT:
					T::set(id,pdp->rgvarg[0]);
					hr=S_OK;
					break;
				case DISPATCH_PROPERTYPUTREF:
					T::set(id,pdp->rgvarg[0]);
					hr=S_OK;
					break;
				}
			}
		}
		return hr;
	}
public:
	/*IObject method*/
	virtual void __stdcall insert(VARIANT key,VARIANT val)
	{
		if(key.vt==VT_BSTR || key.vt==VT_DISPATCH)
		{
			BaseClass::insert(key,val);
		}
		else if(key.lVal>=0 && key.lVal<MEMBERID_FIRST)//容器元素索引
		{
			T::insert(key,val);
		}
	}    
    virtual void __stdcall erase(VARIANT key)
	{		
		if(key.vt==VT_BSTR || key.vt==VT_DISPATCH)
		{
			BaseClass::erase(key);
		}
		else if(key.lVal>=0 && key.lVal<MEMBERID_FIRST)//容器元素索引
		{
			T::erase(key);
		}
	}
	virtual void __stdcall put_length(int size)
	{
		if(size<0 || size>MEMBERID_FIRST)
			return;
		T::put_length(size);
	}
	virtual int __stdcall get_length(void)
	{
		return T::get_length();
	}
};
template<typename T,const IID* piid,int container> inline 
	CDispatchExForScriptT<T,piid,container>* CreateDispExForScript(INTERFACEDATA& interfaceData)
{
	static CComPtr<ITypeInfo> typeInfo;
	if(!typeInfo)
	{
		HRESULT hr=::CreateDispTypeInfo(&interfaceData,LOCALE_SYSTEM_DEFAULT,&typeInfo);
		if(FAILED(hr))return NULL;
	}
	CDispatchExForScriptT<T,piid,container>* p=CDispatchExForScriptT<T,piid,container>::CreateObject(typeInfo);
	return p;
}
//下述宏用于为类生成创建类的IDispatchEx接口的静态方法
//CreateDispatchEx，宏中方法顺序应与类声明中虚方法出现
//顺序一致，且各虚方法必须有__stdcall调用修饰
#define BEGIN_INTF_EX_T(theClass,piid,container) \
	static inline theClass* CreateDispatchEx(void)\
	{\
		typedef theClass implClass;\
		typedef CDispatchExForScriptT<theClass,piid,container> subClass;\
		GenerateDisp gd;\
		static MethodData methodData[]=\
		{\
			gd.PlaceMethod(L"insert",&subClass::insert),\
			gd.PlaceMethod(L"erase",&subClass::erase),\
			gd.PlaceMethod(L"length",&subClass::put_length,DISPATCH_PROPERTYPUT,false),\
			gd.PlaceMethod(L"length",&subClass::get_length,DISPATCH_PROPERTYGET,true),
			
#define END_INTF_EX_T(piid,container) \
				gd.PlaceMethod()\
		};\
		static INTERFACEDATA interfaceData=\
		{\
			methodData,\
			gd.GetMethodNum()\
		};\
		return CreateDispExForScript<implClass,piid,container>(interfaceData);\
	}

#define BEGIN_INTF_EX(theClass) BEGIN_INTF_EX_T(theClass,&IID_NULL,0)
#define BEGIN_INTF_EX2(theClass) BEGIN_INTF_EX_T(theClass,&IID_NULL,1)
#define BEGIN_INTF_EX3(theClass) BEGIN_INTF_EX_T(theClass,&IID_IString,1)
#define END_INTF_EX() END_INTF_EX_T(&IID_NULL,0)
#define END_INTF_EX2() END_INTF_EX_T(&IID_NULL,1)
#define END_INTF_EX3() END_INTF_EX_T(&IID_IString,1)

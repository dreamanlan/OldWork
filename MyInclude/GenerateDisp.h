// GenerateDisp.h: interface for the GenerateDisp class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GENERATEDISP_H__51E01E86_347C_4B36_8E5D_8AD815ADB133__INCLUDED_)
#define AFX_GENERATEDISP_H__51E01E86_347C_4B36_8E5D_8AD815ADB133__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

template<typename T>
	class CDispatchForScript : public T
{
	typedef CDispatchForScript<T> ComObj;
	unsigned long m_refs;
    ITypeInfo * typeInfo;
	CDispatchForScript():m_refs(0),typeInfo(NULL)
	{}
public:
	static inline ComObj* CreateObject(ITypeInfo* pTypeInfo)
	{
		ComObj* p=new ComObj();
		p->AddRef();
		pTypeInfo->AddRef();
		p->typeInfo=pTypeInfo;
		return p;
	}

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv)
	{
		if(IsEqualIID(riid, IID_IUnknown) || IsEqualIID(riid, IID_IDispatch))
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
		return DispGetIDsOfNames(typeInfo, rgszNames, 
			cNames, rgdispid);
	}

    STDMETHOD(Invoke)(
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      unsigned short wFlags,
      DISPPARAMS * pdispparams,
      VARIANT * pvarResult,
      EXCEPINFO * pexcepinfo,
      unsigned int * pwArgErr)
	{
		return DispInvoke(this, typeInfo,
			dispidMember, wFlags, pdispparams,
			pvarResult, pexcepinfo, pwArgErr);
	}
};

struct unusable 
{
	unusable() {}
	template<typename T> unusable(const T&) {}
};
////用类型作函数参数且避免类构造开销的模板
//template<typename T>
//	struct Type2Type
//{
//	typedef T type;
//};
//用整数常量实现函数重载的模板
template<int k>
	struct Int2Type
{
	enum{value=k};
};
//将类型转为VARTYPE常量的系列模板
template<typename T>
	struct Type2Int
{
	enum{value=VT_I4};
};
template<>
	struct Type2Int<unusable>
{
	enum{value=VT_EMPTY};
};
template<>
	struct Type2Int<BYTE>
{
	enum{value=VT_UI1};
};
template<>
	struct Type2Int<BYTE*>
{
	enum{value=VT_UI1|VT_BYREF};
};
template<>
	struct Type2Int<char>
{
	enum{value=VT_I1};
};
template<>
	struct Type2Int<char*>
{
	enum{value=VT_I1|VT_BYREF};
};
template<>
	struct Type2Int<short>
{
	enum{value=VT_I2};
};
template<>
	struct Type2Int<short*>
{
	enum{value=VT_I2|VT_BYREF};
};
template<>
	struct Type2Int<unsigned short>
{
	enum{value=VT_UI2};
};

template<>
	struct Type2Int<int>
{
	enum{value=VT_I4};
};
template<>
	struct Type2Int<int*>
{
	enum{value=VT_I4|VT_BYREF};
};
template<>
	struct Type2Int<unsigned int>
{
	enum{value=VT_UI4};
};
template<>
	struct Type2Int<unsigned int*>
{
	enum{value=VT_UI4|VT_BYREF};
};
template<>
	struct Type2Int<long>
{
	enum{value=VT_I4};
};
template<>
	struct Type2Int<long*>
{
	enum{value=VT_I4|VT_BYREF};
};
template<>
	struct Type2Int<unsigned long>
{
	enum{value=VT_UI4};
};
template<>
	struct Type2Int<unsigned long*>
{
	enum{value=VT_UI4|VT_BYREF};
};
template<>
	struct Type2Int<BSTR>
{
	enum{value=VT_BSTR};
};
template<>
	struct Type2Int<BSTR*>
{
	enum{value=VT_BSTR|VT_BYREF};
};
template<>
	struct Type2Int<IDispatch*>
{
	enum{value=VT_DISPATCH};
};
template<>
	struct Type2Int<IDispatch**>
{
	enum{value=VT_DISPATCH|VT_BYREF};
};
template<>
	struct Type2Int<VARIANT>
{
	enum{value=VT_VARIANT};
};
template<>
	struct Type2Int<VARIANT*>
{
	enum{value=VT_VARIANT|VT_BYREF};
};
template<>
	struct Type2Int<float>
{
	enum{value=VT_R4};
};
template<>
	struct Type2Int<float*>
{
	enum{value=VT_R4|VT_BYREF};
};
template<>
	struct Type2Int<double>
{
	enum{value=VT_R8};
};
template<>
	struct Type2Int<double*>
{
	enum{value=VT_R8|VT_BYREF};
};

//用于计数模板参数的系列模板
template<typename T> struct function_return_type { typedef T type; };

template<> 
	struct function_return_type<void> 
{
	typedef unusable type;
};

template<typename T>
	struct count_if_used
{
	enum {value = 1} ;
};

// value=0 for unusable types
template<>
	struct count_if_used<unusable>
{
	enum {value = 0};
};

// Count the number of arguments (from the given set) which are not 
// "unusable" (therefore, count those arguments that are used).
template
	<
	typename T1=unusable, 
	typename T2=unusable, 
	typename T3=unusable, 
	typename T4=unusable, 
	typename T5=unusable, 
	typename T6=unusable, 
	typename T7=unusable, 
	typename T8=unusable, 
	typename T9=unusable, 
	typename T10=unusable
	>
	struct count_used_args
{
	enum{ value = 
		(count_if_used<T1>::value + 
		count_if_used<T2>::value +
		count_if_used<T3>::value + 
		count_if_used<T4>::value +
		count_if_used<T5>::value + 
		count_if_used<T6>::value +
		count_if_used<T7>::value + 
		count_if_used<T8>::value +
		count_if_used<T9>::value +
		count_if_used<T10>::value)};
};
//用于为生成TYPEINFO信息的模板
template
	<
	typename R=unusable,
	typename P1=unusable, 
	typename P2=unusable, 
	typename P3=unusable, 
	typename P4=unusable, 
	typename P5=unusable, 
	typename P6=unusable, 
	typename P7=unusable, 
	typename P8=unusable
	>
	struct MethodParse
{
	typedef MethodParse<R,P1,P2,P3,P4,P5,P6,P7,P8> T;
	enum
	{
		paramnum=(count_used_args<P1,P2,P3,P4,P5,P6,P7,P8>::value),
		rettype=(Type2Int<typename function_return_type<R>::type>::value)
	};
	static inline PARAMDATA* GetParams(void)
	{
		return GetParams(Int2Type<T::paramnum>());
	}
	static inline PARAMDATA* GetParams(Int2Type<1>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<2>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<3>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<4>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value},
			{L"p4",Type2Int<P4>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<5>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value},
			{L"p4",Type2Int<P4>::value},
			{L"p5",Type2Int<P5>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<6>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value},
			{L"p4",Type2Int<P4>::value},
			{L"p5",Type2Int<P5>::value},
			{L"p6",Type2Int<P6>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<7>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value},
			{L"p4",Type2Int<P4>::value},
			{L"p5",Type2Int<P5>::value},
			{L"p6",Type2Int<P6>::value},
			{L"p7",Type2Int<P7>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<8>)
	{
		static PARAMDATA params[]=
		{
			{L"p1",Type2Int<P1>::value},
			{L"p2",Type2Int<P2>::value},
			{L"p3",Type2Int<P3>::value},
			{L"p4",Type2Int<P4>::value},
			{L"p5",Type2Int<P5>::value},
			{L"p6",Type2Int<P6>::value},
			{L"p7",Type2Int<P7>::value},
			{L"p8",Type2Int<P8>::value}
		};
		return params;
	}
	static inline PARAMDATA* GetParams(Int2Type<0>)
	{		
		return NULL;
	}
};
//下面的派生结构用于结构数组初始化列表中直接作用结构变量
struct MethodData : public METHODDATA
{
	MethodData(METHODDATA& methodData)
	{
		szName=methodData.szName;
		ppdata=methodData.ppdata;
		dispid=methodData.dispid;
		iMeth=methodData.iMeth;
		cc=methodData.cc;
		cArgs=methodData.cArgs;
		wFlags=methodData.wFlags;
		vtReturn=methodData.vtReturn;
	}
};

#define INITIAL_DISPID	0x7FFF0000

class GenerateDisp  
{	
	int dispID,iMethod,methodNum;
public:
	GenerateDisp()
	{
		dispID=INITIAL_DISPID;
		iMethod=7;
		methodNum=0;
	}
	int GetMethodNum(void)
	{
		return methodNum;
	}
	//以下系列函数的const BSTR name参数接收常量字符串（或者全局分配空间的BSTR），函数总是使用其地址的。
	template
		<
		typename R,
		typename C
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3,
		typename P4
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3,P4),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3,P4> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3,
		typename P4,
		typename P5
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3,P4,P5),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3,P4,P5> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3,
		typename P4,
		typename P5,
		typename P6
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3,P4,P5,P6),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3,P4,P5,P6> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3,
		typename P4,
		typename P5,
		typename P6,
		typename P7
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3,P4,P5,P6,P7),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3,P4,P5,P6,P7> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template
		<
		typename R,
		typename C,
		typename P1,
		typename P2,
		typename P3,
		typename P4,
		typename P5,
		typename P6,
		typename P7,
		typename P8
		>
		inline MethodData PlaceMethod(const BSTR name,R (__stdcall C::*p)(P1,P2,P3,P4,P5,P6,P7,P8),USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{
		typedef MethodParse<R,P1,P2,P3,P4,P5,P6,P7,P8> T;
		return PlaceMethod(name,Type2Type<T>(),wFlags,incDisp);
	}
	template<typename T>
		inline MethodData PlaceMethod(const BSTR name,Type2Type<T>,USHORT wFlags=DISPATCH_METHOD,bool incDisp=true)
	{	
		METHODDATA methodData={name,T::GetParams(),dispID,iMethod++,CC_STDCALL,T::paramnum,wFlags,T::rettype};
		if(incDisp)dispID++;
		methodNum++;
		return methodData;		
	}
	//下面函数用于在MethodData数组中生成最后一项
	inline MethodData PlaceMethod(void)
	{
		METHODDATA methodData={NULL,NULL,NULL,NULL,CC_STDCALL,NULL,NULL,NULL};
		return methodData;
	}
	template<typename T> inline 
		CDispatchForScript<T>* CreateDispForScript(Type2Type<T>,INTERFACEDATA& interfaceData)
	{
		static CComPtr<ITypeInfo> typeInfo;
		if(!typeInfo)
		{
			HRESULT hr=::CreateDispTypeInfo(&interfaceData,LOCALE_SYSTEM_DEFAULT,&typeInfo);
			if(FAILED(hr))return NULL;
		}
		CDispatchForScript<T>* p=CDispatchForScript<T>::CreateObject(typeInfo);
		return p;
	}
};
//下述宏用于为类生成创建类的IDispatch接口的静态方法
//CreateDispatch，宏中方法顺序应与类声明中虚方法出现
//顺序一致，且各虚方法必须有__stdcal调用修饰
#define BEGIN_INTF(theClass) \
	static inline theClass* CreateDispatch(void)\
	{\
		typedef theClass implClass;\
		GenerateDisp gd;\
		static MethodData methodData[]=\
		{

#define END_INTF() \
				gd.PlaceMethod()\
		};\
		static INTERFACEDATA interfaceData=\
		{\
			methodData,\
			gd.GetMethodNum()\
		};\
		return gd.CreateDispForScript(Type2Type<implClass>(),interfaceData);\
	}

#define METHOD(memfunc) \
	gd.PlaceMethod(L#memfunc,&implClass::memfunc),
//下面宏中的incDisp参数用于指明是否对DISPID加1，如果特性仅读或写，则总应指定true
//如果特性既可读又可写，则后一个读写方法指定true,第一个指定false，这是因为特性的
//读写方法共用一个DISPID,另外特性对应的方法名应为：get_+特性名 或 put_+特性名
#define PROPERTYGET(name,incDisp) \
	gd.PlaceMethod(L#name,&implClass::get_##name,DISPATCH_PROPERTYGET,incDisp),

#define PROPERTYPUT(name,incDisp) \
	gd.PlaceMethod(L#name,&implClass::put_##name,DISPATCH_PROPERTYPUT,incDisp),

#define PROPERTYPUTREF(name,incDisp) \
	gd.PlaceMethod(L#name,&implClass::put_##name,DISPATCH_PROPERTYPUTREF,incDisp),

#endif // !defined(AFX_GENERATEDISP_H__51E01E86_347C_4B36_8E5D_8AD815ADB133__INCLUDED_)

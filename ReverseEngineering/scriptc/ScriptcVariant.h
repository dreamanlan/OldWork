#pragma once
#include <map>
using namespace std;
#include "oaidl.h"
#include "Disasm.h"
//IObject接口是所有语言内建对象及自定义对象都符合的接口。
// {CDE21B1C-2CC4-4236-8C1F-2E15297762CC}
extern "C" const GUID IID_IObject;

//IString接口是语言字符串对象的接口。
// {F58171C4-1B72-4dd8-AB4F-29F03B7E1CBB}
extern "C" const GUID IID_IString;
//内建字符串对象的数据部分
template<typename VariantT>
	class BaseStringT
{
protected:
	CString str;
	CComBSTR bstr;
	VariantT variant;	
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
			VariantT v=s;
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
	inline VariantT& VariantRef(void)
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
template<typename VariantT>
	class IStringT : public IObject,public BaseStringT<VariantT>
{
protected:
	typedef IStringT<VariantT> IString;
public:
	//检查一个变量是否内部字符串对象并返回其指针
	static inline IString* GetIString(const VariantT& v)
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
	static inline CString ToString(const VariantT& v)
	{
		IString* pstr=GetIString(v);
		if(pstr)
		{
			return pstr->Ref();
		}
		else
		{
			VariantT ret=v;
			ret.ChangeType(VT_BSTR);
			return CString(ret.bstrVal);
		}
	}
};

//自定义应从这个模板继承，用以处理虚拟机的引用问题
template<typename VM,typename VariantT>
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
	inline VariantT ExecFunction(int index,VariantT* externArgs,int argnum,VariantT obj)
	{
		return vmachine->ExecFunction(index,externArgs,argnum,obj);
	}
};
//语言内建字符串对象从这个模板继承，用以处理虚拟机的引用问题
template<typename VM,typename VariantT>
	class StringBaseT : public IStringT<VariantT>
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
	inline VariantT ExecFunction(int index,VariantT* externArgs,int argnum,VariantT obj)
	{
		return vmachine->ExecFunction(index,externArgs,argnum,obj);
	}
};
//CComVariant,ScriptcVariant的比较
template<typename VariantT>
	class VarCompareT
{
	typedef IStringT<VariantT> IString;
public:
	static inline bool LT(const VariantT& left,const VariantT& right)
	{
		if(left.vt==VT_I4 && right.vt==VT_I4)
		{
			return left.lVal < right.lVal;
		}
		else if(left.vt==VT_DISPATCH && right.vt==VT_DISPATCH)
		{
			IString* pl=IString::GetIString(left);
			IString* pr=IString::GetIString(right);
			if(pl && pr)
			{
				return pl->Ref() < pr->Ref();
			}
			else
			{
				return left.lVal < right.lVal;
			}
		}
		else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
		{
			return CComBSTR(left.bstrVal) < CComBSTR(right.bstrVal);
		}
		else if(left.vt==VT_R8 || right.vt==VT_R8)
		{
			VariantT vl=left;
			VariantT vr=right;
			vl.ChangeType(VT_R8);
			vr.ChangeType(VT_R8);
			return left.dblVal < right.dblVal;
		}
		else
		{
			return left.lVal < right.lVal;
		}
	}
	static inline bool GT(const VariantT& left,const VariantT& right)
	{
		if(left.vt==VT_I4 && right.vt==VT_I4)
		{
			return left.lVal > right.lVal;
		}
		else if(left.vt==VT_DISPATCH && right.vt==VT_DISPATCH)
		{
			IString* pl=IString::GetIString(left);
			IString* pr=IString::GetIString(right);
			if(pl && pr)
			{
				return pl->Ref() > pr->Ref();
			}
			else
			{
				return left.lVal > right.lVal;
			}
		}
		else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
		{
			return CComBSTR(left.bstrVal) > CComBSTR(right.bstrVal);
		}
		else if(left.vt==VT_R8 || right.vt==VT_R8)
		{
			VariantT vl=left;
			VariantT vr=right;
			vl.ChangeType(VT_R8);
			vr.ChangeType(VT_R8);
			return left.dblVal > right.dblVal;
		}
		else
		{
			return left.lVal > right.lVal;
		}
	}
	static inline bool EQ(const VariantT& left,const VariantT& right)
	{
		if(left.vt==VT_I4 && right.vt==VT_I4)
		{
			return left.lVal == right.lVal;
		}
		else if(left.vt==VT_DISPATCH && right.vt==VT_DISPATCH)
		{
			IString* pl=IString::GetIString(left);
			IString* pr=IString::GetIString(right);
			if(pl && pr)
			{
				return pl->Ref() == pr->Ref();
			}
			else
			{
				return left.lVal == right.lVal;
			}
		}
		else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
		{
			return CComBSTR(left.bstrVal) == CComBSTR(right.bstrVal);
		}
		else if(left.vt==VT_R8 || right.vt==VT_R8)
		{
			VariantT vl=left;
			VariantT vr=right;
			vl.ChangeType(VT_R8);
			vr.ChangeType(VT_R8);
			return left.dblVal == right.dblVal;
		}
		else
		{
			return left.lVal == right.lVal;
		}
	}
	static inline bool LE(const VariantT& left,const VariantT& right)
	{
		if(left.vt==VT_I4 && right.vt==VT_I4)
		{
			return left.lVal <= right.lVal;
		}
		else if(left.vt==VT_DISPATCH && right.vt==VT_DISPATCH)
		{
			IString* pl=IString::GetIString(left);
			IString* pr=IString::GetIString(right);
			if(pl && pr)
			{
				return pl->Ref() <= pr->Ref();
			}
			else
			{
				return left.lVal <= right.lVal;
			}
		}
		else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
		{
			return CComBSTR(left.bstrVal) <= CComBSTR(right.bstrVal);
		}
		else if(left.vt==VT_R8 || right.vt==VT_R8)
		{
			VariantT vl=left;
			VariantT vr=right;
			vl.ChangeType(VT_R8);
			vr.ChangeType(VT_R8);
			return left.dblVal <= right.dblVal;
		}
		else
		{
			return left.lVal <= right.lVal;
		}
	}
	static inline bool GE(const VariantT& left,const VariantT& right)
	{
		if(left.vt==VT_I4 && right.vt==VT_I4)
		{
			return left.lVal >= right.lVal;
		}
		else if(left.vt==VT_DISPATCH && right.vt==VT_DISPATCH)
		{
			IString* pl=IString::GetIString(left);
			IString* pr=IString::GetIString(right);
			if(pl && pr)
			{
				return pl->Ref() >= pr->Ref();
			}
			else
			{
				return left.lVal >= right.lVal;
			}
		}
		else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
		{
			return CComBSTR(left.bstrVal) >= CComBSTR(right.bstrVal);
		}
		else if(left.vt==VT_R8 || right.vt==VT_R8)
		{
			VariantT vl=left;
			VariantT vr=right;
			vl.ChangeType(VT_R8);
			vr.ChangeType(VT_R8);
			return left.dblVal >= right.dblVal;
		}
		else
		{
			return left.lVal >= right.lVal;
		}
	}
};

class ScriptcVariant : public tagVARIANT
{
	typedef VarCompareT<ScriptcVariant> VarCompare;
// Constructors
public:
	ScriptcVariant() throw()
	{
		::VariantInit(this);
	}
	~ScriptcVariant() throw()
	{
		Clear();
	}

	ScriptcVariant(const VARIANT& varSrc)
	{
		vt = VT_EMPTY;
		InternalCopy(&varSrc);
	}

	ScriptcVariant(const CComVariant& varSrc)
	{
		vt = VT_EMPTY;
		InternalCopy(&varSrc);
	}

	ScriptcVariant(const ScriptcVariant& varSrc)
	{
		vt = VT_EMPTY;
		InternalCopy(&varSrc);
	}
	ScriptcVariant(LPCOLESTR lpszSrc)
	{
		vt = VT_EMPTY;
		*this = lpszSrc;
	}

	ScriptcVariant(LPCSTR lpszSrc)
	{
		vt = VT_EMPTY;
		*this = lpszSrc;
	}

	ScriptcVariant(bool bSrc)
	{
		vt = VT_BOOL;
		boolVal = bSrc ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE;
	}

	ScriptcVariant(int nSrc, VARTYPE vtSrc = VT_I4) throw()
	{
		ATLASSERT(vtSrc == VT_I4 || vtSrc == VT_INT);
		vt = vtSrc;
		intVal = nSrc;
	}
	ScriptcVariant(BYTE nSrc) throw()
	{
		vt = VT_UI1;
		bVal = nSrc;
	}
	ScriptcVariant(short nSrc) throw()
	{
		vt = VT_I2;
		iVal = nSrc;
	}
	ScriptcVariant(long nSrc, VARTYPE vtSrc = VT_I4) throw()
	{
		ATLASSERT(vtSrc == VT_I4 || vtSrc == VT_ERROR);
		vt = vtSrc;
		lVal = nSrc;
	}
	ScriptcVariant(float fltSrc) throw()
	{
		vt = VT_R4;
		fltVal = fltSrc;
	}
	ScriptcVariant(double dblSrc, VARTYPE vtSrc = VT_R8) throw()
	{
		ATLASSERT(vtSrc == VT_R8 || vtSrc == VT_DATE);
		vt = vtSrc;
		dblVal = dblSrc;
	}
#if (_WIN32_WINNT >= 0x0501) || defined(_ATL_SUPPORT_VT_I8)
	ScriptcVariant(LONGLONG nSrc) throw()
	{
		vt = VT_I8;
		llVal = nSrc;
	}
	ScriptcVariant(ULONGLONG nSrc) throw()
	{
		vt = VT_UI8;
		ullVal = nSrc;
	}
#endif
	ScriptcVariant(CY cySrc) throw()
	{
		vt = VT_CY;
		cyVal.Hi = cySrc.Hi;
		cyVal.Lo = cySrc.Lo;
	}
	ScriptcVariant(IDispatch* pSrc) throw()
	{
		vt = VT_DISPATCH;
		pdispVal = pSrc;
		// Need to AddRef as VariantClear will Release
		if (pdispVal != NULL)
			pdispVal->AddRef();
	}
	ScriptcVariant(IUnknown* pSrc) throw()
	{
		vt = VT_UNKNOWN;
		punkVal = pSrc;
		// Need to AddRef as VariantClear will Release
		if (punkVal != NULL)
			punkVal->AddRef();
	}
	ScriptcVariant(char cSrc) throw()
	{
		vt = VT_I1;
		cVal = cSrc;
	}
	ScriptcVariant(unsigned short nSrc) throw()
	{
		vt = VT_UI2;
		uiVal = nSrc;
	}
	ScriptcVariant(unsigned long nSrc) throw()
	{
		vt = VT_UI4;
		ulVal = nSrc;
	}
	ScriptcVariant(unsigned int nSrc, VARTYPE vtSrc = VT_UI4) throw()
	{
		ATLASSERT(vtSrc == VT_UI4 || vtSrc == VT_UINT);
		vt = vtSrc;
		uintVal= nSrc;
	}
	ScriptcVariant(const CComBSTR& bstrSrc)
	{
		vt = VT_EMPTY;
		*this = bstrSrc;
	}
	ScriptcVariant(const SAFEARRAY *pSrc)
	{
		LPSAFEARRAY pCopy;
		if (pSrc != NULL)
		{
			HRESULT hRes = ::SafeArrayCopy((LPSAFEARRAY)pSrc, &pCopy);
			if (SUCCEEDED(hRes) && pCopy != NULL)
			{
				::SafeArrayGetVartype((LPSAFEARRAY)pSrc, &vt);
				vt |= VT_ARRAY;
				parray = pCopy;
			}
			else
			{
				vt = VT_ERROR;
				scode = hRes;
			}
		}
	}
// Assignment Operators
public:
	ScriptcVariant& operator=(const ScriptcVariant& varSrc)
	{
		InternalCopy(&varSrc);
		return *this;
	}
	ScriptcVariant& operator=(const CComVariant& varSrc)
	{
		InternalCopy(&varSrc);
		return *this;
	}
	ScriptcVariant& operator=(const VARIANT& varSrc)
	{
		InternalCopy(&varSrc);
		return *this;
	}

	ScriptcVariant& operator=(const CComBSTR& bstrSrc)
	{
		Clear();
		vt = VT_BSTR;
		bstrVal = bstrSrc.Copy();
		if (bstrVal == NULL && bstrSrc.m_str != NULL)
		{
			vt = VT_ERROR;
			scode = E_OUTOFMEMORY;
		}
		return *this;
	}

	ScriptcVariant& operator=(LPCOLESTR lpszSrc)
	{
		Clear();
		vt = VT_BSTR;
		bstrVal = ::SysAllocString(lpszSrc);

		if (bstrVal == NULL && lpszSrc != NULL)
		{
			vt = VT_ERROR;
			scode = E_OUTOFMEMORY;
		}
		return *this;
	}

	ScriptcVariant& operator=(LPCSTR lpszSrc)
	{
		USES_CONVERSION_EX;
		Clear();
		vt = VT_BSTR;
		bstrVal = ::SysAllocString(A2COLE_EX(lpszSrc, _ATL_SAFE_ALLOCA_DEF_THRESHOLD));

		if (bstrVal == NULL && lpszSrc != NULL)
		{
			vt = VT_ERROR;
			scode = E_OUTOFMEMORY;
		}
		return *this;
	}

	ScriptcVariant& operator=(bool bSrc)
	{
		if (vt != VT_BOOL)
		{
			Clear();
			vt = VT_BOOL;
		}
		boolVal = bSrc ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE;
		return *this;
	}

	ScriptcVariant& operator=(int nSrc) throw()
	{
		if (vt != VT_I4)
		{
			Clear();
			vt = VT_I4;
		}
		intVal = nSrc;

		return *this;
	}

	ScriptcVariant& operator=(BYTE nSrc) throw()
	{
		if (vt != VT_UI1)
		{
			Clear();
			vt = VT_UI1;
		}
		bVal = nSrc;
		return *this;
	}

	ScriptcVariant& operator=(short nSrc) throw()
	{
		if (vt != VT_I2)
		{
			Clear();
			vt = VT_I2;
		}
		iVal = nSrc;
		return *this;
	}

	ScriptcVariant& operator=(long nSrc) throw()
	{
		if (vt != VT_I4)
		{
			Clear();
			vt = VT_I4;
		}
		lVal = nSrc;
		return *this;
	}

	ScriptcVariant& operator=(float fltSrc) throw()
	{
		if (vt != VT_R4)
		{
			Clear();
			vt = VT_R4;
		}
		fltVal = fltSrc;
		return *this;
	}

	ScriptcVariant& operator=(double dblSrc) throw()
	{
		if (vt != VT_R8)
		{
			Clear();
			vt = VT_R8;
		}
		dblVal = dblSrc;
		return *this;
	}

	ScriptcVariant& operator=(CY cySrc) throw()
	{
		if (vt != VT_CY)
		{
			Clear();
			vt = VT_CY;
		}
		cyVal.Hi = cySrc.Hi;
		cyVal.Lo = cySrc.Lo;
		return *this;
	}

	ScriptcVariant& operator=(IDispatch* pSrc) throw()
	{
		Clear();
		vt = VT_DISPATCH;
		pdispVal = pSrc;
		// Need to AddRef as VariantClear will Release
		if (pdispVal != NULL)
			pdispVal->AddRef();
		return *this;
	}

	ScriptcVariant& operator=(IUnknown* pSrc) throw()
	{
		Clear();
		vt = VT_UNKNOWN;
		punkVal = pSrc;

		// Need to AddRef as VariantClear will Release
		if (punkVal != NULL)
			punkVal->AddRef();
		return *this;
	}

	ScriptcVariant& operator=(char cSrc) throw()
	{
		if (vt != VT_I1)
		{
			Clear();
			vt = VT_I1;
		}
		cVal = cSrc;
		return *this;
	}

	ScriptcVariant& operator=(unsigned short nSrc) throw()
	{
		if (vt != VT_UI2)
		{
			Clear();
			vt = VT_UI2;
		}
		uiVal = nSrc;
		return *this;
	}

	ScriptcVariant& operator=(unsigned long nSrc) throw()
	{
		if (vt != VT_UI4)
		{
			Clear();
			vt = VT_UI4;
		}
		ulVal = nSrc;
		return *this;
	}

	ScriptcVariant& operator=(unsigned int nSrc) throw()
	{
		if (vt != VT_UI4)
		{
			Clear();
			vt = VT_UI4;
		}
		uintVal= nSrc;
		return *this;
	}

	ScriptcVariant& operator=(BYTE* pbSrc) throw()
	{
		if (vt != (VT_UI1|VT_BYREF))
		{
			Clear();
			vt = VT_UI1|VT_BYREF;
		}
		pbVal = pbSrc;
		return *this;
	}

	ScriptcVariant& operator=(short* pnSrc) throw()
	{
		if (vt != (VT_I2|VT_BYREF))
		{
			Clear();
			vt = VT_I2|VT_BYREF;
		}
		piVal = pnSrc;
		return *this;
	}

#ifdef _NATIVE_WCHAR_T_DEFINED
	ScriptcVariant& operator=(USHORT* pnSrc) throw()
	{
		if (vt != (VT_UI2|VT_BYREF))
		{
			Clear();
			vt = VT_UI2|VT_BYREF;
		}
		puiVal = pnSrc;
		return *this;
	}
#endif

	ScriptcVariant& operator=(int* pnSrc) throw()
	{
		if (vt != (VT_I4|VT_BYREF))
		{
			Clear();
			vt = VT_I4|VT_BYREF;
		}
		pintVal = pnSrc;
		return *this;
	}

	ScriptcVariant& operator=(UINT* pnSrc) throw()
	{
		if (vt != (VT_UI4|VT_BYREF))
		{
			Clear();
			vt = VT_UI4|VT_BYREF;
		}
		puintVal = pnSrc;
		return *this;
	}

	ScriptcVariant& operator=(long* pnSrc) throw()
	{
		if (vt != (VT_I4|VT_BYREF))
		{
			Clear();
			vt = VT_I4|VT_BYREF;
		}
		plVal = pnSrc;
		return *this;
	}

	ScriptcVariant& operator=(ULONG* pnSrc) throw()
	{
		if (vt != (VT_UI4|VT_BYREF))
		{
			Clear();
			vt = VT_UI4|VT_BYREF;
		}
		pulVal = pnSrc;
		return *this;
	}

#if (_WIN32_WINNT >= 0x0501) || defined(_ATL_SUPPORT_VT_I8)
	ScriptcVariant& operator=(LONGLONG nSrc) throw()
	{
		if (vt != VT_I8)
		{
			Clear();
			vt = VT_I8;
		}
		llVal = nSrc;

		return *this;
	}

	ScriptcVariant& operator=(LONGLONG* pnSrc) throw()
	{
		if (vt != (VT_I8|VT_BYREF))
		{
			Clear();
			vt = VT_I8|VT_BYREF;
		}
		pllVal = pnSrc;
		return *this;
	}

	ScriptcVariant& operator=(ULONGLONG nSrc) throw()
	{
		if (vt != VT_UI8)
		{
			Clear();
			vt = VT_UI8;
		}
		ullVal = nSrc;

		return *this;
	}

	ScriptcVariant& operator=(ULONGLONG* pnSrc) throw()
	{
		if (vt != (VT_UI8|VT_BYREF))
		{
			Clear();
			vt = VT_UI8|VT_BYREF;
		}
		pullVal = pnSrc;
		return *this;
	}
#endif

	ScriptcVariant& operator=(float* pfSrc) throw()
	{
		if (vt != (VT_R4|VT_BYREF))
		{
			Clear();
			vt = VT_R4|VT_BYREF;
		}
		pfltVal = pfSrc;
		return *this;
	}

	ScriptcVariant& operator=(double* pfSrc) throw()
	{
		if (vt != (VT_R8|VT_BYREF))
		{
			Clear();
			vt = VT_R8|VT_BYREF;
		}
		pdblVal = pfSrc;
		return *this;
	}

	ScriptcVariant& operator=(const SAFEARRAY *pSrc)
	{
		Clear();
		LPSAFEARRAY pCopy;
		if (pSrc != NULL)
		{
			HRESULT hRes = ::SafeArrayCopy((LPSAFEARRAY)pSrc, &pCopy);
			if (SUCCEEDED(hRes) && pCopy != NULL)
			{
				::SafeArrayGetVartype((LPSAFEARRAY)pSrc, &vt);
				vt |= VT_ARRAY;
				parray = pCopy;
			}
			else
			{
				vt = VT_ERROR;
				scode = hRes;
			}
		}
		return *this;
	}

// Comparison Operators
public:
	bool operator==(const VARIANT& varSrc) const throw()
	{
		// For backwards compatibility
		if (vt == VT_NULL && varSrc.vt == VT_NULL)
			return true;
		return VarCompare::EQ(*this,varSrc);
	}

	bool operator!=(const VARIANT& varSrc) const throw()
	{
		return !operator==(varSrc);
	}

	bool operator<(const VARIANT& varSrc) const throw()
	{
		if (vt == VT_NULL && varSrc.vt == VT_NULL)
			return false;
		return VarCompare::LT(*this,varSrc);
	}

	bool operator>(const VARIANT& varSrc) const throw()
	{
		if (vt == VT_NULL && varSrc.vt == VT_NULL)
			return false;
		return VarCompare::GT(*this,varSrc);
	}

// Operations
public:
	HRESULT Clear() { return ::VariantClear(this); }
	HRESULT Copy(const VARIANT* pSrc) { return ::VariantCopy(this, const_cast<VARIANT*>(pSrc)); }
	// copy VARIANT to BSTR
	HRESULT CopyTo(BSTR *pstrDest)
	{
		ATLASSERT(pstrDest != NULL && vt == VT_BSTR);
		HRESULT hRes = E_POINTER;
		if (pstrDest != NULL && vt == VT_BSTR)
		{
			*pstrDest = ::SysAllocStringByteLen((char*)bstrVal, ::SysStringByteLen(bstrVal));
			if (*pstrDest == NULL)
				hRes = E_OUTOFMEMORY;
			else
				hRes = S_OK;
		}
		else if (vt != VT_BSTR)
			hRes = DISP_E_TYPEMISMATCH;
		return hRes;
	}
	HRESULT Attach(VARIANT* pSrc)
	{
		if(pSrc == NULL)
			return E_INVALIDARG;
			
		// Clear out the variant
		HRESULT hr = Clear();
		if (!FAILED(hr))
		{
			// Copy the contents and give control to ScriptcVariant
			memcpy(this, pSrc, sizeof(VARIANT));
			pSrc->vt = VT_EMPTY;
			hr = S_OK;
		}
		return hr;
	}

	HRESULT Detach(VARIANT* pDest)
	{
		ATLASSERT(pDest != NULL);
		if(pDest == NULL)
			return E_POINTER;
			
		// Clear out the variant
		HRESULT hr = ::VariantClear(pDest);
		if (!FAILED(hr))
		{
			// Copy the contents and remove control from ScriptcVariant
			memcpy(pDest, this, sizeof(VARIANT));
			vt = VT_EMPTY;
			hr = S_OK;
		}
		return hr;
	}

	HRESULT ChangeType(VARTYPE vtNew, const VARIANT* pSrc = NULL)
	{
		VARIANT* pVar = const_cast<VARIANT*>(pSrc);
		// Convert in place if pSrc is NULL
		if (pVar == NULL)
			pVar = this;
		// Do nothing if doing in place convert and vts not different
		return ::VariantChangeType(this, pVar, 0, vtNew);
	}
// Implementation
public:
	HRESULT InternalClear()
	{
		HRESULT hr = Clear();
		ATLASSERT(SUCCEEDED(hr));
		if (FAILED(hr))
		{
			vt = VT_ERROR;
			scode = hr;
		}
		return hr;
	}

	void InternalCopy(const VARIANT* pSrc)
	{
		HRESULT hr = Copy(pSrc);
		if (FAILED(hr))
		{
			vt = VT_ERROR;
			scode = hr;
		}
	}
};

typedef IStringT<ScriptcVariant> IString;
typedef VarCompareT<ScriptcVariant> VarCompare;
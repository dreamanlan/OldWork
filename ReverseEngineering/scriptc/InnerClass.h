#pragma once 
#include <math.h>
#include <time.h>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <hash_set>
#include <algorithm>
#include <stack>
#include <queue>

#include "GenerateObject.h"

namespace Scriptc
{
	//CComVariant的比较
	template<typename VariantT>
		class VarCompareT
	{
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
					return left.ulVal < right.ulVal;
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
				return left.ulVal < right.ulVal;
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
					return left.ulVal > right.ulVal;
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
				return left.ulVal > right.ulVal;
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
					return left.ulVal == right.ulVal;
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
				return left.ulVal == right.ulVal;
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
					return left.ulVal <= right.ulVal;
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
				return left.ulVal <= right.ulVal;
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
					return left.ulVal >= right.ulVal;
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
				return left.ulVal >= right.ulVal;
			}
		}
	};

	typedef VarCompareT<CComVariant> VarCompare;
	//将CComVariant作为map,set的键需要的比较类型
	class VarLess
	{
	public:
		bool operator()(const CComVariant& left,const CComVariant& right) const
		{
			return VarCompare::LT(left,right);
		}
	};
	class VarGreater
	{
	public:
		bool operator()(const CComVariant& left,const CComVariant& right) const
		{
			return VarCompare::GT(left,right);
		}
	};

	typedef std::vector<CComVariant> VarVector;
	typedef std::deque<CComVariant> VarDeque;
	typedef std::list<CComVariant> VarList;
	typedef std::set<CComVariant,VarLess> VarSet;
	typedef std::map<CString,VarVector> ClassObjects;
	typedef std::priority_queue<CComVariant,std::vector<CComVariant>,VarLess> MaxVarPriorityQueue;
	typedef std::priority_queue<CComVariant,std::vector<CComVariant>,VarGreater> MinVarPriorityQueue;

	template<typename T> static inline 
		void __stdcall ConcatVariantImpl(T* pThis,VARIANT vals)
		{
			//接受一个变化数据类型，可能是JS数组或VB safearray数组，将其内容添加到本数组
			if(vals.vt==VT_BSTR)
			{//脚本执行时不应该遇到VT_BSTR
				pThis->push(vals);
				return;
			}
			else if(vals.vt==VT_I4 || vals.vt==VT_INT || vals.vt==VT_UI4 || vals.vt==VT_UINT)
			{
				pThis->push(vals);
				return;
			}
			//对jscript传入数组的处理
			if(vals.vt==(VT_DISPATCH|VT_BYREF))
			{		
				vals.pdispVal=*vals.ppdispVal;
				vals.vt=VT_DISPATCH;
			}
			if(vals.vt==VT_DISPATCH && vals.pdispVal)
			{
				CComDispatchDriver cddv(vals.pdispVal);
				IString* pstr=IString::GetIString(vals);
				if(!pstr)
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
							pThis->push(comvt);
						}	
						return;
					}
					else
					{
						pThis->push(vals);
						return;
					}
				}
				else
				{
					pThis->push(vals);
					return;
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
					pThis->push(vals);
					return;
				}
				LONG lBound,uBound;
				::SafeArrayGetLBound(tempVT.parray,1,&lBound);
				::SafeArrayGetUBound(tempVT.parray,1,&uBound);
				long length=uBound-lBound+1;
				for(long i=lBound;i<=uBound;i++)
				{
					CComVariant ccv;
					::SafeArrayGetElement(tempVT.parray,&i,&ccv);
					pThis->push(ccv);
				}			
			}
		}
	template<typename T> static inline 
		void SpliceImpl(T* pThis,unsigned int where,T* pOther,unsigned int start,unsigned int count)
		{
			try
			{
				for(UINT i=0;i<count;i++)
				{
					CComVariant v;
					v.Attach(&pOther->get(start));
					pOther->erase(CComVariant(start));
					pThis->insert(CComVariant(where),v);
				}
			}
			catch(...)
			{}
		}
	template<typename T> static inline 
		IDispatch* SliceImpl(T* pThis,unsigned int start,unsigned int count)
		{
			T* p=(T*)T::CreateDispatchEx();
			UINT size=pThis->get_length();
			for(UINT i=start;i<start+count && i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->get(i));
				p->push(val);
			}
			return p;
		}
	template<typename T> static inline 
		IDispatch* CloneImpl(T* pThis)
		{
			T* p=T::CreateDispatchEx();
			p->SetVM(pThis->GetVM());
			int size=pThis->get_length();
			for(int i=0;i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->get(i));
				p->push(val);
			}
			return p;
		}
	template<typename T> static inline 
		void ConcatSiblingImpl(T* pThis,IDispatch* other)
		{
			T* p=(T*)other;
			try
			{
				int size=p->get_length();
				for(int i=0;i<size;i++)
				{
					CComVariant val;
					val.Attach(&p->get(i));
					pThis->push(val);
				}
			}
			catch(...)
			{}
		}
	template<typename T> static inline 
		BSTR ToStringImpl(T* pThis,VARIANT vs)
		{
			CString sp;
			if(vs.vt==VT_DISPATCH)
			{			
				IString* pstr=IString::GetIString(vs);
				if(!pstr)
				{
					CComVariant vvs(vs);
					vvs.ChangeType(VT_BSTR);
					sp=CString(vvs.bstrVal);
				}
				else
				{
					sp=pstr->Ref();
				}
			}
			else if(vs.vt==VT_BSTR)
			{
				sp=CString(vs.bstrVal);
			}
			else
			{
				CComVariant vvs(vs);
				vvs.ChangeType(VT_BSTR);
				sp=CString(vvs.bstrVal);
			}
			CString rt="";
			int size=pThis->get_length();
			CString prestr="";
			for(int i=0;i<size;i++)
			{
				CComVariant ret;
				ret.Attach(&pThis->get(i));
				if(ret.vt==VT_DISPATCH)
				{
					IString* pstr=IString::GetIString(ret);
					if(!pstr)
					{
						ret.ChangeType(VT_BSTR);
					}
					else
					{
						CString& r=pstr->Ref();
						rt+=prestr+r;
						if(prestr!=sp)
							prestr=sp;
						continue;
					}
				}
				else if(ret.vt!=VT_BSTR)
				{
					ret.ChangeType(VT_BSTR);
				}
				rt+=prestr+CString(ret.bstrVal);
				if(prestr!=sp)
					prestr=sp;
			}
			return rt.AllocSysString();
		}
	template<typename T> static inline 
		VARIANT ToSafeArrayImpl(T* pThis)
		{
			int size=pThis->get_length();
			SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,0,size);
			for(LONG i=0;i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->get(i));
				::SafeArrayPutElement(psa,&i,&val);
			}
			VARIANT var;
			::VariantInit(&var);
			var.vt=VT_ARRAY|VT_VARIANT;
			var.parray=psa;
			return var;
		}
	//--------------------------------------------------------------------------------
	//任何语言内建对象或自定义对象均从ObjectBaseT<T>派生(ObjectBaseT<T>提供对象模型)。
	//--------------------------------------------------------------------------------
	template<typename T>
		class Object : public ObjectBaseT<T>
	{
	public:
		typedef T VM;
	public:
		BEGIN_INTF_EX(Object)
		END_INTF_EX()
	public:
		inline void push(VARIANT v)
		{
			int len=get_length();
			CComDispatchDriver disp(this);
			disp.PutProperty((DISPID)len,&v);
		}
		inline VARIANT get(int pos)
		{
			int len=get_length();
			if(pos<0 || pos>=len)
				return CComVariant(0);
			CComDispatchDriver disp(this);
			VARIANT r;
			::VariantInit(&r);
			disp.GetProperty((DISPID)pos,&r);
			return r;
		}
	};
	template<typename T> static inline 
		IDispatch* ToObjectImpl(T* pThis)
		{
			Object<T::VM>* p=(Object<T::VM>*)Object<T::VM>::CreateDispatchEx();
			int size=pThis->get_length();
			for(int i=0;i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->get(i));
				p->push(val);
			}
			return p;
		}

	template<bool userCreate>
		class VectorObjData
	{
	public:
		inline VarVector* VarVectorPtr(void)
		{
			return &varVector;
		}
		inline void VarVectorPtr(VarVector* p)
		{
		}
	private:
		VarVector varVector;
	};


	template<>
		class VectorObjData<false>
	{
	public:
		inline VarVector*& VarVectorPtr(void)
		{
			return pVarVector;
		}
		inline void VarVectorPtr(VarVector* p)
		{
			pVarVector=p;
		}
	private:
		VarVector* pVarVector;
	};

	template<typename T,bool userCreate=true>
		class VectorObj : public ObjectBaseT<T>
	{
	public:
		typedef T VM;
	public:
		virtual void __stdcall insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.lVal;
			if(pos<0 || pos>vData.VarVectorPtr()->size())
				return;
			VarVector::iterator it=vData.VarVectorPtr()->begin();
			std::advance(it,pos);
			vData.VarVectorPtr()->insert(it,CComVariant(v));
		}
		virtual void __stdcall erase(VARIANT key)
		{
			UINT pos=key.lVal;
			if(pos<0 || pos>=vData.VarVectorPtr()->size())
				return;
			VarVector::iterator it=vData.VarVectorPtr()->begin();
			std::advance(it,pos);
			vData.VarVectorPtr()->erase(it);
		}
		virtual void __stdcall put_length(int size)
		{
			vData.VarVectorPtr()->resize(size,CComVariant(0));
		}
		virtual int __stdcall get_length(void)
		{
			return vData.VarVectorPtr()->size();
		}
		virtual void __stdcall push(VARIANT v)
		{
			vData.VarVectorPtr()->push_back(CComVariant(v));
		}
		virtual void __stdcall pop(void)
		{
			vData.VarVectorPtr()->pop_back();
		}
		virtual VARIANT __stdcall get_front(void)
		{
			CComVariant v=vData.VarVectorPtr()->front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_back(void)
		{
			CComVariant v=vData.VarVectorPtr()->back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall find(VARIANT v)
		{
			VarVector::iterator it=std::find(vData.VarVectorPtr()->begin(),vData.VarVectorPtr()->end(),CComVariant(v));
			if(it==vData.VarVectorPtr()->end())
				return -1;
			return (int)std::distance(vData.VarVectorPtr()->begin(),it);
		}
		virtual IDispatch* __stdcall splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			SpliceImpl(this,where,(VectorObj<T,userCreate>*)pOther,start,count);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall clear(void)
		{
			vData.VarVectorPtr()->clear();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)vData.VarVectorPtr()->empty();
		}
		virtual void __stdcall reserve(int count)
		{
			vData.VarVectorPtr()->reserve(count);
		}
		virtual IDispatch* __stdcall clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall concatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall concatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall toString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall toSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
		virtual IDispatch* __stdcall toObject(void)
		{
			return ToObjectImpl(this);
		}
	public:
		BEGIN_INTF_EX2(VectorObj)
			METHOD(push)
			METHOD(pop)
			PROPERTYGET(front,true)
			PROPERTYGET(back,true)
			METHOD(find)
			METHOD(splice)
			METHOD(slice)
			METHOD(clear)
			PROPERTYGET(empty,true)
			METHOD(reserve)
			METHOD(clone)
			METHOD(concatSibling)
			METHOD(concatVariant)
			METHOD(toString)
			METHOD(toSafeArray)
			METHOD(toObject)
		END_INTF_EX2()
	public:
		inline void Init(VarVector* p)
		{
			vData.VarVectorPtr(p);
		}
		inline VARIANT get(UINT pos)
		{		
			if(pos<0 || pos>=vData.VarVectorPtr()->size())
				return CComVariant(0);
			CComVariant v=(*vData.VarVectorPtr())[pos];
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		inline void set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=vData.VarVectorPtr()->size())
				return;
			(*vData.VarVectorPtr())[pos]=CComVariant(v);
		}
	private:
		VectorObjData<userCreate> vData;
	};

	template<typename T>
		class DequeObj : public ObjectBaseT<T>
	{
	public:
		typedef T VM;
	public:
		virtual void __stdcall insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>varDeque.size())
				return;
			VarDeque::iterator it=varDeque.begin();
			std::advance(it,pos);
			varDeque.insert(it,CComVariant(v));
		}
		virtual void __stdcall erase(VARIANT key)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>=varDeque.size())
				return;
			VarDeque::iterator it=varDeque.begin();
			std::advance(it,pos);
			varDeque.erase(it);
		}
		virtual void __stdcall put_length(int size)
		{
			varDeque.resize(size,CComVariant(0));
		}
		virtual int __stdcall get_length(void)
		{
			return varDeque.size();
		}
		virtual void __stdcall unshift(VARIANT v)
		{
			varDeque.push_front(CComVariant(v));
		}
		virtual void __stdcall shift(void)
		{
			varDeque.pop_front();
		}
		virtual void __stdcall push(VARIANT v)
		{
			varDeque.push_back(CComVariant(v));
		}
		virtual void __stdcall pop(void)
		{
			varDeque.pop_back();
		}
		virtual VARIANT __stdcall get_front(void)
		{
			CComVariant v=varDeque.front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_back(void)
		{
			CComVariant v=varDeque.back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall find(VARIANT v)
		{
			VarDeque::iterator it=std::find(varDeque.begin(),varDeque.end(),CComVariant(v));
			if(it==varDeque.end())
				return -1;
			return (int)std::distance(varDeque.begin(),it);
		}
		virtual IDispatch* __stdcall splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			SpliceImpl(this,where,(DequeObj<T>*)pOther,start,count);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall clear(void)
		{
			varDeque.clear();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)varDeque.empty();
		}
		virtual IDispatch* __stdcall clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall concatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall concatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall toString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall toSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
		virtual IDispatch* __stdcall toObject(void)
		{
			return ToObjectImpl(this);
		}
	public:
		BEGIN_INTF_EX2(DequeObj)
			METHOD(unshift)
			METHOD(shift)
			METHOD(push)
			METHOD(pop)
			PROPERTYGET(front,true)
			PROPERTYGET(back,true)
			METHOD(find)
			METHOD(splice)
			METHOD(slice)
			METHOD(clear)
			PROPERTYGET(empty,true)
			METHOD(clone)
			METHOD(concatSibling)
			METHOD(concatVariant)
			METHOD(toString)
			METHOD(toSafeArray)
			METHOD(toObject)
		END_INTF_EX2()
	public:
		inline VARIANT get(UINT pos)
		{		
			if(pos<0 || pos>=varDeque.size())
				return CComVariant(0);
			CComVariant v=varDeque[pos];
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		inline void set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=varDeque.size())
				return;
			varDeque[pos]=CComVariant(v);
		}
	private:
		VarDeque varDeque;
	};

	template<typename T>
		class ListObj : public ObjectBaseT<T>
	{
	public:
		typedef T VM;
	public:
		virtual void __stdcall insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			varList.insert(it,CComVariant(v));
		}
		virtual void __stdcall erase(VARIANT key)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>=varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			varList.erase(it);
		}
		virtual void __stdcall put_length(int size)
		{
			varList.resize(size,CComVariant(0));
		}
		virtual int __stdcall get_length(void)
		{
			return varList.size();
		}
		virtual void __stdcall unshift(VARIANT v)
		{
			varList.push_front(CComVariant(v));
		}
		virtual void __stdcall shift(void)
		{
			varList.pop_front();
		}
		virtual void __stdcall push(VARIANT v)
		{
			varList.push_back(CComVariant(v));
		}
		virtual void __stdcall pop(void)
		{
			varList.pop_back();
		}
		virtual VARIANT __stdcall get_front(void)
		{
			CComVariant v=varList.front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_back(void)
		{
			CComVariant v=varList.back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall find(VARIANT v)
		{
			VarList::iterator it=std::find(varList.begin(),varList.end(),CComVariant(v));
			if(it==varList.end())
				return -1;
			return (int)std::distance(varList.begin(),it);
		}
		virtual IDispatch* __stdcall splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			ListObj<T>* pO=(ListObj<T>*)pOther;
			try
			{
				VarList::iterator iwhere,istart,iend;
				iwhere=varList.begin();
				std::advance(iwhere,where);
				istart=pO->varList.begin();
				std::advance(istart,start);
				iend=pO->varList.begin();
				std::advance(iend,start+count);
				varList.splice(iwhere,pO->varList,istart,iend);
			}
			catch(...)
			{}
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall remove(VARIANT v)
		{
			varList.remove(CComVariant(v));
		}
		virtual void __stdcall clear(void)
		{
			varList.clear();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)varList.empty();
		}
		virtual void __stdcall resize(int size,VARIANT v)
		{
			varList.resize(size,CComVariant(v));
		}
		virtual IDispatch* __stdcall clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall concatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall concatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall toString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall toSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
		virtual IDispatch* __stdcall toObject(void)
		{
			return ToObjectImpl(this);
		}
	public:
		BEGIN_INTF_EX2(ListObj)
			METHOD(unshift)
			METHOD(shift)
			METHOD(push)
			METHOD(pop)
			PROPERTYGET(front,true)
			PROPERTYGET(back,true)
			METHOD(find)
			METHOD(splice)
			METHOD(slice)
			METHOD(remove)
			METHOD(clear)
			PROPERTYGET(empty,true)
			METHOD(clone)
			METHOD(concatSibling)
			METHOD(concatVariant)
			METHOD(toString)
			METHOD(toSafeArray)
			METHOD(toObject)
		END_INTF_EX2()
	public:
		inline VARIANT get(UINT pos)
		{		
			if(pos<0 || pos>=varList.size())
				return CComVariant(0);
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			CComVariant v=*it;
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		inline void set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			*it=CComVariant(v);
		}
	private:
		VarList varList;
	};

	template<typename T>
		class SetObj : public IDispatch
	{
	public:
		typedef T VM;		
	public:
		inline void SetVM(VM* p)
		{
			vmachine=p;
		}
		inline VM* GetVM(void)
		{
			return vmachine;
		}
	public:
		virtual void __stdcall insert(VARIANT v)
		{
			varSet.insert(CComVariant(v));
		}
		virtual void __stdcall erase(VARIANT v)
		{
			varSet.erase(CComVariant(v));
		}
		virtual void __stdcall clear(void)
		{
			varSet.clear();
		}
		virtual int __stdcall get_length(void)
		{
			return varSet.size();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)varSet.empty();
		}
		virtual BOOL __stdcall exist(VARIANT v)
		{
			VarSet::iterator it=varSet.find(CComVariant(v));
			if(it!=varSet.end())
				return TRUE;
			return FALSE;
		}
		virtual IDispatch* __stdcall clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall concatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall concatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall toString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall toSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
		virtual IDispatch* __stdcall toObject(void)
		{
			return ToObjectImpl(this);
		}
	public:
		BEGIN_INTF(SetObj)
			METHOD(insert)
			METHOD(erase)
			METHOD(clear)
			PROPERTYGET(length,true)
			PROPERTYGET(empty,true)
			METHOD(exist)
			METHOD(clone)
			METHOD(concatSibling)
			METHOD(concatVariant)
			METHOD(toString)
			METHOD(toSafeArray)
			METHOD(toObject)
		END_INTF()
	public:
		static inline SetObj* CreateDispatchEx(void)
		{
			return CreateDispatch();
		}
	public:
		inline void push(VARIANT v)
		{
			insert(v);
		}
		inline VARIANT get(UINT pos)
		{		
			if(pos<0 || pos>=varSet.size())
				return CComVariant(0);
			VarSet::iterator it=varSet.begin();
			std::advance(it,pos);
			CComVariant v=*it;
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
	private:
		VM* vmachine;
		VarSet varSet;
	};

	template<typename T>
		class MaxPriorityQueueObj : public IDispatch
	{
	public:
		typedef T VM;		
	public:
		inline void SetVM(VM* p)
		{
			vmachine=p;
		}
		inline VM* GetVM(void)
		{
			return vmachine;
		}
	public:
		virtual void __stdcall push(VARIANT v)
		{
			varQueue.push(v);
		}
		virtual void __stdcall pop(void)
		{
			varQueue.pop();
		}
		virtual VARIANT __stdcall top(void)
		{
			CComVariant v=varQueue.top();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall get_length(void)
		{
			return varQueue.size();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)varQueue.empty();
		}
	public:
		BEGIN_INTF(MaxPriorityQueueObj)
			METHOD(push)
			METHOD(pop)
			METHOD(top)
			PROPERTYGET(length,true)
			PROPERTYGET(empty,true)
		END_INTF()
	public:
		static inline MaxPriorityQueueObj* CreateDispatchEx(void)
		{
			return CreateDispatch();
		}
	private:
		VM* vmachine;
		MaxVarPriorityQueue varQueue;
	};

	template<typename T>
		class MinPriorityQueueObj : public IDispatch
	{
	public:
		typedef T VM;		
	public:
		inline void SetVM(VM* p)
		{
			vmachine=p;
		}
		inline VM* GetVM(void)
		{
			return vmachine;
		}
	public:
		virtual void __stdcall push(VARIANT v)
		{
			varQueue.push(v);
		}
		virtual void __stdcall pop(void)
		{
			varQueue.pop();
		}
		virtual VARIANT __stdcall top(void)
		{
			CComVariant v=varQueue.top();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall get_length(void)
		{
			return varQueue.size();
		}
		virtual BOOL __stdcall get_empty(void)
		{
			return (BOOL)varQueue.empty();
		}
	public:
		BEGIN_INTF(MinPriorityQueueObj)
			METHOD(push)
			METHOD(pop)
			METHOD(top)
			PROPERTYGET(length,true)
			PROPERTYGET(empty,true)
		END_INTF()
	public:
		static inline MinPriorityQueueObj* CreateDispatchEx(void)
		{
			return CreateDispatch();
		}
	private:
		VM* vmachine;
		MinVarPriorityQueue varQueue;
	};
	//语言内建字符串对象的实现，字符串对象与其它对象的不同在于它有它自己的接口GUID，因此可以被查询接口，
	//变化数据类型的实现类CComVariant在字符串的处理上存在性能与潜在的内存处理问题，我们在解释器中使用内
	//建字符串对象来处理字符串。解释器采用向下转型来直接使用其实现类，不使用虚函数。
	template<typename T>
		class StringObj : public StringBaseT<T>
	{
	public:
		typedef T VM;
	public:
		virtual void __stdcall insert(VARIANT key,VARIANT v)
		{
			int pos=key.intVal;
			if(pos<0 || pos>str.GetLength())
				return;
			TCHAR c=v.bVal;
			str.Insert(pos,c);
		}
		virtual void __stdcall erase(VARIANT key)
		{
			int pos=key.intVal;
			if(pos<0 || pos>=str.GetLength())
				return;
			str.Delete(pos);
		}
		virtual void __stdcall put_length(int size)
		{}
		virtual int __stdcall get_length(void)
		{
			return str.GetLength();
		}
		virtual int __stdcall indexOf(VARIANT d,int start)
		{
			CString ds;
			if(d.vt==VT_DISPATCH)
			{			
				IString* pstr=IString::GetIString(d);
				if(!pstr)
				{
					CComVariant vd(d);
					vd.ChangeType(VT_BSTR);
					ds=CString(vd.bstrVal);
				}
				else
				{
					ds=pstr->Ref();
				}
			}
			else if(d.vt==VT_BSTR)
			{
				ds=CString(d.bstrVal);
			}
			else
			{
				CComVariant vd(d);
				vd.ChangeType(VT_BSTR);
				ds=CString(vd.bstrVal);
			}
			return str.Find(ds,start);
		}	
		virtual BSTR __stdcall substr(int start,int len)
		{
			return str.Mid(start,len).AllocSysString();
		}
		virtual BSTR __stdcall replace(VARIANT f,VARIANT r)
		{
			CStringW fs,rs;
			if(f.vt==VT_DISPATCH)
			{			
				IString* pstr=IString::GetIString(f);
				if(!pstr)
				{
					CComVariant v(f);
					v.ChangeType(VT_BSTR);
					fs=CStringW(v.bstrVal);
				}
				else
				{
					fs=pstr->UnicodeRef();
				}
			}
			else if(f.vt==VT_BSTR)
			{
				fs=CStringW(f.bstrVal);
			}
			else
			{
				CComVariant v(f);
				v.ChangeType(VT_BSTR);
				fs=CStringW(v.bstrVal);
			}
			if(r.vt==VT_DISPATCH)
			{
				IString* pstr=IString::GetIString(r);
				if(!pstr)
				{
					CComVariant v(r);
					v.ChangeType(VT_BSTR);
					rs=CStringW(v.bstrVal);
				}
				else
				{
					rs=pstr->UnicodeRef();
				}
			}
			else if(r.vt==VT_BSTR)
			{
				rs=CStringW(r.bstrVal);
			}
			else
			{
				CComVariant v(r);
				v.ChangeType(VT_BSTR);
				rs=CStringW(v.bstrVal);
			}
			CStringW temp((LPCSTR)str);
			temp.Replace(fs,rs);
			return temp.AllocSysString();
		}
		virtual int __stdcall charCodeAt(int index)
		{		
			return int(str[index]);
		}
		virtual BSTR __stdcall charAt(int index)
		{
			return str.Left(1).AllocSysString();
		}
		virtual IDispatch* __stdcall clone(void)
		{
			StringObj<T>* ptr=StringObj<T>::CreateDispatchEx();
			ptr->Init(Ref());
			return ptr;
		}
		virtual IDispatch* __stdcall toVector(VARIANT s)
		{
			return ToContainerImpl(s,Type2Type<VectorObj<T> >());
		}
		virtual IDispatch* __stdcall toDeque(VARIANT s)
		{
			return ToContainerImpl(s,Type2Type<DequeObj<T> >());
		}
		virtual IDispatch* __stdcall toList(VARIANT s)
		{
			return ToContainerImpl(s,Type2Type<ListObj<T> >());
		}
		virtual IDispatch* __stdcall toSet(VARIANT s)
		{
			return ToContainerImpl(s,Type2Type<SetObj<T> >());
		}
		virtual VARIANT __stdcall toSafeArray(VARIANT s)
		{		
			VectorObj<T>* pvo=(VectorObj<T>*)toVector(s);
			VARIANT r=pvo->toSafeArray();
			pvo->Release();
			return r;
		}
		virtual IDispatch* __stdcall toObject(VARIANT s)
		{
			return ToContainerImpl(s,Type2Type<Object<T> >());
		}
		virtual BSTR __stdcall toString(void)
		{
			return str.AllocSysString();
		}
	public:
		BEGIN_INTF_EX3(StringObj)
			METHOD(indexOf)
			METHOD(substr)
			METHOD(replace)
			METHOD(charCodeAt)
			METHOD(charAt)
			METHOD(clone)
			METHOD(toVector)
			METHOD(toDeque)
			METHOD(toList)
			METHOD(toSet)
			METHOD(toSafeArray)
			METHOD(toObject)
			METHOD(toString)
		END_INTF_EX3()
	public:
		inline VARIANT get(int pos)
		{		
			if(pos<0 || pos>=str.GetLength())
				return CComVariant(0);
			return CComVariant((WCHAR)str.GetAt(pos));
		}
		inline void set(int pos,VARIANT v)
		{
			if(pos<0 || pos>=str.GetLength())
				return;
			TCHAR c=v.bVal;
			str.SetAt(pos,c);
		}
	private:	
	template<typename C> inline 
		IDispatch* ToContainerImpl(VARIANT vs,C c)
		{
			C::type* co=C::type::CreateDispatchEx();
			co->SetVM(GetVM());
			CString sp;
			if(vs.vt==VT_DISPATCH)
			{
				IString* pstr=IString::GetIString(vs);
				if(!pstr)
				{
					CComVariant vvs(vs);
					vvs.ChangeType(VT_BSTR);
					sp=CString(vvs.bstrVal);
				}
				else
				{
					sp=pstr->Ref();
				}
			}
			else if(vs.vt==VT_BSTR)
			{
				sp=CString(vs.bstrVal);
			}
			else
			{
				CComVariant vvs(vs);
				vvs.ChangeType(VT_BSTR);
				sp=CString(vvs.bstrVal);
			}
			int i=str.Find(sp),li=0;
			while(i>=0)
			{			
				StringObj<T>* ptr=StringObj<T>::CreateDispatchEx();		
				int len=i-li;
				if(len==0)
				{
					ptr->Init("");
				}
				else
				{
					ptr->Init(str.Mid(li,len));
				}
				co->push(CComVariant(ptr));
				ptr->Release();
				li=i+sp.GetLength();
				i=str.Find(sp,li);
			}
			StringObj<T>* ptr0=StringObj<T>::CreateDispatchEx();		
			ptr0->Init(str.Mid(li));
			co->push(CComVariant(ptr0));
			ptr0->Release();
			return co;
		}
	};

	template<typename T>
		class MathObj : public ObjectBaseT<T>
	{
	public:
		typedef T VM;
	public:
		virtual double __stdcall abs(double p)
		{
			return ::fabs(p);
		}
		virtual double __stdcall acos(double p)
		{
			return ::acos(p);
		}
		virtual double __stdcall asin(double p)
		{
			return ::asin(p);
		}
		virtual double __stdcall atan(double p)
		{
			return ::atan(p);
		}
		virtual double __stdcall atan2(double y,double x)
		{
			return ::atan2(y,x);
		}
		virtual double __stdcall ceil(double p)
		{
			return ::ceil(p);
		}
		virtual double __stdcall cos(double p)
		{
			return ::cos(p);
		}
		virtual double __stdcall exp(double p)
		{
			return ::exp(p);
		}
		virtual double __stdcall floor(double p)
		{
			return ::floor(p);
		}
		virtual double __stdcall log(double p)
		{
			return ::log(p);
		}
		virtual double __stdcall pow(double p1,double p2)
		{
			return ::pow(p1,p2);
		}
		virtual double __stdcall random(void)
		{		
			double rnd=(double)rand();
			return rnd/double(RAND_MAX);
		}
		virtual double __stdcall round(double p)
		{
			double t=::floor(p);
			if(p-t>0.5)
				return ::ceil(p);
			return t;
		}
		virtual double __stdcall sin(double p)
		{
			return ::sin(p);
		}
		virtual double __stdcall sqrt(double p)
		{
			return ::sqrt(p);
		}
		virtual double __stdcall tan(double p)
		{
			return ::tan(p);
		}
	public:
		BEGIN_INTF_EX(MathObj)
			METHOD(abs)
			METHOD(acos)
			METHOD(asin)
			METHOD(atan)
			METHOD(atan2)
			METHOD(ceil)
			METHOD(cos)
			METHOD(exp)
			METHOD(floor)
			METHOD(log)		
			METHOD(pow)
			METHOD(random)
			METHOD(round)
			METHOD(sin)
			METHOD(sqrt)
			METHOD(tan)
		END_INTF_EX()
	public:
		MathObj()
		{
			::srand(::time(NULL));		
		}
	};
}
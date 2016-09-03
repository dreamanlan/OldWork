#pragma once 
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <hash_set>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>

namespace ScriptStl
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
			{
				pThis->Push(vals);
				return;
			}
			else if(vals.vt==VT_I4 || vals.vt==VT_INT || vals.vt==VT_UI4 || vals.vt==VT_UINT)
			{
				pThis->Push(vals);
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
						pThis->Push(comvt);
					}	
					return;
				}
				else
				{
					pThis->Push(vals);
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
					pThis->Push(vals);
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
					pThis->Push(ccv);
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
					v.Attach(&pOther->Get(start));
					pOther->Erase(CComVariant(start));
					pThis->Insert(CComVariant(where),v);
				}
			}
			catch(...)
			{}
		}
	template<typename T> static inline 
		IDispatch* SliceImpl(T* pThis,unsigned int start,unsigned int count)
		{
			T* p=(T*)T::CreateDispatch();
			UINT size=pThis->get_Length();
			for(UINT i=start;i<start+count && i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->Get(i));
				p->Push(val);
			}
			return p;
		}
	template<typename T> static inline 
		IDispatch* CloneImpl(T* pThis)
		{
			T* p=T::CreateDispatch();
			int size=pThis->get_Length();
			for(int i=0;i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->Get(i));
				p->Push(val);
			}
			return p;
		}
	template<typename T> static inline 
		void ConcatSiblingImpl(T* pThis,IDispatch* other)
		{
			T* p=(T*)other;
			try
			{
				int size=p->get_Length();
				for(int i=0;i<size;i++)
				{
					CComVariant val;
					val.Attach(&p->Get(i));
					pThis->Push(val);
				}
			}
			catch(...)
			{}
		}
	template<typename T> static inline 
		BSTR ToStringImpl(T* pThis,VARIANT vs)
		{
			CString sp;
			if(vs.vt==VT_BSTR)
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
			int size=pThis->get_Length();
			CString prestr="";
			for(int i=0;i<size;i++)
			{
				CComVariant ret;
				ret.Attach(&pThis->Get(i));
				if(ret.vt!=VT_BSTR)
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
			int size=pThis->get_Length();
			SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,0,size);
			for(LONG i=0;i<size;i++)
			{
				CComVariant val;
				val.Attach(&pThis->Get(i));
				::SafeArrayPutElement(psa,&i,&val);
			}
			VARIANT var;
			::VariantInit(&var);
			var.vt=VT_ARRAY|VT_VARIANT;
			var.parray=psa;
			return var;
		}

	class VectorObj : public IDispatch
	{
	public:		
		virtual void __stdcall Set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=varVector.size())
				return;
			varVector[pos]=CComVariant(v);
		}
		virtual VARIANT __stdcall Get(UINT pos)
		{		
			if(pos<0 || pos>=varVector.size())
				return CComVariant(0);
			CComVariant v=varVector[pos];
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual void __stdcall Insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.lVal;
			if(pos<0 || pos>varVector.size())
				return;
			VarVector::iterator it=varVector.begin();
			std::advance(it,pos);
			varVector.insert(it,CComVariant(v));
		}
		virtual void __stdcall Erase(VARIANT key)
		{
			UINT pos=key.lVal;
			if(pos<0 || pos>=varVector.size())
				return;
			VarVector::iterator it=varVector.begin();
			std::advance(it,pos);
			varVector.erase(it);
		}
		virtual void __stdcall put_Length(int size)
		{
			varVector.resize(size,CComVariant(0));
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varVector.size();
		}
		virtual void __stdcall Push(VARIANT v)
		{
			varVector.push_back(CComVariant(v));
		}
		virtual void __stdcall Pop(void)
		{
			varVector.pop_back();
		}
		virtual VARIANT __stdcall get_Front(void)
		{
			CComVariant v=varVector.front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_Back(void)
		{
			CComVariant v=varVector.back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall Find(VARIANT v)
		{
			VarVector::iterator it=std::find(varVector.begin(),varVector.end(),CComVariant(v));
			if(it==varVector.end())
				return -1;
			return (int)std::distance(varVector.begin(),it);
		}
		virtual IDispatch* __stdcall Splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			SpliceImpl(this,where,(VectorObj*)pOther,start,count);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall Slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall Clear(void)
		{
			varVector.clear();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varVector.empty();
		}
		virtual void __stdcall Reserve(int count)
		{
			varVector.reserve(count);
		}
		virtual IDispatch* __stdcall Clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall ConcatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall ConcatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall ToString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall ToSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
	public:
		BEGIN_INTF(VectorObj)
			METHOD(Set)
			METHOD(Get)
			METHOD(Insert)
			METHOD(Erase)
			PROPERTYPUT(Length,false)
			PROPERTYGET(Length,true)
			METHOD(Push)
			METHOD(Pop)
			PROPERTYGET(Front,true)
			PROPERTYGET(Back,true)
			METHOD(Find)
			METHOD(Splice)
			METHOD(Slice)
			METHOD(Clear)
			PROPERTYGET(Empty,true)
			METHOD(Reserve)
			METHOD(Clone)
			METHOD(ConcatSibling)
			METHOD(ConcatVariant)
			METHOD(ToString)
			METHOD(ToSafeArray)
		END_INTF()
	private:
		VarVector varVector;
	};

	class DequeObj : public IDispatch
	{
	public:
		virtual void __stdcall Set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=varDeque.size())
				return;
			varDeque[pos]=CComVariant(v);
		}		
		virtual VARIANT __stdcall Get(UINT pos)
		{		
			if(pos<0 || pos>=varDeque.size())
				return CComVariant(0);
			CComVariant v=varDeque[pos];
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual void __stdcall Insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>varDeque.size())
				return;
			VarDeque::iterator it=varDeque.begin();
			std::advance(it,pos);
			varDeque.insert(it,CComVariant(v));
		}
		virtual void __stdcall Erase(VARIANT key)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>=varDeque.size())
				return;
			VarDeque::iterator it=varDeque.begin();
			std::advance(it,pos);
			varDeque.erase(it);
		}
		virtual void __stdcall put_Length(int size)
		{
			varDeque.resize(size,CComVariant(0));
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varDeque.size();
		}
		virtual void __stdcall Unshift(VARIANT v)
		{
			varDeque.push_front(CComVariant(v));
		}
		virtual void __stdcall Shift(void)
		{
			varDeque.pop_front();
		}
		virtual void __stdcall Push(VARIANT v)
		{
			varDeque.push_back(CComVariant(v));
		}
		virtual void __stdcall Pop(void)
		{
			varDeque.pop_back();
		}
		virtual VARIANT __stdcall get_Front(void)
		{
			CComVariant v=varDeque.front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_Back(void)
		{
			CComVariant v=varDeque.back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall Find(VARIANT v)
		{
			VarDeque::iterator it=std::find(varDeque.begin(),varDeque.end(),CComVariant(v));
			if(it==varDeque.end())
				return -1;
			return (int)std::distance(varDeque.begin(),it);
		}
		virtual IDispatch* __stdcall Splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			SpliceImpl(this,where,(DequeObj*)pOther,start,count);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall Slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall Clear(void)
		{
			varDeque.clear();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varDeque.empty();
		}
		virtual IDispatch* __stdcall Clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall ConcatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall ConcatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall ToString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall ToSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
	public:
		BEGIN_INTF(DequeObj)
			METHOD(Set)
			METHOD(Get)
			METHOD(Insert)
			METHOD(Erase)
			PROPERTYPUT(Length,false)
			PROPERTYGET(Length,true)
			METHOD(Unshift)
			METHOD(Shift)
			METHOD(Push)
			METHOD(Pop)
			PROPERTYGET(Front,true)
			PROPERTYGET(Back,true)
			METHOD(Find)
			METHOD(Splice)
			METHOD(Slice)
			METHOD(Clear)
			PROPERTYGET(Empty,true)
			METHOD(Clone)
			METHOD(ConcatSibling)
			METHOD(ConcatVariant)
			METHOD(ToString)
			METHOD(ToSafeArray)
		END_INTF()
	private:
		VarDeque varDeque;
	};

	class ListObj : public IDispatch
	{
	public:
		virtual void __stdcall Set(UINT pos,VARIANT v)
		{
			if(pos<0 || pos>=varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			*it=CComVariant(v);
		}
		virtual VARIANT __stdcall Get(UINT pos)
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
		virtual void __stdcall Insert(VARIANT key,VARIANT v)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			varList.insert(it,CComVariant(v));
		}
		virtual void __stdcall Erase(VARIANT key)
		{
			UINT pos=key.intVal;
			if(pos<0 || pos>=varList.size())
				return;
			VarList::iterator it=varList.begin();
			std::advance(it,pos);
			varList.erase(it);
		}
		virtual void __stdcall put_Length(int size)
		{
			varList.resize(size,CComVariant(0));
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varList.size();
		}
		virtual void __stdcall Unshift(VARIANT v)
		{
			varList.push_front(CComVariant(v));
		}
		virtual void __stdcall Shift(void)
		{
			varList.pop_front();
		}
		virtual void __stdcall Push(VARIANT v)
		{
			varList.push_back(CComVariant(v));
		}
		virtual void __stdcall Pop(void)
		{
			varList.pop_back();
		}
		virtual VARIANT __stdcall get_Front(void)
		{
			CComVariant v=varList.front();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual VARIANT __stdcall get_Back(void)
		{
			CComVariant v=varList.back();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall Find(VARIANT v)
		{
			VarList::iterator it=std::find(varList.begin(),varList.end(),CComVariant(v));
			if(it==varList.end())
				return -1;
			return (int)std::distance(varList.begin(),it);
		}
		virtual IDispatch* __stdcall Splice(unsigned int where,IDispatch* pOther,unsigned int start,unsigned int count)
		{
			ListObj* pO=(ListObj*)pOther;
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
		virtual IDispatch* __stdcall Slice(unsigned int start,unsigned int count)
		{
			return SliceImpl(this,start,count);
		}
		virtual void __stdcall Remove(VARIANT v)
		{
			varList.remove(CComVariant(v));
		}
		virtual void __stdcall Clear(void)
		{
			varList.clear();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varList.empty();
		}
		virtual void __stdcall Resize(int size,VARIANT v)
		{
			varList.resize(size,CComVariant(v));
		}
		virtual IDispatch* __stdcall Clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall ConcatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall ConcatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall ToString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall ToSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
	public:
		BEGIN_INTF(ListObj)
			METHOD(Set)
			METHOD(Get)
			METHOD(Insert)
			METHOD(Erase)
			PROPERTYPUT(Length,false)
			PROPERTYGET(Length,true)
			METHOD(Unshift)
			METHOD(Shift)
			METHOD(Push)
			METHOD(Pop)
			PROPERTYGET(Front,true)
			PROPERTYGET(Back,true)
			METHOD(Find)
			METHOD(Splice)
			METHOD(Slice)
			METHOD(Remove)
			METHOD(Clear)
			PROPERTYGET(Empty,true)
			METHOD(Clone)
			METHOD(ConcatSibling)
			METHOD(ConcatVariant)
			METHOD(ToString)
			METHOD(ToSafeArray)
		END_INTF()
	private:
		VarList varList;
	};

	class SetObj : public IDispatch
	{
	public:
		virtual VARIANT __stdcall Get(UINT pos)
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
		virtual void __stdcall Insert(VARIANT v)
		{
			varSet.insert(CComVariant(v));
		}
		virtual void __stdcall Erase(VARIANT v)
		{
			varSet.erase(CComVariant(v));
		}
		virtual void __stdcall Clear(void)
		{
			varSet.clear();
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varSet.size();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varSet.empty();
		}
		virtual BOOL __stdcall Exist(VARIANT v)
		{
			VarSet::iterator it=varSet.find(CComVariant(v));
			if(it!=varSet.end())
				return TRUE;
			return FALSE;
		}
		virtual IDispatch* __stdcall Clone(void)
		{
			return CloneImpl(this);
		}
		virtual IDispatch* __stdcall ConcatSibling(IDispatch* other)
		{
			ConcatSiblingImpl(this,other);
			this->AddRef();
			return this;
		}
		virtual IDispatch* __stdcall ConcatVariant(VARIANT vals)
		{
			ConcatVariantImpl(this,vals);
			this->AddRef();
			return this;
		}
		virtual BSTR __stdcall ToString(VARIANT s)
		{
			return ToStringImpl(this,s);
		}
		virtual VARIANT __stdcall ToSafeArray(void)
		{
			return ToSafeArrayImpl(this);
		}
	public:
		BEGIN_INTF(SetObj)
			METHOD(Get)
			METHOD(Insert)
			METHOD(Erase)
			METHOD(Clear)
			PROPERTYGET(Length,true)
			PROPERTYGET(Empty,true)
			METHOD(Exist)
			METHOD(Clone)
			METHOD(ConcatSibling)
			METHOD(ConcatVariant)
			METHOD(ToString)
			METHOD(ToSafeArray)
		END_INTF()
	public:
		inline void Push(VARIANT v)
		{
			Insert(v);
		}
	private:
		VarSet varSet;
	};

	class MaxPriorityQueueObj : public IDispatch
	{
	public:
		virtual void __stdcall Push(VARIANT v)
		{
			varQueue.push(v);
		}
		virtual void __stdcall Pop(void)
		{
			varQueue.pop();
		}
		virtual VARIANT __stdcall Top(void)
		{
			CComVariant v=varQueue.top();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varQueue.size();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varQueue.empty();
		}
	public:
		BEGIN_INTF(MaxPriorityQueueObj)
			METHOD(Push)
			METHOD(Pop)
			METHOD(Top)
			PROPERTYGET(Length,true)
			PROPERTYGET(Empty,true)
		END_INTF()
	private:
		MaxVarPriorityQueue varQueue;
	};

	class MinPriorityQueueObj : public IDispatch
	{
	public:
		virtual void __stdcall Push(VARIANT v)
		{
			varQueue.push(v);
		}
		virtual void __stdcall Pop(void)
		{
			varQueue.pop();
		}
		virtual VARIANT __stdcall Top(void)
		{
			CComVariant v=varQueue.top();
			VARIANT var;
			::VariantInit(&var);
			v.Detach(&var);
			return var;
		}
		virtual int __stdcall get_Length(void)
		{
			return (int)varQueue.size();
		}
		virtual BOOL __stdcall get_Empty(void)
		{
			return (BOOL)varQueue.empty();
		}
	public:
		BEGIN_INTF(MinPriorityQueueObj)
			METHOD(Push)
			METHOD(Pop)
			METHOD(Top)
			PROPERTYGET(Length,true)
			PROPERTYGET(Empty,true)
		END_INTF()
	private:
		MinVarPriorityQueue varQueue;
	};	
}
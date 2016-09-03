// Function.h: interface for the Function class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FUNCTION_H__2C14F4F8_15E5_4682_B2D7_908F278D9384__INCLUDED_)
#define AFX_FUNCTION_H__2C14F4F8_15E5_4682_B2D7_908F278D9384__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

template<int k>
	struct Int2Type
{
	enum{value=k};
};

struct unusable 
{
	unusable() {}
	template<typename T> unusable(const T&) {}
};

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
template<
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

template
	<
	typename OBJ,
	typename R,
	typename P1=unusable,
	typename P2=unusable,
	typename P3=unusable,
	typename P4=unusable,
	typename P5=unusable,
	typename P6=unusable,
	typename P7=unusable,
	typename P8=unusable,
	typename P9=unusable,
	typename P10=unusable
	>
	struct MemFunc
{	
	template<int>
	class ImplType
	{		
	};
	template<>
	class ImplType<0>
	{		
		OBJ* obj;
		typedef R (OBJ::*FPTR)();
		FPTR fptr;
	public:
		ImplType<0>(OBJ* o,FPTR f):obj(o),fptr(f)
		{}
		R operator () ()
		{
			return (obj->*fptr)();
		}
	};
	template<>
	class ImplType<1>
	{		
		OBJ* obj;
		typedef R (OBJ::*FPTR)(P1);
		FPTR fptr;
	public:
		ImplType<1>(OBJ* o,FPTR f):obj(o),fptr(f)
		{}
		R operator () (P1 p1)
		{
			return (obj->*fptr)(p1);
		}
	};
	template<>
	class ImplType<2>
	{		
		OBJ* obj;
		typedef R (OBJ::*FPTR)(P1,P2);
		FPTR fptr;
	public:
		ImplType<2>(OBJ* o,FPTR f):obj(o),fptr(f)
		{}
		R operator () (P1 p1,P2 p2)
		{
			return (obj->*fptr)(p1,p2);
		}
	};

	typedef ImplType<count_used_args<P1,P2,P3,P4,P5,P6,P7,P8,P9,P10>::value> implType;
};
	
template
	<
	typename FunctionObj,
	typename R,
	typename P1=unusable,
	typename P2=unusable,
	typename P3=unusable,
	typename P4=unusable,
	typename P5=unusable,
	typename P6=unusable,
	typename P7=unusable,
	typename P8=unusable,
	typename P9=unusable,
	typename P10=unusable
	>
	struct Invoker
{
	static R invoke(void* fptr)
         {
           FunctionObj* f = reinterpret_cast<FunctionObj*>(fptr);
           return (*f)();
         }
	static R invoke(void* fptr,P1 p1)
         {
           FunctionObj* f = reinterpret_cast<FunctionObj*>(fptr);
           return (*f)(p1);
         }
	static R invoke(void* fptr,P1 p1,P2 p2)
         {
           FunctionObj* f = reinterpret_cast<FunctionObj*>(fptr);
           return (*f)(p1,p2);
         }
};

template
	<
	typename R,	
	typename P1=unusable,
	typename P2=unusable,
	typename P3=unusable,
	typename P4=unusable,
	typename P5=unusable,
	typename P6=unusable,
	typename P7=unusable,
	typename P8=unusable,
	typename P9=unusable,
	typename P10=unusable
	>
struct Function  
{
	template<int CT>
		class ImplType
	{
	};
	template<>
		class ImplType<0>
	{
		void* funcObj;
		R (*invoke)(void*); 
public:
		ImplType<0>():funcObj(0),invoke(0)
		{}
		R operator ()(void)
		{
			return invoke(funcObj);
		}	
		template<typename FunctionObj> ImplType<0>(FunctionObj* f)
		{
			funcObj=reinterpret_cast<void *>(f);
			invoke=Invoker<FunctionObj,R>::invoke;
		}		
//		template<typename FunctionObj> operator = (FunctionObj* f)
//		{
//			funcObj=reinterpret_cast<void *>(f);
//			invoke=Invoker<FunctionObj,R>::invoke;
//		}
	};
	template<>
		class ImplType<1>
	{
		void* funcObj;
		R (*invoke)(void*,P1); 
public:
		ImplType<1>():funcObj(0),invoke(0)
		{}
		R operator ()(P1 p1)
		{
			return invoke(funcObj,p1);
		}	
		template<typename FunctionObj> ImplType<1>(FunctionObj* f)
		{
			funcObj=reinterpret_cast<void *>(f);
			invoke=Invoker<FunctionObj,R,P1>::invoke;
		}
	};
	template<>
		class ImplType<2>
	{
		void* funcObj;
		R (*invoke)(void*,P1,P2); 
public:
		ImplType<2>():funcObj(0),invoke(0)
		{}
		R operator ()(P1 p1,P2 p2)
		{
			return invoke(funcObj,p1,p2);
		}	
		template<typename FunctionObj> ImplType<2>(FunctionObj* f)
		{
			funcObj=reinterpret_cast<void *>(f);
			invoke=Invoker<FunctionObj,R,P1,P2>::invoke;
		}
	};

	typedef ImplType<count_used_args<P1,P2,P3,P4,P5,P6,P7,P8,P9,P10>::value> implType;
};

#endif // !defined(AFX_FUNCTION_H__2C14F4F8_15E5_4682_B2D7_908F278D9384__INCLUDED_)

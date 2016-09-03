// LamdaBase.h: interface for the LamdaBase class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LAMDABASE_H__76F14926_12CC_41D0_9AD1_00391E40174A__INCLUDED_)
#define AFX_LAMDABASE_H__76F14926_12CC_41D0_9AD1_00391E40174A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
#include <vector>
//---------------------------------------------------------------------
//Lamda表达式的实现类似于延迟过程调用，首先利用重载将表达式的执行
//过程加以记录（形成一颗以Functor实例为结点的二叉树），然后在根结
//点的operator ()　操作中执行表达式计算(后续遍历先前形成的树，由每个
//子结点返回它的计算值，然后执行本结点的计算，再给父结点返回值，如
//此递归执行。)
//表达式参量值的保存依赖于Argument模板决议出的类，分FunctorTag类簇
//与NormalArg类两种，这些类均有"对象.Call(参数表)"的访问支持。
//表达式的计算由Executor::Judge类完成，它同时实现为各表达式推导返回
//值类型的任务，它的模板参数与Functor相同,均使用Argument模板决议出的
//类及操作符类型。
//每个基本运算对应Functor的一个算符重载与一个Executor特化模板。前者
//返回一个Functor实例（即二叉树上一结点）,后者在Functor实例中使用
//来实现operator () 操作并用以决定操作的返回类型与对应值类型。
//这样，需要扩充新的运算功能时应考虑从上述三个方面入手，即保存值的类
//（Argument模板决议结果类）、推导类（Functor运算符重载或成员函数）
//以及表达式计算类（Executor特化类）。
//对*与->*的重载有别于其它普通运算的重载，它们分别在上述几个方面作了特
//殊处理。
//---------------------------------------------------------------------

//一个签名,用于后面选择一个FunctorClass模板的实例
class FunctorTag
{};

template<typename V,typename R=V>
	class FunctorBase : public FunctorTag
{
public:
	typedef V value_type;
	typedef R ret_type;
};

template<typename V>
	class NormalArg
{
public:
	typedef NormalArg<V> Type;
	typedef V value_type;
	typedef V ret_type;
	V val;
	Type(){}
	Type(V v):val(v){}
	template<typename P>
		V& Call(P& p) const
	{
		p;//阻止参数未用警告
		return (V&)val;
	}
	template<typename P1,typename P2>
		V& Call(P1& p1,P2& p2) const
	{
		p1,p2;
		return (V&)val;
	}
};	
//一般操作符识别模板
template<int OP>
	struct OPType
{	
	enum{value=OP};
};
//变量池
template<typename P>
	class VarPoolT
{
public:
	typedef std::vector<P> Vars;
	static inline Vars& GetVarsRef(void)
	{
		static Vars vars;
		return vars;
	}
	static inline void Set(int index)
	{
		int size=GetVarsRef().size();
		for(int i=size;i<=index;i++)
			GetVarsRef().push_back(P());
	}
	static inline P& Get(int index)
	{
		return GetVarsRef()[index];
	}
};
//用于在lamda表达式中实现临时变量
template<typename T>
	class TempVar : public FunctorBase<T>
{	
	typedef VarPoolT<T> VarPool;
public:
	TempVar()
	{
		ix=IndexRef();
		VarPool::Set(ix);
		IndexRef()++;
	}
	TempVar(const TempVar& t)
	{
		ix=t.ix;
	}
	template<typename P>
		int& Call(P& p) const
	{
		p;
		return VarPool::Get(ix);
	}
	template<typename P1,typename P2>
		int& Call(P1& p1,P2& p2) const
	{
		p1,p2;
		return VarPool::Get(ix);
	}
	static int& IndexRef(void)
	{
		static int index;
		return index;
	}
private:
	int ix;
};
//用以支持对类数据成员的访问
template<typename R,typename O>
	class MemberT : public FunctorBase<R>
{
	typedef R O::*D;
public:
	MemberT(D d):v(d){}
	template<typename P>
		D& Call(P& p) const
	{
		p;
		return (D&)v;
	}
	template<typename P1,typename P2>
		D& Call(P1& p1,P2& p2) const
	{
		p1,p2;
		return (D&)v;
	}
private:
	D v;
};
//类型适应判别，用以部分模拟局部特化
template <class T, class U>
	class TypeConversion
{
    typedef char Small;
    struct Big { char dummy[2]; };
    static Small Test(U*);
    static Big Test(...);
    static T* MakeT();
public:
    enum { exists =
        sizeof(Test(MakeT())) == sizeof(Small) };
	template<int k>
		struct Select
	{
		typedef U Type;
	};
	template<>
		struct Select<0>
	{
		typedef T Type;
	};
	typedef typename Select<exists>::Type Type;
};

template<typename T>
	struct SimpleType
{
	enum {value=1};
};
template<>
	struct SimpleType<FunctorTag>
{
	enum {value=0};
};

template<typename V>
	struct Argument
{	
	template<int k>
		struct Select
	{};
	template<>
		struct Select<0>
	{
		typedef V Type;
	};
	template<>
		struct Select<1>
	{
		typedef NormalArg<V> Type;
	};
	typedef typename Select<SimpleType<typename TypeConversion<V,FunctorTag>::Type>::value>::Type Type;
};

template<int op>
	struct Executor
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef typename Executor<op>::Judge<A1,A2> Type;	
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A1>::Type::value_type ret_type;
	};
};

template<>
	struct Executor<0>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<0>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A2>::Type::value_type& ret_type;
		Type(){}
		Type(A1 p1,A2 p2):a1(p1){p2;}
		template<typename P>
			ret_type operator () (P& p) const
		{
			return a1.Call(p);
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			return a1.Call(p1,p2);
		}
		typename Argument<A1>::Type a1;
	};
};

template<>
	struct Executor<1>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<1>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A2>::Type::value_type& ret_type;
		Type(){}
		template<typename P>
			ret_type operator () (P& p) const
		{
			return (ret_type)p;
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			p2;
			return (ret_type)p1;
		}
	};
};

template<>
	struct Executor<2>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<2>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A2>::Type::value_type& ret_type;
		Type(){}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			p1;
			return (ret_type)p2;
		}
	};
};

template<>
	struct Executor<10>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<10>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A1>::Type::value_type ret_type;
		Type(const Type& t):a1(t.a1){}
		Type(A1 p1,A2 p2):a1(p1){p2;}
		template<typename P>
			ret_type operator () (P& p) const
		{
			return *a1.Call(p);
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			return *a1.Call(p1,p2);
		}
		typename Argument<A1>::Type a1;
	};
};

template<>
	struct Executor<11>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<11>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A2>::Type::value_type& ret_type;
		Type(const Type& t):a1(t.a1),a2(t.a2){}
		Type(A1 p1,A2 p2):a1(p1),a2(p2){}
		template<typename P>
			ret_type operator () (P& p) const
		{
			return (a1.Call(p))->*(a2.Call(p));
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			return (a1.Call(p1,p2))->*(a2.Call(p1,p2));
		}
		typename Argument<A1>::Type a1;
		typename Argument<A2>::Type a2;
	};
};

template<>
	struct Executor<500>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<500>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A1>::Type::value_type ret_type;
		Type(const Type& t):a1(t.a1),a2(t.a2){}
		Type(A1 p1,A2 p2):a1(p1),a2(p2){}
		template<typename P>
			ret_type operator () (P& p) const
		{
			a1.Call(p);
			return a2.Call(p);
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			a1.Call(p1,p2);
			return a2.Call(p1,p2);
		}
		typename Argument<A1>::Type a1;
		typename Argument<A2>::Type a2;
	};
};

template<>
	struct Executor<501>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<501>::Judge<A1,A2> Type;
		typedef typename Argument<A1>::Type::value_type value_type;
		typedef typename Argument<A1>::Type::value_type* ret_type;
		Type(const Type& t):a1(t.a1){}
		Type(A1 p1,A2 p2):a1(p1){p2;}
		template<typename P>
			ret_type operator () (P& p) const
		{
			return &a1.Call(p);
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			return &a1.Call(p1,p2);
		}
		typename Argument<A1>::Type a1;
	};
};

#define DEFCALC1(IX,RT,F)	\
template<>\
	struct Executor<IX>\
{\
	template<typename A1,typename A2>\
		class Judge\
	{\
	public:\
		typedef Executor<IX>::Judge<A1,A2> Type;\
		typedef typename Argument<A1>::Type::value_type value_type;\
		typedef typename RT ret_type;\
		Type(const Type& t):a1(t.a1){}\
		Type(A1 p1,A2 p2):a1(p1){p2;}\
		template<typename P>\
			ret_type operator () (P& p) const\
		{\
			return F a1.Call(p);\
		}\
		template<typename P1,typename P2>\
			ret_type operator () (P1& p1,P2& p2) const\
		{\
			return F a1.Call(p1,p2);\
		}\
		typename Argument<A1>::Type a1;\
	};\
};

#define DEFCALC2(IX,RT,F)	\
template<>\
	struct Executor<IX>\
{\
	template<typename A1,typename A2>\
		class Judge\
	{\
	public:\
		typedef Executor<IX>::Judge<A1,A2> Type;\
		typedef typename Argument<A1>::Type::value_type value_type;\
		typedef typename RT ret_type;\
		Type(const Type& t):a1(t.a1),a2(t.a2){}\
		Type(A1 p1,A2 p2):a1(p1),a2(p2){}\
		template<typename P>\
			ret_type operator () (P& p) const\
		{\
			ret_type r=a1.Call(p);\
			r=(r F a2.Call(p));\
			return r;\
		}\
		template<typename P1,typename P2>\
			ret_type operator () (P1& p1,P2& p2) const\
		{\
			ret_type r=a1.Call(p1,p2);\
			r=(r F a2.Call(p1,p2));\
			return r;\
		}\
		typename Argument<A1>::Type a1;\
		typename Argument<A2>::Type a2;\
	};\
};

#define DEFOPER1(IX,F) \
	Functor<\
		CurType,\
		int,\
		OPType<IX> \
		> operator F ()\
	{		\
		typedef CurType T1;\
		typedef int T2;\
		typedef OPType<IX> T3;\
		return Functor<T1,T2,T3>(*this,0);\
	}

#define DEFOPER2(IX,F) \
	template<typename A>\
		Functor<\
			CurType,\
			A,\
			OPType<IX> \
			> operator F (A a)\
	{		\
		typedef CurType T1;\
		typedef A T2;\
		typedef OPType<IX> T3;\
		return Functor<T1,T2,T3>(*this,a);\
	}

DEFCALC1(100,Argument<A1>::Type::value_type&,++)
DEFCALC1(101,Argument<A1>::Type::value_type&,--)	
DEFCALC2(200,Argument<A1>::Type::value_type&,+=)
DEFCALC2(201,Argument<A1>::Type::value_type&,-=)
DEFCALC2(202,Argument<A1>::Type::value_type&,*=)
DEFCALC2(203,Argument<A1>::Type::value_type&,/=)
DEFCALC2(204,Argument<A1>::Type::value_type&,=)
DEFCALC1(300,int,!)
DEFCALC2(400,Argument<A1>::Type::value_type,+)
DEFCALC2(401,Argument<A1>::Type::value_type,-)
DEFCALC2(402,Argument<A1>::Type::value_type,*)
DEFCALC2(403,Argument<A1>::Type::value_type,/)
DEFCALC2(404,int,>)
DEFCALC2(405,int,<)
DEFCALC2(406,Argument<A1>::Type::value_type,<<)
DEFCALC2(407,Argument<A1>::Type::value_type,>>)
DEFCALC2(408,int,==)
DEFCALC2(409,int,!=)
DEFCALC2(410,Argument<A1>::Type::value_type,%)

template<typename A1,typename A2,typename OP>
class Functor : public FunctorBase<typename Executor<OP::value>::Judge<A1,A2>::value_type,typename Executor<OP::value>::Judge<A1,A2>::ret_type>
{
	typedef Functor<A1,A2,OP> CurType;
	typedef typename Executor<OP::value>::Judge<A1,A2> CallType;	
public:	
	Functor(){}
	Functor(const Functor& o):Call(o.Call)
	{}
	Functor(const A1& p1,const A2& p2):Call(p1,p2)
	{}		
public:
	template<typename P>
		ret_type operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P1,typename P2>
		ret_type operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
public:	
	CurType& operator = (const CurType& a)
	{
		return a;
	}
	Functor<
		CurType,
		int,
		OPType<10> > operator * ()
	{
		typedef CurType T1;
		typedef int T2;
		typedef OPType<10> T3;
		return Functor<T1,T2,T3>(*this,0);
	}
	template<typename R,typename O>
		Functor<
			CurType,
			MemberT<R,O>,
			OPType<11> > operator ->* (R O::*m)
	{
		typedef CurType T1;
		typedef MemberT<R,O> T2;
		typedef OPType<11> T3;
		return Functor<T1,T2,T3>(*this,T2(m));
	}
	template<typename A>
		Functor<
			CurType,
			A,
			OPType<500> > operator , (A a)
	{
		typedef CurType T1;
		typedef A T2;
		typedef OPType<500> T3;
		return Functor<T1,T2,T3>(*this,a);
	}
	Functor<
		CurType,
		int,
		OPType<501> > operator & ()
	{
		typedef CurType T1;
		typedef int T2;
		typedef OPType<501> T3;
		return Functor<T1,T2,T3>(*this,0);
	}
public:
	DEFOPER1(100,++)
	DEFOPER1(101,--)	
	DEFOPER2(200,+=)
	DEFOPER2(201,-=)
	DEFOPER2(202,*=)
	DEFOPER2(203,/=)
	DEFOPER2(204,=)
	DEFOPER1(300,!)
	DEFOPER2(400,+)
	DEFOPER2(401,-)
	DEFOPER2(402,*)
	DEFOPER2(403,/)
	DEFOPER2(404,>)
	DEFOPER2(405,<)
	DEFOPER2(406,<<)
	DEFOPER2(407,>>)
	DEFOPER2(408,==)
	DEFOPER2(409,!=)
	DEFOPER2(410,%)	
public:
	CallType Call;
};

template<>
	struct Executor<102>
{
	template<typename A1,typename A2>
		class Judge
	{
	public:
		typedef Executor<102>::Judge<A1,A2> Type;
		typedef std::ostream value_type;
		typedef std::ostream& ret_type;
		Type(const Type& t):a2(t.a2){}
		Type(A1 p1,A2 p2):a2(p2){p1;}
		template<typename P>
			ret_type operator () (P& p) const
		{			
			return std::cout<<a2.Call(p);
		}
		template<typename P1,typename P2>
			ret_type operator () (P1& p1,P2& p2) const
		{
			return std::cout<<a2.Call(p1,p2);
		}
		typename Argument<A2>::Type a2;
	};
};

template<typename A1,typename A2,typename OP> inline 
	Functor<
		int,
		Functor<A1,A2,OP>,
		OPType<102> > operator << (const std::ostream& a,const Functor<A1,A2,OP>& b)
{
	typedef int T1;
	typedef Functor<A1,A2,OP> T2;
	typedef OPType<102> T3;
	return Functor<T1,T2,T3>(0,b);
}

template<typename If,typename Then,typename Else>
	class IfThenElseT : public FunctorBase<int>
{
	typedef IfThenElseT<If,Then,Else> CurType;
public:
	If ifVal;
	Then thenVal;
	Else elseVal;
	IfThenElseT(const If& i,const Then& t,const Else& e):ifVal(i),thenVal(t),elseVal(e)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		if(ifVal.Call(p))
			thenVal.Call(p);
		else
			elseVal.Call(p);
		return 0;
	}
	template<typename P1,typename P2>
		int operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		int Call(P1& p1,P2& p2) const
	{
		if(ifVal.Call(p1,p2))
			thenVal.Call(p1,p2);
		else
			elseVal.Call(p1,p2);
		return 0;
	}
};

template<typename If,typename Then,typename Else> inline
	IfThenElseT<
		typename Argument<If>::Type,
		typename Argument<Then>::Type,
		typename Argument<Else>::Type>
		IfThenElse(If ifst,Then thenst,Else elsest)
{
	typedef Argument<If>::Type IfT;
	typedef Argument<Then>::Type ThenT;
	typedef Argument<Else>::Type ElseT;
	return IfThenElseT<
		IfT,
		ThenT,
		ElseT
		>(IfT(ifst),ThenT(thenst),ElseT(elsest));
}

template<typename While,typename Loop>
	class WhileLoopT : public FunctorBase<int>
{
	typedef WhileLoopT<While,Loop> CurType;
public:
	While whileVal;
	Loop loopVal;
	WhileLoopT(const While& w,const Loop& l):whileVal(w),loopVal(l)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		while(whileVal.Call(p))
			loopVal.Call(p);
		return 0;
	}
	template<typename P1,typename P2>
		int operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		int Call(P1& p1,P2& p2) const
	{
		while(whileVal.Call(p1,p2))
			loopVal.Call(p1,p2);
		return 0;
	}
};

template<typename While,typename Loop> inline 
	WhileLoopT<
		typename Argument<While>::Type,
		typename Argument<Loop>::Type
		>WhileLoop(While w,Loop l)
{
	typedef Argument<While>::Type WhileT;
	typedef Argument<Loop>::Type LoopT;
	return WhileLoopT<WhileT,LoopT>(WhileT(w),LoopT(l));
}

#endif // !defined(AFX_LAMDABASE_H__76F14926_12CC_41D0_9AD1_00391E40174A__INCLUDED_)

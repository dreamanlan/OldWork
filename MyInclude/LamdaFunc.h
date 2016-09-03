// LamdaFunc.h: interface for the LamdaFunc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LAMDAFUNC_H__61A8DF34_3D2B_4783_AC82_72B02EC1D5C8__INCLUDED_)
#define AFX_LAMDAFUNC_H__61A8DF34_3D2B_4783_AC82_72B02EC1D5C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//这个文件依赖LamdaBase.h
//-----------------------------------------------------------------------------------------------
//无参数成员函数及函数处理
template<typename TO,typename O>
	class NRObjCall0T : public FunctorBase<int>
{	
public:
	NRObjCall0T(void (TO::*f)(void),const O& o):fptr(f),obj(o)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)();
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
		((obj.Call(p1,p2))->*fptr)();
		return 0;
	}
private:	
	void (TO::*fptr)();
	O obj;
};

template<typename TO,typename O> inline
NRObjCall0T<TO,typename Argument<O>::Type> NRObjCall0(void (TO::*f)(void),O o)
{		
	typedef Argument<O>::Type T1;
	return NRObjCall0T<TO,T1>(f,T1(o));
}

template<typename R,typename TO,typename O>
	class ObjCall0T : public FunctorBase<R>
{	
public:
	ObjCall0T(R (TO::*f)(void),const O& o):fptr(f),obj(o)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)();
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)();
	}
private:	
	R (TO::*fptr)();
	O obj;
};

template<typename R,typename TO,typename O> inline
ObjCall0T<R,TO,typename Argument<O>::Type> ObjCall0(R (TO::*f)(void),O o)
{		
	typedef Argument<O>::Type T1;
	return ObjCall0T<R,TO,T1>(f,T1(o));
}


class NRFuncCall0T : public FunctorBase<int>
{	
public:
	NRFuncCall0T(void (*f)(void)):fptr(f)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)();
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
		(*fptr)();
		return 0;
	}
private:	
	void (*fptr)();
};

inline NRFuncCall0T NRFuncCall0(void (*f)(void))
{	
	return NRFuncCall0T(f);
}

template<typename R>
	class FuncCall0T : public FunctorBase<R>
{	
public:
	FuncCall0T(R (*f)(void)):fptr(f)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)();
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)();
	}
private:	
	R (*fptr)();
};

template<typename R> inline
	FuncCall0T<R> FuncCall0(R (*f)(void))
{		
	return FuncCall0T<R>(f);
}

//-----------------------------------------------------------------------------------------------
//有一个参数的成员函数及函数处理
template<typename TO,typename TP1,typename O,typename A1>
	class NRObjCall1T : public FunctorBase<int>
{	
public:
	NRObjCall1T(void (TO::*f)(TP1),const O& o,const A1& a1):fptr(f),obj(o),v1(a1)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1);
	O obj;
	A1 v1;
};

template<typename TO,typename TP1,typename O,typename A1> inline
NRObjCall1T<TO,TP1,typename Argument<O>::Type,typename Argument<A1>::Type> NRObjCall1(void (TO::*f)(TP1),O o,A1 a1)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;
	return NRObjCall1T<TO,TP1,T1,T2>(f,T1(o),T2(a1));
}

template<typename R,typename TO,typename TP1,typename O,typename A1>
	class ObjCall1T : public FunctorBase<R>
{	
public:
	ObjCall1T(R (TO::*f)(TP1),const O& o,const A1& a1):fptr(f),obj(o),v1(a1)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1);
	O obj;
	A1 v1;
};

template<typename R,typename TO,typename TP1,typename O,typename A1> inline
ObjCall1T<R,TO,TP1,typename Argument<O>::Type,typename Argument<A1>::Type> ObjCall1(R (TO::*f)(TP1),O o,A1 a1)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;
	return ObjCall1T<R,TO,TP1,T1,T2>(f,T1(o),T2(a1));
}

template<typename TP1,typename A1>
	class NRFuncCall1T : public FunctorBase<int>
{	
public:
	NRFuncCall1T(void (*f)(TP1),const A1& a1):fptr(f),v1(a1)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p));
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
		(*fptr)(v1.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1);
	A1 v1;
};

template<typename TP1,typename A1> inline
NRFuncCall1T<TP1,typename Argument<A1>::Type> NRFuncCall1(void (*f)(TP1),A1 a1)
{	
	typedef Argument<A1>::Type T2;
	return NRFuncCall1T<TP1,T2>(f,T2(a1));
}

template<typename R,typename TP1,typename A1>
	class FuncCall1T : public FunctorBase<R>
{	
public:
	FuncCall1T(R (*f)(TP1),const A1& a1):fptr(f),v1(a1)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1);
	A1 v1;
};

template<typename R,typename TP1,typename A1> inline
FuncCall1T<R,TP1,typename Argument<A1>::Type> FuncCall1(R (*f)(TP1),A1 a1)
{		
	typedef Argument<A1>::Type T2;
	return FuncCall1T<R,TP1,T2>(f,T2(a1));
}

//-----------------------------------------------------------------------------------------------
//有二个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename O,typename A1,typename A2>
	class NRObjCall2T : public FunctorBase<int>
{	
public:
	NRObjCall2T(void (TO::*f)(TP1,TP2),const O& o,const A1& a1,const A2& a2):fptr(f),obj(o),v1(a1),v2(a2)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2);
	O obj;
	A1 v1;A2 v2;
};

template<typename TO,typename TP1,typename TP2,typename O,typename A1,typename A2> inline
NRObjCall2T<TO,TP1,TP2,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type> NRObjCall2(void (TO::*f)(TP1,TP2),O o,A1 a1,A2 a2)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;
	typedef Argument<A2>::Type T3;
	return NRObjCall2T<TO,TP1,TP2,T1,T2,T3>(f,T1(o),T2(a1),T3(a2));
}

template<typename R,typename TO,typename TP1,typename TP2,typename O,typename A1,typename A2>
	class ObjCall2T : public FunctorBase<R>
{	
public:
	ObjCall2T(R (TO::*f)(TP1,TP2),const O& o,const A1& a1,const A2& a2):fptr(f),obj(o),v1(a1),v2(a2)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2);
	O obj;
	A1 v1;A2 v2;
};

template<typename R,typename TO,typename TP1,typename TP2,typename O,typename A1,typename A2> inline
ObjCall2T<R,TO,TP1,TP2,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type> ObjCall2(R (TO::*f)(TP1,TP2),O o,A1 a1,A2 a2)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;
	return ObjCall2T<R,TO,TP1,TP2,T1,T2,T3>(f,T1(o),T2(a1),T3(a2));
}

template<typename TP1,typename TP2,typename A1,typename A2>
	class NRFuncCall2T : public FunctorBase<int>
{	
public:
	NRFuncCall2T(void (*f)(TP1,TP2),const A1& a1,const A2& a2):fptr(f),v1(a1),v2(a2)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2);
	A1 v1;A2 v2;
};

template<typename TP1,typename TP2,typename A1,typename A2> inline 
NRFuncCall2T<TP1,TP2,typename Argument<A1>::Type,typename Argument<A2>::Type> NRFuncCall2(void (*f)(TP1,TP2),A1 a1,A2 a2)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;
	return NRFuncCall2T<TP1,TP2,T2,T3>(f,T2(a1),T3(a2));
}

template<typename R,typename TP1,typename TP2,typename A1,typename A2>
	class FuncCall2T : public FunctorBase<R>
{	
public:
	FuncCall2T(R (*f)(TP1,TP2),const A1& a1,const A2& a2):fptr(f),v1(a1),v2(a2)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2);
	A1 v1;A2 v2;
};

template<typename R,typename TP1,typename TP2,typename A1,typename A2> inline
FuncCall2T<R,TP1,TP2,typename Argument<A1>::Type,typename Argument<A2>::Type> FuncCall2(R (*f)(TP1,TP2),A1 a1,A2 a2)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;
	return FuncCall2T<R,TP1,TP2,T2,T3>(f,T2(a1),T3(a2));
}

//-----------------------------------------------------------------------------------------------
//有三个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename O,typename A1,typename A2,typename A3>
	class NRObjCall3T : public FunctorBase<int>
{	
public:
	NRObjCall3T(void (TO::*f)(TP1,TP2,TP3),const O& o,const A1& a1,const A2& a2,const A3& a3):fptr(f),obj(o),v1(a1),v2(a2),v3(a3)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3);
	O obj;
	A1 v1;A2 v2;A3 v3;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename O,typename A1,typename A2,typename A3> inline
NRObjCall3T<TO,TP1,TP2,TP3,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type> NRObjCall3(void (TO::*f)(TP1,TP2,TP3),O o,A1 a1,A2 a2,A3 a3)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;
	return NRObjCall3T<TO,TP1,TP2,TP3,T1,T2,T3,T4>(f,T1(o),T2(a1),T3(a2),T4(a3));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename O,typename A1,typename A2,typename A3>
	class ObjCall3T : public FunctorBase<R>
{	
public:
	ObjCall3T(R (TO::*f)(TP1,TP2,TP3),const O& o,const A1& a1,const A2& a2,const A3& a3):fptr(f),obj(o),v1(a1),v2(a2),v3(a3)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3);
	O obj;
	A1 v1;A2 v2;A3 v3;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename O,typename A1,typename A2,typename A3> inline
ObjCall3T<R,TO,TP1,TP2,TP3,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type> ObjCall3(R (TO::*f)(TP1,TP2,TP3),O o,A1 a1,A2 a2,A3 a3)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;
	return ObjCall3T<R,TO,TP1,TP2,TP3,T1,T2,T3,T4>(f,T1(o),T2(a1),T3(a2),T4(a3));
}

template<typename TP1,typename TP2,typename TP3,typename A1,typename A2,typename A3>
	class NRFuncCall3T : public FunctorBase<int>
{	
public:
	NRFuncCall3T(void (*f)(TP1,TP2,TP3),const A1& a1,const A2& a2,const A3& a3):fptr(f),v1(a1),v2(a2),v3(a3)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3);
	A1 v1;A2 v2;A3 v3;
};

template<typename TP1,typename TP2,typename TP3,typename A1,typename A2,typename A3> inline
NRFuncCall3T<TP1,TP2,TP3,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type> NRFuncCall3(void (*f)(TP1,TP2,TP3),A1 a1,A2 a2,A3 a3)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;
	return NRFuncCall3T<TP1,TP2,TP3,T2,T3,T4>(f,T2(a1),T3(a2),T4(a3));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename A1,typename A2,typename A3>
	class FuncCall3T : public FunctorBase<R>
{	
public:
	FuncCall3T(R (*f)(TP1,TP2,TP3),const A1& a1,const A2& a2,const A3& a3):fptr(f),v1(a1),v2(a2),v3(a3)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3);
	A1 v1;A2 v2;A3 v3;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename A1,typename A2,typename A3> inline
FuncCall3T<R,TP1,TP2,TP3,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type> FuncCall3(R (*f)(TP1,TP2,TP3),A1 a1,A2 a2,A3 a3)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;
	return FuncCall3T<R,TP1,TP2,TP3,T2,T3,T4>(f,T2(a1),T3(a2),T4(a3));
}

//-----------------------------------------------------------------------------------------------
//有四个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename O,typename A1,typename A2,typename A3,typename A4>
	class NRObjCall4T : public FunctorBase<int>
{	
public:
	NRObjCall4T(void (TO::*f)(TP1,TP2,TP3,TP4),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename O,typename A1,typename A2,typename A3,typename A4> inline
NRObjCall4T<TO,TP1,TP2,TP3,TP4,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type> NRObjCall4(void (TO::*f)(TP1,TP2,TP3,TP4),O o,A1 a1,A2 a2,A3 a3,A4 a4)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;
	return NRObjCall4T<TO,TP1,TP2,TP3,TP4,T1,T2,T3,T4,T5>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename O,typename A1,typename A2,typename A3,typename A4>
	class ObjCall4T : public FunctorBase<R>
{	
public:
	ObjCall4T(R (TO::*f)(TP1,TP2,TP3,TP4),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename O,typename A1,typename A2,typename A3,typename A4> inline
ObjCall4T<R,TO,TP1,TP2,TP3,TP4,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type> ObjCall4(R (TO::*f)(TP1,TP2,TP3,TP4),O o,A1 a1,A2 a2,A3 a3,A4 a4)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;
	return ObjCall4T<R,TO,TP1,TP2,TP3,TP4,T1,T2,T3,T4,T5>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename A1,typename A2,typename A3,typename A4>
	class NRFuncCall4T : public FunctorBase<int>
{	
public:
	NRFuncCall4T(void (*f)(TP1,TP2,TP3,TP4),const A1& a1,const A2& a2,const A3& a3,const A4& a4):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4);
	A1 v1;A2 v2;A3 v3;A4 v4;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename A1,typename A2,typename A3,typename A4> inline
NRFuncCall4T<TP1,TP2,TP3,TP4,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type> NRFuncCall4(void (*f)(TP1,TP2,TP3,TP4),A1 a1,A2 a2,A3 a3,A4 a4)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;
	return NRFuncCall4T<TP1,TP2,TP3,TP4,T2,T3,T4,T5>(f,T2(a1),T3(a2),T4(a3),T5(a4));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename A1,typename A2,typename A3,typename A4>
	class FuncCall4T : public FunctorBase<R>
{	
public:
	FuncCall4T(R (*f)(TP1,TP2,TP3,TP4),const A1& a1,const A2& a2,const A3& a3,const A4& a4):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4);
	A1 v1;A2 v2;A3 v3;A4 v4;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename A1,typename A2,typename A3,typename A4> inline
FuncCall4T<R,TP1,TP2,TP3,TP4,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type> FuncCall4(R (*f)(TP1,TP2,TP3,TP4),A1 a1,A2 a2,A3 a3,A4 a4)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;
	return FuncCall4T<R,TP1,TP2,TP3,TP4,T2,T3,T4,T5>(f,T2(a1),T3(a2),T4(a3),T5(a4));
}

//-----------------------------------------------------------------------------------------------
//有五个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename O,typename A1,typename A2,typename A3,typename A4,typename A5>
	class NRObjCall5T : public FunctorBase<int>
{	
public:
	NRObjCall5T(void (TO::*f)(TP1,TP2,TP3,TP4,TP5),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4,TP5);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename O,typename A1,typename A2,typename A3,typename A4,typename A5> inline
NRObjCall5T<TO,TP1,TP2,TP3,TP4,TP5,typename typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type> NRObjCall5(void (TO::*f)(TP1,TP2,TP3,TP4,TP5),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;
	return NRObjCall5T<TO,TP1,TP2,TP3,TP4,TP5,T1,T2,T3,T4,T5,T6>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename O,typename A1,typename A2,typename A3,typename A4,typename A5>
	class ObjCall5T : public FunctorBase<R>
{	
public:
	ObjCall5T(R (TO::*f)(TP1,TP2,TP3,TP4,TP5),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4,TP5);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename O,typename A1,typename A2,typename A3,typename A4,typename A5> inline
ObjCall5T<R,TO,TP1,TP2,TP3,TP4,TP5,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type> ObjCall5(R (TO::*f)(TP1,TP2,TP3,TP4,TP5),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;
	return ObjCall5T<R,TO,TP1,TP2,TP3,TP4,TP5,T1,T2,T3,T4,T5,T6>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename A1,typename A2,typename A3,typename A4,typename A5>
	class NRFuncCall5T : public FunctorBase<int>
{	
public:
	NRFuncCall5T(void (*f)(TP1,TP2,TP3,TP4,TP5),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4,TP5);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename A1,typename A2,typename A3,typename A4,typename A5> inline
NRFuncCall5T<TP1,TP2,TP3,TP4,TP5,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type> NRFuncCall5(void (*f)(TP1,TP2,TP3,TP4,TP5),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;
	return NRFuncCall5T<TP1,TP2,TP3,TP4,TP5,T2,T3,T4,T5,T6>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename A1,typename A2,typename A3,typename A4,typename A5>
	class FuncCall5T : public FunctorBase<R>
{	
public:
	FuncCall5T(R (*f)(TP1,TP2,TP3,TP4,TP5),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4,TP5);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename A1,typename A2,typename A3,typename A4,typename A5> inline
FuncCall5T<R,TP1,TP2,TP3,TP4,TP5,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type> FuncCall5(R (*f)(TP1,TP2,TP3,TP4,TP5),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;
	return FuncCall5T<R,TP1,TP2,TP3,TP4,TP5,T2,T3,T4,T5,T6>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5));
}

//-----------------------------------------------------------------------------------------------
//有六个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6>
	class NRObjCall6T : public FunctorBase<int>
{	
public:
	NRObjCall6T(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6> inline
NRObjCall6T<TO,TP1,TP2,TP3,TP4,TP5,TP6,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type> NRObjCall6(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;
	return NRObjCall6T<TO,TP1,TP2,TP3,TP4,TP5,TP6,T1,T2,T3,T4,T5,T6,T7>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6>
	class ObjCall6T : public FunctorBase<R>
{	
public:
	ObjCall6T(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6> inline
ObjCall6T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type> ObjCall6(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;
	return ObjCall6T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,T1,T2,T3,T4,T5,T6,T7>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6>
	class NRFuncCall6T : public FunctorBase<int>
{	
public:
	NRFuncCall6T(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6> inline
NRFuncCall6T<TP1,TP2,TP3,TP4,TP5,TP6,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type> NRFuncCall6(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;
	return NRFuncCall6T<TP1,TP2,TP3,TP4,TP5,TP6,T2,T3,T4,T5,T6,T7>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6>
	class FuncCall6T : public FunctorBase<R>
{	
public:
	FuncCall6T(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6> inline
FuncCall6T<R,TP1,TP2,TP3,TP4,TP5,TP6,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type> FuncCall6(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;
	return FuncCall6T<R,TP1,TP2,TP3,TP4,TP5,TP6,T2,T3,T4,T5,T6,T7>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6));
}

//-----------------------------------------------------------------------------------------------
//有七个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7>
	class NRObjCall7T : public FunctorBase<int>
{	
public:
	NRObjCall7T(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7> inline
NRObjCall7T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type> NRObjCall7(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;
	return NRObjCall7T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,T1,T2,T3,T4,T5,T6,T7,T8>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7>
	class ObjCall7T : public FunctorBase<R>
{	
public:
	ObjCall7T(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7> inline
ObjCall7T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type> ObjCall7(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;
	return ObjCall7T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,T1,T2,T3,T4,T5,T6,T7,T8>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7>
	class NRFuncCall7T : public FunctorBase<int>
{	
public:
	NRFuncCall7T(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7> inline
NRFuncCall7T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type> NRFuncCall7(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;
	return NRFuncCall7T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,T2,T3,T4,T5,T6,T7,T8>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7>
	class FuncCall7T : public FunctorBase<R>
{	
public:
	FuncCall7T(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7> inline
FuncCall7T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type> FuncCall7(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;
	return FuncCall7T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,T2,T3,T4,T5,T6,T7,T8>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7));
}

//-----------------------------------------------------------------------------------------------
//有八个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8>
	class NRObjCall8T : public FunctorBase<int>
{	
public:
	NRObjCall8T(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8> inline
NRObjCall8T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type> NRObjCall8(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;
	return NRObjCall8T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,T1,T2,T3,T4,T5,T6,T7,T8,T9>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8>
	class ObjCall8T : public FunctorBase<R>
{	
public:
	ObjCall8T(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8> inline
ObjCall8T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type> ObjCall8(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;
	return ObjCall8T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,T1,T2,T3,T4,T5,T6,T7,T8,T9>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8>
	class NRFuncCall8T : public FunctorBase<int>
{	
public:
	NRFuncCall8T(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8> inline
NRFuncCall8T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type> NRFuncCall8(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;
	return NRFuncCall8T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,T2,T3,T4,T5,T6,T7,T8,T9>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8>
	class FuncCall8T : public FunctorBase<R>
{	
public:
	FuncCall8T(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8> inline
FuncCall8T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type> FuncCall8(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;
	return FuncCall8T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,T2,T3,T4,T5,T6,T7,T8,T9>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8));
}

//-----------------------------------------------------------------------------------------------
//有九个参数的成员函数及函数处理
template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9>
	class NRObjCall9T : public FunctorBase<int>
{	
public:
	NRObjCall9T(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8,const A9& a9):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8),v9(a9)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p),v9.Call(p));
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
		((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2),v9.Call(p1,p2));
		return 0;
	}
private:	
	void (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;A9 v9;
};

template<typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9> inline
NRObjCall9T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type,typename Argument<A9>::Type> NRObjCall9(void (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8,A9 a9)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;typedef Argument<A9>::Type T10;
	return NRObjCall9T<TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8),T10(a9));
}

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9>
	class ObjCall9T : public FunctorBase<R>
{	
public:
	ObjCall9T(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),const O& o,const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8,const A9& a9):fptr(f),obj(o),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8),v9(a9)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return ((obj.Call(p))->*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p),v9.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return ((obj.Call(p1,p2))->*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2),v9.Call(p1,p2));
	}
private:	
	R (TO::*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9);
	O obj;
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;A9 v9;
};

template<typename R,typename TO,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename O,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9> inline
ObjCall9T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,typename Argument<O>::Type,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type,typename Argument<A9>::Type> ObjCall9(R (TO::*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),O o,A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8,A9 a9)
{		
	typedef Argument<O>::Type T1;
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;typedef Argument<A9>::Type T10;
	return ObjCall9T<R,TO,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>(f,T1(o),T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8),T10(a9));
}

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9>
	class NRFuncCall9T : public FunctorBase<int>
{	
public:
	NRFuncCall9T(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8,const A9& a9):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8),v9(a9)
	{}
	template<typename P>
		int operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		int Call(P& p) const
	{
		(*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p),v9.Call(p));
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
		(*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2),v9.Call(p1,p2));
		return 0;
	}
private:	
	void (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;A9 v9;
};

template<typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9> inline
NRFuncCall9T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type,typename Argument<A9>::Type> NRFuncCall9(void (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8,A9 a9)
{	
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;typedef Argument<A9>::Type T10;
	return NRFuncCall9T<TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,T2,T3,T4,T5,T6,T7,T8,T9,T10>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8),T10(a9));
}

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9>
	class FuncCall9T : public FunctorBase<R>
{	
public:
	FuncCall9T(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),const A1& a1,const A2& a2,const A3& a3,const A4& a4,const A5& a5,const A6& a6,const A7& a7,const A8& a8,const A9& a9):fptr(f),v1(a1),v2(a2),v3(a3),v4(a4),v5(a5),v6(a6),v7(a7),v8(a8),v9(a9)
	{}
	template<typename P>
		R operator () (P& p) const
	{
		return Call(p);
	}
	template<typename P>
		R Call(P& p) const
	{
		return (*fptr)(v1.Call(p),v2.Call(p),v3.Call(p),v4.Call(p),v5.Call(p),v6.Call(p),v7.Call(p),v8.Call(p),v9.Call(p));
	}
	template<typename P1,typename P2>
		R operator () (P1& p1,P2& p2) const
	{
		return Call(p1,p2);
	}
	template<typename P1,typename P2>
		R Call(P1& p1,P2& p2) const
	{
		return (*fptr)(v1.Call(p1,p2),v2.Call(p1,p2),v3.Call(p1,p2),v4.Call(p1,p2),v5.Call(p1,p2),v6.Call(p1,p2),v7.Call(p1,p2),v8.Call(p1,p2),v9.Call(p1,p2));
	}
private:	
	R (*fptr)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9);
	A1 v1;A2 v2;A3 v3;A4 v4;A5 v5;A6 v6;A7 v7;A8 v8;A9 v9;
};

template<typename R,typename TP1,typename TP2,typename TP3,typename TP4,typename TP5,typename TP6,typename TP7,typename TP8,typename TP9,typename A1,typename A2,typename A3,typename A4,typename A5,typename A6,typename A7,typename A8,typename A9> inline
FuncCall9T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,typename Argument<A1>::Type,typename Argument<A2>::Type,typename Argument<A3>::Type,typename Argument<A4>::Type,typename Argument<A5>::Type,typename Argument<A6>::Type,typename Argument<A7>::Type,typename Argument<A8>::Type,typename Argument<A9>::Type> FuncCall9(R (*f)(TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9),A1 a1,A2 a2,A3 a3,A4 a4,A5 a5,A6 a6,A7 a7,A8 a8,A9 a9)
{		
	typedef Argument<A1>::Type T2;typedef Argument<A2>::Type T3;typedef Argument<A3>::Type T4;typedef Argument<A4>::Type T5;typedef Argument<A5>::Type T6;typedef Argument<A6>::Type T7;typedef Argument<A7>::Type T8;typedef Argument<A8>::Type T9;typedef Argument<A9>::Type T10;
	return FuncCall9T<R,TP1,TP2,TP3,TP4,TP5,TP6,TP7,TP8,TP9,T2,T3,T4,T5,T6,T7,T8,T9,T10>(f,T2(a1),T3(a2),T4(a3),T5(a4),T6(a5),T7(a6),T8(a7),T9(a8),T10(a9));
}

//-----------------------------------------------------------------------------------------------

#endif // !defined(AFX_LAMDAFUNC_H__61A8DF34_3D2B_4783_AC82_72B02EC1D5C8__INCLUDED_)

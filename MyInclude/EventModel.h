//******************************************************
//   file name: EventModel.h
//  model name: EventModel
//  describing: just like C++ Builder's Event model
//   documents: 
//      author: lan
// create date: 2000-12-5 17:14:40
//     checker: mud--
//   copyright: [GPL]
//******************************************************

//******************************************************
//修改日志 
//修改作者: alan (nationphone@126.com)
//修改日期: 2000-12-10 16:37:53
//修改说明: 加入仅允许一个事件处理的触发器SimpleEventTrigerT。
//******************************************************

//******************************************************
//修改日志 
//修改作者: alan (nationphone@126.com)
//修改日期: 2004-12-2 01:10:53
//修改说明: 增加事件处理克隆方法以允许不了解处理者的情形下传递处理。
//******************************************************

#ifndef __EventModel__H__
#define __EventModel__H__

#include <vector>
#include <list>
#include <map>
#include <set>
#include <memory>

#include <iterator>
#include <algorithm>

//----------------------------------------------
//以下各类用于为C++语言提供事件处理模型。
//----------------------------------------------
//事件基类，用以保存客户对象
template<typename _Ty>
	class EventBaseT
{
protected:
	_Ty* object;
	EventBaseT(_Ty* obj)
	{
		object=obj;
	}
};
//事件类抽象接口，为事件处理容器提供访问事件处理的方法
class IEvent0
{
public:
	virtual bool operator () (void)=0;
	virtual IEvent0* clone(void)=0;
};

template<typename T1>
	class IEvent1
{
public:
	virtual bool operator () (T1)=0;
	virtual IEvent1<T1>* clone(void)=0;
};

template<typename T1,typename T2>
	class IEvent2
{
public:
	virtual bool operator () (T1,T2)=0;
	virtual IEvent2<T1,T2>* clone(void)=0;
};

template<typename T1,typename T2,typename T3>
	class IEvent3
{
public:
	virtual bool operator () (T1,T2,T3)=0;
	virtual IEvent3<T1,T2,T3>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4>
	class IEvent4
{
public:
	virtual bool operator () (T1,T2,T3,T4)=0;
	virtual IEvent4<T1,T2,T3,T4>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5>
	class IEvent5
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5)=0;
	virtual IEvent5<T1,T2,T3,T4,T5>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
	class IEvent6
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5,T6)=0;
	virtual IEvent6<T1,T2,T3,T4,T5,T6>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
	class IEvent7
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5,T6,T7)=0;
	virtual IEvent7<T1,T2,T3,T4,T5,T6,T7>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
	class IEvent8
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5,T6,T7,T8)=0;
	virtual IEvent8<T1,T2,T3,T4,T5,T6,T7,T8>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
	class IEvent9
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5,T6,T7,T8,T9)=0;
	virtual IEvent9<T1,T2,T3,T4,T5,T6,T7,T8,T9>* clone(void)=0;
};

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
	class IEvent10
{
public:
	virtual bool operator () (T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)=0;
	virtual IEvent10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* clone(void)=0;
};
//事件类，保存客户对象及处理函数指针，并提供调用处理的方法
template<typename _Ty> 
	class Event0 : EventBaseT<_Ty>,public IEvent0
{ 
	bool (_Ty::*pMF)(void); 
public: 
	Event0(_Ty* obj,bool (_Ty::*pm)(void)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (void)
	{ 
		return (object->*pMF)(); 
	}	
	IEvent0* clone(void)
	{
		Event0* pobj=new Event0(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1> 
	class Event1 : EventBaseT<_Ty>,public IEvent1<T1>
{ 
	bool (_Ty::*pMF)(T1); 
public: 
	Event1(_Ty* obj,bool (_Ty::*pm)(T1)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1)
	{ 
		return (object->*pMF)(p1); 
	}	
	IEvent1<T1>* clone(void)
	{
		Event1<_Ty,T1>* pobj=new Event1<_Ty,T1>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2> 
	class Event2 : EventBaseT<_Ty>,public IEvent2<T1,T2>
{ 
	bool (_Ty::*pMF)(T1,T2); 
public: 
	Event2(_Ty* obj,bool (_Ty::*pm)(T1,T2)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2)
	{ 
		return (object->*pMF)(p1,p2); 
	} 	
	IEvent2<T1,T2>* clone(void)
	{
		Event2<_Ty,T1,T2>* pobj=new Event2<_Ty,T1,T2>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3> 
	class Event3 : EventBaseT<_Ty>,public IEvent3<T1,T2,T3>
{ 
	bool (_Ty::*pMF)(T1,T2,T3); 
public: 
	Event3(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3)
	{ 
		return (object->*pMF)(p1,p2,p3); 
	} 	
	IEvent3<T1,T2,T3>* clone(void)
	{
		Event3<_Ty,T1,T2,T3>* pobj=new Event3<_Ty,T1,T2,T3>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4> 
	class Event4 : EventBaseT<_Ty>,public IEvent4<T1,T2,T3,T4>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4); 
public: 
	Event4(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4)
	{ 
		return (object->*pMF)(p1,p2,p3,p4); 
	} 	
	IEvent4<T1,T2,T3,T4>* clone(void)
	{
		Event4<_Ty,T1,T2,T3,T4>* pobj=new Event4<_Ty,T1,T2,T3,T4>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5> 
	class Event5 : EventBaseT<_Ty>,public IEvent5<T1,T2,T3,T4,T5>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5); 
public: 
	Event5(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5); 
	} 	
	IEvent5<T1,T2,T3,T4,T5>* clone(void)
	{
		Event5<_Ty,T1,T2,T3,T4,T5>* pobj=new Event5<_Ty,T1,T2,T3,T4,T5>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> 
	class Event6 : EventBaseT<_Ty>,public IEvent6<T1,T2,T3,T4,T5,T6>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5,T6); 
public: 
	Event6(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5,T6 p6)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5,p6); 
	} 	
	IEvent6<T1,T2,T3,T4,T5,T6>* clone(void)
	{
		Event6<_Ty,T1,T2,T3,T4,T5,T6>* pobj=new Event6<_Ty,T1,T2,T3,T4,T5,T6>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7> 
	class Event7 : EventBaseT<_Ty>,public IEvent7<T1,T2,T3,T4,T5,T6,T7>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5,T6,T7); 
public: 
	Event7(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5,T6 p6,T7 p7)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5,p6,p7); 
	} 	
	IEvent7<T1,T2,T3,T4,T5,T6,T7>* clone(void)
	{
		Event7<_Ty,T1,T2,T3,T4,T5,T6,T7>* pobj=new Event7<_Ty,T1,T2,T3,T4,T5,T6,T7>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8> 
	class Event8 : EventBaseT<_Ty>,public IEvent8<T1,T2,T3,T4,T5,T6,T7,T8>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5,T6,T7,T8); 
public: 
	Event8(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5,T6 p6,T7 p7,T8 p8)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5,p6,p7,p8); 
	} 	
	IEvent8<T1,T2,T3,T4,T5,T6,T7,T8>* clone(void)
	{
		Event8<_Ty,T1,T2,T3,T4,T5,T6,T7,T8>* pobj=new Event8<_Ty,T1,T2,T3,T4,T5,T6,T7,T8>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9> 
	class Event9 : EventBaseT<_Ty>,public IEvent9<T1,T2,T3,T4,T5,T6,T7,T8,T9>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5,T6,T7,T8,T9); 
public: 
	Event9(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8,T9)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5,T6 p6,T7 p7,T8 p8,T9 p9)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5,p6,p7,p8,p9); 
	} 	
	IEvent9<T1,T2,T3,T4,T5,T6,T7,T8,T9>* clone(void)
	{
		Event9<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9>* pobj=new Event9<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9>(object,pMF);
		return pobj;
	}
}; 

template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10> 
	class Event10 : EventBaseT<_Ty>,public IEvent10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
{ 
	bool (_Ty::*pMF)(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10); 
public: 
	Event10(_Ty* obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)):EventBaseT<_Ty>(obj) 
	{ 
		pMF=pm; 
	}	 
	bool operator () (T1 p1,T2 p2,T3 p3,T4 p4,T5 p5,T6 p6,T7 p7,T8 p8,T9 p9,T10 p10)
	{ 
		return (object->*pMF)(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10); 
	} 	
	IEvent10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* clone(void)
	{
		Event10<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* pobj=new Event10<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>(object,pMF);
		return pobj;
	}
}; 

//事件工厂，提供系列静态方法以方便事件类的构造
struct EventFactory
{
	template<typename _Ty> static inline 
		Event0<_Ty> * Produce(_Ty *obj,bool (_Ty::*pm)(void)) 
	{ 
		return (new Event0<_Ty>(obj,pm)); 
	}
	
	template<typename _Ty,typename T1> static inline 
		Event1<_Ty,T1> * Produce(_Ty *obj,bool (_Ty::*pm)(T1)) 
	{ 
		return (new Event1<_Ty,T1>(obj,pm)); 
	}
	
	template<typename _Ty,typename T1,typename T2> static inline 
		Event2<_Ty,T1,T2> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2)) 
	{ 
		return (new Event2<_Ty,T1,T2>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3> static inline 
		Event3<_Ty,T1,T2,T3> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3)) 
	{ 
		return (new Event3<_Ty,T1,T2,T3>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4> static inline 
		Event4<_Ty,T1,T2,T3,T4> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4)) 
	{ 
		return (new Event4<_Ty,T1,T2,T3,T4>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5> static inline 
		Event5<_Ty,T1,T2,T3,T4,T5> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5)) 
	{ 
		return (new Event5<_Ty,T1,T2,T3,T4,T5>(obj,pm)); 
	}	

	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> static inline 
		Event6<_Ty,T1,T2,T3,T4,T5,T6> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6)) 
	{ 
		return (new Event6<_Ty,T1,T2,T3,T4,T5,T6>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7> static inline 
		Event7<_Ty,T1,T2,T3,T4,T5,T6,T7> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7)) 
	{ 
		return (new Event7<_Ty,T1,T2,T3,T4,T5,T6,T7>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8> static inline 
		Event8<_Ty,T1,T2,T3,T4,T5,T6,T7,T8> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8)) 
	{ 
		return (new Event8<_Ty,T1,T2,T3,T4,T5,T6,T7,T8>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9> static inline 
		Event9<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8,T9)) 
	{ 
		return (new Event9<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9>(obj,pm)); 
	}	
	
	template<typename _Ty,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10> static inline 
		Event10<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10> * Produce(_Ty *obj,bool (_Ty::*pm)(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)) 
	{ 
		return (new Event10<_Ty,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>(obj,pm)); 
	}	
}; 
//事件处理容器，管理一类事件，可通过此类及事件类接口调用相应事件的事件处理。
template<typename _C>
	class EventTrigerT
{
	typedef std::list<_C*> List;	
	List lt;	
public:
	typedef typename List::iterator iterator;

	inline iterator begin(void)
	{
		return lt.begin();
	}
	inline iterator end(void)
	{
		return lt.end();
	}
	inline void clear(void)
	{
		iterator it=lt.begin();
		while(it!=lt.end())
		{
			delete *it;
			it++;
		}		
		lt.clear();
	}
public:
	inline void operator += (_C* c)
	{
		lt.push_back(c);
	}
	inline void operator -= (_C* c)
	{
		lt.remove(c);
	}			
	virtual ~EventTrigerT()
	{
		clear();
	}
};		
//管理一个事件，可通过此类及事件类接口调用相应事件的事件处理。
template<typename _C>
	class SimpleEventTrigerT
{	
	typedef std::auto_ptr<_C> fptr;			 
public:						
	inline void operator += (_C* c)
	{		
		own=true;
		event=fptr(c);
	}
	inline void operator -= (_C* c)
	{			
		own=false;
		event.release();
	}	
	inline _C* get(void) const
	{
		if(own)
			return event.get();
		else
			return NULL;
	}
	virtual ~SimpleEventTrigerT()
	{
	}
private:
	bool own;
	fptr event;	
};
//--------------------------------------------------
//事件处理模型系列类至此完毕。
//--------------------------------------------------
#endif
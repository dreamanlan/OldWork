// MySocket.h: interface for the MySocket class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSOCKET_H__9484A5E4_34CD_4AD4_9B4C_A23875C835A7__INCLUDED_)
#define AFX_MYSOCKET_H__9484A5E4_34CD_4AD4_9B4C_A23875C835A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>
#include <map>
#include <algorithm>

#include "ace/OS.h" 
#include "ace/Task.h" 
#include "ace/Thread.h"

#include "ace/Reactor.h"
#include "ace/Svc_Handler.h"
#include "ace/Acceptor.h"
#include "ace/Connector.h"
#include "ace/Synch.h"
#include "ace/SOCK_Acceptor.h"
#include "ace/SOCK_Connector.h"
#include "ace/SOCK_Dgram.h"
#include "ace/SOCK_Dgram_Mcast.h"
#include "ace/SOCK_Dgram_Bcast.h"


#ifdef _DEBUG
#pragma comment(lib, "ACEd.lib")
#else
#pragma comment(lib, "ACE.lib")
#endif

#define ACCEPTOR_START_INDEX	0
#define CONNECTOR_START_INDEX	0x10000000

#define COMM_MSG_OPEN			0
#define COMM_MSG_RECV			1
#define COMM_MSG_CLOSE			2
#define COMM_DGM_OPEN			3
#define COMM_DGM_RECV			4
#define COMM_DGM_CLOSE			5
#define COMM_DGM_MCAST_OPEN		6
#define COMM_DGM_MCAST_RECV		7
#define COMM_DGM_MCAST_CLOSE	8

#define COMM_PACKAGE_LEN	64
#define COMM_RECV_BUFFER	64*1024

typedef ACE_Singleton<ACE_Reactor,ACE_Null_Mutex> Reactor;

template<typename T>
	class MyServiceHandlerT : public ACE_Svc_Handler<ACE_SOCK_STREAM,ACE_MT_SYNCH> 
{
	typedef ACE_Svc_Handler<ACE_SOCK_STREAM,ACE_MT_SYNCH> ParentClass;
public:
	void SetInitArgs(UINT id,HWND hwnd)
	{
		acceptorOrConnectorId=id;
		hWnd=hwnd;
	}
	void SetHwnd(HWND hwnd)
	{
		hWnd=hwnd;
	}
	BOOL SendMsg(const CString& msg)
	{
		int len=msg.GetLength();
		for(int k=0;k<len;k+=COMM_PACKAGE_LEN)
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			for(int i=0;i<COMM_PACKAGE_LEN && k+i<len;i++)
			{
				buf.SetAt(i,msg[k+i]);
			}
			if(peer().send_n(buf,COMM_PACKAGE_LEN)<=0)
				return FALSE;
		}
		if(len%COMM_PACKAGE_LEN==0)//字符数恰好为包长整数倍时补发一个空包标志结束
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			if(peer().send_n(buf,COMM_PACKAGE_LEN)<=0)
				return FALSE;
		}
		return TRUE;
	}
	int open(void*)
	{		
		int r=Reactor::instance()->register_handler(this,ACE_Event_Handler::READ_MASK);
		ACE_HANDLE handle=get_handle();
		T::SetSvcHandler(acceptorOrConnectorId,handle,this);
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_MSG_OPEN,(LPARAM)handle);
		//activate();
		return 0;
	}
	int handle_close(ACE_HANDLE handle, ACE_Reactor_Mask mask)
	{
		if(handle==ACE_INVALID_HANDLE)
			handle=get_handle();
		shutdown();
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_MSG_CLOSE,(LPARAM)handle);
		T::RemoveSvcHandler(acceptorOrConnectorId,handle);
		return ParentClass::handle_close(handle,mask);
	}
	int svc(void)
	{
		return 0;
	}
	int handle_input(ACE_HANDLE handle) 
	{ 
		CString data;
		data.GetBuffer(COMM_RECV_BUFFER);
		data="";
		for(;;)
		{
			char dataBuf[COMM_PACKAGE_LEN+1];
			dataBuf[0]=0;
			dataBuf[COMM_PACKAGE_LEN]=0;
			int size=peer().recv_n(dataBuf,COMM_PACKAGE_LEN);
			if(size<0)
			{
				return -1;
			}
			else if(size==0)
			{
				return -1;
			}
			data+=dataBuf;
			if(dataBuf[COMM_PACKAGE_LEN-1]==0)
				break;
		}
		if(data!="")
		{
			ACE_Message_Block* msgBlock=new ACE_Message_Block(data.GetLength());
			msgBlock->copy(data,data.GetLength());
			putq(msgBlock);
			::PostMessage(hWnd,WM_MYCOMMMSG,COMM_MSG_RECV,(LPARAM)handle);
		}
		return 0;
	}
private:
	UINT acceptorOrConnectorId;
	HWND hWnd;
};

template<typename T>
	class MyDgramHandlerT : public ACE_Task<ACE_MT_SYNCH>
{
	typedef ACE_Task<ACE_MT_SYNCH> ParentClass;
public:
	void SetInitArgs(UINT id,HWND hwnd,UINT port)
	{
		dgramId=id;
		hWnd=hwnd;
		ACE_INET_Addr addr(port);
		localAddr=addr;
	}
	void SetHwnd(HWND hwnd)
	{
		hWnd=hwnd;
	}
	BOOL SendMsg(const CString& msg,const CString& remote)
	{
		remoteAddr=ACE_INET_Addr(remote);		
		int len=msg.GetLength();
		for(int k=0;k<len;k+=COMM_PACKAGE_LEN)
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			for(int i=0;i<COMM_PACKAGE_LEN && k+i<len;i++)
			{
				buf.SetAt(i,msg[k+i]);
			}
			if(peer().send(buf,COMM_PACKAGE_LEN,remoteAddr)<=0)
				return FALSE;
		}
		if(len%COMM_PACKAGE_LEN==0)//字符数恰好为包长整数倍时补发一个空包标志结束
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			if(peer().send(buf,COMM_PACKAGE_LEN,remoteAddr)<=0)
				return FALSE;
		}
		return TRUE;
	}
	int open(void*)
	{
		int r=peer().open(localAddr);		
		r=Reactor::instance()->register_handler(this,ACE_Event_Handler::READ_MASK);
		T::SetDgramHandler(dgramId,this);
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_OPEN,(LPARAM)dgramId);
		//activate();
		return 0;
	}
	ACE_HANDLE get_handle(void) const  
	{
		return peer().get_handle();
	}
	int close(u_long flags=0)
	{
		return handle_close();
	}
	int handle_close(ACE_HANDLE=ACE_INVALID_HANDLE,ACE_Reactor_Mask=ACE_Event_Handler::ALL_EVENTS_MASK) 
	{
		shutdown();
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_CLOSE,(LPARAM)dgramId);
		T::RemoveDgramHandler(dgramId);
		delete this;
		return 0;
	}
	int svc(void)
	{
		return 0;
	}
	int handle_input(ACE_HANDLE handle) 
	{ 
		CString data,fullData;
		data.GetBuffer(COMM_RECV_BUFFER);
		fullData.GetBuffer(COMM_RECV_BUFFER);
		data="";
		for(;;)
		{
			char dataBuf[COMM_PACKAGE_LEN+1];
			dataBuf[0]=0;
			dataBuf[COMM_PACKAGE_LEN]=0;
			int size=peer().recv(dataBuf,COMM_PACKAGE_LEN,remoteAddr);
			if(size<0)
			{
				return -1;
			}
			else if(size==0)
				break;
			data+=dataBuf;
			if(dataBuf[COMM_PACKAGE_LEN-1]==0)
				break;
		}
		if(data!="")
		{
			char buf[1025];
			if(remoteAddr.get_host_name(buf,1024)<0)
				remoteAddr.get_host_addr(buf,1024);
			fullData.Format("%s:%u>%s",buf,remoteAddr.get_port_number(),data);			

			ACE_Message_Block* msgBlock=new ACE_Message_Block(fullData.GetLength());
			msgBlock->copy(fullData,fullData.GetLength());
			putq(msgBlock);
			::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_RECV,(LPARAM)dgramId);
		}
		return 0;
	}
	void shutdown(void)
	{
		if (reactor())
		{
			ACE_Reactor_Mask mask = ACE_Event_Handler::ALL_EVENTS_MASK |
				ACE_Event_Handler::DONT_CALL;
			
			reactor()->cancel_timer(this);
			
			if (peer().get_handle() != ACE_INVALID_HANDLE)
				reactor()->remove_handler(this,mask);
		}		
		peer().close();
	}
	ACE_SOCK_Dgram& peer(void) const
	{
		return (ACE_SOCK_Dgram&)sockDgram;
	}
private:
	ACE_SOCK_Dgram sockDgram;
	ACE_INET_Addr localAddr,remoteAddr;
	HWND hWnd;
	UINT dgramId;
};

template<typename T>
	class MyMcastDgramHandlerT : public ACE_Task<ACE_MT_SYNCH>
{
	typedef ACE_Task<ACE_MT_SYNCH> ParentClass;
public:
	void SetInitArgs(UINT id,HWND hwnd,const CString& local)
	{
		dgramId=id;
		hWnd=hwnd;
		ACE_INET_Addr addr(local);
		localAddr=addr;
	}
	void SetHwnd(HWND hwnd)
	{
		hWnd=hwnd;
	}
	BOOL SendMsg(const CString& msg)
	{		
		int len=msg.GetLength();
		for(int k=0;k<len;k+=COMM_PACKAGE_LEN)
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			for(int i=0;i<COMM_PACKAGE_LEN && k+i<len;i++)
			{
				buf.SetAt(i,msg[k+i]);
			}
			if(peer().send(buf,COMM_PACKAGE_LEN)<=0)
				return FALSE;
		}
		if(len%COMM_PACKAGE_LEN==0)//字符数恰好为包长整数倍时补发一个空包标志结束
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			if(peer().send(buf,COMM_PACKAGE_LEN)<=0)
				return FALSE;
		}
		return TRUE;
	}
	int open(void*)
	{		
		int r=peer().subscribe(localAddr);		
		r=Reactor::instance()->register_handler(this,ACE_Event_Handler::READ_MASK);
		T::SetMcastDgramHandler(dgramId,this);
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_MCAST_OPEN,(LPARAM)dgramId);
		//activate();
		return 0;
	}
	ACE_HANDLE get_handle(void) const  
	{
		return peer().get_handle();
	}
	int close(u_long flags=0)
	{
		return handle_close();
	}
	int handle_close(ACE_HANDLE=ACE_INVALID_HANDLE,ACE_Reactor_Mask=ACE_Event_Handler::ALL_EVENTS_MASK) 
	{
		shutdown();
		::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_MCAST_CLOSE,(LPARAM)dgramId);
		T::RemoveMcastDgramHandler(dgramId);
		delete this;
		return 0;
	}
	int svc(void)
	{
		return 0;
	}
	int handle_input(ACE_HANDLE handle) 
	{ 
		CString data,fullData;
		data.GetBuffer(COMM_RECV_BUFFER);
		fullData.GetBuffer(COMM_RECV_BUFFER);
		data="";
		for(;;)
		{
			char dataBuf[COMM_PACKAGE_LEN+1];
			dataBuf[0]=0;
			dataBuf[COMM_PACKAGE_LEN]=0;
			int size=peer().recv(dataBuf,COMM_PACKAGE_LEN,remoteAddr);
			if(size<0)
			{
				return -1;
			}
			else if(size==0)
				break;
			data+=dataBuf;
			if(dataBuf[COMM_PACKAGE_LEN-1]==0)
				break;
		}
		if(data!="")
		{
			char buf[1025];
			if(remoteAddr.get_host_name(buf,1024)<0)
				remoteAddr.get_host_addr(buf,1024);
			fullData.Format("%s:%u>%s",buf,remoteAddr.get_port_number(),data);			

			ACE_Message_Block* msgBlock=new ACE_Message_Block(fullData.GetLength());
			msgBlock->copy(fullData,fullData.GetLength());
			putq(msgBlock);
			::PostMessage(hWnd,WM_MYCOMMMSG,COMM_DGM_MCAST_RECV,(LPARAM)dgramId);
		}
		return 0;
	}
	void shutdown(void)
	{
		if (reactor())
		{
			ACE_Reactor_Mask mask = ACE_Event_Handler::ALL_EVENTS_MASK |
				ACE_Event_Handler::DONT_CALL;
			
			reactor()->cancel_timer(this);
			
			if (peer().get_handle() != ACE_INVALID_HANDLE)
				reactor()->remove_handler(this,mask);
		}		
		peer().unsubscribe();
	}
	ACE_SOCK_Dgram_Mcast& peer(void) const
	{
		return (ACE_SOCK_Dgram_Mcast&)sockDgram;
	}
private:
	ACE_SOCK_Dgram_Mcast sockDgram;
	ACE_INET_Addr localAddr,remoteAddr;
	HWND hWnd;
	UINT dgramId;
};

template<typename T>
	class My_ACE_AcceptorT : public ACE_Acceptor<MyServiceHandlerT<T>,ACE_SOCK_ACCEPTOR>
{
	typedef ACE_Acceptor<MyServiceHandlerT<T>,ACE_SOCK_ACCEPTOR> ParentClass;
	typedef typename ParentClass::handler_type SVC_HANDLER;
public:
	void SetInitArgs(UINT id,HWND hwnd)
	{
		acceptorId=id;
		hWnd=hwnd;
	}
	void SetHwnd(HWND hwnd)
	{
		hWnd=hwnd;
	}
protected:
	int make_svc_handler(SVC_HANDLER*& sh)
	{
		int r=ParentClass::make_svc_handler(sh);
		sh->SetInitArgs(acceptorId,hWnd);
		return r;
	}
private:
	UINT acceptorId;
	HWND hWnd;
};

template<typename T>
	class My_ACE_ConnectorT : public ACE_Connector<MyServiceHandlerT<T>,ACE_SOCK_CONNECTOR>
{
	typedef ACE_Connector<MyServiceHandlerT<T>,ACE_SOCK_CONNECTOR> ParentClass;
	typedef typename ParentClass::handler_type SVC_HANDLER;
public:
	void SetInitArgs(UINT id,HWND hwnd)
	{
		connectorId=id;
		hWnd=hwnd;
	}
	void SetHwnd(HWND hwnd)
	{
		hWnd=hwnd;
	}
protected:
	int make_svc_handler(SVC_HANDLER*& sh)
	{
		int r=ParentClass::make_svc_handler(sh);
		sh->SetInitArgs(connectorId,hWnd);
		return r;
	}
private:
	UINT connectorId;
	HWND hWnd;
};

class CommSvcWorks
{
	typedef MyServiceHandlerT<CommSvcWorks> MyServiceHandler;
	typedef My_ACE_AcceptorT<CommSvcWorks> My_ACE_Acceptor;
	typedef My_ACE_ConnectorT<CommSvcWorks> My_ACE_Connector;
	typedef MyDgramHandlerT<CommSvcWorks> MyDgramHandler;
	typedef MyMcastDgramHandlerT<CommSvcWorks> MyMcastDgramHandler;

	typedef std::map<ACE_HANDLE,MyServiceHandler*> ServiceHandlers;
	typedef std::map<UINT,My_ACE_Acceptor> Acceptors;
	typedef std::map<UINT,My_ACE_Connector> Connectors;
	typedef std::vector<ACE_HANDLE> AceHandles;
	typedef std::map<UINT,AceHandles> AcceptorConnectorHandles;
	typedef std::map<UINT,MyDgramHandler*> DgramHandlers;
	typedef std::map<UINT,MyMcastDgramHandler*> McastDgramHandlers;
public:
	static inline void BeginEventLoop(void)
	{
		ACE_Object_Manager::instance();
		ACE_Thread_Manager::instance()->spawn(svc);
	}
	static inline void EndEventLoop(void)
	{
		ClearAcceptorAndConnectors();
		ClearDgramHandlers();
		ClearMcastDgramHandlers();
		CloseBcastDgram();
		Reactor::instance()->end_reactor_event_loop();
		ACE_Thread_Manager::instance()->wait();
		Reactor::instance()->close();
	}
public:
	static inline UINT StartListening(UINT port,HWND hWnd)
	{
		UINT id=AcceptorBoundRef();
		if(id>0x0fffffff)
			return 0xffffffff;
		My_ACE_Acceptor acceptor;
		AcceptorsRef()[id]=acceptor;
		Acceptors::iterator it=AcceptorsRef().find(id);
		
		ACE_INET_Addr addr(port);
		it->second.SetInitArgs(id,hWnd);
		int r=it->second.open(addr,Reactor::instance());

		AcceptorBoundRef()++;
		return id;
	}
	static inline BOOL EndListening(UINT id)
	{
		ShutdownAcceptorOrConnectorConnection(id);
		Acceptors::iterator it=AcceptorsRef().find(id);
		if(it!=AcceptorsRef().end())
		{
			it->second.close();
			return TRUE;
		}
		return FALSE;
	}
	static inline void ShutdownAcceptorOrConnectorConnection(UINT id)
	{
		AcceptorConnectorHandles::iterator it=AcceptorConnectorHandlesRef().find(id);
		if(it==AcceptorConnectorHandlesRef().end())
		{
			AceHandles handles;
			handles.assign(it->second.begin(),it->second.end());
			AceHandles::iterator hit=handles.begin();
			while(hit!=handles.end())
			{
				MyServiceHandler* msh=GetSvcHandler(*hit);
				if(msh)
					msh->close();
				hit++;
			}
		}
	}
	static inline UINT ConnectServer(const CString& svrAddr,HWND hWnd)
	{
		UINT id=ConnectorBoundRef();
		if(id>(UINT)0xfffffffe)
			return 0xffffffff;
		My_ACE_Connector connector;
		ConnectorsRef()[id]=connector;
		Connectors::iterator it=ConnectorsRef().find(id);

		ACE_INET_Addr addr(svrAddr);
		it->second.SetInitArgs(id,hWnd);
		MyServiceHandler* pSvcHandler=NULL;
		int r=it->second.connect(pSvcHandler,addr);

		ConnectorBoundRef()++;
		return id;
	}
	static inline BOOL DisconnectServer(UINT id)
	{
		ShutdownAcceptorOrConnectorConnection(id);
		Connectors::iterator it=ConnectorsRef().find(id);
		if(it!=ConnectorsRef().end())
		{
			it->second.close();
			return TRUE;
		}
		return FALSE;
	}
	static inline void ClearAcceptorAndConnectors(void)
	{
		Acceptors::iterator it1=AcceptorsRef().begin();
		while(it1!=AcceptorsRef().end())
		{
			EndListening(it1->first);
			it1++;
		}
		AcceptorsRef().clear();
		Connectors::iterator it2=ConnectorsRef().begin();
		while(it2!=ConnectorsRef().end())
		{
			DisconnectServer(it2->first);
			it2++;
		}
		ConnectorsRef().clear();
	}
	static inline UINT StartDgram(UINT port,HWND hWnd)
	{
		UINT id=DgramHandlerBoundRef();
		MyDgramHandler* pDgram=new MyDgramHandler();
		pDgram->SetInitArgs(id,hWnd,port);
		pDgram->open(NULL);

		DgramHandlerBoundRef()++;
		return id;
	}
	static inline BOOL EndDgram(UINT id)
	{
		MyDgramHandler* pDgram=GetDgramHandler(id);
		if(pDgram)
		{
			pDgram->close(0);
			return TRUE;
		}
		return FALSE;
	}
	static inline MyDgramHandler* GetDgramHandler(UINT id)
	{
		DgramHandlers::iterator it=DgramHandlersRef().find(id);
		if(it!=DgramHandlersRef().end())
			return it->second;
		return NULL;
	}
	static inline void ClearDgramHandlers(void)
	{
		int len=DgramHandlersRef().size();
		if(len<=0)
			return;
		typedef MyDgramHandler* MyDgramHandlerPtr;
		MyDgramHandlerPtr* dgrams=new MyDgramHandlerPtr[len];
		int i=0;
		DgramHandlers::iterator it=DgramHandlersRef().begin();
		while(it!=DgramHandlersRef().end())
		{
			MyDgramHandler* pDgram=it->second;
			dgrams[i++]=pDgram;			
			it++;
		}
		for(i=0;i<len;i++)
		{
			dgrams[i]->close(0);
		}
		DgramHandlersRef().clear();
		delete[] dgrams;
	}
	static inline UINT StartMcastDgram(const CString& mcast,HWND hWnd)
	{
		UINT id=McastDgramHandlerBoundRef();
		MyMcastDgramHandler* pDgram=new MyMcastDgramHandler();
		pDgram->SetInitArgs(id,hWnd,mcast);
		pDgram->open(NULL);

		McastDgramHandlerBoundRef()++;
		return id;
	}
	static inline BOOL EndMcastDgram(UINT id)
	{
		MyMcastDgramHandler* pDgram=GetMcastDgramHandler(id);
		if(pDgram)
		{
			pDgram->close(0);
			return TRUE;
		}
		return FALSE;
	}
	static inline MyMcastDgramHandler* GetMcastDgramHandler(UINT id)
	{
		McastDgramHandlers::iterator it=McastDgramHandlersRef().find(id);
		if(it!=McastDgramHandlersRef().end())
			return it->second;
		return NULL;
	}
	static inline void ClearMcastDgramHandlers(void)
	{
		int len=McastDgramHandlersRef().size();
		if(len<=0)
			return;
		typedef MyMcastDgramHandler* MyMcastDgramHandlerPtr;
		MyMcastDgramHandlerPtr* dgrams=new MyMcastDgramHandlerPtr[len];
		int i=0;
		McastDgramHandlers::iterator it=McastDgramHandlersRef().begin();
		while(it!=McastDgramHandlersRef().end())
		{
			MyMcastDgramHandler* pDgram=it->second;
			dgrams[i++]=pDgram;			
			it++;
		}
		for(i=0;i<len;i++)
		{
			dgrams[i]->close(0);
		}
		McastDgramHandlersRef().clear();
		delete[] dgrams;
	}
	static inline BOOL SendBcastDgram(UINT port,const CString& msg)
	{
		ACE_SOCK_Dgram_Bcast& dgram=BcastDgramRef();
		if(dgram.get_handle()==ACE_INVALID_HANDLE)
			dgram.open(ACE_Addr::sap_any);
		int len=msg.GetLength();
		for(int k=0;k<len;k+=COMM_PACKAGE_LEN)
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			for(int i=0;i<COMM_PACKAGE_LEN && k+i<len;i++)
			{
				buf.SetAt(i,msg[k+i]);
			}
			if(dgram.send(buf,COMM_PACKAGE_LEN,port)<=0)
				return FALSE;
		}
		if(len%COMM_PACKAGE_LEN==0)//字符数恰好为包长整数倍时补发一个空包标志结束
		{
			CString buf((char)0,COMM_PACKAGE_LEN+1);
			if(dgram.send(buf,COMM_PACKAGE_LEN,port)<=0)
				return FALSE;
		}
		return TRUE;
	}
	static inline void CloseBcastDgram(void)
	{
		ACE_SOCK_Dgram_Bcast& dgram=BcastDgramRef();
		if(dgram.get_handle()!=ACE_INVALID_HANDLE)
			dgram.close();
	}
public:
	static inline void SetSvcHandler(UINT id,ACE_HANDLE handle,MyServiceHandler* pSvc)
	{
		SvcHandlersRef()[handle]=pSvc;
		AcceptorConnectorHandles::iterator it=AcceptorConnectorHandlesRef().find(id);
		if(it==AcceptorConnectorHandlesRef().end())
		{
			AceHandles handles;
			handles.push_back(handle);
			AcceptorConnectorHandlesRef()[id]=handles;
		}
		else
		{
			it->second.push_back(handle);
		}
	}
	static inline MyServiceHandler* GetSvcHandler(ACE_HANDLE handle)
	{
		ServiceHandlers::iterator it=SvcHandlersRef().find(handle);
		if(it!=SvcHandlersRef().end())
		{
			return it->second;
		}
		return NULL;
	}
	static inline void RemoveSvcHandler(UINT id,ACE_HANDLE handle)
	{
		SvcHandlersRef().erase(handle);
		AcceptorConnectorHandles::iterator it=AcceptorConnectorHandlesRef().find(id);
		if(it==AcceptorConnectorHandlesRef().end())
		{
			AceHandles::iterator hit=std::find(it->second.begin(),it->second.end(),handle);
			it->second.erase(hit);
			if(it->second.size()<=0)
				AcceptorConnectorHandlesRef().erase(id);
		}
	}
public:
	static inline void SetDgramHandler(UINT id,MyDgramHandler* ptr)
	{
		DgramHandlersRef()[id]=ptr;
	}
	static inline void RemoveDgramHandler(UINT id)
	{
		DgramHandlersRef().erase(id);
	}
	static inline void SetMcastDgramHandler(UINT id,MyMcastDgramHandler* ptr)
	{
		McastDgramHandlersRef()[id]=ptr;
	}
	static inline void RemoveMcastDgramHandler(UINT id)
	{
		McastDgramHandlersRef().erase(id);
	}
private:
	static inline ServiceHandlers& SvcHandlersRef(void)
	{
		static ServiceHandlers svcHandlers;
		return svcHandlers;
	}
	static inline AcceptorConnectorHandles& AcceptorConnectorHandlesRef(void)
	{
		static AcceptorConnectorHandles handles;
		return handles;
	}
	static inline DgramHandlers& DgramHandlersRef(void)
	{
		static DgramHandlers dgramHandlers;
		return dgramHandlers;
	}
	static inline UINT& DgramHandlerBoundRef(void)
	{
		static UINT bound=0;
		return bound;
	}
	static inline McastDgramHandlers& McastDgramHandlersRef(void)
	{
		static McastDgramHandlers dgramHandlers;
		return dgramHandlers;
	}
	static inline UINT& McastDgramHandlerBoundRef(void)
	{
		static UINT bound=0;
		return bound;
	}
	static inline ACE_SOCK_Dgram_Bcast& BcastDgramRef(void)
	{
		static ACE_SOCK_Dgram_Bcast dgram;
		return dgram;
	}
private:
	static unsigned long __cdecl svc(void*)
	{
		Reactor::instance()->run_reactor_event_loop();
		return 0;
	}
	static inline Acceptors& AcceptorsRef(void)
	{
		static Acceptors acceptors;
		return acceptors;
	}
	static inline UINT& AcceptorBoundRef(void)
	{
		static UINT bound=ACCEPTOR_START_INDEX;
		return bound;
	}
	static inline Connectors& ConnectorsRef(void)
	{
		static Connectors connectors;
		return connectors;
	}
	static inline UINT& ConnectorBoundRef(void)
	{
		static UINT bound=CONNECTOR_START_INDEX;
		return bound;
	}
};

typedef MyServiceHandlerT<CommSvcWorks> MyServiceHandler;
typedef My_ACE_AcceptorT<CommSvcWorks> My_ACE_Acceptor;
typedef My_ACE_ConnectorT<CommSvcWorks> My_ACE_Connector;
typedef MyDgramHandlerT<CommSvcWorks> MyDgramHandler;
typedef MyMcastDgramHandlerT<CommSvcWorks> MyMcastDgramHandler;

class MySocket : public IDispatch
{
public:
	virtual UINT __stdcall StartListening(UINT port)
	{
		return CommSvcWorks::StartListening(port,hWnd);		
	}
	virtual BOOL __stdcall EndListening(UINT id)
	{
		return CommSvcWorks::EndListening(id);
	}	
	virtual UINT __stdcall ConnectServer(BSTR svrAddr)
	{
		return CommSvcWorks::ConnectServer(CString(svrAddr),hWnd);
	}
	virtual BOOL __stdcall DisconnectServer(UINT id)
	{
		return CommSvcWorks::DisconnectServer(id);
	}
	virtual void __stdcall ShutdownConnection(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(msh)
			msh->close();
	}
	virtual BSTR __stdcall GetLocalHostName(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return NULL;
		ACE_INET_Addr inetAddr;
		msh->peer().get_local_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return NULL;
		char buf[1025];
		int r=ptr->get_host_name(buf,1024);
		if(r<0)return NULL;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall GetLocalIp(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return NULL;
		ACE_INET_Addr inetAddr;
		msh->peer().get_local_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return NULL;
		char buf[1025];
		const char* r=ptr->get_host_addr(buf,1024);
		if(!r)return NULL;
		return CString(buf).AllocSysString();
	}
	virtual UINT __stdcall GetLocalPort(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return 0;
		ACE_INET_Addr inetAddr;
		msh->peer().get_local_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return 0;
		return ptr->get_port_number();
	}
	virtual BSTR __stdcall GetRemoteHostName(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return NULL;
		ACE_INET_Addr inetAddr;
		msh->peer().get_remote_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return NULL;
		char buf[1025];
		int r=ptr->get_host_name(buf,1024);
		if(r<0)return NULL;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall GetRemoteIp(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return NULL;
		ACE_INET_Addr inetAddr;
		msh->peer().get_remote_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return NULL;
		char buf[1025];
		const char* r=ptr->get_host_addr(buf,1024);
		if(!r)return NULL;
		return CString(buf).AllocSysString();
	}
	virtual UINT __stdcall GetRemotePort(UINT handle)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return 0;
		ACE_INET_Addr inetAddr;
		msh->peer().get_remote_addr(inetAddr);
		ACE_INET_Addr* ptr=&inetAddr;
		if(!ptr)return 0;
		return ptr->get_port_number();
	}
	virtual BOOL __stdcall MsgSetHwnd(UINT handle,UINT hwnd)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return FALSE;
		msh->SetHwnd((HWND)hwnd);
		return TRUE;
	}
	virtual BOOL __stdcall SendMsg(UINT handle,BSTR msg)
	{
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return FALSE;
		msh->SendMsg(CString(msg));
		return TRUE;
	}
	virtual BSTR __stdcall RecvMsg(UINT handle)
	{
		CString ret("");
		MyServiceHandler* msh=CommSvcWorks::GetSvcHandler((ACE_HANDLE)handle);
		if(!msh)return NULL;
		ACE_Message_Block* msgBlock=NULL;
		msh->getq(msgBlock,0);
		if(!msgBlock)return NULL;
		int len=msgBlock->size();
		if(len>0)
		{
			char* dataBuf=new char[len+1];
			::strncpy(dataBuf,msgBlock->base(),len);
			dataBuf[len]=0;
			ret=CString(dataBuf);
			delete[] dataBuf;
		}		
		msgBlock->release();
		return ret.AllocSysString();
	}
	virtual UINT __stdcall StartDgram(UINT port)
	{
		return (UINT)CommSvcWorks::StartDgram(port,hWnd);
	}
	virtual BOOL __stdcall EndDgram(UINT id)
	{
		return CommSvcWorks::EndDgram(id);
	}
	virtual BOOL __stdcall DgramSetHwnd(UINT id,UINT hwnd)
	{
		MyDgramHandler* mdh=CommSvcWorks::GetDgramHandler(id);
		if(!mdh)return FALSE;
		mdh->SetHwnd((HWND)hwnd);
		return TRUE;
	}
	virtual BOOL __stdcall SendDgram(UINT id,BSTR msg)
	{
		MyDgramHandler* mdh=CommSvcWorks::GetDgramHandler(id);
		if(!mdh)return FALSE;
		CString msgStr(msg);
		int split=msgStr.Find('>');
		if(split<0)return FALSE;		
		BOOL r=mdh->SendMsg(msgStr.Mid(split+1),msgStr.Left(split));
		return r;
	}
	virtual BSTR __stdcall RecvDgram(UINT id)
	{
		CString ret("");
		MyDgramHandler* mdh=CommSvcWorks::GetDgramHandler(id);
		if(!mdh)return NULL;
		ACE_Message_Block* msgBlock=NULL;
		mdh->getq(msgBlock,0);
		if(!msgBlock)return NULL;
		int len=msgBlock->size();
		if(len>0)
		{
			char* dataBuf=new char[len+1];
			::strncpy(dataBuf,msgBlock->base(),len);
			dataBuf[len]=0;
			ret=CString(dataBuf);
			delete[] dataBuf;
		}		
		msgBlock->release();
		return ret.AllocSysString();
	}
	virtual UINT __stdcall StartMcastDgram(BSTR mcast)
	{
		return (UINT)CommSvcWorks::StartMcastDgram(CString(mcast),hWnd);
	}
	virtual BOOL __stdcall EndMcastDgram(UINT id)
	{
		return CommSvcWorks::EndMcastDgram(id);
	}
	virtual BOOL __stdcall McastDgramSetHwnd(UINT id,UINT hwnd)
	{
		MyMcastDgramHandler* mdh=CommSvcWorks::GetMcastDgramHandler(id);
		if(!mdh)return FALSE;
		mdh->SetHwnd((HWND)hwnd);
		return TRUE;
	}
	virtual BOOL __stdcall SendMcastDgram(UINT id,BSTR msg)
	{
		MyMcastDgramHandler* mdh=CommSvcWorks::GetMcastDgramHandler(id);
		if(!mdh)return FALSE;
		CString msgStr(msg);	
		BOOL r=mdh->SendMsg(msgStr);
		return r;
	}
	virtual BSTR __stdcall RecvMcastDgram(UINT id)
	{
		CString ret("");
		MyMcastDgramHandler* mdh=CommSvcWorks::GetMcastDgramHandler(id);
		if(!mdh)return NULL;
		ACE_Message_Block* msgBlock=NULL;
		mdh->getq(msgBlock,0);
		if(!msgBlock)return NULL;
		int len=msgBlock->size();
		if(len>0)
		{
			char* dataBuf=new char[len+1];
			::strncpy(dataBuf,msgBlock->base(),len);
			dataBuf[len]=0;
			ret=CString(dataBuf);
			delete[] dataBuf;
		}		
		msgBlock->release();
		return ret.AllocSysString();
	}
	virtual BOOL __stdcall SendBcastDgram(UINT port,BSTR msg)
	{
		return CommSvcWorks::SendBcastDgram(port,CString(msg));
	}
public:
	BEGIN_INTF(MySocket)
		METHOD(StartListening)
		METHOD(EndListening)
		METHOD(ConnectServer)
		METHOD(DisconnectServer)
		METHOD(ShutdownConnection)
		METHOD(GetLocalHostName)
		METHOD(GetLocalIp)
		METHOD(GetLocalPort)
		METHOD(GetRemoteHostName)
		METHOD(GetRemoteIp)
		METHOD(GetRemotePort)
		METHOD(MsgSetHwnd)
		METHOD(SendMsg)
		METHOD(RecvMsg)
		METHOD(StartDgram)
		METHOD(EndDgram)
		METHOD(DgramSetHwnd)
		METHOD(SendDgram)
		METHOD(RecvDgram)
		METHOD(StartMcastDgram)
		METHOD(EndMcastDgram)
		METHOD(McastDgramSetHwnd)
		METHOD(SendMcastDgram)
		METHOD(RecvMcastDgram)
		METHOD(SendBcastDgram)
	END_INTF()
public:
	MySocket():hWnd(NULL)
	{}
	void Init(HWND hwnd)
	{
		hWnd=hwnd;
	}
private:
	HWND hWnd;
};

#endif // !defined(AFX_MYSOCKET_H__9484A5E4_34CD_4AD4_9B4C_A23875C835A7__INCLUDED_)

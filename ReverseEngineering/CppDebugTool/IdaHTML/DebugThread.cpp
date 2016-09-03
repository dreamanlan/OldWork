#include "StdAfx.h"
#include ".\debugthread.h"
#include "HtmlWindow.h"

DebugThread* DebugThread::Start(void)
{
	//创建等待线程启动的事件
	HANDLE stEve=::CreateEvent(NULL,FALSE,FALSE,NULL);
	//将事件句柄用作参数传给线程,线程在触发事件后便不会再使用它（故为局部变量）
	DWORD arg=(DWORD)stEve;
	HANDLE ht=(HANDLE)::_beginthreadex(NULL,0,&DebugThread::Loop,(LPVOID)&arg,0,NULL);
	if(ht)
	{
		::WaitForSingleObject(stEve,INFINITE);
		((DebugThread*)arg)->hThread=ht;
	}
	else
	{
		arg=NULL;
	}
	::CloseHandle(stEve);
	return (DebugThread*)arg;
}

UINT WINAPI DebugThread::Loop(LPVOID obj)
{	
	//得到启动等待事件句柄
	HANDLE stEve=*(HANDLE*)obj;
	DebugThread dt;
	//将当前线程相关的类实例回传给启动函数，启动函数在线程终止后便不再使用该实例（故为局部变量）
	*(DebugThread**)obj=&dt;
	//告诉等待的启动函数可以返回了
	::SetEvent(stEve);
	while(!dt.isTerm)
	{		
		dt.OnceWork();
	}
	return 0;
}

void DebugThread::Terminate(DebugThread*& pObj)
{
	if(pObj==NULL)
		return;
	HANDLE ht=pObj->hThread;
	pObj->TerminateSignal();
	pObj=NULL;//确保线程终止后不再有类实例引用
		
	::WaitForSingleObject(ht,INFINITE);
	::CloseHandle(ht);
}

DebugThread::DebugThread(void)
{
	isTerm=false;
	hEvent=::CreateEvent(NULL,FALSE,FALSE,NULL);
}

DebugThread::~DebugThread(void)
{
	::CloseHandle(hEvent);
}

void DebugThread::TerminateSignal(void)
{
	isTerm=true;
	Signal();
}

void DebugThread::Signal(void)
{
	::SetEvent(hEvent);
}

void DebugThread::OnceWork(void)
{
	DWORD r=::WaitForSingleObject(hEvent,INFINITE);
	if(isTerm)
		return;
	dlg.SendMessage(WM_MY_RUN_REQUESTS,0,0);
}

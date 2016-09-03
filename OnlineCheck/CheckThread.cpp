#include "StdAfx.h"
#include ".\CheckThread.h"
#include "Schedule.h"

#define BUFFER_SIZE			512
#define PERFORMANCE_TIMES	10000

UINT WINAPI AccessSocket::CheckThread(LPVOID obj)
{
	char errBuf[256];
	MSG msg;
	Schedule* pSchedule=static_cast<Schedule*>(obj);
	DWORD tid=::GetCurrentThreadId();

	DWORD num=pSchedule->connPerThread;
	HANDLE* pEvents=new HANDLE[num];
	AccessSocket* pAS=new AccessSocket[num];
	for(DWORD i=0;i<num;i++)
	{
		pEvents[i]=::CreateEvent(NULL,TRUE,TRUE,NULL);
		pAS[i].Init(pSchedule,pEvents[i],i,tid);
	}
	pSchedule->PushAThreadInstance(pEvents);
	while(!pSchedule->isTerminate)
	{
		if(pSchedule->isSuspend)
		{
			::Sleep(1000);
			for(i=0;i<num;i++)
			{				
				pAS[i].ClearCommunication();
			}
			while(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
			{
				if (msg.message == WM_QUIT)  
					return 0;
				DispatchMessage(&msg);
			}
			continue;
		}
		DWORD r=::MsgWaitForMultipleObjects(num,pEvents,FALSE,INFINITE,QS_ALLEVENTS);
		if(r>=WAIT_OBJECT_0 && r<=WAIT_OBJECT_0+num-1)
		{
			if(pSchedule->isTerminate)
				break;
			if(pSchedule->isSuspend)
				continue;

			int ix=r-WAIT_OBJECT_0;
			pAS[ix].CalcCount();
			if(pSchedule->sleepPerLink>0)
			{
				::Sleep(pSchedule->sleepPerLink);
			}
			pAS[ix].Run();
		}
		else if(r==WAIT_OBJECT_0+num)
		{        
			while(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
			{
				if (msg.message == WM_QUIT)  
					return 0;
				DispatchMessage(&msg);
			}
		}
		else
		{
			::sprintf(errBuf,"thread %u wait failed",tid);
			::PrintLastErrorMsg(errBuf);
		}
	}
	pSchedule->EraseAThreadInstance(pEvents);
	delete[] pAS;
	for(i=0;i<num;i++)
	{
		::ResetEvent(pEvents[i]);
		::CloseHandle(pEvents[i]);
	}
	delete[] pEvents;
	::printf("\r\nthread %u exit",pSchedule->GetThreadIndex(tid));
	return 0;
}

AccessSocket::AccessSocket(void):pSchedule(NULL),hEvent(NULL),connIndex(0),buffer(NULL),bufptr(0),isSuccess(false)
{
	buffer=new char[BUFFER_SIZE];
	::ZeroMemory(buffer,BUFFER_SIZE);
	::ZeroMemory(hostName,HOSTNAME_LENGTH);
	::ZeroMemory(urlPath,URL_LENGTH);
	::ZeroMemory(sendTemplate1,SEND_DATA_LENGTH);
	::ZeroMemory(sendTemplate2,SEND_DATA_LENGTH);
	::ZeroMemory(sendData,SEND_DATA_LENGTH);
	::ZeroMemory(curName,33);
	::ZeroMemory(&stTime,sizeof(stTime));
}

AccessSocket::~AccessSocket()
{
	delete[] buffer;
}

void AccessSocket::Init(Schedule* p,HANDLE event,DWORD connindex,DWORD tid)
{
	pSchedule=p;
	hEvent=event;
	connIndex=connindex;
	threadID=tid;
	
	CString target=pSchedule->targetUrl;
	CUrl url;
	url.CrackUrl(target);
	::strcpy(hostName,url.GetHostName());
	portNum=url.GetPortNumber();
	target=url.GetUrlPath();
	::strcpy(urlPath,target);
	int i=target.Find("[USERNAME]");
	::sprintf(sendTemplate1,"HEAD %s",target.Left(i));
	::sprintf(sendTemplate2,"%s HTTP/1.0\r\n\r\n",target.Mid(i+10));
}

CString AccessSocket::GetObjInfo(void)
{
#ifndef NO_CONSOLE_MSG
	CString temp;
	DWORD proxyIndex=pSchedule->GetProxyIndex(proxyID);
	if(proxyID==DIRECT_CONNECT)
		temp.Format("thread:%u=%u,%u direct:%s:%u %s",pSchedule->GetThreadIndex(threadID),threadID,connIndex,hostName,portNum,curName);
	else if(proxyIndex!=NOUSABLE_PROXY)
	{
		in_addr addr;
		addr.S_un.S_addr=pSchedule->proxyStatus[proxyIndex].IP;
		temp.Format("thread:%u=%u,%u proxy:%u=%s:%u %s",pSchedule->GetThreadIndex(threadID),threadID,connIndex,proxyIndex,::inet_ntoa(addr),pSchedule->proxyStatus[proxyIndex].Port,curName);
	}
	else
		return "";
	return temp;
#else
	return "";
#endif
}

void AccessSocket::PrintError(DWORD err,LPCSTR title)
{
#ifndef NO_CONSOLE_MSG
	CString temp;
	DWORD proxyIndex=pSchedule->GetProxyIndex(proxyID);
	if(proxyIndex==DIRECT_CONNECT)
		temp.Format("thread:%u=%u,%u direct:%s:%u %s %s",pSchedule->GetThreadIndex(threadID),threadID,connIndex,hostName,portNum,curName,title);
	else if(proxyIndex<pSchedule->proxyNum)
	{
		in_addr addr;
		addr.S_un.S_addr=pSchedule->proxyStatus[proxyIndex].IP;
		temp.Format("thread:%u=%u,%u proxy:%u=%s:%u %s %s",pSchedule->GetThreadIndex(threadID),threadID,connIndex,proxyIndex,::inet_ntoa(addr),pSchedule->proxyStatus[proxyIndex].Port,curName,title);
	}
	else
		return;
	::PrintErrorMsg(err,temp);
#endif
}
void AccessSocket::StartCount(void)
{	
#ifndef NO_CONSOLE_MSG2
	BOOL r=::QueryPerformanceCounter(&stTime);
#endif
}
void AccessSocket::CalcCount(void)
{
#ifndef NO_CONSOLE_MSG2
	static DWORD count=0,totalTime=0;
	count = (count+1) % PERFORMANCE_TIMES;
	LARGE_INTEGER edTime;
	BOOL r=::QueryPerformanceCounter(&edTime);
	__int64 delta=edTime.QuadPart-stTime.QuadPart;
	__int64 f=pSchedule->countFrequency;
	if(f>0 && delta>0 && stTime.QuadPart>0)
	{
		DWORD rate=(DWORD)(1000*delta/f);
		totalTime+=rate;
		if(count==0)
		{
			DWORD aver=totalTime/PERFORMANCE_TIMES;
			PRINT_CONSOLE_MSG2("\r\nperformance statistic: [average %ums/link]",aver);
			pSchedule->averPerformance=aver;
			totalTime=0;
		}
		if(isSuccess)
			pSchedule->CalcCount(proxyID,rate);
	}
#endif
}
void AccessSocket::StartCommunication(void)
{
	isSuccess=false;
	pSchedule->IncreaseProxyConn(proxyID);
}
void AccessSocket::SuccessCommunication(void)
{
	isSuccess=true;
	pSchedule->IncreaseThreadCount(threadID,proxyID);
}
void AccessSocket::EndCommunication(void)
{
	pSchedule->DecreaseProxyConn(proxyID);
	BOOL r=ShutDown(2);
	Close();
	r=::SetEvent(hEvent);
}
void AccessSocket::ClearCommunication(void)
{
	if(m_hSocket!=INVALID_SOCKET)
	{
		pSchedule->ClearProxyConn(proxyID);
		BOOL r=ShutDown(2);
		Close();
	}
}
bool AccessSocket::CheckName(void)
{
	if(curName[0]==0)
	{
		pSchedule->PopName(curName);
	}
	if(curName[0]==0)
	{
		return false;
	}
	return true;
}

void AccessSocket::Run(void)
{
	BOOL r=::ResetEvent(hEvent);
	StartCount();
	if(!CheckName())
	{
		PRINT_CONSOLE_MSG2("\r\nthread:%u=%u,%u wait for new name list for %u milliseconds...",pSchedule->GetThreadIndex(threadID),threadID,connIndex,WAIT_QUEUE_TIME);
		::Sleep(WAIT_QUEUE_TIME);
		r=::SetEvent(hEvent);
		return;
	}
	proxyID=pSchedule->GetAUsableProxy(threadID);
	if(proxyID==NOUSABLE_PROXY)
	{
		PRINT_CONSOLE_MSG2("\r\nthread:%u=%u,%u wait for proxy for %u milliseconds...",pSchedule->GetThreadIndex(threadID),threadID,connIndex,WAIT_PROXY_TIME);
		::Sleep(WAIT_PROXY_TIME);
		r=::SetEvent(hEvent);
		return;
	}
	buffer[0]=0;
	bufptr=0;
	Close();
	r=Create();
	if(!r)
	{
		DWORD lastErr=::GetLastError();
		if(lastErr==WSAENOBUFS || lastErr==WSAEMFILE)
			::printf("\r\nthread:%u=%u,%u SOCKET create failed , maybe ThreadNum*ConnPerThread too big ! ERROR MSG : %s",pSchedule->GetThreadIndex(threadID),threadID,connIndex,::GetErrorMsg(lastErr));
		else
			PrintError(lastErr,"CreateSocket");
		r=::SetEvent(hEvent);
		return;
	}
	if(proxyID!=NOUSABLE_PROXY && proxyID!=DIRECT_CONNECT)
	{
		in_addr addr;
		addr.S_un.S_addr=pSchedule->GetProxyIP(proxyID);
		DWORD port=pSchedule->GetProxyPort(proxyID);
		SetProxy(PROXYTYPE_SOCKS4A,::inet_ntoa(addr),port);
	}
	r=Connect(hostName,portNum);
	StartCommunication();
	if(!r)
	{
		DWORD lastErr=GetLastError();
		if(lastErr!=WSAEWOULDBLOCK)
		{
			PrintError(lastErr,"Connect");
			EndCommunication();
			return;
		}
	}
}
void AccessSocket::OnProxyOperationFailed(int nOpID)
{
	PRINT_CONSOLE_MSG("\r\n%s proxy operation error:%d",GetObjInfo(),this->GetLastProxyError());
	EndCommunication();
}
void AccessSocket::OnListenFinished(unsigned long &retProxyIp,int &retProxyPort)
{
}
void AccessSocket::OnAccept(int nErrorCode)
{
	CAsyncProxySocket::OnAccept(nErrorCode);
}
void AccessSocket::OnOutOfBandData(int nErrorCode)
{
	CAsyncProxySocket::OnOutOfBandData(nErrorCode);
}
void AccessSocket::OnClose(int nErrorCode)
{
	CAsyncProxySocket::OnClose(nErrorCode);
	if(nErrorCode==0)
	{
		if(bufptr>0)
		{
			bool success=false;
			int curPos=0;
			char* seps="\r\n";
			char* token=::strtok(buffer,seps);
			while(token!=NULL)
			{
				if(::strspn(token,"Location:")!=0)
				{
					success=true;
					token+=9;
					while(token[0]==' ' || token[0]=='	')token++;
					if(pSchedule->IsWantedStatus(token))
					{
						pSchedule->PushSelect(curName);							
						PRINT_CONSOLE_MSG("\r\n%s received response , length:%u\r\n%s\r\n         ***%s status is consilient***\r\n",GetObjInfo(),bufptr,token,curName);							
					}
					else
					{
						PRINT_CONSOLE_MSG("\r\n%s received response , length:%u\r\n%s\r\n         ***%s status is't consilient***\r\n",GetObjInfo(),bufptr,token,curName);
					}
					SuccessCommunication();
					curName[0]=0;
					break;
				}
				token=::strtok(NULL,seps);
			}
			if(!success)
			{
				PRINT_CONSOLE_MSG("\r\n         ***check %s status,but get unknown response***\r\n",curName);
			}
		}
		else
		{
			PRINT_CONSOLE_MSG("\r\n%s connection closed and no response received",GetObjInfo());
		}
		
		EndCommunication();
	}
	else
	{
		PrintError(nErrorCode,"OnClose");
		EndCommunication();
	}
}
void AccessSocket::OnSend(int nErrorCode)
{
	CAsyncProxySocket::OnSend(nErrorCode);
	if(nErrorCode==0)
	{	
		int n=GetProxyOperation();
		if(n!=0)
		{
			return;
		}
		::sprintf(sendData,"%s%s%s",sendTemplate1,curName,sendTemplate2);
		PRINT_CONSOLE_MSG("\r\n%s send request :\r\n%s",GetObjInfo(),sendData);
		int num=Send(sendData,::strlen(sendData));
		if(!num)
		{
			DWORD lastErr=GetLastError();
			if(lastErr!=WSAEWOULDBLOCK)
			{
				PrintError(lastErr,"Send");
				EndCommunication();
				return;
			}
		}
	}
	else
	{
		PrintError(nErrorCode,"OnSend");
		EndCommunication();
	}
}
void AccessSocket::OnReceive(int nErrorCode)
{
	CAsyncProxySocket::OnReceive(nErrorCode);
	if(nErrorCode==0)
	{
		int n=GetProxyOperation();
		for(;n==0;)
		{
			if(bufptr>=BUFFER_SIZE-1)
			{
				EndCommunication();
				::ZeroMemory(buffer,BUFFER_SIZE);
				bufptr=0;
				break;
			}
			int nRead=Receive(buffer+bufptr,BUFFER_SIZE-bufptr);
			switch (nRead)
			{
			case 0:
				break;
			case SOCKET_ERROR:
				{
					DWORD lastErr=GetLastError();
					if (lastErr!=WSAEWOULDBLOCK) 
					{
						PrintError(lastErr,"Receive");
						EndCommunication();
					}
				}
				break;
			default:
				buffer[bufptr+nRead] = 0;
				bufptr+=nRead;
				break;
			}
			if(!nRead || nRead==SOCKET_ERROR)
				break;
		}
	}
	else
	{
		PrintError(nErrorCode,"OnReceive");
		EndCommunication();
	}
}
void AccessSocket::OnConnect(int nErrorCode)
{
	CAsyncProxySocket::OnConnect(nErrorCode);

	if(nErrorCode!=0)
	{
		PrintError(nErrorCode,"OnConnect");
		EndCommunication();
	}
}

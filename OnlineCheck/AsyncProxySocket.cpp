/*CAsyncProxySocket by Tim Kosse (Tim.Kosse@gmx.de)
                 Version 1.3 (2001-12-13)
--------------------------------------------------------

Introduction:
-------------

This class is a CAsyncSocket derived class. With this class you
can connect through SOCKS4/5 and HTTP 1.1 proxies. This class works 
as semi-transparent layer between you own class and CAsyncSocket.
This class is used in FileZilla, a powerful open-source FTP client.
It can be found under http://sourceforge.net/projects/filezilla
For more information about SOCKS4/5 goto 
http://www.socks.nec.com/socksprot.html
For more information about HTTP 1.1 goto http://www.rfc-editor.org
and search for RFC2616

How to use?
-----------

You don't have to change much in you already existing code to use
CAsyncProxySocket.
To use it you've to derive you own class from CAsyncProxySocket and 
you've to provide a definition for OnProxyOperationFailed(int nOpID) and 
OnListenFinished(unsigned long &retProxyIp,int &retProxyPort)=0;
When you create an instance of your derived class, you should call
SetProxy.
If you overload the OnReceive or OnConnect functions, you have to call
CAsyncProxySocket::OnReceive and CAsyncProxySocket::OnConnect
as first instrucion in your OnReceive and OnConnect functions.
Sample code:
CMyClass::OnReceive(int nErrorCode)
{
	CAsyncProxySocket::OnReceive(nErrorCode);
	//Add you own implementation below:
	...
}

If an operation fails, OnProxyOperationFailed is called. There
you can handle the error. int nOpID specifies the type of the operation
that failed: PROXYOP_CONNECT when a connection attempt failed and
PROXYOP_LISTEN when creating a listen socket failed.

If you want to use CAsyncProxySocket to create a listen socket, you
have to use this overloaded function:
virtual BOOL Listen(unsigned long serverIp);
serverIP is the IP of the server you are already connected 
through the SOCKS proxy. You can't use listen sockets over a
SOCKS proxy without a primary connection. Listen sockets are only 
supported by SOCKS proxies, this won't work with HTTP proxies.
When the listen socket is created successfully, OnListenFinished is
called. The parameters unsigned long &retProxyIp and int &retProxyPort 
will tell you the ip and the port of the listen socket.
After it you have to handle the OnAccept message and accept the 
connection.

Description of the new functions and their parameters:
------------------------------------------------------

void SetProxy(int nProxyType);
void SetProxy(int nProxyType, CString ProxyHost, int nProxyPort);
void SetProxy(int nProxyType, CString ProxyHost, int nProxyPort,CString ProxyUser, CString ProxyPass);
	
Call one of this functions to set the proxy type.
Parametes:
- nProxyType specifies the Proxy Type.
- ProxyHost and nProxyPort specify the address of the proxy
- ProxyUser and ProxyPass are only available for SOCKS5 proxies.

supported proxy types:
PROXYTYPE_NOPROXY
PROXYTYPE_SOCKS4
PROXYTYPE_SOCKS4A
PROXYTYPE_SOCKS5
PROXYTYPE_HTTP11

There are also some other functions:

GetProxyPeerName
Like GetPeerName of CAsyncSocket, but returns the address of the
server connected through the proxy.	If using proxies, GetPeerName 
only returns the address of the proxy.

int GetProxyType();
Returns the used proxy

const int GetLastProxyError() const;
Returns the last proxy error

Version history
---------------

- 1.3 added basic HTTP1.1 authentication
      fixed memory leak in SOCKS5 code
	  OnSocksOperationFailed will be called after Socket has been closed
      fixed some minor bugs
- 1.2 renamed into CAsyncProxySocket
      added HTTP1.1 proxy support
- 1.1 fixes all known bugs, mostly with SOCKS5 authentication
- 1.0 initial release
*/

#include "stdafx.h"
#include "AsyncProxySocket.h"
#include "CBase64coding.hpp"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAsyncProxySocket

CAsyncProxySocket::CAsyncProxySocket()
{
	m_nProxyOpID=0;
	m_nProxyOpState=0;
	m_pRecvBuffer=0;
	m_nRecvBufferPos=0;
	m_ProxyData.nProxyType=0;
	m_nProxyPeerIp=0;
	m_nProxyPeerPort=0;
	m_ProxyPeerHost="";
	m_nProxyError=PROXYERROR_NOERROR;
}

CAsyncProxySocket::~CAsyncProxySocket()
{
	ClearBuffer();
}


//Die folgenden Zeilen nicht bearbeiten. Sie werden vom Klassen-Assistenten benötigt.
#if 0
BEGIN_MESSAGE_MAP(CAsyncProxySocket, CAsyncSocket)
	//{{AFX_MSG_MAP(CAsyncProxySocket)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// Member-Funktion CAsyncProxySocket 

void CAsyncProxySocket::SetProxy(int nProxyType)
{
	ASSERT(nProxyType==PROXYTYPE_NOPROXY);
	ASSERT(!m_nProxyOpID);
	m_ProxyData.nProxyType=nProxyType;
}

void CAsyncProxySocket::SetProxy(int nProxyType, CString ProxyHost, int ProxyPort)
{
	//Validate the parameters
	ASSERT(nProxyType==PROXYTYPE_SOCKS4  || 
		   nProxyType==PROXYTYPE_SOCKS4A || 
		   nProxyType==PROXYTYPE_SOCKS5  || 
		   nProxyType==PROXYTYPE_HTTP11);
	ASSERT(!m_nProxyOpID);
	m_ProxyData.nProxyType=nProxyType;
	ASSERT(ProxyHost!="");
	ASSERT(ProxyPort>0);
	ASSERT(ProxyPort<=65535);
	m_ProxyData.ProxyHost=ProxyHost;
	m_ProxyData.nProxyPort=ProxyPort;
	m_ProxyData.bUseLogon=FALSE;
}

void CAsyncProxySocket::SetProxy(int nProxyType, CString ProxyHost, int ProxyPort, CString ProxyUser, CString ProxyPass)
{
	//Validate the parameters
	ASSERT(nProxyType==PROXYTYPE_SOCKS5 || nProxyType==PROXYTYPE_HTTP11);
	ASSERT(!m_nProxyOpID);
	m_ProxyData.nProxyType=nProxyType;
	ASSERT(ProxyHost!="");
	ASSERT(ProxyPort>0);
	ASSERT(ProxyPort<=65535);
	m_ProxyData.ProxyHost=ProxyHost;
	m_ProxyData.nProxyPort=ProxyPort;
	m_ProxyData.ProxyUser=ProxyUser;
	m_ProxyData.ProxyPass=ProxyPass;
	m_ProxyData.bUseLogon=TRUE;
}

void CAsyncProxySocket::OnReceive(int nErrorCode) 
{
	//Here we handle the responses from the SOCKS proxy
	CAsyncSocket::OnReceive(nErrorCode);
	if (!m_nProxyOpID)
		return;
	if (!m_nProxyOpState) //We should not receive a response yet!
	{
		m_nProxyError=PROXYERROR_REQUESTFAILED;
		int ID=m_nProxyOpID;
		Close();
		OnProxyOperationFailed(ID);
		return;
	}
	if (m_ProxyData.nProxyType==PROXYTYPE_SOCKS4 || m_ProxyData.nProxyType==PROXYTYPE_SOCKS4A)
	{
		if (m_nProxyOpState==1)
		{
			if (!m_pRecvBuffer)
				m_pRecvBuffer=new char[8];
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,8-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					ClearBuffer();
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==8)
			{
				if (m_pRecvBuffer[1]!=90 || m_pRecvBuffer[0]!=0)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				if (m_nProxyOpID==PROXYOP_CONNECT)
				{
					//OK, we are connected with the remote server
					ClearBuffer();
					Reset();
					//Call OnSend
					OnSend(0);
					return;
				}
				else
				{
					//Listen socket created
					m_nProxyOpState++;
					unsigned long ip;
					int port;
					memcpy(&ip,&m_pRecvBuffer[4],4);
					if (!ip)
					{ //No IP return, use the IP of the proxy server
						SOCKADDR SockAddr;
						memset(&SockAddr,0,sizeof(SockAddr));
						int SockAddrLen=sizeof(SockAddr);
						if (GetPeerName(&SockAddr, &SockAddrLen ))
						{
							ip=((LPSOCKADDR_IN)&SockAddr)->sin_addr.S_un.S_addr;
						}
						else
						{
							m_nProxyError=PROXYERROR_REQUESTFAILED;
							int ID=m_nProxyOpID;
							Close();
							OnProxyOperationFailed(ID);
							return;
						}
					}
					memcpy(&port,&m_pRecvBuffer[2],2);
					OnListenFinished(ip,port);					
				}
				ClearBuffer();
			}
		}
		else if (m_nProxyOpID==2)
		{
			if (!m_pRecvBuffer)
				m_pRecvBuffer=new char[8];
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,8-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==8)
			{
				if (m_pRecvBuffer[1]!=90 || m_pRecvBuffer[0]!=0)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				//Connection to remote server established
				ClearBuffer();
				Reset();
				OnAccept(0);
			}
		}
	}
	else if (m_ProxyData.nProxyType==PROXYTYPE_SOCKS5)
	{	
		if (m_nProxyOpState==1) //Get respone to initialization message
		{
			if (!m_pRecvBuffer)
				m_pRecvBuffer=new char[2];
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,2-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==2)
			{
				if (m_pRecvBuffer[1]==0xFF || m_pRecvBuffer[0]!=5)
				{
					m_nProxyError=PROXYERROR_AUTHREQUIRED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				if (m_pRecvBuffer[1])
				{ //Auth needed
					if (m_pRecvBuffer[1]!=2)
					{ //Unknown auth type
						m_nProxyError=PROXYERROR_AUTHTYPEUNKNOWN;
						int ID=m_nProxyOpID;
						Close();
						OnProxyOperationFailed(ID);
						return;
					}
					
					if (!m_ProxyData.bUseLogon)
					{
						m_nProxyError=PROXYERROR_AUTHNOLOGON;
						int ID=m_nProxyOpID;
						Close();
						OnProxyOperationFailed(ID);
						return;
					}
					//Send authentication
					unsigned char *buffer=new unsigned char[3+m_ProxyData.ProxyUser.GetLength()+m_ProxyData.ProxyPass.GetLength()+1];
					sprintf((char *)buffer,"  %s %s",m_ProxyData.ProxyUser,m_ProxyData.ProxyPass);
					buffer[0]=5;
					buffer[1]=static_cast<unsigned char>(m_ProxyData.ProxyUser.GetLength());
					ASSERT(m_ProxyData.ProxyPass.GetLength()<=255);
					buffer[2+m_ProxyData.ProxyUser.GetLength()]=static_cast<unsigned char>(m_ProxyData.ProxyPass.GetLength());
					int len=3+m_ProxyData.ProxyUser.GetLength()+m_ProxyData.ProxyPass.GetLength();
					int res=CAsyncSocket::Send(buffer,len);
					delete [] buffer;
					if (res==SOCKET_ERROR || res<len)
					{
						if (GetLastError()!=WSAEWOULDBLOCK || res<len)
						{
							m_nProxyError=PROXYERROR_REQUESTFAILED;
							int ID=m_nProxyOpID;
							Close();
							OnProxyOperationFailed(ID);
							return;
						}
					}
					ClearBuffer();
					m_nProxyOpState++;
					return;
				}
			}
			//No auth needed
			//Send connection request
			char *command=new char[10+m_ProxyPeerHost.GetLength()+1];
			memset(command,0,10+m_ProxyPeerHost.GetLength()+1);
			command[0]=5;
			command[1]=(m_nProxyOpID==PROXYOP_CONNECT)?1:2;
			command[2]=0;
			command[3]=m_nProxyPeerIp?1:3;
			int len=4;
			if (m_nProxyPeerIp)
			{
				memcpy(&command[len],&m_nProxyPeerIp,4);
				len+=4;
			}
			else
			{
				command[len]=m_ProxyPeerHost.GetLength();
				strcpy(&command[len+1],m_ProxyPeerHost);
				len+=m_ProxyPeerHost.GetLength()+1;
			}
			memcpy(&command[len],&m_nProxyPeerPort,2);
			len+=2;
			int res=CAsyncSocket::Send(command,len);
			delete [] command;
			if (res==SOCKET_ERROR || res<len)
			{
				if (GetLastError()!=WSAEWOULDBLOCK || res<len)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
			}
			m_nProxyOpState+=2;
			ClearBuffer();
			return;
		}
		else if (m_nProxyOpState==2)
		{//Response to the auth request
			if (!m_pRecvBuffer)
				m_pRecvBuffer=new char[2];
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,2-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_AUTHFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==2)
			{
				if (m_pRecvBuffer[1]!=0)
				{
					m_nProxyError=PROXYERROR_AUTHFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				char *command=new char[10+m_ProxyPeerHost.GetLength()];
				memset(command,0,10+m_ProxyPeerHost.GetLength()+1);
				command[0]=5;
				command[1]=(m_nProxyOpID==PROXYOP_CONNECT)?1:2;
				command[2]=0;
				command[3]=m_nProxyPeerIp?1:3;
				int len=4;
				if (m_nProxyPeerIp)
				{
					memcpy(&command[len],&m_nProxyPeerIp,4);
					len+=4;
				}
				else
				{
					command[len]=m_ProxyPeerHost.GetLength();
					strcpy(&command[len+1],m_ProxyPeerHost);
					len+=m_ProxyPeerHost.GetLength()+1;
				}
				memcpy(&command[len],&m_nProxyPeerPort,2);
				len+=2;
				int res=CAsyncSocket::Send(command,len);
				if (res==SOCKET_ERROR || res<len)
				{
					if (GetLastError()!=WSAEWOULDBLOCK || res<len)
					{
						m_nProxyError=PROXYERROR_REQUESTFAILED;
						int ID=m_nProxyOpID;
						Close();
						OnProxyOperationFailed(ID);
						return;
					}
				}
				m_nProxyOpState++;
				ClearBuffer();
				return;				
			}
		}
		else if (m_nProxyOpState==3)
		{//Response to the connection request
			if (!m_pRecvBuffer)
			{
				m_pRecvBuffer=new char[10];
				m_nRecvBufferLen=5;
			}
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,m_nRecvBufferLen-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==m_nRecvBufferLen)
			{
				//Check for errors
				if (m_pRecvBuffer[1]!=0 || m_pRecvBuffer[0]!=5)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				if (m_nRecvBufferLen==5)
				{ //Check which kind of address the response contains
					if (m_pRecvBuffer[3]==1)
						m_nRecvBufferLen=10;
					else
					{
						char *tmp=new char[m_nRecvBufferLen+=m_pRecvBuffer[4]+2];
						memcpy(tmp,m_pRecvBuffer,5);
						delete [] m_pRecvBuffer;
						m_pRecvBuffer=tmp;
						m_nRecvBufferLen+=m_pRecvBuffer[4]+2;
					}
					return;
				}
				
				if (m_nProxyOpID==PROXYOP_CONNECT)
				{
					//OK, we are connected with the remote server
					Reset();
					OnSend(0);
				}
				else
				{
					//Listen socket created
					m_nProxyOpState++;
					unsigned long ip;
					int port;
					ASSERT(m_pRecvBuffer[3]==1);
					memcpy(&ip,&m_pRecvBuffer[4],4);
					memcpy(&port,&m_pRecvBuffer[8],2);
					OnListenFinished(ip,port);
				}
				ClearBuffer();
			}
		}
		else if (m_nProxyOpState==4)
		{
			if (!m_pRecvBuffer)
				m_pRecvBuffer=new char[10];
			int numread=CAsyncSocket::Receive(m_pRecvBuffer+m_nRecvBufferPos,10-m_nRecvBufferPos);				
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			m_nRecvBufferPos+=numread;
			if (m_nRecvBufferPos==10)
			{
				if (m_pRecvBuffer[1]!=0)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				//Connection to remote server established
				ClearBuffer();
				Reset();
				OnAccept(0);
			}
		}
	}
	if (m_ProxyData.nProxyType==PROXYTYPE_HTTP11)
	{
		char buffer[2];
		buffer[1]=0;
		for(;;)
		{
			int numread=CAsyncSocket::Receive(buffer,1);
			if (numread==SOCKET_ERROR)
			{
				if (GetLastError()!=WSAEWOULDBLOCK)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
				}
				return;
			}
			//Response begins with HTTP/
			m_strBuffer+=buffer;
			CString start="HTTP/";
			start=start.Left(m_strBuffer.GetLength());
			if (start!=m_strBuffer.Left(start.GetLength()))
			{
				m_nProxyError=PROXYERROR_REQUESTFAILED;
				int ID=m_nProxyOpID;
				Close();
				OnProxyOperationFailed(ID);
				return;
			}
			int pos=m_strBuffer.Find("\r\n");
			if (pos!=-1)
			{
				int pos2=m_strBuffer.Find(" ");
				if (pos2==-1 || m_strBuffer[pos2+1]!='2' || pos2>pos)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
			}
			if (m_strBuffer.Right(4)=="\r\n\r\n") //End of the HTTP header
			{
				Reset();
				ClearBuffer();
				return;
			}
		}
	}
}

BOOL CAsyncProxySocket::Connect( LPCTSTR lpszHostAddress, UINT nHostPort )
{
	m_nProxyError=PROXYERROR_NOERROR;
	if (!m_ProxyData.nProxyType)
		//Connect normally because there is no proxy
		return CAsyncSocket::Connect(lpszHostAddress, nHostPort);
	
		//Translate the host address
	ASSERT(lpszHostAddress != NULL);

	SOCKADDR_IN sockAddr;
	memset(&sockAddr,0,sizeof(sockAddr));

	sockAddr.sin_family = AF_INET;
	sockAddr.sin_addr.s_addr = inet_addr(lpszHostAddress);
	
	if (sockAddr.sin_addr.s_addr == INADDR_NONE)
	{
		LPHOSTENT lphost;
		lphost = gethostbyname(lpszHostAddress);
		if (lphost != NULL)
			sockAddr.sin_addr.s_addr = ((LPIN_ADDR)lphost->h_addr)->s_addr;
		else
		{
			//Can't resolve hostname
			if (m_ProxyData.nProxyType==PROXYTYPE_SOCKS4A || 
				m_ProxyData.nProxyType==PROXYTYPE_SOCKS5 || 
				m_ProxyData.nProxyType==PROXYTYPE_HTTP11)
			{ //Can send domain names to proxy

				//Conect to proxy server
				BOOL res=CAsyncSocket::Connect(m_ProxyData.ProxyHost,m_ProxyData.nProxyPort);
				if (!res)
				{
					if (GetLastError()!=WSAEWOULDBLOCK)
					{
						m_nProxyError=PROXYERROR_NOCONN;
						return FALSE;
					}
				}
				m_nProxyPeerPort=htons((u_short)nHostPort);
				m_nProxyPeerIp=0;
				m_ProxyPeerHost=lpszHostAddress;
				m_nProxyOpID=PROXYOP_CONNECT;
				return TRUE;
			}
			else
			{
				m_nProxyError=PROXYERROR_CANTRESOLVEHOST;
				WSASetLastError(WSAEINVAL);
				return FALSE;
			}
		}
	}

	sockAddr.sin_port = htons((u_short)nHostPort);
	BOOL res=Connect((SOCKADDR*)&sockAddr, sizeof(sockAddr));
	if (res || GetLastError()==WSAEWOULDBLOCK)
		m_ProxyPeerHost=lpszHostAddress;
	return res;
	
}

BOOL CAsyncProxySocket::Connect( const SOCKADDR* lpSockAddr, int nSockAddrLen )
{
	m_nProxyError=PROXYERROR_NOERROR;
	if (!m_ProxyData.nProxyType)
		//Connect normally because there is no proxy
		return CAsyncSocket::Connect(lpSockAddr, nSockAddrLen );
	
	//Conect to proxy server
	BOOL res=CAsyncSocket::Connect(m_ProxyData.ProxyHost,m_ProxyData.nProxyPort);
	if (!res)
	{
		if (GetLastError()!=WSAEWOULDBLOCK)
		{
			m_nProxyError=PROXYERROR_NOCONN;
			return FALSE;
		}
	}

	LPSOCKADDR_IN sockAddr=(LPSOCKADDR_IN)lpSockAddr;

	//Save server details
	m_nProxyPeerIp=sockAddr->sin_addr.S_un.S_addr;
	m_nProxyPeerPort=sockAddr->sin_port;
	m_ProxyPeerHost="";
	m_nProxyOpID=PROXYOP_CONNECT;
	return res;
}

void CAsyncProxySocket::OnConnect(int nErrorCode) 
{
	m_nProxyError=PROXYERROR_NOERROR;
	CAsyncSocket::OnConnect(nErrorCode);
	if (nErrorCode)
	{ //Can't connect to proxy
		Reset();
		//Don't call OnProxyOperationFailed, since derived class should handle nErrorCode
		return;
	}
	if (m_nProxyOpID==PROXYOP_CONNECT || m_nProxyOpID==PROXYOP_LISTEN)
	{
		if (m_nProxyOpState)
			//Somehow OnConnect has been called more than once
			return;
		ASSERT(m_ProxyData.nProxyType!=PROXYTYPE_NOPROXY);
		ClearBuffer();
		//Send the initial request
		if (m_ProxyData.nProxyType==PROXYTYPE_SOCKS4 || m_ProxyData.nProxyType==PROXYTYPE_SOCKS4A)
		{ //SOCKS4 proxy
			//Send request
			char *command=new char [9+m_ProxyPeerHost.GetLength()+1];
			memset(command,0,9+m_ProxyPeerHost.GetLength()+1);
			int len=9;
			command[0]=4;
			command[1]=(m_nProxyOpID==PROXYOP_CONNECT)?1:2; //CONNECT or BIND request
			memcpy(&command[2],&m_nProxyPeerPort,2); //Copy target address
			if (!m_nProxyPeerIp)
			{
				ASSERT(m_ProxyData.nProxyType==PROXYTYPE_SOCKS4A);
				ASSERT(m_ProxyPeerHost!="");
				//Set the IP to 0.0.0.x (x is nonzero)
				command[4]=0;
				command[5]=0;
				command[6]=0;
				command[7]=1;
				//Add host as URL
				strcpy(&command[9],m_ProxyPeerHost);
				len+=m_ProxyPeerHost.GetLength()+1;
			}
			else
				memcpy(&command[4],&m_nProxyPeerIp,4);
			int res=CAsyncSocket::Send(command,len); //Send command
			delete [] command;
			if (res==SOCKET_ERROR || res<len)
			{
				if (GetLastError()!=WSAEWOULDBLOCK || res<len)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
			}
		}
		else if (m_ProxyData.nProxyType==PROXYTYPE_SOCKS5)
		{ //SOCKS5 proxy
			//Send initialization request
			unsigned char command[10];
			memset(command,0,10);
			command[0]=5;
			//CAsyncProxySocket supports to logon types: No logon and 
			//cleartext username/password (if set) logon
			command[1]=m_ProxyData.bUseLogon?2:1; //Number of logon types
			command[2]=m_ProxyData.bUseLogon?2:0; //2=user/pass, 0=no logon
			int len=m_ProxyData.bUseLogon?4:3; //length of request
			int res=CAsyncSocket::Send(command,len);
			if (res==SOCKET_ERROR || res<len)
			{
				if (GetLastError()!=WSAEWOULDBLOCK || res<len)
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
			}
		}
		else if (m_ProxyData.nProxyType==PROXYTYPE_HTTP11)
		{
			CString str;
			
			if (!m_ProxyData.bUseLogon)
				str.Format("CONNECT %s:%d HTTP/1.1\r\nHost: %s:%d\r\n\r\n",m_ProxyPeerHost,ntohs(m_nProxyPeerPort),
					m_ProxyPeerHost,ntohs(m_nProxyPeerPort));
			else
			{
				str.Format("CONNECT %s:%d HTTP/1.1\r\nHost: %s:%d\r\n",m_ProxyPeerHost,ntohs(m_nProxyPeerPort),
					m_ProxyPeerHost,ntohs(m_nProxyPeerPort));
				CString userpass=m_ProxyData.ProxyUser+":"+m_ProxyData.ProxyPass;
				CString base64str;
				CByteArray array;
				for (int i=0;i<userpass.GetLength();i++)
					array.Add(userpass[i]);
				
				CBase64Coding base64coding;
				if (!base64coding.Encode(array,base64str))
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
				str+="Authorization: Basic "+base64str+"\r\n\r\n";
				str+="Proxy-Authorization: Basic "+base64str+"\r\n\r\n";
			}
			int numsent=CAsyncSocket::Send(str,str.GetLength());
			if (numsent==SOCKET_ERROR || numsent<str.GetLength())
			{
				if (GetLastError()!=WSAEWOULDBLOCK || numsent<str.GetLength())
				{
					m_nProxyError=PROXYERROR_REQUESTFAILED;
					int ID=m_nProxyOpID;
					Close();
					OnProxyOperationFailed(ID);
					return;
				}
			}
			m_nProxyOpState++;
			return;
		}
		else
			ASSERT(FALSE);
		//Now we'll wait for the response, handled in OnReceive
		m_nProxyOpState++;
	}
}

void CAsyncProxySocket::ClearBuffer()
{
	m_strBuffer="";
	if (m_pRecvBuffer)
	{
		delete [] m_pRecvBuffer;
		m_pRecvBuffer=0;
	}
	m_nRecvBufferLen=0;
	m_nRecvBufferPos=0;

}

int CAsyncProxySocket::Send(const void* lpBuf, int nBufLen, int nFlags) 
{
	m_nProxyError=PROXYERROR_NOERROR;
	if (m_nProxyOpID)
	{
		WSASetLastError(WSAEWOULDBLOCK);
		return SOCKET_ERROR;
	}
	return CAsyncSocket::Send(lpBuf, nBufLen, nFlags);
}

BOOL CAsyncProxySocket::Listen(unsigned long serverIp)
{
	m_nProxyError=PROXYERROR_NOERROR;
	//Conect to proxy server
	BOOL res=CAsyncSocket::Connect(m_ProxyData.ProxyHost,m_ProxyData.nProxyPort);
	if (!res)
	{
		if (GetLastError()!=WSAEWOULDBLOCK)
		{
			m_nProxyError=PROXYERROR_NOCONN;
			return FALSE;
		}
	}
	m_nProxyPeerPort=0;
	m_nProxyPeerIp=serverIp;
	
	m_nProxyOpID=PROXYOP_LISTEN;
	return TRUE;
}

BOOL CAsyncProxySocket::Listen()
{
	m_nProxyError=PROXYERROR_NOERROR;
	return CAsyncSocket::Listen();
}

BOOL CAsyncProxySocket::GetProxyPeerName(CString &rPeerAddress, UINT &rPeerPort)
{
	ASSERT(m_ProxyData.nProxyType);
	BOOL res=GetPeerName( rPeerAddress, rPeerPort );
	if (res)
	{
		rPeerPort=m_nProxyPeerPort;
		rPeerAddress.Format("%d.%d.%d.%d",(m_nProxyPeerIp>>24)%256,(m_nProxyPeerIp>>16)%256,(m_nProxyPeerIp>>8)%256,m_nProxyPeerIp%256);
	}
	return res;
}

BOOL CAsyncProxySocket::GetProxyPeerName( SOCKADDR* lpSockAddr, int* lpSockAddrLen )
{
	ASSERT(m_ProxyData.nProxyType);
	BOOL res=GetPeerName(lpSockAddr,lpSockAddrLen);
	if (res)
	{
		LPSOCKADDR_IN addr=(LPSOCKADDR_IN)lpSockAddr;
		addr->sin_port=m_nProxyPeerPort;
		addr->sin_addr.S_un.S_addr=m_nProxyPeerIp;		
	}
	return res;
}

BOOL CAsyncProxySocket::Accept(CAsyncSocket &rConnectedSocket)
{
	if (!m_ProxyData.nProxyType)
		return CAsyncSocket::Accept(rConnectedSocket);
	else
	{
		SOCKET socket=Detach();
		return rConnectedSocket.Attach(socket);
	}
	return TRUE;
}

const int CAsyncProxySocket::GetLastProxyError() const
{
	return m_nProxyError;
}

int CAsyncProxySocket::Receive(void* lpBuf, int nBufLen, int nFlags) 
{
	m_nProxyError=PROXYERROR_NOERROR;
	if (m_nProxyOpID)
	{
		WSASetLastError(WSAEWOULDBLOCK);
		return SOCKET_ERROR;
	}
	else
		return CAsyncSocket::Receive(lpBuf, nBufLen, nFlags);
}

int CAsyncProxySocket::GetProxyType() const
{
	return m_ProxyData.nProxyType;
}

void CAsyncProxySocket::Close()
{
	ClearBuffer();
	Reset();
	CAsyncSocket::Close();
}

void CAsyncProxySocket::Reset()
{
	m_nProxyOpState=0;
	m_nProxyOpID=0;	
}

int CAsyncProxySocket::GetProxyOperation(void)
{
	return m_nProxyOpID;	
}
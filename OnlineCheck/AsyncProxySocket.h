/*CAsyncProxySocket by Tim Kosse (Tim.Kosse@gmx.de)
                 Version 1.0 (07-09-2001)
--------------------------------------------------------

Introduction:
-------------

This class is a CAsyncSocket derived class. With this class you
can connect through SOCKS4/5 proxies. This class works as 
semi-transparent layer between you own class and CAsyncSocket.
This class is used in FileZilla, a powerful open-source FTP client.
It can be found under http://sourceforge.net/projects/filezilla
For more information about SOCKS4/5 goto 
http://www.socks.nec.com/socksprot.html

How to use?
-----------

You don't have to change much in you already existing code to use
CAsyncProxySocket.
To use it you've to derive you own class from CAsyncSocket and you've
to provide an definition for OnSocksOperationFailed(int nOpID) and 
OnListenFinished(unsigned long &retProxyIp,int &retProxyPort)=0;
When you create an instance of you derived class, you should call
SetProxy.
If you overload the OnReceive or OnConnect functions, you have to call
CAsyncProxySocket::OnReceive and CAsyncProxySocket::OnConnect
before you can process the message.
Sample code:
CMyClass::OnReceive(int nErrorCode)
{
	CAsyncProxySocket::OnReceive(nErrorCode);
	//Add you own implementation below:
	...
}

If a SOCKS operation fails, OnSocksOperationFailed is called. There
you can handle the error. int nOpID specifies the type of the operation
that failed: SOCKSOP_CONNECT when a connection attempt failed and
SOCKSOP_LISTEN when creating a listen socket failed.

If you want to use CAsyncProxySocket to create a listen socket, you
have to use this overloaded function:
virtual BOOL Listen(unsigned long serverIp
serverIP is the IP of the server you are already connected 
through the SOCKS proxy. You can't use listen sockets over a
SOCKS proxy without a primary connection.
When the listen socket is created successfully, OnListenFinished is
called. unsigned long &retProxyIp and int &retProxyPort will tell you
the ip and the port of the listen socket.
After it you handle the OnAccept message and accept the connection.

Description of the other new functions and their parameters:
------------------------------------------------------------

void SetProxy(int nProxyType,CString ProxyHost,int ProxyPort,
    CString ProxyUser="",CString ProxyPass="",BOOL bUseSocks5Logon=FALSE);

Call this function if you want to use the extra proxy functionallity.
Parametes:
- nProxyType specifies the Proxy Type, either PROXYTYPE_SOCKS4
  or PROXYTYPE_SOCKS5
- the next 2 parameters specify the proxy
- the last 3 parameters are optional. They specify if SOCKS5
  authentication should be enabled and alsp specify the user and
  logon password.

There are also some other functions:

GetProxyPeerName
Like GetPeerName of CAsyncSocket, but returns the address of the
server connected through the proxy.	If using proxies, GetPeerName 
only returns the address of the proxy.

BOOL IsSocksified();
Is a proxy used?

const int GetLastProxyError() const;
Returns the last proxy error
*/

#if !defined(AFX_ASYNCSOCKSIFIEDSOCKET_H__9699EDE5_B447_4AF6_8E5D_A1580015E4BF__INCLUDED_)
#define AFX_ASYNCSOCKSIFIEDSOCKET_H__9699EDE5_B447_4AF6_8E5D_A1580015E4BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AsyncSocksifiedSocket.h : Header-Datei
//

typedef struct
{
	int nProxyType;
	CString ProxyHost;
	int nProxyPort;
	CString ProxyUser,ProxyPass;
	BOOL bUseLogon;
} t_proxydata; //This structure will be used to hold the proxy details

#define PROXYOP_CONNECT 1
#define PROXYOP_LISTEN 2

/////////////////////////////////////////////////////////////////////////////
// Befehlsziel CAsyncProxySocket 

class CAsyncProxySocket : public CAsyncSocket
{
// Attribute
public:

// Operationen
public:
	CAsyncProxySocket();
	virtual ~CAsyncProxySocket();
	

// Überschreibungen
public:
	virtual void Close();
	virtual BOOL Connect( LPCTSTR lpszHostAddress, UINT nHostPort );
	virtual BOOL Connect( const SOCKADDR* lpSockAddr, int nSockAddrLen );
	virtual BOOL Accept(CAsyncSocket &rConnectedSocket);
	virtual BOOL Listen();
	virtual BOOL Listen(unsigned long serverIp);

	void SetProxy(int nProxyType); //No proxy
	void SetProxy(int nProxyType, CString ProxyHost, int ProxyPort);
	void SetProxy(int nProxyType, CString ProxyHost, int ProxyPort,CString ProxyUser, CString ProxyPass); //Only SOCKS5 proxy
	//Sets the proxy details. 
	//nProxyType - Type of the proxy. May be PROXYTYPE_NOPROXY,PROXYTYPE_SOCKS4 and PROXYTYPE_SOCKS5
	//ProxyHost - The address of the proxy. Can be either IP or URL
	//ProxyPort - The port of the proxy
	//ProxyUser - the username for SOCKS5 proxies
	//ProxyPass - the password for SOCKS5 proxies
	
	int GetProxyType() const;
	//Returns the type of the proxy

	const int GetLastProxyError() const;
	//Returns the last error occured in CAsyncProxySocket

	BOOL GetProxyPeerName( CString& rPeerAddress, UINT& rPeerPort );
	BOOL GetProxyPeerName( SOCKADDR* lpSockAddr, int* lpSockAddrLen );
	//Returns the address of the server behind the SOCKS proxy you are connected to
	
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CAsyncProxySocket)
protected:
	virtual void OnReceive(int nErrorCode);
	virtual void OnConnect(int nErrorCode);
public:
	virtual int Send(const void* lpBuf, int nBufLen, int nFlags = 0);
	virtual int Receive(void* lpBuf, int nBufLen, int nFlags = 0);
	//}}AFX_VIRTUAL

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CAsyncProxySocket)
		// HINWEIS - Der Klassen-Assistent fügt hier Member-Funktionen ein und entfernt diese.
	//}}AFX_MSG

// Implementierung
protected:
	CString m_ProxyPeerHost;
	virtual void OnProxyOperationFailed(int nOpID)=0;
	//This function has to be implemented by the derived classes. This function is 
	//called when an error occurred during a SOCKS operation
	
	virtual void OnListenFinished(unsigned long &retProxyIp,int &retProxyPort)=0;
	//Called when a listen socket was created successfully. Unlike the normal listen function,
	//a socksified socket has to connect to the proxy to negotiate the details with the server
	//on which the listen socket will be created
	//The two parameters will contain the address of the listen socket on the server.
	//-----------------------------------------------------------------------------------------------
	//alan added in 2006.2.7
	//for proxy communication , sub class should know whether it is proxy protocol process .
	//old design let send/receive return WSAEWOULDBLOCK , that is confuse and performance punish .
	//-----------------------------------------------------------------------------------------------
	int GetProxyOperation(void);
private:
	void Reset();
	void ClearBuffer();		 //Clears the receive buffer
	char *m_pRecvBuffer;	 //The receive buffer
	int m_nRecvBufferLen;	 //Length of the RecvBuffer
	int m_nRecvBufferPos;	 //Position within the receive buffer
	CString m_strBuffer;	 //Recvbuffer needed by HTTP1.1 proxy
	int m_nProxyOpState;	 //State of an operation
	int m_nProxyOpID;		 //Currently active operation (0 if none)
	int m_nProxyPeerPort;	 //Port of the server you are connected to, retrieve via GetProxyPeerName
	ULONG m_nProxyPeerIp;	 //IP of the server you are connected to, retrieve via GetProxyPeerName
	int m_nProxyError;		 //The latest error
	t_proxydata m_ProxyData; //Structure to hold the data set by SetProxy
};

//Errorcodes
#define PROXYERROR_NOERROR 0
#define PROXYERROR_NOCONN 1 //Can't connect to proxy server, use GetLastError for more information
#define PROXYERROR_REQUESTFAILED 2 //Request failed, can't send data
#define PROXYERROR_AUTHREQUIRED 3 //Authentication required
#define PROXYERROR_AUTHTYPEUNKNOWN 4 //Authtype unknown or not supported
#define PROXYERROR_AUTHFAILED 5  //Authentication failed
#define PROXYERROR_AUTHNOLOGON 6
#define PROXYERROR_CANTRESOLVEHOST 7

//Proxytypes
#define PROXYTYPE_NOPROXY 0
#define PROXYTYPE_SOCKS4 1
#define PROXYTYPE_SOCKS4A 2
#define PROXYTYPE_SOCKS5 3
#define PROXYTYPE_HTTP11 4


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_ASYNCSOCKSIFIEDSOCKET_H__9699EDE5_B447_4AF6_8E5D_A1580015E4BF__INCLUDED_

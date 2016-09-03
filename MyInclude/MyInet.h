#pragma once

#include "ExterCommon.h"

//external对象簇
class MyProgressDlg : public CWindowImpl<MyProgressDlg>
{
	typedef CWindowImpl<MyProgressDlg> ParentClass;
public:	
	void Create(HWND parent,bool cancancel=false)
	{
		statusTxt="";
		pos=0;
		sendBytes=0;recvBytes=0;
		maxSend=0;maxRecv=0;
		isCanceled=false;
		canCancel=cancancel;
		ParentClass::Create(parent,CRect(0,0,300,100),"进度对话框",
			WS_POPUP | WS_CAPTION,
			WS_EX_LEFT);
		UpdateWindow();
		ShowWindow(SW_SHOW);		
	}
	void Destroy(void)
	{
		if(IsWindow())
			DestroyWindow();
	}
	void SetMaxBytes(DWORD sendbytes=0,DWORD recvbytes=0)
	{
		maxSend=sendbytes;
		maxRecv=recvbytes;
		if(maxSend && maxRecv)
		{
			if(maxSend>=maxRecv)
				maxRecv=0;
			else
				maxSend=0;
		}
	}
	void OnBytes(DWORD sendbytes=0,DWORD recvbytes=0)
	{
		sendBytes+=sendbytes;
		recvBytes+=recvbytes;
		if(maxSend)
		{
			DWORD p=sendBytes*100/maxSend;
			if(pos<p)
			{
				pos=p;				
				Refresh();
			}
		}
		if(maxRecv)
		{
			DWORD p=recvBytes*100/maxRecv;
			if(pos<p)
			{
				pos=p;				
				Refresh();
			}
		}
	}
	void UpdateStatus(const char* statustxt,int p)
	{
		statusTxt=statustxt;
		pos=p;
		Refresh();
	}
	bool IsCanceled(void)
	{
		return isCanceled;
	}
public:
	MyProgressDlg()
	{
		INITCOMMONCONTROLSEX arg;
		arg.dwSize=sizeof(INITCOMMONCONTROLSEX);
		arg.dwICC=ICC_PROGRESS_CLASS;
		::InitCommonControlsEx(&arg);
	}
	virtual ~MyProgressDlg()
	{
		Destroy();
	}
	static CWndClassInfo& GetWndClassInfo()
	{
		CWndClassInfo& t=ParentClass::GetWndClassInfo();
		t.m_wc.hbrBackground=(HBRUSH)COLOR_WINDOW; 
		return t;
	}
public:
	BEGIN_MSG_MAP(MyProgressDlg)
      MESSAGE_HANDLER(WM_CREATE,OnCreate)
	  MESSAGE_HANDLER(WM_TIMER,OnTimer)
	  MESSAGE_HANDLER(WM_DESTROY,OnDestroy)
	  COMMAND_HANDLER(3,BN_CLICKED,OnCancel)
    END_MSG_MAP()
public:
	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
    {
		CenterWindow();
		status.Create("STATIC",m_hWnd,CRect(10,10,280,30),NULL,WS_CHILD | WS_VISIBLE | SS_LEFT,0,1);
		progress.Create(PROGRESS_CLASS,m_hWnd,CRect(10,40,280,60),NULL,WS_CHILD | WS_VISIBLE,0,2);
		if(canCancel)
		{
			btnCancel.Create("BUTTON",m_hWnd,CRect(220,70,260,90),"取消",WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,0,3);		
			bytesStatus.Create("STATIC",m_hWnd,CRect(10,70,210,90),NULL,WS_CHILD | WS_VISIBLE | SS_LEFT,0,4);
		}
		else
			bytesStatus.Create("STATIC",m_hWnd,CRect(10,70,280,90),NULL,WS_CHILD | WS_VISIBLE | SS_LEFT,0,4);
		SetTimer(1,100);
		return 0;
	}
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		KillTimer(1);
		return 0;
	}
	LRESULT OnTimer(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		Refresh();
		return 0;
	}
	LRESULT OnCancel(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
	{
		isCanceled=true;
		DestroyWindow();
		return 0;
	}
private:
	void Refresh(void)
	{
		if(status.IsWindow())
		{
			status.SetWindowText(statusTxt);
			status.UpdateWindow();
		}
		if(bytesStatus.IsWindow())
		{
			if(sendBytes || recvBytes)
			{
				CString text,sendTxt,recvTxt;
				if(sendBytes>10*1024*1024)
				{
					sendTxt.Format("发送:%uMB",sendBytes/1024/1024);
				}
				else if(sendBytes>10*1024)
				{
					sendTxt.Format("发送:%uKB",sendBytes/1024);
				}
				else
				{
					sendTxt.Format("发送:%uBYTE",sendBytes);
				}
				if(recvBytes>10*1024*1024)
				{
					recvTxt.Format("接收:%uMB",recvBytes/1024/1024);
				}
				else if(recvBytes>10*1024)
				{
					recvTxt.Format("接收:%uKB",recvBytes/1024);
				}
				else
				{
					recvTxt.Format("接收:%uBYTE",recvBytes);
				}
				text.Format("%s,%s",(LPCSTR)sendTxt,(LPCSTR)recvTxt);
				bytesStatus.SetWindowText(text);
			}
			bytesStatus.UpdateWindow();
		}
		if(progress.IsWindow())
		{
			progress.SendMessage(PBM_SETPOS,pos,0);
			progress.UpdateWindow();
		}
		if(btnCancel.IsWindow())
			btnCancel.UpdateWindow();	
	}
private:
	CWindow bytesStatus;
	CWindow status;
	CWindow progress;
	CWindow btnCancel;
	bool isCanceled;
	bool canCancel;
	unsigned int sendBytes,recvBytes,maxSend,maxRecv;
	CString statusTxt;
	unsigned int pos;
};

template<typename T>
	class DownloadBindStatusCallback : public IBindStatusCallback
{	
	typedef DownloadBindStatusCallback ComObj;
	DownloadBindStatusCallback():m_cRef(0),count(0),transCount(0)
	{}
public:
	~DownloadBindStatusCallback()
	{
		progress.Destroy();
	}
	static inline ComObj* CreateObject(T* ptr,int canCancel)
	{
		ComObj* p=new ComObj();
		p->AddRef();
		p->progress.Create(ptr->m_hWnd,(canCancel ? true : false));
		p->ieDlg=ptr;
		return p;
	}	
	STDMETHODIMP QueryInterface(REFIID riid, void** ppv)
	{
		if (NULL == ppv) return E_POINTER;
		*ppv = NULL;
		
		HRESULT hr = S_OK;
		
		if ((IID_IBindStatusCallback == riid) || (IID_IUnknown == riid))
			*ppv = static_cast<IBindStatusCallback*>(this);		
		
		if(*ppv!=NULL)
		{
			reinterpret_cast<IUnknown*>(*ppv)->AddRef();
			return hr;
		}
		return E_NOINTERFACE;		
	}
	STDMETHODIMP_(ULONG) AddRef(void)
	{
		return ++m_cRef;
	}
	STDMETHODIMP_(ULONG) Release(void)
	{
		if (0 != --m_cRef) return m_cRef;
		delete this;
		return 0;
	}
		
	HRESULT STDMETHODCALLTYPE OnProgress( 
		ULONG ulProgress,
		ULONG ulProgressMax,
		ULONG ulStatusCode,
		LPCWSTR szStatusText)
	{
		DWORD ct=0;
		if(ulProgressMax>0)
			ct=DWORD(ulProgress*100/ulProgressMax);		
		if(progress.IsCanceled())
		{
			ieDlg->UpdateWindow();
			return E_ABORT;
		}
		if(count<ct)
		{
			count=ct;
			progress.UpdateStatus(CString(szStatusText),ct);
			//防止消息循环阻塞
			ieDlg->DoMessageLoopOnce();
		}
		else
		{
			transCount=(transCount+1)%100;
			if(transCount==0)
				ieDlg->DoMessageLoopOnce();
		}
		if(ct>=100)
			progress.Destroy();					
		return S_OK;
	}
	//后续均未实现。
	HRESULT STDMETHODCALLTYPE OnStartBinding( 
		DWORD dwReserved,
		IBinding *pib){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE GetPriority( 
		LONG *pnPriority){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE OnLowResource( 
		DWORD reserved){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE OnStopBinding( 
		HRESULT hresult,
		LPCWSTR szError){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE GetBindInfo( 
		DWORD *grfBINDF,
		BINDINFO *pbindinfo){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE OnDataAvailable( 
		DWORD grfBSCF,
		DWORD dwSize,
		FORMATETC *pformatetc,
		STGMEDIUM *pstgmed){return E_NOTIMPL;}
	HRESULT STDMETHODCALLTYPE OnObjectAvailable( 
		REFIID riid,
		IUnknown *punk){return E_NOTIMPL;}
private:
	unsigned int m_cRef;
	unsigned int count,transCount;
	MyProgressDlg progress;
	T* ieDlg;
	MSG msg;
};

//用于WININET函数的状态回调处理类
template<typename T>
	class WinInetStatusCallback
{
public:
	static void CALLBACK InternetStatusCallback(
		HINTERNET hInternet,
		DWORD_PTR dwContext,
		DWORD dwInternetStatus,
		LPVOID lpvStatusInformation,
		DWORD dwStatusInformationLength
		)
	{
		WinInetStatusCallback<T>* ptr=(WinInetStatusCallback<T>*)dwContext;
		if(ptr)
		{			
			if(dwInternetStatus==INTERNET_STATUS_SENDING_REQUEST	 ||
				dwInternetStatus==INTERNET_STATUS_REQUEST_SENT		 ||
				dwInternetStatus==INTERNET_STATUS_RECEIVING_RESPONSE ||
				dwInternetStatus==INTERNET_STATUS_RESPONSE_RECEIVED )
			{
				int rSize=0,sSize=0;
				switch(dwInternetStatus)
				{
				case INTERNET_STATUS_SENDING_REQUEST:
					break;
				case INTERNET_STATUS_REQUEST_SENT:
					sSize=*(DWORD*)lpvStatusInformation;
					break;			
				case INTERNET_STATUS_RECEIVING_RESPONSE:
					break;
				case INTERNET_STATUS_RESPONSE_RECEIVED:
					rSize=*(DWORD*)lpvStatusInformation;
					break;
				}
				ptr->OnBytes(sSize,rSize);
				return;
			}
			CString statusText("");			
			switch(dwInternetStatus)
			{
			case INTERNET_STATUS_CLOSING_CONNECTION:
				statusText="关闭连接....";
				break;
			case INTERNET_STATUS_CONNECTED_TO_SERVER:
				statusText="已连接到服务器.";
				break;
			case INTERNET_STATUS_CONNECTING_TO_SERVER:
				statusText="与服务器建立连接....";
				break;
			case INTERNET_STATUS_CONNECTION_CLOSED:
				statusText="连接已关闭.";
				break;
			case INTERNET_STATUS_CTL_RESPONSE_RECEIVED:
				break;
			case INTERNET_STATUS_DETECTING_PROXY:
				statusText="检测代理....";
				break;
			case INTERNET_STATUS_HANDLE_CLOSING:
				statusText="关闭句柄....";
				break;
			case INTERNET_STATUS_HANDLE_CREATED:
				statusText="创建了新句柄.";
				break;
			case INTERNET_STATUS_INTERMEDIATE_RESPONSE:
				statusText.Format("进度:%d％",*(int*)lpvStatusInformation);
				break;
			case INTERNET_STATUS_NAME_RESOLVED:
				statusText="名称解析完成.";
				break;
			case INTERNET_STATUS_PREFETCH:
				statusText="状态预取.";
				break;			
			case INTERNET_STATUS_REDIRECT:
				statusText="重定向服务器.";
				break;
			case INTERNET_STATUS_REQUEST_COMPLETE:
				statusText="异步请求操作完成.";
				break;			
			case INTERNET_STATUS_RESOLVING_NAME:
				statusText="名称解析....";
				break;			
			case INTERNET_STATUS_STATE_CHANGE:
				statusText="状态改变:";
				DWORD st=*(DWORD*)lpvStatusInformation;
				switch(st)
				{
				case INTERNET_STATE_CONNECTED:
					statusText+="连接状态";
					break;
				case INTERNET_STATE_DISCONNECTED:
					statusText="断开连接状态";
					break;
				case INTERNET_STATE_DISCONNECTED_BY_USER:
					statusText="用户断开连接状态";
					break;
				case INTERNET_STATE_IDLE:
					statusText="空闲状态";
					break;
				case INTERNET_STATE_BUSY:
					statusText="忙状态";
					break;
				case INTERNET_STATUS_USER_INPUT_REQUIRED:
					statusText="请求用户输入状态";
					break;
				}
				break;
			}			
			ptr->UpdateStatus(statusText);
		}
	}
public:
	void Init(T* ptr)
	{
		ieDlg=ptr;
		progress.Create(ptr->m_hWnd,false);		
	}
	void SetMaxBytes(DWORD maxsend,DWORD maxrecv)
	{
		progress.SetMaxBytes(maxsend,maxrecv);
	}
	void UpdateStatus(LPCSTR szStatusText,ULONG pos=0)
	{
		CString text(szStatusText);
		DWORD ct=pos;				
		if(progress.IsCanceled())
		{
			ieDlg->UpdateWindow();
			return;
		}
		if(count<ct)
		{
			count=ct;
			progress.UpdateStatus(text,ct);
		}
		else
			progress.UpdateStatus(text,count);

		if(ct>=100)
			progress.Destroy();				
		//防止消息循环阻塞
		ieDlg->DoMessageLoopOnce();
	}
public:
	WinInetStatusCallback():count(0),transCount(0)
	{}
	virtual ~WinInetStatusCallback()
	{
		if(progress.IsWindow())
			progress.Destroy();
	}
private:	
	void OnBytes(DWORD sSize,DWORD rSize)
	{
		progress.OnBytes(sSize,rSize);
		transCount=(transCount+1)%100;
		if(transCount==0)
			ieDlg->DoMessageLoopOnce();
	}
private:
	MyProgressDlg progress;
	unsigned int count,transCount;
	T* ieDlg;
};

template<typename T>
	class MyInet : public IDispatch
{
	typedef std::map<CString,CString> NameValues;	
	typedef std::vector<CString> FileNames;
	struct UploadNameValue
	{		
		UploadNameValue(const char* l,const char* r):Local(l),Remote(r)
		{}
		CString Local,Remote;
	};
	typedef std::vector<UploadNameValue> UploadNameValues;
public:
	virtual void __stdcall MpdPlaceNameValue(BSTR name,BSTR value)
	{
		nameValues[CString(name)]=CString(value);
	}
	virtual void __stdcall MpdPlaceFile(BSTR name,BSTR filePath,BSTR contentType)
	{
		CString file(filePath);
		file.Replace('/','\\');
		files[CString(name)]=file;
		CString type(contentType);
		if(type.IsEmpty())type="application/octet-stream";
		fileTypes[CString(name)]=type;
	}
	virtual void __stdcall MpdClear(void)
	{
		nameValues.clear();
		files.clear();
		fileTypes.clear();
	}
	virtual BSTR __stdcall MpdPost(BSTR targetObj,BSTR server,UINT port,BSTR boundstr,unsigned int isUnicode,UINT useProgress)
	{
		WinInetStatusCallback<T> callback;
		CString ret("");
		BOOL rt;
		HINTERNET hInet=::InternetOpen("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0)",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
		if(!hInet)
		{
			ret="无法初始化WININET功能！";
			return ret.AllocSysString();
		}
		if(useProgress)
		{
			callback.Init(owner);
			::InternetSetStatusCallback(hInet,WinInetStatusCallback<T>::InternetStatusCallback);
		}
		HINTERNET hHttp=::InternetConnect(hInet,CString(server),port,NULL,NULL,INTERNET_SERVICE_HTTP,0,(DWORD_PTR)&callback);
		if(!hInet)
		{
			ret="无法连接HTTP服务器！";
			return ret.AllocSysString();
		}		
		HINTERNET hReq=::HttpOpenRequest(hHttp,"POST",CString(targetObj),NULL,NULL,NULL,NULL,(DWORD_PTR)&callback);
		if(hReq)
		{
			//选择边界串数据
			CString boundStr(boundstr);
			if(boundStr.IsEmpty())
			{
				UUID GuidIn;
				UUID* pGuidIn=&GuidIn;
				char strOut[33];
				::UuidCreate(pGuidIn);						
				::sprintf(strOut, TEXT("%0.8X%0.4X%0.4X%0.2X%0.2X%0.2X%0.2X%0.2X%0.2X%0.2X%0.2X"),
				   pGuidIn->Data1, pGuidIn->Data2, pGuidIn->Data3,
				   pGuidIn->Data4[0], pGuidIn->Data4[1],
				   pGuidIn->Data4[2], pGuidIn->Data4[3],
				   pGuidIn->Data4[4], pGuidIn->Data4[5],
				   pGuidIn->Data4[6], pGuidIn->Data4[7]);
				boundStr=CString(strOut);
			}			
			//按协议要求的格式构造边界串
			CString firstBound="--"+boundStr+"\r\n";
			CString middleBound="\r\n--"+boundStr+"\r\n";
			CString endBound="\r\n--"+boundStr+"--\r\n";
			CString bound=firstBound;
			bool isFirst=true;
			//构造普通数据部分
			CString normalPart="";
			NameValues::iterator it=nameValues.begin();
			while(it!=nameValues.end())
			{			
				CString head=bound+"Content-Disposition: form-data; name=\""+it->first+"\"\r\n\r\n";
				normalPart+=head+it->second;
				if(isFirst)
				{
					bound=middleBound;
					isFirst=false;
				}
				it++;
			}
			if(isUnicode)
				normalPart=ScriptFile::StrToUTF8(normalPart);
			int len1=normalPart.GetLength();
			//计算文件各部分的总长并构造文件各部分的头
			int len=0;
			CString* fileHeads=new CString[files.size()];
			it=files.begin();
			int ix=0;
			while(it!=files.end())
			{
				CString head=bound+"Content-Disposition: form-data; name=\""+it->first+"\"; filename=\"";
				head+=it->second+"\"\r\n";
				head+="Content-Type: "+fileTypes[it->first]+"\r\n\r\n";
				if(isUnicode)
					head=ScriptFile::StrToUTF8(head);
				fileHeads[ix++]=head;			
				int l=ScriptFile::GetLocalFileLength(it->second);			
				if(l<0)
				{
					delete[] fileHeads;
					return CString("上传文件中有不存在的文件！").AllocSysString();
				}
				len+=head.GetLength()+l;
				if(isFirst)
				{
					bound=middleBound;
					isFirst=false;
				}
				it++;
			}
			int len2=endBound.GetLength();

			CString contentType="Accept: image/gif, image/x-xbitmap, image/jpeg, image/pjpeg, application/vnd.ms-powerpoint, application/vnd.ms-excel, application/msword, application/x-shockwave-flash, */*\r\n";
			contentType+="Accept-Language: zh-cn\r\nAccept-Encoding: gzip, deflate\r\nConnection: Keep-Alive\r\n";
			contentType+="Content-Type:multipart/form-data; boundary=";
			contentType+=boundStr+"\r\n";
			::HttpAddRequestHeaders(hReq,contentType,contentType.GetLength(),HTTP_ADDREQ_FLAG_ADD);

			callback.SetMaxBytes(len1+len+len2,0);
			INTERNET_BUFFERS buf;
			::ZeroMemory(&buf,sizeof(INTERNET_BUFFERS));
			buf.dwStructSize=sizeof(INTERNET_BUFFERS);
			buf.lpvBuffer=NULL;
			buf.dwBufferLength=0;
			buf.dwBufferTotal=len1+len+len2;
			
			rt=::HttpSendRequestEx(hReq,&buf,NULL,HSR_INITIATE,(DWORD_PTR)&callback);
		
			//写入通用数据的各个部分
			if(len1)
			{
				DWORD tsize=0;
				rt=::InternetWriteFile(hReq,normalPart,len1,&tsize);
			}
			//写入上传文件的各个部分
			if(len)
			{
				it=files.begin();
				ix=0;
				while(it!=files.end())
				{					
					{//写入单个文件头
						int l=fileHeads[ix].GetLength();
						DWORD tsize=0;
						rt=::InternetWriteFile(hReq,fileHeads[ix],l,&tsize);
					}
					//写入单个文件内容
					CString tmpPath(it->second);		
					long flen=ScriptFile::GetLocalFileLength(tmpPath);
					if(flen>0)
					{
						if(useProgress)
						{
							CString temp;
							temp.Format("上传文件:%s...",(LPCSTR)tmpPath);
							callback.UpdateStatus(temp);
						}
					
						DWORD size=flen;
						std::fstream fs;
						fs.open(tmpPath,std::ios_base::in|std::ios_base::binary);
						if(!fs.fail())
						{				
							DWORD leftSize=size;					
							while(!fs.eof() && leftSize>0)
							{	
								DWORD curBlockSize=0;
								if(leftSize>blobBlockSize)
								{											
									curBlockSize=blobBlockSize;
									leftSize-=blobBlockSize;
								}
								else
								{
									curBlockSize=leftSize;
									leftSize=0;											
								}
								char* fileBuf=new char[curBlockSize];
								fs.read(fileBuf,curBlockSize);
								DWORD tsize=0;
								rt=::InternetWriteFile(hReq,fileBuf,curBlockSize,&tsize);
								delete[] fileBuf;
							}
							fs.close();
						}						
						else
						{
							delete[] fileHeads;
							return CString("上传文件中有打不开的文件！").AllocSysString();
						}
					}
					else
					{
						delete[] fileHeads;
						return CString("上传文件中有打不开的文件！").AllocSysString();
					}
					it++,ix++;
				}
			}
			//写入结束边界
			{
				DWORD tsize=0;
				rt=::InternetWriteFile(hReq,endBound,len2,&tsize);
			}
			delete[] fileHeads;
			rt=::HttpEndRequest(hReq,NULL,HSR_SYNC,(DWORD_PTR)&callback);
			DWORD resultSize=0;
			do
			{
				rt=::InternetQueryDataAvailable(hReq,&resultSize,0,0);
				if(resultSize>0)
				{
					char* resBuf=new char[resultSize];
					resBuf[0]=0;
					rt=::InternetReadFile(hReq,resBuf,resultSize,&resultSize);
					ret+=CString(resBuf);
					delete[] resBuf;
				}
			}while(resultSize>0);
			rt=::InternetCloseHandle(hReq);
		}
		rt=::InternetCloseHandle(hHttp);
		rt=::InternetCloseHandle(hInet);
		return ret.AllocSysString();
	}
	virtual void __stdcall HttpPlaceFile(BSTR localFile,BSTR remoteFile)
	{
		CString local(localFile),remote(remoteFile);
		local.Replace('/','\\');
		remote.Replace('\\','/');
		long size=ScriptFile::GetLocalFileLength(local);
		if(size>0)
			httpFilesSize+=size;
		httpFiles.push_back(UploadNameValue(local,remote));		
	}
	virtual void __stdcall HttpClear(void)
	{
		httpFilesSize=0;
		httpFiles.clear();
	}
	virtual BSTR __stdcall HttpPut(BSTR server,UINT port,BSTR user,BSTR pass,UINT useProgress)
	{
		WinInetStatusCallback<T> callback;
		CString ret("");
		BOOL rt;
		HINTERNET hInet=::InternetOpen("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0)",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
		if(!hInet)
		{
			ret="无法初始化WININET功能！";
			return ret.AllocSysString();
		}
		if(useProgress)
		{
			callback.Init(owner);
			callback.SetMaxBytes(httpFilesSize,0);
			::InternetSetStatusCallback(hInet,WinInetStatusCallback<T>::InternetStatusCallback);
		}
		HINTERNET hHttp=::InternetConnect(hInet,CString(server),port,CString(user),CString(pass),INTERNET_SERVICE_HTTP,0,(DWORD_PTR)&callback);
		if(!hInet)
		{
			ret="无法连接HTTP服务器！";
			return ret.AllocSysString();
		}		
		int filenum=static_cast<int>(httpFiles.size());
		int fi=1;
		UploadNameValues::iterator it=httpFiles.begin();
		while(it!=httpFiles.end())
		{
			HINTERNET hReq=::HttpOpenRequest(hHttp,"PUT",it->Remote,NULL,NULL,NULL,NULL,(DWORD_PTR)&callback);
			if(hReq)
			{
				CString tmpPath(it->Local);		
				long len=ScriptFile::GetLocalFileLength(tmpPath);
				if(len>0)
				{
					if(useProgress)
					{
						CString temp;
						temp.Format("上传文件(%d/%d):%s...",fi,filenum,(LPCSTR)tmpPath);
						callback.UpdateStatus(temp);
					}
					INTERNET_BUFFERS buf;
					::ZeroMemory(&buf,sizeof(INTERNET_BUFFERS));
					buf.dwStructSize=sizeof(INTERNET_BUFFERS);
					buf.lpcszHeader="Content-Type:application/octet-stream\r\n";
					buf.dwHeadersLength=CString(buf.lpcszHeader).GetLength();
					buf.lpvBuffer=NULL;
					buf.dwBufferLength=0;
					buf.dwBufferTotal=len;
					
					rt=::HttpSendRequestEx(hReq,&buf,NULL,HSR_INITIATE,(DWORD_PTR)&callback);
				
					DWORD size=(DWORD)len;
					std::fstream fs;
					fs.open(tmpPath,std::ios_base::in|std::ios_base::binary);
					if(!fs.fail())
					{				
						DWORD leftSize=size;					
						while(!fs.eof() && leftSize>0)
						{	
							DWORD curBlockSize=0;
							if(leftSize>blobBlockSize)
							{											
								curBlockSize=blobBlockSize;
								leftSize-=blobBlockSize;
							}
							else
							{
								curBlockSize=leftSize;
								leftSize=0;											
							}
							char* fileBuf=new char[curBlockSize];
							fs.read(fileBuf,curBlockSize);
							DWORD tsize=0;
							rt=::InternetWriteFile(hReq,fileBuf,curBlockSize,&tsize);
							delete[] fileBuf;
						}
						fs.close();
					}			

					rt=::HttpEndRequest(hReq,NULL,HSR_SYNC,(DWORD_PTR)&callback);
					DWORD resultSize=0;
					do
					{
						rt=::InternetQueryDataAvailable(hReq,&resultSize,0,0);
						if(resultSize>0)
						{
							char* resBuf=new char[resultSize];
							resBuf[0]=0;
							rt=::InternetReadFile(hReq,resBuf,resultSize,&resultSize);
							ret+=CString(resBuf);
							delete[] resBuf;
						}
					}while(resultSize>0);
				}
				rt=::InternetCloseHandle(hReq);	
			}
			it++;fi++;
		}
		rt=::InternetCloseHandle(hHttp);
		rt=::InternetCloseHandle(hInet);
		return ret.AllocSysString();
	}
	virtual BSTR __stdcall HttpDelete(BSTR server,UINT port,BSTR user,BSTR pass,UINT useProgress)
	{
		WinInetStatusCallback<T> callback;
		CString ret("");
		BOOL rt;
		HINTERNET hInet=::InternetOpen("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0)",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
		if(!hInet)
		{
			ret="无法初始化WININET功能！";
			return ret.AllocSysString();
		}
		if(useProgress)
		{
			callback.Init(owner);
			::InternetSetStatusCallback(hInet,WinInetStatusCallback<T>::InternetStatusCallback);
		}
		HINTERNET hHttp=::InternetConnect(hInet,CString(server),port,CString(user),CString(pass),INTERNET_SERVICE_HTTP,0,(DWORD_PTR)&callback);
		if(!hInet)
		{
			ret="无法连接HTTP服务器！";
			return ret.AllocSysString();
		}
		int len=static_cast<int>(httpFiles.size());
		int fi=1;
		UploadNameValues::iterator it=httpFiles.begin();
		while(it!=httpFiles.end())
		{
			HINTERNET hReq=::HttpOpenRequest(hHttp,"DELETE",it->Remote,NULL,NULL,NULL,NULL,(DWORD_PTR)&callback);
			if(hReq)
			{
				if(useProgress)
				{
					CString temp;
					temp.Format("删除文件:%s...",(LPCSTR)it->Remote);
					callback.UpdateStatus(temp,fi*100/len);
				}
				rt=::HttpSendRequest(hReq,NULL,0,NULL,0);
				DWORD resultSize=0;
				do
				{
					rt=::InternetQueryDataAvailable(hReq,&resultSize,0,0);
					if(resultSize>0)
					{
						char* resBuf=new char[resultSize];
						resBuf[0]=0;
						rt=::InternetReadFile(hReq,resBuf,resultSize,&resultSize);
						ret+=CString(resBuf);
						delete[] resBuf;
					}
				}while(resultSize>0);
				rt=::InternetCloseHandle(hReq);		
			}
			it++;fi++;
		}
		rt=::InternetCloseHandle(hHttp);
		rt=::InternetCloseHandle(hInet);
		return ret.AllocSysString();
	}
	virtual void __stdcall FtpPlaceFile(BSTR localFile,BSTR targetPath)
	{
		CString local(localFile),remote(targetPath);
		local.Replace('/','\\');
		remote.Replace('\\','/');
		if(remote.GetLength()>0 && remote[remote.GetLength()-1]=='/')
		{
			remote=remote.Left(remote.GetLength()-1);
		}
		FtpPlaceFile_(local,remote);
	}
	virtual void __stdcall FtpClear(void)
	{
		ftpFilesSize=0;
		ftpFiles.clear();
	}
	virtual BSTR __stdcall FtpPut(BSTR server,UINT port,BSTR user,BSTR pass,UINT useProgress)
	{
		WinInetStatusCallback<T> callback;
		CString ret("");
		BOOL rt;
		HINTERNET hInet=::InternetOpen("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0)",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
		if(!hInet)
		{
			ret="无法初始化WININET功能！";
			return ret.AllocSysString();
		}
		if(useProgress)
		{
			callback.Init(owner);
			callback.SetMaxBytes(ftpFilesSize,0);
			::InternetSetStatusCallback(hInet,WinInetStatusCallback<T>::InternetStatusCallback);
		}
		HINTERNET hFtp=::InternetConnect(hInet,CString(server),port,CString(user),CString(pass),INTERNET_SERVICE_FTP,0,(DWORD_PTR)&callback);
		if(!hInet)
		{
			ret="无法连接FTP服务器！";
			return ret.AllocSysString();
		}		
		int filenum=static_cast<int>(ftpFiles.size());
		int fi=1;
		UploadNameValues::iterator it=ftpFiles.begin();
		while(it!=ftpFiles.end())
		{
			const CString& targetPath=it->Remote;
			if(targetPath.GetLength()>0)
			{
				rt=::FtpSetCurrentDirectory(hFtp,targetPath);
				if(!rt)
				{
					rt=FtpCreateDirectory_(hFtp,targetPath,callback,useProgress);
					if(!rt)
					{
						ret+="无法设置当前远程目录或无法创建远程目录:"+targetPath+"！";
						it++;
						continue;
					}
					else
					{
						rt=::FtpSetCurrentDirectory(hFtp,targetPath);
						if(!rt)
						{
							ret+="无法设置当前远程目录:"+targetPath+"！";
							it++;
							continue;
						}		
					}
				}
			}
			const CString& lFile=it->Local;
			if(lFile.GetLength()>0)
			{
				CString rFile=it->Local;
				rFile.Replace('/','\\');
				int i=rFile.ReverseFind('\\');
				if(i>=0)
				{
					rFile=rFile.Mid(i+1);
				}
				if(useProgress)
				{
					CString temp;
					temp.Format("上传文件(%d/%d)：%s...",fi,filenum,(LPCSTR)lFile);
					callback.UpdateStatus(temp,0);
				}
				rt=::FtpPutFile(hFtp,lFile,rFile,FTP_TRANSFER_TYPE_BINARY,(DWORD_PTR)&callback);
				if(!rt)
					ret+="写远程文件或读本机文件失败！";
			}
			it++;fi++;
		}
		rt=::InternetCloseHandle(hFtp);
		rt=::InternetCloseHandle(hInet);
		return ret.AllocSysString();
	}
	virtual BSTR __stdcall FtpDelete(BSTR server,UINT port,BSTR user,BSTR pass,UINT useProgress)
	{
		WinInetStatusCallback<T> callback;
		CString ret("");
		BOOL rt;
		HINTERNET hInet=::InternetOpen("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0)",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
		if(!hInet)
		{
			ret="无法初始化WININET功能！";
			return ret.AllocSysString();
		}
		if(useProgress)
		{
			callback.Init(owner);
			::InternetSetStatusCallback(hInet,WinInetStatusCallback<T>::InternetStatusCallback);
		}
		HINTERNET hFtp=::InternetConnect(hInet,CString(server),port,CString(user),CString(pass),INTERNET_SERVICE_FTP,0,(DWORD_PTR)&callback);
		if(!hInet)
		{
			ret="无法连接FTP服务器！";
			return ret.AllocSysString();
		}
		int len=static_cast<int>(ftpFiles.size());
		int fi=1;
		UploadNameValues::iterator it=ftpFiles.begin();
		while(it!=ftpFiles.end())
		{
			const CString& targetPath=it->Remote;
			const CString& lFile=it->Local;
			if(targetPath.GetLength()>0 && lFile.IsEmpty())
			{
				if(useProgress)
				{
					CString temp;
					temp.Format("删除目录%s...",(LPCSTR)targetPath);
					callback.UpdateStatus(temp,fi*100/len);
				}
				rt=FtpRemoveDirectory_(hFtp,targetPath,callback,useProgress);
				if(!rt)
				{
					ret+="无法删除远程目录:"+targetPath+"！";					
				}
			}			
			else if(targetPath.IsEmpty() && lFile.GetLength()>0)
			{
				if(useProgress)
				{
					CString temp;
					temp.Format("删除文件%s...",(LPCSTR)lFile);
					callback.UpdateStatus(temp,fi*100/len);
				}
				rt=::FtpDeleteFile(hFtp,lFile);
				if(!rt)
					ret+="删除远程文件失败！";
			}
			else if(targetPath.GetLength()>0 && lFile.GetLength()>0)
			{
				if(useProgress)
				{
					CString temp;
					temp.Format("文件改名%s=>%s...",(LPCSTR)lFile,(LPCSTR)targetPath);
					callback.UpdateStatus(temp,fi*100/len);
				}
				rt=::FtpRenameFile(hFtp,lFile,targetPath);
				if(!rt)
					ret+="无法将远程文件改名！";
			}
			it++;
			fi++;
		}
		rt=::InternetCloseHandle(hFtp);
		rt=::InternetCloseHandle(hInet);
		return ret.AllocSysString();
	}
	virtual BSTR __stdcall DownloadFile(BSTR url,BSTR saveAs,unsigned int useProgress)
	{		
		CString ret("");
		DownloadBindStatusCallback<T>* ptr=NULL;		
		if(useProgress)
		{
			ptr=DownloadBindStatusCallback<T>::CreateObject(owner,useProgress-1);
		}
		CString saveAsFile(saveAs);
		saveAsFile.Replace('/','\\');
		int i=saveAsFile.ReverseFind('\\');
		if(i>=0)
		{
			CString path=saveAsFile.Left(i);
			i=path.Find('\\');
			if(i==0)
				i=path.Find('\\',i+1);
			while(i>0)
			{
				CString lPath=path.Left(i);
				if(!::PathFileExists(lPath) && !::CreateDirectory(lPath,NULL))
					ret+="无法创建本地路径:"+lPath+"！";
				i=path.Find('\\',i+1);
			}
			if(!::PathFileExists(path) && !::CreateDirectory(path,NULL))
				ret+="无法创建本地路径:"+path+"！";
		}
		if(ret.IsEmpty())
		{
			HRESULT hr=::URLDownloadToFile(NULL,CString(url),saveAsFile,0,ptr);
			if(FAILED(hr))
			{
				ret+=L"下载失败或取消！";
			}
		}
		if(ptr)
			ptr->Release();
		return ret.AllocSysString();
	}
	virtual BSTR __stdcall DownloadFileToCache(BSTR url,unsigned int useProgress)
	{
		char buf[1024];
		DownloadBindStatusCallback<T>* ptr=NULL;
		if(useProgress)
		{
			ptr=DownloadBindStatusCallback<T>::CreateObject(owner,useProgress-1);
		}
		HRESULT hr=::URLDownloadToCacheFile(NULL,CString(url),buf,1024,0,ptr);
		if(FAILED(hr))
		{
			buf[0]=0;
		}
		if(ptr)
			ptr->Release();
		return CString(buf).AllocSysString();
	}
	virtual unsigned int __stdcall InternetGetConnectedState(void)
	{
		DWORD flag;
		BOOL rt=::InternetGetConnectedState(&flag,0);
		if(rt)
			return flag;
		return 0;
	}
public:
	BEGIN_INTF(MyInet)	
		METHOD(MpdPlaceNameValue)
		METHOD(MpdPlaceFile)
		METHOD(MpdClear)
		METHOD(MpdPost)
		METHOD(HttpPlaceFile)
		METHOD(HttpClear)
		METHOD(HttpPut)
		METHOD(HttpDelete)
		METHOD(FtpPlaceFile)
		METHOD(FtpClear)
		METHOD(FtpPut)		
		METHOD(FtpDelete)
		METHOD(DownloadFile)
		METHOD(DownloadFileToCache)
		METHOD(InternetGetConnectedState)
	END_INTF()
private:	
	void FtpPlaceFile_(const CString& localFile,const CString& targetPath)
	{
		if(::PathIsDirectory(localFile))
		{
			char lpath[1025];
			::strcpy(lpath,localFile);
			::PathRemoveBackslash(lpath);
			CString path(lpath);
			CString dName=::PathFindFileName(path);
			path+="\\";
			CString rpath(targetPath);
			if(rpath.IsEmpty() || rpath[rpath.GetLength()-1]!='/')
				rpath+="/"+dName;
			if(::PathIsDirectoryEmpty(localFile))
			{//填写为空目录建立远程目录
				ftpFiles.push_back(UploadNameValue("",rpath));
				return;
			}
			WIN32_FIND_DATA FileData;
			HANDLE hSearch = ::FindFirstFile(path+"*", &FileData); 
			if (hSearch != INVALID_HANDLE_VALUE)
			{
				do
				{
					CString fileName(FileData.cFileName);
					if(fileName=="." || fileName=="..")
						continue;
					fileName=path+fileName;					
					FtpPlaceFile_(fileName,rpath);//文件或非空子目录递归处理			
				}while(::FindNextFile(hSearch, &FileData));
				::FindClose(hSearch);
			}			
		}
		else
		{
			long size=ScriptFile::GetLocalFileLength(localFile);
			if(size>0)
				ftpFilesSize+=size;
			ftpFiles.push_back(UploadNameValue(localFile,targetPath));
		}
	}
	BOOL FtpCreateDirectory_(HINTERNET hFtp,const CString& path,WinInetStatusCallback<T>& callback,int useProgress)
	{
		CString path_(path);
		path_.Replace('\\','/');
		int i=path_.Find('/');
		if(i==0)
			i=path_.Find('/',i+1);
		while(i>0)
		{
			CString lPath=path_.Left(i);
			if(useProgress)
			{
				CString temp;
				temp.Format("创建目录%s...",(LPCSTR)lPath);
				callback.UpdateStatus(temp);
			}
			if(!::FtpSetCurrentDirectory(hFtp,lPath) && !::FtpCreateDirectory(hFtp,lPath))
				return FALSE;
			i=path_.Find('/',i+1);
		}
		if(useProgress)
		{
			CString temp;
			temp.Format("创建目录%s...",(LPCSTR)path_);
			callback.UpdateStatus(temp);
		}
		if(!::FtpSetCurrentDirectory(hFtp,path_) && !::FtpCreateDirectory(hFtp,path_))
			return FALSE;
		return TRUE;
	}
	BOOL FtpRemoveDirectory_(HINTERNET hFtp,const CString& path_,WinInetStatusCallback<T>& callback,int useProgress)
	{
		CString path(path_);
		path.Replace('\\','/');
		return FtpRemoveDirectory_impl(hFtp,path,callback,useProgress);
	}
	BOOL FtpRemoveDirectory_impl(HINTERNET hFtp,const CString& path_,WinInetStatusCallback<T>& callback,int useProgress)
	{
		BOOL rt=0;
		CString path(path_);
		if(path.IsEmpty() || path[path.GetLength()-1]!='/')
			path+="/";
		FileNames subdirs;
		WIN32_FIND_DATA FileData;
		HINTERNET hSearch = ::FtpFindFirstFile(hFtp,path+"*",&FileData,NULL,(DWORD_PTR)&callback); 
		if (hSearch != NULL) 
		{						
			do 
			{
				CString fileName(FileData.cFileName);
				if(fileName=="." || fileName=="..")
					continue;
				fileName=path+fileName;
				if(::FtpSetCurrentDirectory(hFtp,fileName))
				{
					//因为一个FTP会话只允许一个文件枚举句柄，所以子目录
					//先记住待当前句柄关闭后再递归
					subdirs.push_back(fileName);					
				}
				else
				{
					if(useProgress)
					{
						CString temp;
						temp.Format("删除文件%s...",(LPCSTR)fileName);
						callback.UpdateStatus(temp);
					}
					rt=::FtpDeleteFile(hFtp,fileName);
				}
			}while(::InternetFindNextFile(hSearch, &FileData));
			rt=::InternetCloseHandle(hSearch);
		}
		//当前枚举句柄已关闭，开始子目录递归操作
		::FtpSetCurrentDirectory(hFtp,"/");
		FileNames::iterator it=subdirs.begin();
		while(it!=subdirs.end())
		{
			rt=FtpRemoveDirectory_impl(hFtp,*it,callback,useProgress);
			it++;
		}
		if(useProgress)
		{
			CString temp;
			temp.Format("删除目录%s...",(LPCSTR)path_);
			callback.UpdateStatus(temp);
		}
		return ::FtpRemoveDirectory(hFtp,path_);
	}
public:
	MyInet():owner(NULL),httpFilesSize(0),ftpFilesSize(0),blobBlockSize(1024*1024)
	{}
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	T* owner;

	UINT blobBlockSize;

	NameValues nameValues;
	NameValues files;
	NameValues fileTypes;

	UploadNameValues httpFiles;
	UINT httpFilesSize;

	UploadNameValues ftpFiles;
	UINT ftpFilesSize;
};
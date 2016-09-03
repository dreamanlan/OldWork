// WinForIE.h: interface for the WinForIE class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DLGFORIE_H__46894D9A_C549_4FAA_B2ED_7A17058475C1__INCLUDED_)
#define AFX_DLGFORIE_H__46894D9A_C549_4FAA_B2ED_7A17058475C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#import <c:\windows\system32\mshtml.tlb> raw_interfaces_only, raw_native_types, named_guids  
#import <c:\windows\system32\shdocvw.dll> raw_interfaces_only, raw_native_types, named_guids  

#include "WebUIImpl.h"
#include "ExternalObj.h"

#define DEFERTIMERID	0
#define DEFERTIME		100
#define OFFSETDISTANCE	30

static void DebugMsg(const char* msg)
{
	//::MessageBox(NULL,msg,"WinForIE",MB_OK);
	::OutputDebugString(msg);
}

//本文件使用的消息循环工具
class IEMessageLoop
{
public:
	inline void Quit(int i)
	{
		flag[i]=true;
	}
	inline int Run(CMessageFilter* filter=NULL,int i=-1)
	{
		BOOL bRet;
		if(i>=0)
			flag[i]=false;
		for(;i<0 || !flag[i];)
		{
			bRet=::GetMessage( &msg, NULL, 0, 0 );			
			if(!bRet)
				break;						
			if (bRet == -1)
			{				
				break;
			}			
			else
			{
				if(filter && filter->PreTranslateMessage(&msg))
					continue;
				::TranslateMessage(&msg); 
				::DispatchMessage(&msg); 
			}						
		}	
		return (int)msg.wParam;
	}
private:	
	bool flag[MAXNEWWIN+1];
	MSG msg;
};

typedef Delegation1<bool,MSG*> PreTransMsgEvent;
typedef Delegation6<bool,HWND,UINT,WPARAM,LPARAM,LRESULT&,BOOL&> IEDlgEvent;
typedef Delegation3<bool,DWORD,VARIANT_BOOL,VARIANT_BOOL*> CloseWindowEvent;
typedef Delegation6<bool,HWND,LPCSTR,LPCSTR,DWORD,LPCSTR,DWORD> ShowMessageEvent;

template<bool B>
	struct Bool2Type
{
	enum{value=B};
};

#define ieID 0x01

template<
		bool handleMessage=true,	
		DWORD stylePopup=WS_POPUP | WS_BORDER | WS_CAPTION | WS_SYSMENU | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_SIZEBOX,
		DWORD styleExPopup=WS_EX_LEFT,
		DWORD styleChild=WS_CHILD,
		DWORD styleExChild=WS_EX_LEFT,
		int iconRes=IDR_MAINFRAME,
		bool defaultNewWindow=true,
		typename ApplicationT=IEAppPointer
		>
	class WinForIE : 			
			public WebUIImpl<WinForIE<handleMessage,stylePopup,styleExPopup,styleChild,styleExChild,iconRes,defaultNewWindow,ApplicationT>,iconRes>,
			public IDispEventImpl<ieID, WinForIE<handleMessage,stylePopup,styleExPopup,styleChild,styleExChild,iconRes,defaultNewWindow,ApplicationT> ,&SHDocVw::DIID_DWebBrowserEvents2,&SHDocVw::LIBID_SHDocVw,1,0>,
			public CMessageFilter
{	
public:
	typedef WinForIE<handleMessage,stylePopup,styleExPopup,styleChild,styleExChild,iconRes,defaultNewWindow,ApplicationT> WinForIEClass;
	typedef WinForIE<false,stylePopup,styleExPopup,styleChild,styleExChild,iconRes,defaultNewWindow,ApplicationT> NoMessageHandleClass;
	typedef ExterObj<WinForIEClass,ApplicationT> ExterObjClass;
	typedef WebUIImpl<WinForIEClass,iconRes> WebUIImplClass;
	typedef std::map<DWORD,CString> ScriptHandlers;
	typedef std::map<IControl*,HRGN> ControlRgns;

	template<bool impl>
		class NewWindowClassT
	{
	public:
		typedef NewWindowClassT<impl> ThisClass;
	public:
		static inline void Create(ThisClass*& pNewWin)
		{
			if(pNewWin==NULL)
				pNewWin=new NewWindowClass();
		}
		static inline void Open(ThisClass* const pNewWin,HWND pWnd,IDispatch** ppDisp,VARIANT_BOOL* cancel,CloseWindowEvent* pCloseWindowEvent,ShowMessageEvent* pShowMessageEvent,int x,int y,int w,int h)
		{
			if(pNewWin)
				pNewWin->Open(pWnd,ppDisp,cancel,pCloseWindowEvent,pShowMessageEvent,x,y,w,h);
		}
		static inline void Close(ThisClass* const pNewWin)
		{
			if(pNewWin)
			{
				pNewWin->CloseOpened();
			}
		}
		static inline void Destroy(ThisClass*& pNewWin)
		{
			if(pNewWin)
			{
				pNewWin->CloseOpened();
				delete pNewWin;
				pNewWin=NULL;
			}
		}	
		static inline IDispatch* Get(ThisClass* const pNewWin,int index)
		{
			if(!pNewWin)return NULL;
			return pNewWin->Get(index);
		}
		static inline BOOL PreTranslateMessage(ThisClass* const pNewWin,MSG* pMsg)
		{
			if(!pNewWin)return NULL;
			return pNewWin->PreTranslateMessage(pMsg);
		}
	private:
		inline void Open(HWND pWnd,IDispatch** ppDisp,VARIANT_BOOL* cancel,CloseWindowEvent* pCloseWindowEvent,ShowMessageEvent* pShowMessageEvent,int x,int y,int w,int h)
		{
			cancel;
			int i=0;
			for(;i<MAXNEWWIN;i++)
			{
				if(!newWin[i].IsWindow())break;
			}
			if(i<MAXNEWWIN)
			{
				if(pCloseWindowEvent && newWin[i].OnCloseWindow.isNull())
				{
					newWin[i].OnCloseWindow=*pCloseWindowEvent;
				}
				if(pShowMessageEvent && newWin[i].OnShowMessage.isNull())
				{
					newWin[i].OnShowMessage=*pShowMessageEvent;
				}

				newWin[i].InitTitle("");
				newWin[i].InitNewWindow();
				newWin[i].DoModeless(pWnd,x,y,w,h,SW_HIDE);
				if(!(newWin[i].iePtr))
				{
					return;
				}
				else
				{
					newWin[i].iePtr.QueryInterface(ppDisp);
					//newWin[i].iePtr->put_Visible(FALSE);  
				}
			}
			else
			{
				//::MessageBox(pWnd,"太多的新窗口！","打开新窗口错误",MB_OK);
			}
		}
		inline void CloseOpened(void)
		{
			for(int i=0;i<MAXNEWWIN;i++)
			{
				if(newWin[i].IsWindow())
				{
					newWin[i].DestroyWindow();
				}
			}
		}
		inline IDispatch* Get(int i)
		{
			if(i<0)i=0;
			if(i>=MAXNEWWIN)i=MAXNEWWIN-1;
			IDispatch* ptr=NULL;
			try
			{
				if(!(newWin[i].iePtr))
				{
					ptr=NULL;
				}
				else
				{
					newWin[i].iePtr.QueryInterface(&ptr);
				}
			}
			catch(...)
			{
				ptr=NULL;
			}
			return ptr;
		}
		inline BOOL PreTranslateMessage(MSG* pMsg)
		{
			for(int i=0;i<MAXNEWWIN;i++)
			{
				if(newWin[i].IsWindow())
				{
					if(newWin[i].PreTranslateMessage(pMsg))
						return TRUE;
				}
			}
			return FALSE;
		}
	private:
		NoMessageHandleClass newWin[MAXNEWWIN];
	};
	template<>
		class NewWindowClassT<false>
	{
	public:
		typedef NewWindowClassT<false> ThisClass;
	public:
		static inline void Create(ThisClass*& pNewWin)
		{}
		static inline void Open(ThisClass* const pNewWin,HWND pWnd,IDispatch** ppDisp,VARIANT_BOOL* cancel,CloseWindowEvent* pCloseWindowEvent,ShowMessageEvent* pShowMessageEvent,int x,int y,int w,int h)
		{}
		static inline void Close(ThisClass* const pNewWin)
		{}
		static inline void Destroy(ThisClass*& pNewWin)
		{}	
		static inline IDispatch* Get(ThisClass* const pNewWin,int index)
		{return NULL;}		
		static inline BOOL PreTranslateMessage(ThisClass* const pNewWin,MSG* pMsg)
		{return FALSE;}
	};	
	typedef NewWindowClassT<defaultNewWindow> NewWindowClass;
public:
	inline void DontPostQuitMessage(void)
	{
		dontPostQuitMsg=true;
	}
	inline void InitNewWindow(void)
	{
		isNewWindow=true;
		htmlBuf=NULL;
		url=L"";
	}
	inline void InitURL(BSTR openurl)
	{
		isNewWindow=false;
		htmlBuf=NULL;
		url=openurl;
	}
	inline void InitHTML(const char* buf)
	{
		isNewWindow=false;
		url=L"";
		htmlStr=CString(buf);
		htmlBuf=(LPSTR)(LPCSTR)htmlStr;
	}
	inline void InitTitle(const char* winTitle)
	{
		title=winTitle;
	}
	inline void DoModal(HWND parent,int x,int y,int w,int h,int cmdShow=SW_SHOW)
	{		
		DoModeless(parent,x,y,w,h,cmdShow);
		isModal=true;
		isChild=false;
		::EnableWindow(ExterUtility::GetTopLevelWindow(parent),FALSE);
		IEMessageLoop().Run(this);
	}
	inline void DoModeless(HWND parent,int x,int y,int w,int h,int cmdShow=SW_SHOW)
	{
		isModal=false;
		isChild=false;
		int xb=x,yb=y;		
		if(x==-1)
			x=0;
		if(y==-1)
			y=0;
		Create(parent,CRect(x,y,x+w,y+h),title,stylePopup & (~WS_CHILD),styleExPopup);
		ShowWindow(cmdShow);
		UpdateWindow();
		if(xb==-1 || yb==-1)
			CenterWindow();
	}
	inline void DoChild(HWND parent,int x,int y,int w,int h,int cmdShow=SW_SHOW)
	{
		isModal=false;
		isChild=true;	
		if(x==-1)
			x=0;
		if(y==-1)
			y=0;
		Create(parent,CRect(x,y,x+w,y+h),title,WS_CHILD | styleChild,styleExChild);
		ShowWindow(cmdShow);
		UpdateWindow();
	}
public:
	inline void RegisterScriptHandler(DWORD id,const CString& handler)
	{
		scpHandlers[id]=handler;
	}
	inline void UnregisterScriptHandler(DWORD id)
	{
		scpHandlers.erase(id);
	}
	inline void DoMessageLoopOnce(void)
	{
		BOOL bRet=::PeekMessage( &msg, NULL, 0, 0, PM_REMOVE );			
		if(bRet)
		{
			if(!PreTranslateMessage(&msg))
			{
				::TranslateMessage(&msg); 
				::DispatchMessage(&msg); 
			}
		}
	}
	inline BOOL PreTranslateMessage(MSG* pMsg)
	{
		if(!IsWindow())
			return FALSE;
		if(DoPreTransMsg(pMsg,Bool2Type<handleMessage>()))
			return TRUE;
		//先让子窗口处理
		if(NewWindowClass::PreTranslateMessage(pNewWin,pMsg))
			return TRUE;
		//如果窗口是激活的窗口,则处理
		bool isMDI=false;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		HWND foreWnd=::GetForegroundWindow();
		if(isMDI)
		{
			BOOL isZoomed=FALSE;
			foreWnd=(HWND)::SendMessage(::GetParent(hwnd),WM_MDIGETACTIVE,NULL,(LPARAM)&isZoomed);
		}
		if(foreWnd!=hwnd)
			return FALSE;
		if(DoControlPreTranslateMessage(pMsg))
			return TRUE;
		if((pMsg->message < WM_KEYFIRST || pMsg->message > WM_KEYLAST) &&
			(pMsg->message < WM_MOUSEFIRST || pMsg->message > WM_MOUSELAST))
			return FALSE;
		return (BOOL)SendMessage(WM_FORWARDMSG, 0, (LPARAM)pMsg);
	}	
	LRESULT ShowMessage(HWND hwnd,LPCSTR lpstrText,LPCSTR lpstrCaption,DWORD dwType,LPCSTR lpstrHelpFile,DWORD dwHelpContext)
	{
		if(!OnShowMessage.isNull())
		{
			if(OnShowMessage(hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext))
				return TRUE;
		}		
		return ::MessageBox(hwnd,CString(lpstrText),"",dwType);
	}
public:
	inline void Navigate(BSTR openurl,const char* winTitle=NULL)
	{
		InitURL(openurl);
		InitTitle(winTitle);	
		if(!iePtr)
		{
			//
		}
		else
		{
			iePtr->Navigate2(&CComVariant(url));
		}
	}
	inline void Navigate(const char* buf,const char* winTitle=NULL)
	{		
		InitHTML(buf);
		InitTitle(winTitle);
						
		if(!iePtr)
		{
			//
		}
		else
		{
			iePtr->Navigate2(&CComVariant(L"about:blank"));
		}
	}
	inline IDispatch* GetExternal(void)
	{
		if(!exterObj)return NULL;
		exterObj->AddRef();
		return exterObj;
	}
	inline IDispatch* GetWindowObj(void)
	{
		if(IsWindow())
		{
			CComPtr<IDispatch> disp;
			if(!iePtr)
			{
				//
			}
			else
			{
				iePtr->get_Document(&disp);
			}
			if(!disp)return NULL;
			CComQIPtr<MSHTML::IHTMLDocument2> doc2Ptr(disp);
			if(!doc2Ptr)return NULL;
			CComPtr<MSHTML::IHTMLWindow2> win2Ptr;
			doc2Ptr->get_parentWindow(&win2Ptr);
			if(!win2Ptr)return NULL;
			return win2Ptr.Detach();
		}
		return NULL;
	}
	inline IDispatch* GetDocumentObj(void)
	{
		if(IsWindow())
		{
			CComPtr<IDispatch> disp;
			if(!iePtr)
			{
				//
			}
			else
			{
				iePtr->get_Document(&disp);
			}
			if(!disp)return NULL;
			CComQIPtr<MSHTML::IHTMLDocument2> doc2Ptr(disp);
			if(!doc2Ptr)return NULL;
			return doc2Ptr.Detach();
		}
		return NULL;
	}
	inline IDispatch* GetNewWebBrowser(int index)
	{
		return NewWindowClass::Get(pNewWin,index);
	}
public:
	inline DWORD GetCurrentSecurityPolicy(BSTR url,DWORD dwAction)
	{
		DWORD policy=GetWildcardsSecurityPolicy(dwAction);
		if(policy==INET_E_DEFAULT_ACTION)
		{
			HRESULT hr=defaultSecurityManager->ProcessUrlAction(url,dwAction,(BYTE*)&policy,4,NULL,0,PUAF_ACCEPT_WILDCARD_SCHEME,NULL);
			if(FAILED(hr))
				return hr;
		}
		return policy;
	}
	static inline void SetWildcardsSecurityPolicy(DWORD dwAction,DWORD policy)
	{
		IEAppPointer::SetWildcardsSecurityPolicy(dwAction,policy);
	}
	static inline DWORD GetWildcardsSecurityPolicy(DWORD dwAction)
	{
		return IEAppPointer::GetWildcardsSecurityPolicy(dwAction);
	}	
	static inline void SetDispatchOption(DWORD dispid,CComVariant option)
	{
		IEAppPointer::SetDispatchOption(dispid,option);
	}
	static inline CComVariant GetDispatchOption(DWORD dispid)
	{
		return IEAppPointer::GetDispatchOption(dispid);
	}
private:
	inline bool GetElementRect(IDispatch* pDoc,BSTR id,RECT* rt)
	{
		CComQIPtr<MSHTML::IHTMLDocument3> doc3Ptr(pDoc);
		if(!doc3Ptr)
			return false;
		CComPtr<MSHTML::IHTMLElement> elePtr;
		HRESULT hr=doc3Ptr->getElementById(id,&elePtr);
		if(!elePtr)
			return false;
		long x=0,y=0;
		long w=0,h=0;
		hr=elePtr->get_offsetWidth(&w);
		hr=elePtr->get_offsetHeight(&h);
		while(!(!elePtr))
		{
			long dx=0,dy=0;
			hr=elePtr->get_offsetLeft(&dx);
			hr=elePtr->get_offsetTop(&dy);
			x+=dx;
			y+=dy;

			CComPtr<MSHTML::IHTMLElement> elePtr2=elePtr;
			elePtr.Release();
			hr=elePtr2->get_offsetParent(&elePtr);
		}
		CComQIPtr<MSHTML::IHTMLDocument2> doc2Ptr(pDoc);
		if(!doc2Ptr)
			return false;
		CComPtr<MSHTML::IHTMLElement> bodyPtr;
		hr=doc2Ptr->get_body(&bodyPtr);
		CComQIPtr<MSHTML::IHTMLElement2> body2Ptr(bodyPtr);
		if(!body2Ptr)
			return false;
		long bx=0,by=0;
		hr=body2Ptr->get_clientLeft(&bx);
		hr=body2Ptr->get_clientTop(&by);
		x+=bx;
		y+=by;
		rt->left=x;
		rt->top=y;
		rt->right=x+w;
		rt->bottom=y+h;
		return true;
	}
	inline void UpdateIERgn(void)
	{
		if(!IsWindow())
			return;
		HWND ieHwnd=::FindWindowEx(m_hWnd,NULL,_T("Shell Embedding"),NULL);
		if(!ieHwnd || !::IsWindow(ieHwnd))
			return;
		CRect rt;
		BOOL r=GetClientRect(&rt);
		HRGN hrgn=::CreateRectRgn(0,0,rt.Width(),rt.Height());
		//排除控件区域
		ControlRgns::iterator it=ctrlRgns.begin();
		while(it!=ctrlRgns.end())
		{
			HWND hWnd=it->first->GetHwnd();
			if(::IsWindowVisible(hWnd))
			{
				::CombineRgn(hrgn,hrgn,it->second,RGN_DIFF);
			}
			it++;
		}
		r=::SetWindowRgn(ieHwnd,hrgn,TRUE);
		if(!r)
		{
			::DeleteObject(hrgn);
		}
	}
	inline void ClearControlRgns(void)
	{
		ControlRgns::iterator it=ctrlRgns.begin();
		while(it!=ctrlRgns.end())
		{
			::DeleteObject(it->second);
			it++;
		}
		ctrlRgns.clear();
	}
public:
	inline void InsertControl(IControl* pCtrl)
	{
		ControlRgns::iterator it=ctrlRgns.find(pCtrl);
		if(it==ctrlRgns.end())
		{
			ctrlRgns[pCtrl]=::CreateRectRgn(0,0,0,0);
			ReLayoutControls();
		}
	}
	inline void EraseControl(IControl* pCtrl)
	{
		ControlRgns::iterator it=ctrlRgns.find(pCtrl);
		if(it!=ctrlRgns.end())
		{
			::DeleteObject(it->second);
			ctrlRgns.erase(it);
			ReLayoutControls();
		}
	}
	inline void ReLayoutControls(void)
	{
		if(!IsWindow())
			return;
		if(!iePtr)
			return;
		CComPtr<IDispatch> disp;
		HRESULT hr=iePtr->get_Document(&disp);
		if(!disp)return;

		ControlRgns::iterator it=ctrlRgns.begin();
		for(;it!=ctrlRgns.end();it++)
		{
			BSTR id=it->first->GetPlaceHolderID();
			CRect rt;
			if(GetElementRect(disp,id,&rt))
			{
				HWND hWnd=it->first->GetHwnd();
				if(::IsWindowVisible(hWnd))
				{
					::MoveWindow(hWnd,rt.left,rt.top,rt.Width(),rt.Height(),TRUE);
				}
				::SetRectRgn(it->second,rt.left,rt.top,rt.right,rt.bottom);
			}
		}
		UpdateIERgn();
	}
	inline BOOL DoControlPreTranslateMessage(MSG* pMsg)
	{
		ControlRgns::iterator it=ctrlRgns.begin();
		while(it!=ctrlRgns.end())
		{
			HWND hwnd=it->first->GetHwnd();
			HWND hwnd_=::GetFocus();
			if(hwnd==hwnd_)
			{
				/*
				::TranslateMessage(pMsg);
				::DispatchMessage(pMsg);
				return TRUE;
				*/
				switch(pMsg->message)
				{
				case WM_KEYDOWN:
					switch(LOWORD(pMsg->wParam))
					{
					case VK_BACK:
					case VK_RETURN:
					case VK_TAB:
					case VK_LEFT:
					case VK_UP:
					case VK_RIGHT:
					case VK_DOWN:
						::DispatchMessage(pMsg);
						return TRUE;
					}
					break;
				}				
			}
			it++;
		}
		return FALSE;
	}
	inline BOOL DoNotify(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		if(uMsg == WM_NOTIFY)
		{
			UINT id=((LPNMHDR)lParam)->idFrom;
			ControlRgns::iterator it=ctrlRgns.begin();
			while(it!=ctrlRgns.end())
			{
				if(it->first->GetID()==id)
				{
					bHandled = TRUE;
					it->first->OnNotify((int)wParam, (LPNMHDR)lParam, bHandled);
					if(bHandled)return TRUE;
				}
				it++;
			}
		}
		return FALSE;
	}
public:
	inline void Clear(void)
	{		
		if(!(!defaultSecurityManager))
		{
			IInternetSecurityManager* p=defaultSecurityManager.Detach();
			p->Release();
		}
		if(!(!iePtr))
		{
			SHDocVw::IWebBrowser2* p=iePtr.Detach();
			p->Release();
		}
		if(!(!exterObjDisp))
		{
			IDispatch* p=exterObjDisp.Detach();
			p->Release();
		}
		url.Empty();
		scpHandlers.clear();
		ClearControlRgns();
	}
private:
	inline BOOL DoPreTransMsg(MSG* pMsg,Bool2Type<true>)
	{
		if(!OnPreTransMsg.isNull())
		{
			return (BOOL)OnPreTransMsg(pMsg);
		}
		else
		{
			return FALSE;
		}
	}
	inline BOOL DoPreTransMsg(MSG* pMsg,Bool2Type<false>)
	{
		return FALSE;
	}
	inline BOOL DoMessageHandle(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled,Bool2Type<true>)
	{		
		if(!OnMessage.isNull())
		{
			return (BOOL)OnMessage(hWnd,uMsg,wParam,lParam,lResult,bHandled);
		}
		else
		{
			return FALSE;
		}		
	}
	inline BOOL DoMessageHandle(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled,Bool2Type<false>)
	{
		return FALSE;
	}
public:
	BEGIN_MSG_MAP(WinForIEClass)
		{//将消息处理转发到事件处理中去
			BOOL result=DoMessageHandle(hWnd,uMsg,wParam,lParam,lResult,bHandled,Bool2Type<handleMessage>());
			if(result)return TRUE;
			result=DoScriptHandle(hWnd,uMsg,wParam,lParam,lResult,bHandled);
			if(result)return TRUE;
			result=DoNotify(hWnd,uMsg,wParam,lParam,lResult,bHandled);
			if(result)return TRUE;
		}
		MESSAGE_HANDLER(WM_CREATE, OnCreate)		
		MESSAGE_HANDLER(WM_CLOSE,OnClose)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		MESSAGE_HANDLER(WM_SIZE, OnSize)
		MESSAGE_HANDLER(WM_COMMAND,OnMenuCommand)
		MESSAGE_HANDLER(WM_COPYDATA,OnCopyDataMsg)
		CHAIN_MSG_MAP(WebUIImplClass)
	END_MSG_MAP()	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
	inline BOOL DoScriptHandle(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		ScriptHandlers::iterator it=scpHandlers.find(uMsg);
		if(it!=scpHandlers.end())
		{
			IDispatch* temp=GetWindowObj();
			if(temp)
			{
				CComPtr<IDispatch> p;
				p.Attach(temp);				
				int rt=DispatchDriver::Invoke(p,CComBSTR(it->second),(int)uMsg,(int)wParam,(int)lParam,Type2Type<int>());
				if(rt)
				{
					return TRUE;
				}
			}
		}
		return FALSE;
	}
	LRESULT OnMenuCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		bHandled=FALSE;		
		DWORD hi=HIWORD(wParam);
		if(hi || lParam)
			return 0;
		DWORD lo=LOWORD(wParam);
		IDispatch* temp=GetWindowObj();
		if(temp)
		{
			CComPtr<IDispatch> p;
			p.Attach(temp);
			int rt=DispatchDriver::Invoke(p,L"OnMenuCommand",(int)lo,Type2Type<int>());
			if(rt)
			{
				bHandled=TRUE;
			}
		}
		return 0;
	}	
	LRESULT OnCopyDataMsg(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
	{		
		COPYDATASTRUCT data=*(COPYDATASTRUCT*)lParam;
		IDispatch* temp=GetWindowObj();
		if(!temp)return 0;
		CComPtr<IDispatch> p;
		p.Attach(temp);
		UINT r=DispatchDriver::Invoke(p,L"CopyDataMsg",wParam,data.dwData,data.cbData,CComBSTR((char*)data.lpData),Type2Type<UINT>());
		return r;
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:
	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
	{
		HRESULT hr=defaultSecurityManager.CoCreateInstance(CLSID_InternetSecurityManager,NULL,CLSCTX_INPROC_SERVER);
		::DebugMsg("WinForIE:创建CLSID_InternetSecurityManager");

		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		::SetWindowText(hWnd,title);							

		IUnknown* p=NULL;
		p=CreateWebBrowser((IUnknown*)(_IDispEvent*)this);
		p->QueryInterface(&iePtr);
		p->Release();

		exterObj=ExterObjClass::CreateDispatch();
		exterObjDisp.Attach(exterObj);
		exterObj->Init(this);

		NewWindowClass::Create(pNewWin);

		if(!iePtr)
		{
			//
		}
		else
		{
			//iePtr->put_Silent(VARIANT_TRUE);
		}

		if(!isNewWindow)
		{
			if(url!=CComBSTR(L"") && !htmlBuf)
			{
				CString temp;
				temp.Format("WinForIE:Navigate %s",(LPCSTR)CString(url));
				::DebugMsg(temp);
				if(!iePtr)
				{
					//
				}
				else
				{
					iePtr->Navigate2(&CComVariant(url));
				}
			}
			else
			{
				if(!iePtr)
				{
					//
				}
				else
				{
					iePtr->Navigate2(&CComVariant(L"about:blank"));
				}
			}
		}
		CRect rt;
		GetWindowRect(rt);
		BOOL temp;
		OnSize(WM_SIZE,NULL,MAKELPARAM(rt.Width(),rt.Height()),temp);
#ifdef WTL_MODULE
		if(!isChild)
		{
			CMessageLoop* pLoop = _Module.GetMessageLoop();
			if(pLoop)pLoop->AddMessageFilter(this);
		}
#endif
		::SetTimer(hWnd,DEFERTIMERID,DEFERTIME,&WinForIE::MyTimerProc);
		return 0;
	}
	LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{		
		//根据脚本决定是否关闭。
		{	
			IDispatch* temp=GetWindowObj();
			if(temp)
			{
				CComPtr<IDispatch> p;
				p.Attach(temp);
				int rt=DispatchDriver::Invoke(p,L"OnClose",Type2Type<int>());
				if(rt)
				{
					return 0;
				}
			}
		}		
		if(isModal)
		{
			HWND parent=GetParent();
			::EnableWindow(parent,TRUE);
			DestroyWindow();	
		}
		else
			DestroyWindow();		
		return 0;
	}
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		NewWindowClass::Destroy(pNewWin);
#ifdef WTL_MODULE
		if(!isChild)
		{
			CMessageLoop* pLoop = _Module.GetMessageLoop();
			if(pLoop)pLoop->RemoveMessageFilter(this);
		}
#endif
		if(isModal)
			::PostQuitMessage(0);
		if(!dontPostQuitMsg && !isChild && !isNewWindow && IsWindow())
		{
			HWND hWnd=GetParent();
			if(!hWnd)
				::PostQuitMessage(0);
		}
		WebUIImplClass::OnDestroy(uMsg,wParam,lParam,bHandled);
		Clear();
		return 0;
	}
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		WebUIImplClass::OnSize(uMsg,wParam,lParam,bHandled);
		if(IsWindow())
		{	
			IDispatch* temp=GetWindowObj();
			if(!temp)return 0;
			CComPtr<IDispatch> p;
			p.Attach(temp);
			if(!p)return 0;
			DispatchDriver::NRInvoke(p,L"OnSize");
		}
		ReLayoutControls();
		return 0;
	}
///////////////////////////////////////////////////////////////////////////////////////
public:
	BEGIN_SINK_MAP(WinForIEClass)
		//Make sure the Event Handlers have __stdcall calling convention		
        SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x00000071,OnTitleChangeExplorer)
        SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x00000106,OnWindowSetResizableExplorer)		
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x00000066,OnStatusTextChangeExplorer)
        
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x102, OnFullScreenExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x104, OnTheaterModeExplorer)				
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x108, OnWindowSetLeftExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x109, OnWindowSetTopExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x10a, OnWindowSetWidthExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x10b, OnWindowSetHeightExplorer)

		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x10d, OnSetSecureLockIconExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x10f, OnNavigateErrorExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x111, OnNewWindow3Explorer)
		
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x107, OnWindowClosingExplorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x0fa, OnNavigateBefore2Explorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x0fb, OnNewWindow2Explorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x0fc, OnNavigateComplete2Explorer)
		SINK_ENTRY_EX(ieID, SHDocVw::DIID_DWebBrowserEvents2, 0x103, OnDocumentCompleteExplorer)
	END_SINK_MAP()	
	void __stdcall OnTitleChangeExplorer(BSTR Text)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		CString text(Text);
		if(title.IsEmpty())
			::SetWindowText(hWnd,text);
	}
	void __stdcall OnWindowSetResizableExplorer(VARIANT_BOOL Resizable)
	{
		if(Resizable)
			ModifyStyle(NULL,WS_SIZEBOX);
		else
			ModifyStyle(WS_SIZEBOX,NULL);
	}
	void __stdcall OnStatusTextChangeExplorer(BSTR Text)
	{
		IDispatch* temp=GetWindowObj();
		if(!temp)return;
		CComPtr<IDispatch> p;
		p.Attach(temp);
		if(!p)return;
		DispatchDriver::NRInvoke(p,L"OnStatusTextChange",Text);
	}
	void __stdcall OnFullScreenExplorer(VARIANT_BOOL fullScreen)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(fullScreen)
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd),WM_MDIMAXIMIZE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWMAXIMIZED);
		}
		else
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
	}
	void __stdcall OnTheaterModeExplorer(VARIANT_BOOL fullScreen)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(fullScreen)
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd),WM_MDIMAXIMIZE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWMAXIMIZED);
		}
		else
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
	}
	static VOID CALLBACK MyTimerProc(HWND hwnd,UINT uMsg,UINT_PTR idEvent,DWORD dwTime)
	{
		if(!::IsWindowVisible(hwnd))
		{
			::ShowWindow(hwnd,SW_SHOW);
		}
		::KillTimer(hwnd,idEvent);
	}
	void __stdcall OnWindowSetLeftExplorer(long left)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(::IsZoomed(hWnd) || ::IsIconic(hWnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
		CRect rt;
		::GetWindowRect(hWnd,rt);
		::SetWindowPos(hWnd,NULL,left,rt.top,rt.Width(),rt.Height(),SWP_HIDEWINDOW);
		::SetTimer(hWnd,DEFERTIMERID,DEFERTIME,WinForIE::MyTimerProc);
	}	
	void __stdcall OnWindowSetTopExplorer(long top)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(::IsZoomed(hWnd) || ::IsIconic(hWnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
		CRect rt;
		::GetWindowRect(hWnd,rt);
		::SetWindowPos(hWnd,NULL,rt.left,top,rt.Width(),rt.Height(),SWP_HIDEWINDOW);
		::SetTimer(hWnd,DEFERTIMERID,DEFERTIME,WinForIE::MyTimerProc);
	}
	void __stdcall OnWindowSetWidthExplorer(long width)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(::IsZoomed(hWnd) || ::IsIconic(hWnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
		CRect rt;
		::GetWindowRect(hWnd,rt);
		::SetWindowPos(hWnd,NULL,rt.left,rt.top,width,rt.Height(),SWP_HIDEWINDOW);
		::SetTimer(hWnd,DEFERTIMERID,DEFERTIME,WinForIE::MyTimerProc);
	}
	void __stdcall OnWindowSetHeightExplorer(long height)
	{
		bool isMDI;
		HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
		if(::IsZoomed(hWnd) || ::IsIconic(hWnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hWnd), WM_MDIRESTORE,(WPARAM)hWnd,NULL);
			else
				::ShowWindow(hWnd,SW_SHOWNORMAL);
		}
		CRect rt;
		::GetWindowRect(hWnd,rt);
		::SetWindowPos(hWnd,NULL,rt.left,rt.top,rt.Width(),height,SWP_HIDEWINDOW);
		::SetTimer(hWnd,DEFERTIMERID,DEFERTIME,WinForIE::MyTimerProc);
	}	
	void __stdcall OnWindowClosingExplorer(VARIANT_BOOL isChildWindow,VARIANT_BOOL * cancel)
	{
		if(!OnCloseWindow.isNull())
		{
			if(OnCloseWindow((DWORD)this,isChildWindow,cancel))
				return;
		}
		SendMessage(WM_CLOSE);
	}
	void __stdcall OnNewWindow2Explorer(IDispatch ** ppDisp,VARIANT_BOOL * cancel)
	{
		if(pNewWin)
		{
			bool isMDI;
			HWND hWnd=ExterUtility::GetOuterLevelWindow(m_hWnd,isMDI);
			WINDOWPLACEMENT winplace;
			winplace.length=sizeof(WINDOWPLACEMENT);
			::GetWindowPlacement(hWnd,&winplace);
			CRect rt(&winplace.rcNormalPosition);			
			NewWindowClass::Open(pNewWin,m_hWnd,ppDisp,cancel,&OnCloseWindow,&OnShowMessage,rt.left+OFFSETDISTANCE,rt.top+OFFSETDISTANCE,rt.Width(),rt.Height());
		}
	}
	void __stdcall OnNewWindow3Explorer(IDispatch** ppDisp,VARIANT_BOOL* Cancel,unsigned long dwFlags,BSTR bstrUrlContext,BSTR bstrUrl)
	{
		::DebugMsg("WinForIE:OnNewWindow3");

	}
	void __stdcall OnSetSecureLockIconExplorer(long SecureLockIcon)
	{
		::DebugMsg("WinForIE:OnSetSecureLockIcon");

	}
	void __stdcall OnNavigateErrorExplorer(IDispatch* pDisp,VARIANT* URL,VARIANT* Frame,VARIANT* StatusCode,VARIANT_BOOL* Cancel)
	{
		::DebugMsg("WinForIE:OnNavigateError");

	}
	void __stdcall OnNavigateBefore2Explorer(IDispatch* pDisp,VARIANT* URL,VARIANT* Flags,VARIANT* TargetFrameName,VARIANT* PostData,VARIANT* Headers,VARIANT_BOOL* Cancel)
	{
		::DebugMsg("WinForIE:OnNavigateBefore2");
	}
	void __stdcall OnNavigateComplete2Explorer(IDispatch* pDisp,VARIANT* URL)
	{
		::DebugMsg("WinForIE:OnNavigateComplete2");
		
		HRESULT hr;
		IUnknown* pUnkBrowser = NULL;
		IUnknown* pUnkDisp = NULL;

		if(!iePtr)
			return;
	
		hr = iePtr->QueryInterface(IID_IUnknown, (void**)&pUnkBrowser);
		if(SUCCEEDED(hr))
		{
			hr = pDisp->QueryInterface(IID_IUnknown, (void**)&pUnkDisp);
			if(SUCCEEDED(hr))
			{
				if(pUnkBrowser != pUnkDisp)
				{
					if(pDisp)
						exterObj->PutFrame(pDisp);		
				}	
			}
		}
	}
	void __stdcall OnDocumentCompleteExplorer(IDispatch * pDisp,VARIANT * URL)
	{
		::DebugMsg("WinForIE:OnDocumentComplete");

		if(htmlBuf && url==CComBSTR(L""))
		{
			HRESULT hr;
			IUnknown* pUnkBrowser = NULL;
			IUnknown* pUnkDisp = NULL;
			IStream* pStream = NULL;
			HGLOBAL hHTMLText;

			if(!iePtr)
			{
				return;
			}
			
			hr = iePtr->QueryInterface(IID_IUnknown, (void**)&pUnkBrowser);
			if(SUCCEEDED(hr))
			{
				hr = pDisp->QueryInterface(IID_IUnknown, (void**)&pUnkDisp);
				if(SUCCEEDED(hr))
				{
					if(pUnkBrowser == pUnkDisp)
					{
						hHTMLText = GlobalAlloc(GPTR, lstrlen(htmlBuf)+1);
						if(hHTMLText)
						{
							lstrcpy((char*)hHTMLText, htmlBuf);
							htmlBuf=NULL;
							hr = CreateStreamOnHGlobal(hHTMLText, FALSE, &pStream);
							if(SUCCEEDED(hr))
							{
								LoadWebBrowserFromStream(pStream);
								pStream->Release();
							}
							GlobalFree(hHTMLText);
						}
					}
					pUnkDisp->Release();
				}
				pUnkBrowser->Release();
			}
		}		
	}
	HRESULT LoadWebBrowserFromStream(IStream* pStream)
	{
		::DebugMsg("WinForIE:LoadWebBrowserFromStream");

		HRESULT hr=S_FALSE;
		IDispatch* pHtmlDoc = NULL;
		IPersistStreamInit* pPersistStreamInit = NULL;

		if(!iePtr)
		{
			return S_FALSE;
		}

		hr = iePtr->get_Document( &pHtmlDoc );
		if ( SUCCEEDED(hr) )
		{
			hr = pHtmlDoc->QueryInterface( IID_IPersistStreamInit,  (void**)&pPersistStreamInit );
			if ( SUCCEEDED(hr) )
			{
				hr = pPersistStreamInit->InitNew();
				if ( SUCCEEDED(hr) )
				{
					hr = pPersistStreamInit->Load( pStream );
				}
				pPersistStreamInit->Release();
			}
		}
		return hr;
	}
public:
	WinForIE():pNewWin(NULL),dontPostQuitMsg(false),dontOpenNewWindow(false)
	{}
	~WinForIE()
	{		
		NewWindowClass::Destroy(pNewWin);
	}
public:
	CComPtr<SHDocVw::IWebBrowser2> iePtr;
	PreTransMsgEvent OnPreTransMsg;
	IEDlgEvent OnMessage;
	CloseWindowEvent OnCloseWindow;
	ShowMessageEvent OnShowMessage;
private:
	ExterObjClass* exterObj;
	CComPtr<IDispatch> exterObjDisp;
	CComBSTR url;
	bool isModal,isChild;
	CString title;
	CString htmlStr;
	char* htmlBuf;
	bool isNewWindow;
	bool dontPostQuitMsg;
	bool dontOpenNewWindow;
	
	CComPtr<IInternetSecurityManager> defaultSecurityManager;
	MSG msg;
	ScriptHandlers scpHandlers;

	ControlRgns ctrlRgns;

	NewWindowClass* pNewWin;
};

#endif // !defined(AFX_DLGFORIE_H__46894D9A_C549_4FAA_B2ED_7A17058475C1__INCLUDED_)

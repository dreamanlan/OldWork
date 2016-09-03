// WebUIImpl.h: interface for the WebUIImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WEBUIIMPL_H__A02F0598_B9F8_4F9B_A72C_336B9C7837A4__INCLUDED_)
#define AFX_WEBUIIMPL_H__A02F0598_B9F8_4F9B_A72C_336B9C7837A4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <mshtmhst.h>
#include <atlhost.h>

template<typename T,int iconRes>
	class WebUIImpl :
			public CWindowImpl<WebUIImpl<T,iconRes> >,
			public IDispatch,
			public IOleClientSite,
			public IOleInPlaceSite,	
			public IDocHostUIHandler2,
			public IDocHostShowUI,
			public IInternetSecurityManager,
			public IServiceProvider
{	
public:
	static CWndClassInfo& GetWndClassInfo(void)
	{
		static HANDLE handle=NULL;		
		CWndClassInfo& wc=CWindowImpl<WebUIImpl>::GetWndClassInfo();
		if(!handle)
		{
			handle = ::LoadImage( _Module.GetResourceInstance(),
				(LPCSTR)iconRes,
				IMAGE_ICON,
				0, 0,
				LR_SHARED );	
		}		
		wc.m_wc.hIcon=(HICON)handle;
		return wc;
	}
public:
	typedef WebUIImpl<T,iconRes> WebUIImplClass;
	void SetMenuMask(int mask)
	{
		menuMask=mask;
	}	
protected:
	//下面的函数用在WebBrowser控件的NavigateComplete2事件处理中	
	//在这个事件里获取MSHTML的文档对象进一步查询得到ICustomDoc接口
	//然后调SetUIHandler方法设置实现了IDocHostUIHandler接口的对象。
	//这就是IE控件容器不实现IOleClientSite接口时实现定制接口的方式。
	//这种方式无法使用IDocHostUIHandler接口的GetHostInfo来设置浏览器
	//的初始选项。不推荐使用。
	template<typename P>
	void SetUIHandler(IDispatch* pDisp,P iePtr)
	{
		if (pDisp)
		{		
			if (iePtr)
			{
				CComPtr<IDispatch> spDoc;
				iePtr->get_Document(&spDoc);
				
				if (spDoc)
				{
					CComQIPtr<ICustomDoc, &IID_ICustomDoc> spCustomDoc(spDoc);
					if (spCustomDoc)
						spCustomDoc->SetUIHandler(this);
				}
			}
		}
	}	
	IUnknown* CreateWebBrowser(IUnknown* punkSink)
	{
		HRESULT hr;
		hr=::CoCreateInstance(CLSID_WebBrowser, NULL, CLSCTX_INPROC, IID_IWebBrowser2, (void**)&m_spUnknown);
		
		m_spUnknown->QueryInterface(IID_IOleObject, (void**)&m_spOleObject);
		m_spOleObject->SetClientSite(this);
		//////////////////////////////////////////
		CComQIPtr<IPersistStreamInit, &IID_IPersistStreamInit> spPSI(m_spOleObject);
		if(spPSI)
		{
			spPSI->InitNew();
		}
		hr = m_spOleObject->QueryInterface(IID_IViewObjectEx, (void**) &m_spViewObject);
		if (FAILED(hr))
		{
			hr = m_spOleObject->QueryInterface(IID_IViewObject2, (void**) &m_spViewObject);
		}
		if (FAILED(hr))
		{
			hr = m_spOleObject->QueryInterface(IID_IViewObject, (void**) &m_spViewObject);
		}		
		//////////////////////////////////////////		

		GetClientRect(&m_rcPos);
		m_pxSize.cx = m_rcPos.right - m_rcPos.left;
		m_pxSize.cy = m_rcPos.bottom - m_rcPos.top;
		AtlPixelToHiMetric(&m_pxSize, &m_hmSize);
		m_spOleObject->SetExtent(DVASPECT_CONTENT, &m_hmSize);
		m_spOleObject->GetExtent(DVASPECT_CONTENT, &m_hmSize);
		AtlHiMetricToPixel(&m_hmSize, &m_pxSize);
		m_rcPos.right = m_rcPos.left + m_pxSize.cx;
		m_rcPos.bottom = m_rcPos.top + m_pxSize.cy;

		CComQIPtr<IOleClientSite> spClientSite(this);
		hr = m_spOleObject->DoVerb(OLEIVERB_INPLACEACTIVATE, NULL, spClientSite, 0, m_hWnd, &m_rcPos);
		if(FAILED(hr))
		{
			CString temp;
			temp.Format("WinForIE:DoVerb failed %8.8X",hr);
			::OutputDebugString(temp);
		}

		RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW | RDW_ERASE | RDW_INTERNALPAINT | RDW_FRAME);
		AtlAdvise(m_spUnknown, punkSink, DIID_DWebBrowserEvents2, &m_dwAdviseSink);
		IUnknown* p=NULL;
		m_spUnknown.QueryInterface(&p);
		return p;
	}
	void ReleaseAll()
	{
		if (m_bReleaseAll)
			return;
		m_bReleaseAll = TRUE;

		if(m_dwAdviseSink != 0xCDCDCDCD)
		{
			AtlUnadvise(m_spUnknown, m_iidSink, m_dwAdviseSink);
			m_dwAdviseSink = 0xCDCDCDCD;
		}

		
		if (!(!m_spOleObject))
		{
			m_spOleObject->Close(OLECLOSE_NOSAVE);
			m_spOleObject->SetClientSite(NULL);
			m_spOleObject.Release();
		}

		m_spViewObject.Release();
		m_spUnknown.Release();
		m_spInPlaceFrame.Release();		
		m_spInPlaceObject.Release();

		m_bInPlaceActive = FALSE;
		m_bUIActive = FALSE;
		m_bReleaseAll = FALSE;
	}
public:
///////////////////////////////////////////////////////////////////////////////////////////
	BEGIN_MSG_MAP(WebUIImplClass)
		MESSAGE_HANDLER(WM_ERASEBKGND, OnEraseBackground)
		MESSAGE_HANDLER(WM_PAINT, OnPaint)
		MESSAGE_HANDLER(WM_SIZE, OnSize)
		MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
		MESSAGE_HANDLER(WM_KILLFOCUS, OnKillFocus)
		MESSAGE_HANDLER(WM_CLOSE, OnClose)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		{
			bHandled = TRUE;
			lResult = ReflectNotifications(uMsg, wParam, lParam, bHandled);
			if(bHandled)
				return TRUE;
		}
		MESSAGE_HANDLER(WM_FORWARDMSG, OnForwardMsg)
	END_MSG_MAP()
	// window message handlers
	LRESULT OnEraseBackground(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
	{
		if (m_spViewObject == NULL)
			bHandled = false;
		return 1;
	}
	LRESULT OnNCHitTest(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
	{
		return HTCLIENT;
	}
	LRESULT OnSetFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
	{
		m_bHaveFocus = TRUE;
		if (!m_bReleaseAll)
		{
			if (m_spOleObject != NULL && !m_bInPlaceActive)
			{
				CComPtr<IOleClientSite> spClientSite;
				QueryInterface(IID_IOleClientSite, (void**)&spClientSite);
				if (spClientSite != NULL)
					m_spOleObject->DoVerb(OLEIVERB_UIACTIVATE, NULL, spClientSite, 0, m_hWnd, &m_rcPos);
			}
			if(!IsChild(::GetFocus()))
				::SetFocus(::GetWindow(m_hWnd, GW_CHILD));
		}
		bHandled = FALSE;
		return 0;
	}
	LRESULT OnKillFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
	{
		m_bHaveFocus = FALSE;
		bHandled = FALSE;
		return 0;
	}
	LRESULT OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& bHandled)
	{
		int nWidth = LOWORD(lParam);  // width of client area
		int nHeight = HIWORD(lParam); // height of client area

		m_rcPos.right = m_rcPos.left + nWidth;
		m_rcPos.bottom = m_rcPos.top + nHeight;
		m_pxSize.cx = m_rcPos.right - m_rcPos.left;
		m_pxSize.cy = m_rcPos.bottom - m_rcPos.top;
		AtlPixelToHiMetric(&m_pxSize, &m_hmSize);

		HRESULT hr;
		if (m_spOleObject)
			hr=m_spOleObject->SetExtent(DVASPECT_CONTENT, &m_hmSize);		
		if (m_spInPlaceObject)
			hr=m_spInPlaceObject->SetObjectRects(&m_rcPos, &m_rcPos);
		bHandled = FALSE;
		return 0;
	}
	LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		DestroyWindow();
		return 0;
	}	
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		ReleaseAll();		
		DefWindowProc(uMsg, wParam, lParam);
		bHandled = FALSE;
		return 0;
	}
	LRESULT OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
	{
		if (m_spViewObject == NULL)
		{
			PAINTSTRUCT ps;
			HDC hdc = ::BeginPaint(m_hWnd, &ps);
			if (hdc == NULL)
				return 0;
			RECT rcClient;
			GetClientRect(&rcClient);
			HBRUSH hbrBack = ::CreateSolidBrush(RGB(255,255,255));
			::FillRect(hdc, &rcClient, hbrBack);
			::DeleteObject(hbrBack);
			::EndPaint(m_hWnd, &ps);
			return 1;
		}
		else
		{
			bHandled = FALSE;
			return 0;
		}
	}
	// Reflection
	LRESULT ReflectNotifications(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		HWND hWndChild = NULL;

		switch(uMsg)
		{
		case WM_COMMAND:
			if(lParam != NULL)	// not from a menu
				hWndChild = (HWND)lParam;
			break;
		case WM_NOTIFY:
			hWndChild = ((LPNMHDR)lParam)->hwndFrom;
			break;
		case WM_PARENTNOTIFY:
			switch(LOWORD(wParam))
			{
			case WM_CREATE:
			case WM_DESTROY:
				hWndChild = (HWND)lParam;
				break;
			default:
				hWndChild = GetDlgItem(HIWORD(wParam));
				break;
			}
			break;
		case WM_DRAWITEM:
			if(wParam)	// not from a menu
				hWndChild = ((LPDRAWITEMSTRUCT)lParam)->hwndItem;
			break;
		case WM_MEASUREITEM:
			if(wParam)	// not from a menu
				hWndChild = GetDlgItem(((LPMEASUREITEMSTRUCT)lParam)->CtlID);
			break;
		case WM_COMPAREITEM:
			if(wParam)	// not from a menu
				hWndChild = GetDlgItem(((LPCOMPAREITEMSTRUCT)lParam)->CtlID);
			break;
		case WM_DELETEITEM:
			if(wParam)	// not from a menu
				hWndChild = GetDlgItem(((LPDELETEITEMSTRUCT)lParam)->CtlID);
			break;
		case WM_VKEYTOITEM:
		case WM_CHARTOITEM:
		case WM_HSCROLL:
		case WM_VSCROLL:
			hWndChild = (HWND)lParam;
			break;
		case WM_CTLCOLORBTN:
		case WM_CTLCOLORDLG:
		case WM_CTLCOLOREDIT:
		case WM_CTLCOLORLISTBOX:
		case WM_CTLCOLORMSGBOX:
		case WM_CTLCOLORSCROLLBAR:
		case WM_CTLCOLORSTATIC:
			hWndChild = (HWND)lParam;
			break;
		default:
			break;
		}

		if(hWndChild == NULL)
		{
			bHandled = FALSE;
			return 1;
		}

		ATLASSERT(::IsWindow(hWndChild));
		return ::SendMessage(hWndChild, OCM__BASE + uMsg, wParam, lParam);
	}
	LRESULT OnForwardMsg(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
	{
		ATLASSERT(lParam != 0);
		LPMSG lpMsg = (LPMSG)lParam;
		CComQIPtr<IOleInPlaceActiveObject, &IID_IOleInPlaceActiveObject> spInPlaceActiveObject(m_spUnknown);
		if(spInPlaceActiveObject)
		{
			if(spInPlaceActiveObject->TranslateAccelerator(lpMsg) == S_OK)
				return 1;
		}
		return 0;
	}
////////////////////////////////////////////////////////////////////////////////////////////
	WebUIImpl()
	{
		m_bInPlaceActive = FALSE;
		m_bUIActive = FALSE;
		m_bMDIApp = FALSE;
		m_bHaveFocus = FALSE;		
		m_bReleaseAll = FALSE;

		m_dwAdviseSink = 0xCDCDCDCD;

		menuMask=0x3f;
	}	
//////////////////////////////////////////////////////////////////////////////////////////
/* IUnknown methods 因为我们是为一个普通类实现一些接口，引用计数可以不用*/
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv)
	{
		//请注意，此处的强制转换全因多重继承虚函数表不同的布局而起，所有的转换都是必须的。
		if(IsEqualIID(riid, IID_IUnknown) 			
			|| IsEqualIID(riid, IID_IDispatch))
		{
			*ppv =static_cast<IDispatch*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid, IID_IOleClientSite))
		{
			*ppv =static_cast<IOleClientSite*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid,IID_IOleWindow))
		{
			*ppv=static_cast<IOleWindow*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid,IID_IOleInPlaceSite))
		{
			*ppv=static_cast<IOleInPlaceSite*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid, IID_IDocHostUIHandler))
		{
			*ppv=static_cast<IDocHostUIHandler*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid, IID_IDocHostUIHandler2))
		{
			*ppv=static_cast<IDocHostUIHandler2*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid,IID_IDocHostShowUI))
		{
			*ppv=static_cast<IDocHostShowUI*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid, IID_IInternetSecurityManager))
		{
			*ppv=static_cast<IInternetSecurityManager*>(this);
			AddRef();
			return NOERROR;
		}
		else if(IsEqualIID(riid, IID_IServiceProvider))
		{
			*ppv=static_cast<IServiceProvider*>(this);
			AddRef();
			return NOERROR;
		}
		*ppv = NULL;
		return E_NOINTERFACE;
	}
    STDMETHOD_(unsigned long, AddRef)(void)
	{
		return 1;
	}
    STDMETHOD_(unsigned long, Release)(void)
	{
		return 1;
	}
//IDispatch method
	STDMETHOD(GetTypeInfoCount)(UINT* pctinfo)
			{ return E_NOTIMPL; }

	STDMETHOD(GetTypeInfo)(UINT iTInfo,
            LCID lcid,
            ITypeInfo** ppTInfo)
			{ return E_NOTIMPL; }

	STDMETHOD(GetIDsOfNames)(REFIID riid,
            LPOLESTR* rgszNames,
            UINT cNames,
            LCID lcid,
            DISPID* rgDispId)
			{ return E_NOTIMPL; }

	STDMETHOD(Invoke)(DISPID dispIdMember,
            REFIID riid,
            LCID lcid,
            WORD wFlags,
            DISPPARAMS __RPC_FAR *pDispParams,
            VARIANT __RPC_FAR *pVarResult,
            EXCEPINFO __RPC_FAR *pExcepInfo,
            UINT __RPC_FAR *puArgErr)
	{
		if (!pVarResult)
		{
			return E_POINTER;
		}

		T* pThis=static_cast<T*>(this);
		CComVariant v=pThis->GetDispatchOption(dispIdMember);
		if(v==CComVariant(DISP_E_MEMBERNOTFOUND))
		{
			return DISP_E_MEMBERNOTFOUND;
		}
		else
		{
			*pVarResult=v;
		}
		return NOERROR;
	}
//IOleClientSite接口，不用实现任一方法，仅用作QueryInterface的过渡。
	HRESULT STDMETHODCALLTYPE SaveObject(void)
	{return E_NOTIMPL;}        
    HRESULT STDMETHODCALLTYPE GetMoniker(DWORD dwAssign,DWORD dwWhichMoniker,IMoniker __RPC_FAR *__RPC_FAR *ppmk)
	{return E_NOTIMPL;}    
    HRESULT STDMETHODCALLTYPE GetContainer(IOleContainer __RPC_FAR *__RPC_FAR *ppContainer)
	{return E_NOTIMPL;}    
    HRESULT STDMETHODCALLTYPE ShowObject(void)
	{
		HDC hdc = CWindowImpl<WebUIImpl>::GetDC();
		if (hdc == NULL)
			return E_FAIL;
		if (m_spViewObject)
			m_spViewObject->Draw(DVASPECT_CONTENT, -1, NULL, NULL, NULL, hdc, (RECTL*)&m_rcPos, (RECTL*)&m_rcPos, NULL, NULL); 
		CWindowImpl<WebUIImpl>::ReleaseDC(hdc);
		return S_OK;
	}    
    HRESULT STDMETHODCALLTYPE OnShowWindow(BOOL fShow)
	{return E_NOTIMPL;}    
    HRESULT STDMETHODCALLTYPE RequestNewObjectLayout(void)
	{return E_NOTIMPL;}
//IOleInPlaceSite
	STDMETHOD(GetWindow)(HWND* phwnd)
	{
		*phwnd = m_hWnd;
		return S_OK;
	}
	STDMETHOD(ContextSensitiveHelp)(BOOL /*fEnterMode*/)
	{return E_NOTIMPL;}
	STDMETHOD(CanInPlaceActivate)()
	{
		return S_OK;
	}
	STDMETHOD(OnInPlaceActivate)()
	{
		m_bInPlaceActive = TRUE;
		::OleLockRunning(m_spOleObject, TRUE, FALSE);
		m_spOleObject->QueryInterface(IID_IOleInPlaceObject, (void**) &m_spInPlaceObject);
		return S_OK;
	}
	STDMETHOD(OnUIActivate)()
	{		
		m_bUIActive = TRUE;
		return S_OK;
	}
	STDMETHOD(GetWindowContext)(IOleInPlaceFrame** ppFrame, IOleInPlaceUIWindow** ppDoc, LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO pFrameInfo)
	{
		HRESULT hr = S_OK;
		if (ppFrame == NULL || ppDoc == NULL || lprcPosRect == NULL || lprcClipRect == NULL)
			hr = E_POINTER;
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			if (!m_spInPlaceFrame)
			{
				CComObject<CAxFrameWindow>* pFrameWindow;
				CComObject<CAxFrameWindow>::CreateInstance(&pFrameWindow);
				pFrameWindow->QueryInterface(IID_IOleInPlaceFrame, (void**) &m_spInPlaceFrame);
				ATLASSERT(m_spInPlaceFrame);
			}			
			m_spInPlaceFrame.CopyTo(ppFrame);
			*ppDoc=NULL;
			GetClientRect(lprcPosRect);
			GetClientRect(lprcClipRect);

			ACCEL ac = { 0,0,0 };
			HACCEL hac = ::CreateAcceleratorTable(&ac, 1);
			pFrameInfo->cb = sizeof(OLEINPLACEFRAMEINFO);
			pFrameInfo->fMDIApp = m_bMDIApp;
			pFrameInfo->hwndFrame = GetParent();
			pFrameInfo->haccel = hac;
			pFrameInfo->cAccelEntries = 1;
		}
		return hr;
	}
	STDMETHOD(Scroll)(SIZE /*scrollExtant*/)
	{return E_NOTIMPL;}
	STDMETHOD(OnUIDeactivate)(BOOL /*fUndoable*/)
	{
		m_bUIActive = FALSE;
		return S_OK;
	}
	STDMETHOD(OnInPlaceDeactivate)()
	{
		m_bInPlaceActive = FALSE;		
		m_spInPlaceObject.Release();
		return S_OK;
	}
	STDMETHOD(DiscardUndoState)()
	{return E_NOTIMPL;}
	STDMETHOD(DeactivateAndUndo)()
	{return E_NOTIMPL;}
	STDMETHOD(OnPosRectChange)(LPCRECT /*lprcPosRect*/)
	{return E_NOTIMPL;}
// IDocHostUIHandler接口,外部对象模型经由此接口传入。
   STDMETHOD(ShowContextMenu)(DWORD dwID, POINT FAR* ppt, IUnknown FAR* pcmdtReserved,
                              IDispatch FAR* pdispReserved)
   {
		switch(dwID)
		{
		case 0x00:
			{
				if((menuMask & 0xffff)==0xffff)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x01:
			{
				if((menuMask & 0x01)==0x01)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x02://(0x1 << CONTEXT_MENU_DEFAULT)
			{
				if((menuMask & 0x02)==0x02)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x04://(0x1 << CONTEXT_MENU_CONTROL)
			{
				if((menuMask & 0x04)==0x04)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x08://(0x1 << CONTEXT_MENU_TABLE)
			{
				if((menuMask & 0x08)==0x08)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x10://(0x1 << CONTEXT_MENU_TEXTSELECT)
			{
				if((menuMask & 0x10)==0x10)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x30://(0x1 << CONTEXT_MENU_ANCHOR)
			{
				if((menuMask & 0x30)==0x30)
					return S_FALSE;
				else
					return S_OK;
			}
		case 0x20://(0x1 << CONTEXT_MENU_UNKNOWN)
			{
				if((menuMask & 0x20)==0x20)
					return S_FALSE;
				else
					return S_OK;
			}
		   return S_FALSE;
		}
		return S_FALSE;
   }
        
   STDMETHOD(GetExternal)(IDispatch** ppDispatch)
   {
		T* pThis=static_cast<T*>(this);
		IDispatch* p=pThis->GetExternal();
		*ppDispatch = p;		
		return S_OK;
   }

   STDMETHOD(GetHostInfo)(DOCHOSTUIINFO FAR *pInfo)
   {
		pInfo->cbSize = sizeof(DOCHOSTUIINFO);
		pInfo->dwFlags = DOCHOSTUIFLAG_NO3DBORDER | DOCHOSTUIFLAG_FLAT_SCROLLBAR;
		pInfo->dwDoubleClick = DOCHOSTUIDBLCLK_DEFAULT;
		return S_OK;
   }
   STDMETHOD(TranslateAccelerator)(LPMSG lpMsg, const GUID FAR* pguidCmdGroup,DWORD nCmdID)
   {
	    if(nCmdID==0)
			return S_FALSE;
		if(lpMsg && lpMsg->message == WM_KEYDOWN && lpMsg->wParam == VK_F5) 
		{
			if((menuMask & 0x10000)==0x10000)
				return S_FALSE;
			else
				return S_OK;
		}	
		if(lpMsg && lpMsg->message == WM_KEYDOWN && lpMsg->wParam == VK_BACK) 
		{
			if((menuMask & 0x20000)==0x20000)
				return S_FALSE;
			else
				return S_OK;
		}
		if(lpMsg && lpMsg->message == WM_KEYDOWN && lpMsg->wParam == VK_ESCAPE) 
		{
			if((menuMask & 0x40000)==0x40000)
				return S_FALSE;
			else
				return S_OK;
		}
		return S_FALSE;
   }   
   //后续方法一律未实现
   STDMETHOD(GetOptionKeyPath)(LPOLESTR FAR* pchKey, DWORD dw)
   {return E_NOTIMPL;}   
   STDMETHOD(ShowUI)(DWORD dwID, IOleInPlaceActiveObject FAR* pActiveObject,IOleCommandTarget FAR* pCommandTarget,IOleInPlaceFrame  FAR* pFrame,IOleInPlaceUIWindow FAR* pDoc)
   {return E_NOTIMPL;}        
   STDMETHOD(HideUI)(void)
   {return E_NOTIMPL;}        
   STDMETHOD(UpdateUI)(void)
   {return E_NOTIMPL;}        
   STDMETHOD(EnableModeless)(BOOL fEnable)
   {return E_NOTIMPL;}   
   STDMETHOD(OnDocWindowActivate)(BOOL fActivate)
   {return E_NOTIMPL;}   
   STDMETHOD(OnFrameWindowActivate)(BOOL fActivate)
   {return E_NOTIMPL;}   
   STDMETHOD(ResizeBorder)(LPCRECT prcBorder, IOleInPlaceUIWindow FAR* pUIWindow,BOOL fRameWindow)
   {return E_NOTIMPL;}            
   STDMETHOD(GetDropTarget)(IDropTarget* pDropTarget, IDropTarget** ppDropTarget)
   {return E_NOTIMPL;}      
   STDMETHOD(TranslateUrl)(DWORD dwTranslate, OLECHAR* pchURLIn,OLECHAR** ppchURLOut)
   {return E_NOTIMPL;}   
   STDMETHOD(FilterDataObject)(IDataObject* pDO, IDataObject** ppDORet)
   {return E_NOTIMPL;}	
//IDocHostUIHandler2
   STDMETHOD(GetOverrideKeyPath)(LPOLESTR *pchKey,DWORD dw)
   {
	   /*
	   HRESULT hr;
	   if (pchKey)
	   {
		   WCHAR* szMyKey = L"Software\\Nationphone\\CustomIE";
		   *pchKey = (LPOLESTR)CoTaskMemAlloc((wcslen(szMyKey) + 1) * sizeof(WCHAR));
		   if (*pchKey)
			   wcscpy(*pchKey, szMyKey);
		   hr = (*pchKey) ? S_OK : E_OUTOFMEMORY;
	   }
	   else
		   hr = E_INVALIDARG;
	   return hr;
	   */
	   return E_NOTIMPL;
   }
//IDocHostShowUI 
    HRESULT STDMETHODCALLTYPE ShowMessage( 
        HWND hwnd,
        LPOLESTR lpstrText,
        LPOLESTR lpstrCaption,
        DWORD dwType,
        LPOLESTR lpstrHelpFile,
        DWORD dwHelpContext,
        LRESULT __RPC_FAR *plResult)
	{
		if(plResult)
		{
			T* pThis=static_cast<T*>(this);
			*plResult=pThis->ShowMessage(hwnd,CString(lpstrText),CString(lpstrCaption),dwType,CString(lpstrHelpFile),dwHelpContext);
		}
		return S_OK;
	}
    
    HRESULT STDMETHODCALLTYPE ShowHelp( 
        HWND hwnd,
        LPOLESTR pszHelpFile,
        UINT uCommand,
        DWORD dwData,
        POINT ptMouse,
        IDispatch __RPC_FAR *pDispatchObjectHit)
	{
		return E_NOTIMPL;
	}
//IInternetSecurityManager接口
//这里仅过滤ProcessUrlAction来允许ActiveX与Java使用
//，其它方法一律返回使用缺省实现。
    HRESULT STDMETHODCALLTYPE ProcessUrlAction( 
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE __RPC_FAR *pPolicy,
        DWORD cbPolicy,
        BYTE __RPC_FAR *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved)
	{
		T* pThis=static_cast<T*>(this);
		if (cbPolicy >= sizeof (DWORD))
		{  
			DWORD policy=pThis->GetWildcardsSecurityPolicy(dwAction);
			if(policy==INET_E_DEFAULT_ACTION)
				return policy;
			*(DWORD *)pPolicy = policy;			
			return S_OK;
		}
		else
		{
			return S_FALSE;
		}
	}

	HRESULT STDMETHODCALLTYPE SetSecuritySite(IInternetSecurityMgrSite __RPC_FAR *pSite)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE GetSecuritySite(IInternetSecurityMgrSite __RPC_FAR *__RPC_FAR *ppSite)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE MapUrlToZone(LPCWSTR pwszUrl,DWORD __RPC_FAR *pdwZone,DWORD dwFlags)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE GetSecurityId(LPCWSTR pwszUrl,BYTE __RPC_FAR *pbSecurityId,DWORD __RPC_FAR *pcbSecurityId,DWORD dwReserved)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE QueryCustomPolicy(LPCWSTR pwszUrl,REFGUID guidKey,BYTE __RPC_FAR *__RPC_FAR *ppPolicy,DWORD __RPC_FAR *pcbPolicy,BYTE __RPC_FAR *pContext,DWORD cbContext,DWORD dwReserved)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE SetZoneMapping(DWORD dwZone,LPCWSTR lpszPattern,DWORD dwFlags)
	{
		return INET_E_DEFAULT_ACTION;
	}    
    HRESULT STDMETHODCALLTYPE GetZoneMappings(DWORD dwZone,IEnumString __RPC_FAR *__RPC_FAR *ppenumString,DWORD dwFlags)
	{
		return INET_E_DEFAULT_ACTION;
	}
//IServiceProvider
	STDMETHOD(QueryService)(REFGUID guidService, REFIID riid, void** ppvObject)
	{
		if(IsEqualIID(guidService,SID_SInternetSecurityManager))
		{
			return QueryInterface(riid,ppvObject);
		}
		return E_NOINTERFACE;
	}
//////////////////////////////////////////////////////////////////////////////////////	
	HRESULT FireAmbientPropertyChange(DISPID dispChanged)
	{
		HRESULT hr = S_OK;
		CComQIPtr<IOleControl, &IID_IOleControl> spOleControl(m_spUnknown);
		if (spOleControl != NULL)
			hr = spOleControl->OnAmbientPropertyChange(dispChanged);
		return hr;
	}
private:
	CComPtr<IUnknown> m_spUnknown;
	CComPtr<IOleObject> m_spOleObject;
	CComPtr<IOleInPlaceFrame> m_spInPlaceFrame;
	CComPtr<IOleInPlaceObject> m_spInPlaceObject;
	CComPtr<IViewObjectEx> m_spViewObject;
//state
	unsigned long m_bInPlaceActive:1;
	unsigned long m_bUIActive:1;
	unsigned long m_bMDIApp:1;
	unsigned long m_bHaveFocus:1;
	unsigned long m_bReleaseAll:1;

	IID m_iidSink;
	DWORD m_dwAdviseSink;
	SIZEL m_hmSize;
	SIZEL m_pxSize;
	RECT m_rcPos;

	UINT menuMask;
};

#endif // !defined(AFX_WEBUIIMPL_H__A02F0598_B9F8_4F9B_A72C_336B9C7837A4__INCLUDED_)

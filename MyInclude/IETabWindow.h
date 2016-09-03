// IETabWindow.h: interface for the IETabWindow class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_IETABWINDOW_H__8216C2C3_C060_4834_BC81_16974D1F2FFB__INCLUDED_)
#define AFX_IETABWINDOW_H__8216C2C3_C060_4834_BC81_16974D1F2FFB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "WinForIE.h"

template<typename T>
	class ArgumentModel : public IDispatch
{
	typedef ArgumentModel<T> ThisClass;
public:
	virtual int __stdcall get_PageNum(void)
	{
		if(ptr)
			return ptr->GetPageNum();
		return 0;
	}
	virtual int __stdcall get_ActivePage(void)
	{
		if(ptr)
			return ptr->GetActivePage();
		return -1;
	}
	virtual void __stdcall ActivatePage(int i)
	{
		if(ptr)
			ptr->ActivatePage(i);
	}
	virtual void __stdcall RemovePage(int i)
	{
		if(ptr)
			ptr->RemovePage(i);
	}
	virtual void __stdcall SetTabTitle(int i,BSTR text)
	{
		if(ptr)
			ptr->SetTabTitle(i,text);
	}
	virtual void __stdcall SetTabPos(int tab)
	{
		if(ptr)
			ptr->SetTabPos(tab);
	}
	virtual void __stdcall SetTabColor(unsigned int selColor,unsigned int unselColor)
	{
		if(ptr)
			ptr->SetTabColor(selColor,unselColor);
	}
	virtual IDispatch* __stdcall GetTabWindow(int index)
	{
		if(ptr)
			return ptr->GetWindowObj(index);
		return NULL;
	}
	virtual unsigned int __stdcall GetTabWindowHandle(int index)
	{
		if(ptr)
			return (UINT)ptr->GetWindowHandle(index);
		return 0;
	}
public:
	BEGIN_INTF(ThisClass)
		PROPERTYGET(PageNum,true)
		PROPERTYGET(ActivePage,true)
		METHOD(ActivatePage)
		METHOD(RemovePage)
		METHOD(SetTabTitle)
		METHOD(SetTabPos)
		METHOD(SetTabColor)
		METHOD(GetTabWindow)
		METHOD(GetTabWindowHandle)
	END_INTF()
public:
	ArgumentModel():ptr(NULL)
	{}
	void Init(T* p)
	{
		ptr=p;
	}
private:
	T* ptr;
};

#define MAX_TABS 16
template
	<		
		DWORD stylePopup=WS_POPUP | WS_BORDER | WS_CAPTION | WS_SYSMENU | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_SIZEBOX,
		DWORD styleExPopup=WS_EX_LEFT,
		DWORD styleChild=WS_CHILD,
		DWORD styleExChild=WS_EX_LEFT,
		int iconRes=IDR_MAINFRAME,
		typename ApplicationT=IEAppPointer
	>
	class IETabWindow : public CWindowImpl<IETabWindow>,
						public CMessageFilter
{
	typedef IETabWindow<stylePopup,styleExPopup,styleChild,styleExChild,iconRes,ApplicationT> ThisClass;
	typedef CWindowImpl<ThisClass> BaseClass;
	typedef WinForIE<false,stylePopup,styleExPopup,styleChild,styleExChild,iconRes,false,ApplicationT> Dlg;
	typedef std::map<int,int> TabPages;
	typedef std::vector<CString> ToolTips;
	friend class IETabWindow<stylePopup,styleExPopup,styleChild,styleExChild,iconRes,ApplicationT>;
public:
	static CWndClassInfo& GetWndClassInfo(void)
	{
		static HANDLE handle=NULL;		
		CWndClassInfo& wc=BaseClass::GetWndClassInfo();
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
	inline int CreatePage(BSTR title)
	{
		if(curTabNum>=MAX_TABS)return -1;

		int pageIndex=curTabNum;
		CString titleStr=CString(title);
		TCITEM ti;
		ti.mask=TCIF_TEXT | TCIF_PARAM;
		ti.pszText=(LPSTR)(LPCSTR)titleStr;
		ti.lParam=DecideToolTip(titleStr);
		::SendMessage(hwndTab,TCM_INSERTITEM,pageIndex,(LPARAM)&ti);
		CreateDlg(pageIndex);
		curTabNum++;
		return pageIndex;
	}
	inline void NavigatePage(int i,BSTR url)
	{
		if(i<0)i=0;
		if(i>=curTabNum)i=curTabNum-1;

		int di=GetDlg(i);
		if(di<0)
			return;
		if(dlgs[di]->IsWindow())
		{
			dlgs[di]->Navigate(CComBSTR(ScriptFile::ConvertPath(CString(url))));
			ActivatePage(i);
		}
	}
	inline int GetPageNum(void)
	{
		return curTabNum;
	}
	inline int GetActivePage(void)
	{		
		int iPage=(int)::SendMessage(hwndTab,TCM_GETCURSEL,0,0L);
		return iPage;
	}
	inline void ActivatePage(int i)
	{
		if(i<0)i=0;
		if(i>=curTabNum)i=curTabNum-1;

		::SendMessage(hwndTab,TCM_SETCURSEL,i,0L);
		ActivateDlg(i);
	}
	inline void RemovePage(int i)
	{
		if(i<0)i=0;
		if(i>=curTabNum)i=curTabNum-1;
		if(i==0)//第一页不能删除
			return;

		int iPage=GetActivePage();
		::SendMessage(hwndTab,TCM_DELETEITEM,i,0L);
		RemoveDlg(i);
		curTabNum--;
		for(int ii=i;ii<curTabNum;ii++)
		{
			for(int k=1;k<=curTabNum-i;k++)
			{
				TabPages::iterator it=tabPages.find(ii+k);
				if(it!=tabPages.end())
				{
					tabPages[ii]=it->second;
					tabPages.erase(it);					
				}
			}
		}
		if(i==iPage)
		{
			ActivatePage(i-1);
		}
	}
	inline void SetTabTitle(int i,BSTR text)
	{
		if(i<0)i=0;
		if(i>=curTabNum)i=curTabNum-1;
		
		CString titleT(text);
		CString title=titleT;
		if(title.GetLength()>8)
			title=title.Left(8);
		TCITEM item;
		::ZeroMemory(&item,sizeof(TCITEM));
		item.mask=TCIF_TEXT | TCIF_PARAM;
		item.pszText=(LPTSTR)(LPCSTR)title;
		item.cchTextMax=title.GetLength();
		item.lParam=DecideToolTip(titleT);
		::SendMessage(hwndTab,TCM_SETITEM,i,(LPARAM)&item);
	}
	inline void SetTabPos(int pos)
	{
		if(pos<0)pos=0;
		if(pos>3)pos=3;
		tabPos=pos;
		UINT add=0,remove=0;
		switch(pos)
		{
		case 0:
			add=TCS_MULTILINE | TCS_VERTICAL;remove=TCS_RIGHT;
			break;
		case 1:
			add=0;remove=TCS_VERTICAL | TCS_BOTTOM;
			break;
		case 2:
			add=TCS_MULTILINE | TCS_VERTICAL | TCS_RIGHT;remove=0;
			break;
		case 3:
			add=TCS_BOTTOM;remove=TCS_VERTICAL;
			break;
		}
		CWindow win;
		win.Attach(hwndTab);
		win.ModifyStyle(remove,add,0);
		win.Detach();
		CRect rt;
		GetClientRect(rt);
		AdjustWindows(rt.Width(),rt.Height());
	}
	inline void SetTabColor(COLORREF bSelColour, COLORREF bUnselColour)
	{
		m_crSelColour = bSelColour;
		m_crUnselColour = bUnselColour;
		Invalidate();
	}
	inline IDispatch* GetWindowObj(int tab)
	{
		if(tab<0)tab=0;
		if(tab>=curTabNum)tab=curTabNum-1;

		int di=GetDlg(tab);
		if(di>=0)
			return dlgs[di]->GetWindowObj();
		return NULL;
	}
	inline HWND GetWindowHandle(int tab)
	{
		if(tab<0)tab=0;
		if(tab>=curTabNum)tab=curTabNum-1;

		int di=GetDlg(tab);
		if(di>=0)
			return dlgs[di]->m_hWnd;
		return NULL;
	}
public:
	bool OnNewWindow2(HWND,IDispatch** ppDisp,VARIANT_BOOL* cancel)
	{
		int i=CreatePage(L"loading...");
		int ix=GetDlg(i);
		IDispatch* p=dlgs[ix]->iePtr;
		p->AddRef();			
		*ppDisp=p;
		ActivatePage(i);
		return true;
	}
	bool OnGetNewWebBrowser(int tab,IDispatch** ppDisp)
	{
		*ppDisp=NULL;		
		if(tab<0)tab=0;
		if(tab>=curTabNum)tab=curTabNum-1;
		int di=GetDlg(tab);
		if(di>=0)
		{
			IDispatch* p=dlgs[di]->iePtr;
			p->AddRef();			
			*ppDisp=p;
		}
		return true;
	}
	bool OnCloseWindow(DWORD pdlg,VARIANT_BOOL isChildWindow,VARIANT_BOOL * cancel)
	{
		int i=GetTab(pdlg);
		if(i>0)
		{
			//发个消息让主程序删除指定页
			PostMessage(WM_COMMAND,0xFFFFFFFF,i);
		}
		else
		{
			*cancel=TRUE;
		}
		return true;
	}
	bool OnTitleChange(DWORD pdlg,BSTR text)
	{
		int i=GetTab(pdlg);
		if(i<0)
			return true;
		SetTabTitle(i,text);
		return true;
	}
public:
	inline IDispatch* GetTabObj(void)
	{
		IDispatch* pDisp=NULL;
		argDisp.QueryInterface(&pDisp);
		return pDisp;
	}
	inline void DoModeless(HWND parent,int x,int y,int w,int h)
	{
		int xb=x,yb=y;		
		if(x==-1)
			x=0;
		if(y==-1)
			y=0;
		Create(parent,CRect(x,y,x+w,y+h),"",stylePopup & (~WS_CHILD),styleExPopup);		
		ShowWindow(SW_SHOW);
		UpdateWindow();
		if(xb==-1 || yb==-1)
			CenterWindow();
	}
	inline BOOL PreTranslateMessage(MSG* pMsg)
	{
		if(IsWindow())
		{
			if(DoPreTransMsg(pMsg))
				return TRUE;
			int iPage=(int)::SendMessage(hwndTab,TCM_GETCURSEL,0,0L);
			int di=GetDlg(iPage);
			if(di>=0 && dlgs[di]->IsWindow() && dlgs[di]->PreTranslateMessage(pMsg))
					return TRUE;
		}
		return FALSE;
	}
private:
	inline BOOL DoPreTransMsg(MSG* pMsg)
	{
		PreTransMsgEvent* ptr=OnPreTransMsg.get();
		if(ptr)
		{
			return (BOOL)(*ptr)(pMsg);
		}
		else
		{
			return FALSE;
		}
	}
	inline BOOL DoMessageHandle(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{		
		IEDlgEvent* ptr=OnMsgHandler.get();
		if(ptr)
		{
			return (BOOL)(*ptr)(hWnd,uMsg,wParam,lParam,lResult,bHandled);
		}
		else
		{
			return FALSE;
		}
	}
private:
	BEGIN_MSG_MAP(ThisClass)
		{//将消息处理转发到事件处理中去
			BOOL result=DoMessageHandle(hWnd,uMsg,wParam,lParam,lResult,bHandled);
			if(result)return TRUE;
		}
		MESSAGE_HANDLER(WM_CREATE, OnCreate)
		MESSAGE_HANDLER(WM_SIZE,OnSize)
		MESSAGE_HANDLER(WM_DESTROY,OnDestroy)
		MESSAGE_HANDLER(WM_NOTIFY,OnNotify)
		MESSAGE_HANDLER(WM_DRAWITEM,OnDrawItem)
		MESSAGE_HANDLER(WM_COMMAND,OnMenuCommand)
	END_MSG_MAP()
private:
	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		HDC hDC=::GetDC(NULL);
		unsigned int height=-MulDiv(fontSize, GetDeviceCaps(hDC, LOGPIXELSY), 72);
		::ReleaseDC(NULL,hDC);

		tabFont=::CreateFont(height,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,fontName);
		popup=::CreatePopupMenu();
		::InsertMenu(popup,0,MF_BYPOSITION | MF_STRING,1,"关闭");

		::InitCommonControls();
		hwndTab=::CreateWindow(WC_TABCONTROL, "", 
				WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE | TCS_OWNERDRAWFIXED | TCS_BOTTOM | TCS_TOOLTIPS, 
				0, 0, 100, 25, 
				m_hWnd, NULL, _Module.GetResourceInstance(),NULL
			);		
		::SendMessage(hwndTab,WM_SETFONT,(WPARAM)tabFont,FALSE);
		::SendMessage(hwndTab,TCM_SETPADDING,0,MAKELPARAM(1,1));


#ifdef WTL_MODULE
		CMessageLoop* pLoop = _Module.GetMessageLoop();
		if(pLoop)pLoop->AddMessageFilter(this);
#endif
#ifndef __ATLAPP_H__
		CMessageLoop& msgLoop=CMessageLoop::InstanceRef();
		msgLoop.AddMessageFilter(this);
#endif
		return 0;
	}
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		int cx=LOWORD(lParam);
		int cy=HIWORD(lParam);
		AdjustWindows(cx,cy);
		return 0;
	}
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
#ifdef WTL_MODULE
		CMessageLoop* pLoop = _Module.GetMessageLoop();
		if(pLoop)pLoop->RemoveMessageFilter(this);
#endif
#ifndef __ATLAPP_H__
		CMessageLoop& msgLoop=CMessageLoop::InstanceRef();
		msgLoop.RemoveMessageFilter(this);
#endif
		if(!(!argDisp))
		{
			IDispatch* p=argDisp.Detach();
			p->Release();
		}
		if(tabFont)
		{
			::DeleteObject(tabFont);
			tabFont=NULL;
		}
		if(popup)
		{
			::DestroyMenu(popup);
			popup=NULL;
		}
		::PostQuitMessage(0);
		return 0;
	}
	LRESULT OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{	
		NMHDR* p=(NMHDR*)lParam;
		switch(p->code)
		{
		case TCN_SELCHANGE:
			{			
				int iPage=GetActivePage();
				ActivateDlg(iPage);
			}
			break;
		case TTN_GETDISPINFO:
			{
				POINT pt;
				::GetCursorPos(&pt);
				::ScreenToClient(hwndTab,&pt);
				TCHITTESTINFO hitinfo;
				hitinfo.pt.x=pt.x;
				hitinfo.pt.y=pt.y;
				hitinfo.flags=0;
				int ix=(int)::SendMessage(hwndTab,TCM_HITTEST,0,(LPARAM)&hitinfo);
				if(ix>=0)
				{
					TCITEM item;
					item.mask=TCIF_PARAM;
					::SendMessage(hwndTab,TCM_GETITEM,ix,(LPARAM)&item);
					LPNMTTDISPINFO pinfo=(LPNMTTDISPINFO)lParam;
					pinfo->hinst=NULL;
					pinfo->lpszText=(LPTSTR)item.lParam;
				}
			}
			break;
		case NM_RCLICK:
			{
				POINT pt0,pt;
				::GetCursorPos(&pt0);
				pt.x=pt0.x;
				pt.y=pt0.y;
				::ScreenToClient(hwndTab,&pt);
				TCHITTESTINFO hitinfo;
				hitinfo.pt.x=pt.x;
				hitinfo.pt.y=pt.y;
				hitinfo.flags=0;
				int ix=(int)::SendMessage(hwndTab,TCM_HITTEST,0,(LPARAM)&hitinfo);
				if(ix>0)
				{
					int iPage=GetActivePage();
					if(iPage!=ix)
						ActivatePage(ix);
					BOOL r=::TrackPopupMenu(popup,TPM_NONOTIFY | TPM_RETURNCMD,pt0.x,pt0.y,0,m_hWnd,0);
					if(r)
					{
						RemovePage(ix);
					}
				}				
			}
			break;
		}
		return 0;
	}
	LRESULT OnDrawItem(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		DrawItem((LPDRAWITEMSTRUCT)lParam);
		return 0;
	}
	LRESULT OnMenuCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{		
		if(wParam==0xFFFFFFFF)//我们用这个特定值表示删除指定TAB页
		{
			RemovePage(lParam);
			return 0;
		}
		bHandled=FALSE;		
		DWORD hi=HIWORD(wParam);
		if(hi || lParam)
			return 0;
		if(IsWindow())
		{
			int iPage=(int)::SendMessage(hwndTab,TCM_GETCURSEL,0,0L);
			int di=GetDlg(iPage);
			if(di>=0 && dlgs[di]->IsWindow())
			{
				dlgs[di]->OnMenuCommand(uMsg,wParam,lParam,bHandled);
				if(bHandled)	
					return 0;
			}
			for(int i=0;i<curTabNum;i++)
			{
				if(i==iPage)continue;
				di=GetDlg(i);
				if(di<0 || !dlgs[di]->IsWindow())
					continue;
				dlgs[di]->OnMenuCommand(uMsg,wParam,lParam,bHandled);
				if(bHandled)
					return 0;
			}
		}
		return 0;
	}
private:
	void ForwardMsg(UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		if(IsWindow())
		{
			int iPage=(int)::SendMessage(hwndTab,TCM_GETCURSEL,0,0L);
			int di=GetDlg(iPage);
			if(di>=0 && dlgs[di]->IsWindow())
				dlgs[di]->SendMessage(uMsg,wParam,lParam);
		}
	}
public:
	IETabWindow():curTabNum(0),tabHeight(25),tabPos(3),tabFont(NULL),popup(NULL)
	{
		m_crSelColour     = RGB(0,0,255);
		m_crUnselColour   = RGB(100,100,0);
		fontSize=10;
		fontName="黑体";
		for(int i=0;i<MAX_TABS;i++)
			dlgs[i]=NULL;
		
		ArgumentModel<IETabWindow>* argModel=ArgumentModel<IETabWindow>::CreateDispatch();
		argModel->Init(this);
		argDisp.Attach(argModel);
	}
	~IETabWindow()
	{
		for(int i=0;i<MAX_TABS;i++)
		{
			if(dlgs[i]!=NULL)
			{
				if(dlgs[i]->IsWindow())
				{
					dlgs[i]->DestroyWindow();
				}
				delete dlgs[i];
			}
		}
		if(tabFont)
		{
			::DeleteObject(tabFont);
			tabFont=NULL;
		}
		if(popup)
		{
			::DestroyMenu(popup);
			popup=NULL;
		}
	}
private:
	inline void AdjustWindows(int cx,int cy)
	{
		switch(tabPos)
		{
		case 0:
			::MoveWindow(hwndTab,0,0,tabHeight,cy,TRUE);
			break;
		case 1:
			::MoveWindow(hwndTab,0,0,cx,tabHeight,TRUE);
			break;
		case 2:
			::MoveWindow(hwndTab,cx-tabHeight,0,tabHeight,cy,TRUE);
			break;
		case 3:
			::MoveWindow(hwndTab,0,cy-tabHeight,cx,tabHeight,TRUE);
			break;
		}
		
		for(int i=0;i<curTabNum;i++)
		{
			int di=GetDlg(i);
			if(di>=0 && dlgs[di]->IsWindow())				
			{
					switch(tabPos)
					{
					case 0:
						dlgs[di]->MoveWindow(tabHeight,0,cx-tabHeight,cy);
						break;
					case 1:
						dlgs[di]->MoveWindow(0,tabHeight,cx,cy-tabHeight);
						break;
					case 2:
						dlgs[di]->MoveWindow(0,0,cx-tabHeight,cy);
						break;
					case 3:
						dlgs[di]->MoveWindow(0,0,cx,cy-tabHeight);
						break;
					}
			}
		}
	}
	inline int GetTab(DWORD pdlg)
	{
		for(int i=0;i<curTabNum;i++)
		{
			int di=GetDlg(i);
			if(di>=0 && (DWORD)dlgs[di]==pdlg)
				return di;
		}
		return -1;
	}
	inline int GetDlg(int tab)
	{
		TabPages::iterator it=tabPages.find(tab);
		if(it!=tabPages.end())
			return it->second;
		return -1;
	}
	inline void CreateDlg(int tab)
	{
		for(int i=0;i<MAX_TABS;i++)
		{
			if(!dlgs[i])
				break;
		}
		if(i>=MAX_TABS)
			return;
		tabPages[tab]=i;
		CRect rt;
		GetClientRect(rt);
		dlgs[i]=new Dlg();
		dlgs[i]->InitNewWindow();
		switch(tabPos)
		{
		case 0:
			dlgs[i]->DoChild(m_hWnd,tabHeight,0,rt.Width()-tabHeight,rt.Height());
			break;
		case 1:
			dlgs[i]->DoChild(m_hWnd,0,tabHeight,rt.Width(),rt.Height()-tabHeight);
			break;
		case 2:
			dlgs[i]->DoChild(m_hWnd,0,0,rt.Width()-tabHeight,rt.Height());
			break;
		case 3:
			dlgs[i]->DoChild(m_hWnd,0,0,rt.Width(),rt.Height()-tabHeight);
			break;
		}
		dlgs[i]->ShowWindow(SW_HIDE);
		
		dlgs[i]->OnNewWindow2+=EventFactory::Produce(this,&IETabWindow::OnNewWindow2);
		dlgs[i]->OnGetNewWebBrowser+=EventFactory::Produce(this,&IETabWindow::OnGetNewWebBrowser);
		dlgs[i]->OnCloseWindow+=EventFactory::Produce(this,&IETabWindow::OnCloseWindow);
		dlgs[i]->OnTitleChange+=EventFactory::Produce(this,&IETabWindow::OnTitleChange);
	}
	inline void ActivateDlg(int tab)
	{
		for(int i=0;i<curTabNum;i++)
		{
			int di=GetDlg(i);
			if(tab==i)
			{	
				if(di>=0)
					dlgs[di]->ShowWindow(SW_SHOW);
			}
			else
			{
				if(di>=0)
					dlgs[di]->ShowWindow(SW_HIDE);
			}
		}
	}
	inline void RemoveDlg(int tab)
	{
		int i=GetDlg(tab);
		if(i>=0)
		{
			dlgs[i]->ShowWindow(SW_HIDE);
			dlgs[i]->DestroyWindow();
			delete dlgs[i];
			dlgs[i]=NULL;
			tabPages.erase(tab);
		}
	}
	inline LPARAM DecideToolTip(const CString& tip)
	{
		ToolTips::iterator it=std::find(tooltips.begin(),tooltips.end(),tip);
		if(it!=tooltips.end())
			return (LPARAM)(LPCSTR)(*it);
		else
		{
			tooltips.push_back(tip);
			return (LPARAM)(LPCSTR)tooltips.back();
		}
	}
private:
	inline void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
	{	
		if(lpDrawItemStruct->CtlType!=ODT_TAB)
			return;
		CRect rect = lpDrawItemStruct->rcItem;
		int nTabIndex = lpDrawItemStruct->itemID;
		if (nTabIndex < 0) return;
		BOOL bSelected = (nTabIndex == (int)::SendMessage(hwndTab, TCM_GETCURSEL, 0, 0L));

		char label[64];
		TC_ITEM tci;
		tci.mask = TCIF_TEXT;
		tci.pszText = label;     
		tci.cchTextMax = 63;    	
		if (!::SendMessage(hwndTab, TCM_GETITEM, nTabIndex, (LPARAM)&tci)) return;

		HDC hDC=lpDrawItemStruct->hDC;
		if (!hDC) return;
		int nSavedDC = ::SaveDC(hDC);

		::SetBkMode(hDC,TRANSPARENT);
		FillSolidRect(hDC,rect,::GetSysColor(COLOR_BTNFACE));

		int ds=::GetSystemMetrics(SM_CYEDGE);

		if (bSelected)
		{
			::SetTextColor(hDC,m_crSelColour);
			switch(tabPos)
			{
			case 0:
				rect.top+=ds;
				rect.left+=ds;
				break;
			case 1:
				rect.top+=ds;
				break;
			case 2:
				rect.top+=ds;
				rect.left-=ds;
				break;
			case 3:
				rect.top-=ds;
				break;
			}
			if(tabPos==1 || tabPos==3)
				::DrawText(hDC,label,::strlen(label),rect,DT_SINGLELINE|DT_VCENTER|DT_CENTER);
			else
				::DrawText(hDC,label,::strlen(label),rect,DT_WORDBREAK|DT_CENTER);
		}
		else
		{
			::SetTextColor(hDC,m_crUnselColour);
			switch(tabPos)
			{
			case 0:
				rect.left+=ds;
				rect.right+=ds;
				break;
			case 1:
				rect.top+=ds;
				rect.bottom+=ds;
				break;
			case 2:
				rect.left-=ds;
				rect.right-=ds;
				break;
			case 3:
				rect.top-=ds;
				rect.bottom-=ds;
				break;
			}
			if(tabPos==1 || tabPos==3)
				::DrawText(hDC,label,::strlen(label),rect,DT_SINGLELINE|DT_VCENTER|DT_CENTER);
			else
				::DrawText(hDC,label,::strlen(label),rect,DT_WORDBREAK|DT_CENTER);
		}
		::RestoreDC(hDC,nSavedDC);
	}
	inline void FillSolidRect(HDC hDC,const CRect& rect,COLORREF clr)
	{
		::SetBkColor(hDC, clr);
		::ExtTextOut(hDC, 0, 0, ETO_OPAQUE, rect, NULL, 0, NULL);
	}
public:
	PreTransMsgEventContainer OnPreTransMsg;
	IEDlgEventContainer OnMsgHandler;
private:
	COLORREF m_crSelColour, m_crUnselColour;
	int fontSize;
	CString fontName;

	HMENU popup;
	HFONT tabFont;
	HWND hwndTab;
	Dlg* dlgs[MAX_TABS];
	ToolTips tooltips;
	int curTabNum;
	TabPages tabPages;
	int tabHeight;
	int tabPos;
	
	CComPtr<IDispatch> argDisp;
};

#endif // !defined(AFX_IETABWINDOW_H__8216C2C3_C060_4834_BC81_16974D1F2FFB__INCLUDED_)

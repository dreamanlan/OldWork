// maindlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_)
#define AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "WinForIE.h"

#define WM_MYAPPBAR WINFORIE_LAST_MSG+1

#define EXPOSURE	4
#define STANDARD	30

template<typename T>
	class Model : public IDispatch
{
	typedef Model<T> ModelClass;
public:
	virtual void __stdcall Start(unsigned int type)
	{
		mainPtr->StartAppBar(type);
	}
	virtual void __stdcall Stop(void)
	{
		mainPtr->StopAppBar();
	}
	virtual void __stdcall SetEnableClose(unsigned int enableClose)
	{
		mainPtr->SetEnableClose(enableClose);
	}
	virtual void __stdcall ChangePos(unsigned int pos)
	{
		mainPtr->ChangePos(pos);
	}
	virtual void __stdcall Show(void)
	{
		mainPtr->ShowAppBar();
	}
	virtual BSTR __stdcall get_UserName(void)
	{
		char buf[256];
		DWORD len=255;
		::GetUserName(buf,&len);
		return CString(buf).AllocSysString();
	}
public:
	BEGIN_INTF(ModelClass)
		METHOD(Start)
		METHOD(Stop)
		METHOD(SetEnableClose)
		METHOD(ChangePos)
		METHOD(Show)
		PROPERTYGET(UserName,true)
	END_INTF()
public:
	void SetMain(T* pMain)
	{
		mainPtr=pMain;
	}
private:
	T* mainPtr;
};

class CMainDlg
{
	typedef Model<CMainDlg> ModelClass;
public:
	bool OnIEMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		if(uMsg==WM_CLOSE)
		{
			StopAppBar();
		}
		else if(uMsg==WM_DESTROY)
		{
			return false;
		}
		MESSAGE_HANDLER(WM_SYSCOMMAND,OnSysCmd)
		MESSAGE_HANDLER(WM_ACTIVATE,OnActivate)
		MESSAGE_HANDLER(WM_WINDOWPOSCHANGED,OnPosChanged)
		MESSAGE_HANDLER(WM_SIZE,OnSize)
		MESSAGE_HANDLER(WM_TIMER,OnTimer)
		MESSAGE_HANDLER(WM_MYAPPBAR,AppBarMsg)
		return false;
	}
	void DoModeless(const char* cmd)
	{
		CString cmdStr;
		if(cmd)
			cmdStr=CString(cmd);
		dlg.MsgHandler+=EventFactory::Produce(this,&CMainDlg::OnIEMsg);				
		ModelClass* pm=ModelClass::CreateDispatch();		
		pm->SetMain(this);
		model.Attach(pm);
		IEAppPointer::SetPtr(pm);
		if(cmdStr=="")
			dlg.InitURL(CComBSTR(ScriptFile::ConvertPath("ui.htm")));
		else
			dlg.InitURL(CComBSTR((LPCSTR)ScriptFile::ConvertPath(cmdStr)));
		//dlg.InitURL(L"res://MyShell.exe/ui.htm");
		dlg.DoModeless(NULL,-1,-1,400,300);
	}
	void StartAppBar(BOOL isAutoHide)
	{
		if(registered)
			return;		
		RegAppBar(TRUE);
		if(isAutoHide)
			RegAutoHide(TRUE);
		autoHide=isAutoHide;
		InitPos();
	}
	void StopAppBar(void)
	{
		if(registered)
		{
			if(autoHide)
				RegAutoHide(FALSE);
			RegAppBar(FALSE);
		}
	}
	void ChangePos(UINT pos)
	{
		if(!registered)
			return;
		uSide=pos;
		InitPos();
	}
	void SetEnableClose(BOOL enable)
	{
		enableClose=enable;
	}
	void ShowAppBar(void)
	{	
		if(!registered)
			return;
		if(autoHide && isHide)
		{
			CRect rt(0,0,STANDARD,STANDARD);
			if(!isInit)
				::GetWindowRect(dlg.m_hWnd,rt);
			int w = ::GetSystemMetrics(SM_CXSCREEN); 
			int h = ::GetSystemMetrics(SM_CYSCREEN); 
			if(uSide==ABE_TOP)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,barX,0,barW,rt.Height(),SWP_SHOWWINDOW);			
			else if(uSide==ABE_BOTTOM)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,barX,h-rt.Height(),barW,rt.Height(),SWP_SHOWWINDOW);			
			else if(uSide==ABE_LEFT)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,0,barY,rt.Width(),barH,SWP_SHOWWINDOW);			
			else if(uSide==ABE_RIGHT)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,w-rt.Width(),barY,rt.Width(),barH,SWP_SHOWWINDOW);						
			isHide=FALSE;
			::SetTimer(dlg.m_hWnd,1,1000,NULL);
		}
	}
	void HideAppBar(void)
	{
		if(!registered)
			return;
		if(autoHide && !isHide)
		{			
			isHide=TRUE;
			::KillTimer(dlg.m_hWnd,1);
			CRect rt;
			::GetWindowRect(dlg.m_hWnd,rt);
			int w = ::GetSystemMetrics(SM_CXSCREEN); 
			int h = ::GetSystemMetrics(SM_CYSCREEN); 
			if(uSide==ABE_TOP)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,barX,EXPOSURE-rt.Height(),barW,rt.Height(),SWP_NOACTIVATE);			
			else if(uSide==ABE_BOTTOM)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,barX,h-EXPOSURE,barW,rt.Height(),SWP_NOACTIVATE);			
			else if(uSide==ABE_LEFT)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,EXPOSURE-rt.Width(),barY,rt.Width(),barH,SWP_NOACTIVATE);			
			else if(uSide==ABE_RIGHT)
				::SetWindowPos(dlg.m_hWnd,HWND_TOP,w-EXPOSURE,barY,rt.Width(),barH,SWP_NOACTIVATE);			
		}
	}
private:
	LRESULT OnSysCmd(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		if(wParam==SC_CLOSE && !enableClose)return 0;
		bHandled=FALSE;
		return 0;
	}
	LRESULT OnActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		bHandled=FALSE;
		if(!registered)return 0;
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize=sizeof(APPBARDATA);
		abd.hWnd=dlg.m_hWnd;
		abd.lParam=!(wParam==WA_INACTIVE);
		::SHAppBarMessage(ABM_ACTIVATE,&abd);
		return 0;
	}
	LRESULT OnPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		bHandled=FALSE;
		if(!registered)return 0;
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize=sizeof(APPBARDATA);
		abd.hWnd=dlg.m_hWnd;
		::SHAppBarMessage(ABM_WINDOWPOSCHANGED,&abd);
		return 0;
	}
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		bHandled=FALSE;
		if(!registered)return 0;
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize=sizeof(APPBARDATA);
		abd.hWnd=dlg.m_hWnd;
		PosChanged(&abd);
		return 0;
	}
	LRESULT AppBarMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		UINT uState=0; 
 
		abd.cbSize = sizeof(abd); 
		abd.hWnd = dlg.m_hWnd; 
 
		switch (wParam) 
		{ 
			case ABN_STATECHANGE: 
				uState = ::SHAppBarMessage(ABM_GETSTATE, &abd); 
				::SetWindowPos(dlg.m_hWnd, 
					(ABS_ALWAYSONTOP & uState) ? HWND_TOPMOST : HWND_BOTTOM, 
					0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE); 
				break;  
			case ABN_FULLSCREENAPP: 
				if (lParam) 
				{ 
					::SetWindowPos(dlg.m_hWnd, 
						(ABS_ALWAYSONTOP & uState) ? 
												HWND_TOPMOST : HWND_BOTTOM, 
						0, 0, 0, 0, 
						SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE); 
				} 
				else 
				{ 
					uState = ::SHAppBarMessage(ABM_GETSTATE, &abd); 
					if (uState & ABS_ALWAYSONTOP) 
						::SetWindowPos(dlg.m_hWnd, HWND_TOPMOST, 
							0, 0, 0, 0, 
							SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE); 
				}	  
			case ABN_POSCHANGED: 
				PosChanged(&abd); 
				break;
		} 
		return 0;
	}
	LRESULT OnTimer(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)	
	{
		if(wParam!=1)
		{
			bHandled=FALSE;
			return 0;
		}
		if(!registered)
			return 0;
		CPoint pt;
		CRect rt;
		::GetCursorPos(&pt);
		::GetWindowRect(dlg.m_hWnd,rt);
		if(!::PtInRect(rt,pt))
		{
			HideAppBar();
		}
		return 0;
	}
private:
	BOOL RegAppBar(BOOL fRegister) 
	{ 
		APPBARDATA abd; 
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize = sizeof(APPBARDATA); 
		abd.hWnd = dlg.m_hWnd; 
 
		if (fRegister) 
		{  
			abd.uCallbackMessage = WM_MYAPPBAR; 
 
			if (!::SHAppBarMessage(ABM_NEW, &abd)) 
				return FALSE; 
			uSide=ABE_TOP;
			registered = TRUE; 
		} 
		else 
		{ 
			::SHAppBarMessage(ABM_REMOVE, &abd); 
			registered = FALSE; 
		} 
		return TRUE; 
	}		
	void RegAutoHide(BOOL isAutoHide)
	{
		if(isAutoHide)
			uSide=ABE_TOP;
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize=sizeof(APPBARDATA);
		abd.hWnd=dlg.m_hWnd;
		abd.uEdge=uSide;
		abd.lParam=isAutoHide;
		UINT r=::SHAppBarMessage(ABM_SETAUTOHIDEBAR,&abd);	
	}	
	void InitPos(void)
	{
		APPBARDATA abd;
		::ZeroMemory(&abd,sizeof(APPBARDATA));
		abd.cbSize=sizeof(APPBARDATA);
		abd.hWnd=dlg.m_hWnd;
		isInit=true;
		PosChanged(&abd);					
		isInit=false;
	}
	void PosChanged(PAPPBARDATA pabd) 
	{ 
		RECT rc; 
		RECT rcWindow; 
		int iHeight; 
		int iWidth; 
 
		rc.top = 0; 
		rc.left = 0; 
		rc.right = ::GetSystemMetrics(SM_CXSCREEN); 
		rc.bottom = ::GetSystemMetrics(SM_CYSCREEN);  
		
		if(autoHide)//自动隐藏样式仅占用固定的屏幕区域
		{
			iWidth=EXPOSURE;
			iHeight=EXPOSURE;
		}		
		else if(isInit)
		{
			iWidth=STANDARD;
			iHeight=STANDARD;
		}
		else
		{
			::GetWindowRect(pabd->hWnd, &rcWindow); 
			iHeight = rcWindow.bottom - rcWindow.top; 
			iWidth = rcWindow.right - rcWindow.left; 
		}
 
		switch (uSide) 
		{ 
		case ABE_TOP: 
            rc.bottom = rc.top + iHeight; 
            break; 
			
        case ABE_BOTTOM: 
            rc.top = rc.bottom - iHeight; 
            break; 
			
        case ABE_LEFT: 
            rc.right = rc.left + iWidth; 
            break; 
			
        case ABE_RIGHT: 
            rc.left = rc.right - iWidth; 
            break; 
        } 
        QuerySetPos(uSide, &rc, pabd); 
    }
	void QuerySetPos(UINT uEdge, LPRECT lprc, PAPPBARDATA pabd) 
	{ 
		int iHeight = 0; 
		int iWidth = 0; 
 
		pabd->rc = *lprc; 
		pabd->uEdge = uEdge; 
 
		if ((uEdge == ABE_LEFT) || 
				(uEdge == ABE_RIGHT)) 
		{ 
			iWidth = pabd->rc.right - pabd->rc.left; 
			pabd->rc.top = 0; 
			pabd->rc.bottom = ::GetSystemMetrics(SM_CYSCREEN); 
		} 
		else 
		{ 
			iHeight = pabd->rc.bottom - pabd->rc.top; 
			pabd->rc.left = 0; 
			pabd->rc.right = ::GetSystemMetrics(SM_CXSCREEN); 
		} 
 
		::SHAppBarMessage(ABM_QUERYPOS, pabd); 
 
		switch (uEdge) 
		{ 
			case ABE_LEFT: 
				pabd->rc.right = pabd->rc.left + iWidth; 
				break; 
 
			case ABE_RIGHT: 
				pabd->rc.left = pabd->rc.right - iWidth; 
				break; 
 
			case ABE_TOP: 
				pabd->rc.bottom = pabd->rc.top + iHeight; 
				break; 
 
			case ABE_BOTTOM: 
				pabd->rc.top = pabd->rc.bottom - iHeight; 
				break; 
		}  
		::SHAppBarMessage(ABM_SETPOS, pabd);  
		barX = pabd->rc.left;
		barY = pabd->rc.top;
		barW = pabd->rc.right - pabd->rc.left;
		barH = pabd->rc.bottom - pabd->rc.top;
		if(autoHide)
		{
			ShowAppBar();
		}
		else
			::MoveWindow(pabd->hWnd,pabd->rc.left,pabd->rc.top,barW,barH,TRUE); 			
	}
public:
	CMainDlg():uSide(ABE_TOP),
		registered(FALSE),
		autoHide(FALSE),
		isHide(TRUE),
		enableClose(FALSE),
		barX(0),
		barY(0),
		barW(0),
		barH(0),
		isInit(false)
	{
	}
private:
	WinForIE<
		true,
		WS_POPUP,
		WS_EX_LEFT|WS_EX_TOOLWINDOW|WS_EX_TOPMOST
		> dlg;
	
	CComPtr<ModelClass> model;
	UINT uSide;
	BOOL registered,autoHide;
	BOOL enableClose,isHide;
	int barX,barY,barW,barH;
	bool isInit;
};
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_)

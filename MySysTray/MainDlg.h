// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once


#include "WinForIE.h"

#define MYWM_NOTIFYICON WM_APP+2

typedef int (*InstallPtr)(void);
typedef int (*UninstallPtr)(void);

void DisplayLastError(void)
{
	LPVOID lpMsgBuf;
	::FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR) &lpMsgBuf,
		0,
		NULL 
		);
	::MessageBox(NULL,(LPCTSTR)lpMsgBuf,"LastError",MB_OK);
	::LocalFree(lpMsgBuf);
}

void GetLastErrorMsg(char* mess,int size)
{
	::FormatMessage(
		FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR)mess,
		size,
		NULL 
		);
}

template<typename T>
	class Model : public IDispatch
{
public:
	virtual void __stdcall InitSystemTray(void)
	{
		if(owner)
			owner->InitSystemTray();
	}
	virtual int __stdcall GC(BSTR key)
	{
		gcKey=CString(key);
		gcKey.MakeUpper();
		gcCount=0;
		::EnumWindows(MyEnumWindowsProc,(LPARAM)this);
		return gcCount;
	}
public:
	BEGIN_INTF(Model)
		METHOD(InitSystemTray)
		METHOD(GC)
	END_INTF()
public:
	Model():owner(NULL)
	{}
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	inline void ConcatToStr(char* s,const char* d)
	{
		int i=GetStrLen(s);
		int len=GetStrLen(d);
		for(int j=0;j<=len;j++)
		{
			s[i+j]=d[j];
		}
	}
	inline int GetStrLen(const char* s)
	{
		for(int i=0;i<1024;i++)
		{
			if(s[i]==0)
				return i;
		}
		return 1024;
	}
	CString BstrToUTF8(BSTR s)
	{
		CComBSTR np(s);
		int len=::WideCharToMultiByte(CP_UTF8,0,np,np.Length(),NULL,0,NULL,NULL);
		char* buf=new char[len+1];
		::WideCharToMultiByte(CP_UTF8,0,np,np.Length(),buf,len,NULL,NULL);
		buf[len]=0;
		CString ret=CString(buf);
		delete[] buf;
		return ret;
	}
private:
	static BOOL CALLBACK MyEnumWindowsProc(HWND hwnd,LPARAM lParam)
	{		
		Model* ptr=(Model*)lParam;
		if(::IsWindow(hwnd) && ptr)
		{
			char title[1025];
			::GetWindowText(hwnd,title,1024);
			CString titleStr(title);
			titleStr.MakeUpper();
			if(titleStr.Find(ptr->gcKey)>=0)
			{
				if(::IsIconic(hwnd))
					::ShowWindowAsync(hwnd,SW_RESTORE);
				else
					::ShowWindowAsync(hwnd,SW_MINIMIZE);
				ptr->gcCount++;
			}
		}
		return TRUE;
	}
private:
	T* owner;

	CString gcKey;
	unsigned int gcCount;
};

class CMainDlg
{
	typedef WinForIE
		<
			true,
			WS_POPUP | WS_BORDER | WS_CAPTION | WS_SYSMENU | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_SIZEBOX,
			WS_EX_LEFT
		> IEDLG;
	IEDLG dlg;
	CComPtr<IDispatch> modelPtr;
	typedef Model<CMainDlg> ModelClass;
public:
	void InitSystemTray(void)
	{	
		if(!hShellIcon)
		{
			hShellIcon=(HICON)::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), 
				IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR);
			if(hShellIcon)
				MyTaskBarAddIcon(dlg.m_hWnd,0,hShellIcon,"单击显示或者隐藏应用程序窗口。");	
		}
	}
	bool OnIEMsg(HWND hWnd,UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		MESSAGE_HANDLER(WM_CLOSE,OnClose);
		MESSAGE_HANDLER(MYWM_NOTIFYICON,On_MYWM_NOTIFYICON)		
		if(uMsg==WM_SYSCOMMAND)
		{			
			if(wParam==SC_MINIMIZE)
			{
				if(dlg.IsWindowVisible())
				{
					dlg.ShowWindow(SW_HIDE);
					return true;
				}
			}
		}
		return false;
	}
	void DoModeless(const char* cmd)
	{
		CString cmdStr;
		if(cmd)
			cmdStr=CString(cmd);
		modelPtr.Attach(ModelClass::CreateDispatch());
		model=(ModelClass*)(IDispatch*)modelPtr;
		model->Init(this);
		dlg.MsgHandler+=EventFactory::Produce(this,&CMainDlg::OnIEMsg);
		dlg.SetWildcardsSecurityPolicy(URLACTION_DOWNLOAD_SIGNED_ACTIVEX,URLPOLICY_ALLOW);
		dlg.SetWildcardsSecurityPolicy(URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX,URLPOLICY_ALLOW);	
		for(int i=URLACTION_ACTIVEX_MIN;i<=URLACTION_ACTIVEX_CURR_MAX;i++)
			dlg.SetWildcardsSecurityPolicy(i,URLPOLICY_ALLOW);
		if(cmdStr=="")
			dlg.InitURL(L"res://RichwayDataExtract.exe/ui.htm");
		else
			dlg.InitURL(CComBSTR((LPCSTR)cmdStr));
		IEAppPointer::SetPtr(modelPtr);
		dlg.DoModeless(NULL,-1,-1,400,300);
	}
private:
	LRESULT OnClose(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& bHandled)
	{
		if(hShellIcon)
		{
			MyTaskBarDeleteIcon(dlg.m_hWnd,0);
		}
		bHandled=FALSE;
		return 0;
	}		
private:	
	BOOL MyTaskBarAddIcon(HWND hwnd, UINT uID, HICON hicon, LPSTR lpszTip) 
	{ 
		BOOL res; 
		NOTIFYICONDATA tnid; 
 
		tnid.cbSize = sizeof(NOTIFYICONDATA); 
		tnid.hWnd = hwnd; 
		tnid.uID = uID; 
		tnid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP; 
		tnid.uCallbackMessage = MYWM_NOTIFYICON; 
		tnid.hIcon = hicon; 
		if (lpszTip) 
			lstrcpyn(tnid.szTip, lpszTip, sizeof(tnid.szTip)); 
		else 
			tnid.szTip[0] = '\0'; 
 
		res = Shell_NotifyIcon(NIM_ADD, &tnid); 
 
		if (hicon) 
			DestroyIcon(hicon); 
 
		return res; 
	} 

	BOOL MyTaskBarDeleteIcon(HWND hwnd, UINT uID) 
	{ 
		BOOL res; 
		NOTIFYICONDATA tnid; 
 
		tnid.cbSize = sizeof(NOTIFYICONDATA); 
		tnid.hWnd = hwnd; 
		tnid.uID = uID; 
         
		res = Shell_NotifyIcon(NIM_DELETE, &tnid); 
		return res; 
	} 

	LRESULT On_MYWM_NOTIFYICON(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
	{ 
		UINT uID; 
		UINT uMouseMsg; 
 
		uID = (UINT) wParam; 
		uMouseMsg = (UINT) lParam; 
 
		if(uMouseMsg == WM_LBUTTONUP) 
		{ 
			if(dlg.IsWindowVisible())
				dlg.ShowWindow(SW_HIDE);
			else
				dlg.ShowWindow(SW_SHOW);
		}
		else if(uMouseMsg == WM_RBUTTONUP)
		{
			IDispatch* temp=dlg.GetWindowObj();
			if(!temp)return 0;
			CComPtr<IDispatch> p;
			p.Attach(temp);
			if(!p)return 0;
			CPoint pt;
			BOOL r=::GetCursorPos(&pt);
			if(!r)return 0;
			DispatchDriver::NRInvoke(p,L"OnTrayPopup",pt.x,pt.y);
		}
		return 0; 
	} 
public:
	CMainDlg():hShellIcon(NULL)
	{}
private:
	HICON hShellIcon;
	ModelClass* model;
};

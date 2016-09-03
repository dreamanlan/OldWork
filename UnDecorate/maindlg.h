// maindlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_)
#define AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "WebUIImpl.h"
#include "DlgForIE.h"

extern "C"
{
	DWORD WINAPI UnDecorateSymbolName(
			PCSTR   DecoratedName,         // Name to undecorate
			PSTR    UnDecoratedName,       // If NULL, it will be allocated
			DWORD    UndecoratedLength,     // The maximym length
			DWORD    Flags                  // See above.
		);
};

class Model : public IDispatch
{
public:
	virtual BSTR __stdcall UnDecorateName(BSTR name)
	{
		char buf[256];
		DWORD num=::UnDecorateSymbolName(CString(name),buf,256,0);
		if(num)
		{
			buf[num]=0;
			return CString(buf).AllocSysString();
		}
		else
			return NULL;
	}
public:
	BEGIN_INTF(Model)
		METHOD(UnDecorateName)
	END_INTF()
};

class CMainDlg
{	
public:	
	bool OnIEMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{	
		if(uMsg==WM_DESTROY)
		{
			::PostQuitMessage(0);
			return false;
		}
		return false;
	}
	bool OnDocComplete(IDispatch* pDisp,VARIANT* URL)
	{
		CComPtr<IDispatch> p;
		p.Attach(dlg.GetUiCharge());
		if(!p)return false;		
		
		return false;
	}
	void DoModeless(void)
	{	
		dlg.DocumentComplete+=EventFactory::Produce(this,&CMainDlg::OnDocComplete);
		dlg.MsgHandler+=EventFactory::Produce(this,&CMainDlg::OnIEMsg);		
		//dlg.InitTitle("DocManagerWin");
		Model* m=Model::CreateDispatch();
		model.Attach(m);
		dlg.InitModel(m);
		dlg.InitURL(CComBSTR(ScriptFile::ConvertPath("ui.htm")));
		dlg.DoModeless(NULL,-1,-1,-1,-1);
	}
private:
	DlgForIE<IDD_MAINDLG,IDC_EXPLORER> dlg;
	CComPtr<IDispatch> model;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINDLG_H__72CD04CF_B101_4742_8BB2_CCB333BBB089__INCLUDED_)

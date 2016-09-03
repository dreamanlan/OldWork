// ExternalObj.h: interface for the ExternalObj class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXTERNALOBJ_H__27C6433D_A12A_495F_BC55_A4F5D2AAB9C6__INCLUDED_)
#define AFX_EXTERNALOBJ_H__27C6433D_A12A_495F_BC55_A4F5D2AAB9C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Delegation.h"
#include "ScriptStl.h"
#include "ScriptEditor.h"
#include "BrowserService2.h"
#include "RgnAndMenu.h"
#include "MyInet.h"
#include "MyShell.h"
#include "MyDriver.h"

#ifdef USE_ACE_SOCKET
#define WM_MYCOMMMSG			WM_APP+1
#define WINFORIE_LAST_MSG		WM_APP+1
#include "MySocket.h"
#else //else USE_ACE_SOCKET
#define WINFORIE_LAST_MSG		WM_APP
#endif //USE_ACE_SOCKET

#define MAXNEWWIN 32

#ifndef __ATLAPP_H__
	class CMessageFilter
	{
	public:
		virtual BOOL PreTranslateMessage(MSG* pMsg) = 0;
	};
	
	template <class T>
		class ATL_NO_VTABLE CFolderDialogImpl
	{
	public:
		BROWSEINFO m_bi;
		TCHAR m_szFolderDisplayName[MAX_PATH];
		TCHAR m_szFolderPath[MAX_PATH];
		HWND m_hWnd;
		CFolderDialogImpl(HWND hWndParent = NULL, LPCTSTR lpstrTitle = NULL, UINT uFlags = BIF_RETURNONLYFSDIRS)
		{
			memset(&m_bi, 0, sizeof(m_bi));
			
			m_bi.hwndOwner = hWndParent;
			m_bi.pidlRoot = NULL;
			m_bi.pszDisplayName = m_szFolderDisplayName;
			m_bi.lpszTitle = lpstrTitle;
			m_bi.ulFlags = uFlags;
			m_bi.lpfn = BrowseCallbackProc;
			m_bi.lParam = (LPARAM)static_cast<T*>(this);

			m_szFolderPath[0] = 0;
			m_szFolderDisplayName[0] = 0;
			m_hWnd = NULL;
		}
		INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow())
		{
			if(m_bi.hwndOwner == NULL)
				m_bi.hwndOwner = hWndParent;
			INT_PTR nRet = -1;
			LPITEMIDLIST pItemIDList = ::SHBrowseForFolder(&m_bi);
			if(pItemIDList != NULL)
			{
				if(::SHGetPathFromIDList(pItemIDList, m_szFolderPath))
				{
					IMalloc* pMalloc = NULL;
					if(SUCCEEDED(::SHGetMalloc(&pMalloc)))
					{
						pMalloc->Free(pItemIDList);
						pMalloc->Release();
					}
					nRet = IDOK;
				}
				else
				{
					nRet = IDCANCEL;
				}
			}
			return nRet;
		}
		LPCTSTR GetFolderPath() const
		{
			return m_szFolderPath;
		}
		LPCTSTR GetFolderDisplayName() const
		{
			return m_szFolderDisplayName;
		}
		int GetFolderImageIndex() const
		{
			return m_bi.iImage;
		}
		static int CALLBACK BrowseCallbackProc(HWND hWnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
		{
	#ifndef BFFM_VALIDATEFAILED
	#ifdef UNICODE
			const int BFFM_VALIDATEFAILED = 4;
	#else
			const int BFFM_VALIDATEFAILED = 3;
	#endif
	#endif
			int nRet = 0;
			T* pT = (T*)lpData;
			pT->m_hWnd = hWnd;
			switch(uMsg)
			{
			case BFFM_INITIALIZED:
				pT->OnInitialized();
				break;
			case BFFM_SELCHANGED:
				pT->OnSelChanged((LPITEMIDLIST)lParam);
				break;
			case BFFM_VALIDATEFAILED:
				nRet = pT->OnValidateFailed((LPCTSTR)lParam);
				break;
			default:
				TRACE0(_T("Unknown message received in CFolderDialogImpl::BrowseCallbackProc\n"));
				break;
			}
			pT->m_hWnd = NULL;
			return nRet;
		}
		void OnInitialized()
		{}
		void OnSelChanged(LPITEMIDLIST /*pItemIDList*/)
		{}
		int OnValidateFailed(LPCTSTR /*lpstrFolderPath*/)
		{
			return 1;	// 1=continue, 0=EndDialog
		}
		void EnableOK(BOOL bEnable)
		{
			ATLASSERT(m_hWnd != NULL);
			::SendMessage(m_hWnd, BFFM_ENABLEOK, bEnable, 0L);
		}
		void SetSelection(LPITEMIDLIST pItemIDList)
		{
			ATLASSERT(m_hWnd != NULL);
			::SendMessage(m_hWnd, BFFM_SETSELECTION, FALSE, (LPARAM)pItemIDList);
		}
		void SetSelection(LPCTSTR lpstrFolderPath)
		{
			ATLASSERT(m_hWnd != NULL);
			::SendMessage(m_hWnd, BFFM_SETSELECTION, TRUE, (LPARAM)lpstrFolderPath);
		}
		void SetStatusText(LPCTSTR lpstrText)
		{
			ATLASSERT(m_hWnd != NULL);
			::SendMessage(m_hWnd, BFFM_SETSTATUSTEXT, 0, (LPARAM)lpstrText);
		}
	};
#endif

class MyFolderDialog : public CFolderDialogImpl<MyFolderDialog>
{
public:
	MyFolderDialog(HWND hWndParent = NULL,LPCTSTR lpstrTitle = NULL,LPCTSTR lpstrInit = NULL,UINT uFlags = BIF_RETURNONLYFSDIRS)
		:CFolderDialogImpl<MyFolderDialog>(hWndParent,lpstrTitle,uFlags)
	{
		if(lpstrInit)
			::strncpy(m_szFolderPath,CString(lpstrInit),CString(lpstrInit).GetLength());
	}
	void OnInitialized(void) 
	{
		if(CString(m_szFolderPath).GetLength()>0)
		{
			SetSelection(m_szFolderPath);
		}		
	}
};

class IEAppPointer
{
	typedef std::map<DWORD,DWORD> PolicyMap;
	typedef std::map<DWORD,CComVariant> DispatchMap;
public:
	static inline void SetPtr(IDispatch* ptr)
	{
		DispPtrRef()=ptr;
	}
	static inline IDispatch* GetPtr(void)
	{
		IDispatch* p=DispPtrRef();
		if(p!=NULL)
		{
			p->AddRef();
			return p;
		}
		else
			return NULL;
	}
	static inline void SetWildcardsSecurityPolicy(DWORD dwAction,DWORD policy)
	{
		PolicysRef()[dwAction]=policy;
	}
	static inline DWORD GetWildcardsSecurityPolicy(DWORD dwAction)
	{
		PolicyMap::iterator it=PolicysRef().find(dwAction);
		if(it!=PolicysRef().end())
		{
			return it->second;
		}		
		return INET_E_DEFAULT_ACTION;
	}
	static inline void SetDispatchOption(DWORD dispid,CComVariant option)
	{
		DispatchOptionsRef()[dispid]=option;
	}
	static inline CComVariant GetDispatchOption(DWORD dispid)
	{
		DispatchMap::iterator it=DispatchOptionsRef().find(dispid);
		if(it!=DispatchOptionsRef().end())
		{
			return it->second;
		}		
		return CComVariant(DISP_E_MEMBERNOTFOUND);
	}
	static inline BOOL AdjustSeDebugPrivilege(void)
	{
		BOOL ret=FALSE;
		TOKEN_PRIVILEGES priv = {1, {0, 0, SE_PRIVILEGE_ENABLED}};
		if (LookupPrivilegeValue(NULL, "SeDebugPrivilege", &priv.Privileges[0].Luid))
		{
			HANDLE hToken=NULL;
			if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY, &hToken))
			{
				ret=AdjustTokenPrivileges(hToken, FALSE, &priv, sizeof(priv), 0, 0);
				CloseHandle(hToken);
			}
		}
		return ret;
	}
private:
	static inline IDispatch*& DispPtrRef()
	{
		static IDispatch* ptr=NULL;
		return ptr;
	}
	static inline PolicyMap& PolicysRef(void)
	{
		static PolicyMap securityPolicys;
		return securityPolicys;
	}
	static inline DispatchMap& DispatchOptionsRef(void)
	{
		static DispatchMap dispatchOptions;
		return dispatchOptions;
	}
};

class MyMap : public IDispatch
{
	class MyMapLess
	{
	public:
		bool operator()(const CComVariant& left,const CComVariant& right) const
		{
			if(left.vt==VT_I4 && right.vt==VT_I4)
			{
				return left.lVal < right.lVal;
			}
			else if(left.vt==VT_BSTR && right.vt==VT_BSTR)
			{
				return CComBSTR(left.bstrVal) < CComBSTR(right.bstrVal);
			}
			else if(left.vt==VT_R8 || right.vt==VT_R8)
			{
				CComVariant vl=left;
				CComVariant vr=right;
				vl.ChangeType(VT_R8);
				vr.ChangeType(VT_R8);
				return left.dblVal < right.dblVal;
			}
			else
			{
				return left.ulVal < right.ulVal;
			}
		}
	};
	typedef std::map<CComVariant,CComVariant,MyMapLess> ContainerType;
public:
	virtual unsigned int __stdcall get_Count(void)
	{
		return static_cast<unsigned int>(MapRef().size());
	}
	virtual VARIANT __stdcall Get(VARIANT key)
	{
		ContainerType::iterator it = MapRef().find(key);
		if (it == MapRef().end())
			return CComVariant();	
		CComVariant r=it->second;
		VARIANT ret;
		::VariantInit(&ret);
		r.Detach(&ret);
		return ret;		
	}
	virtual void __stdcall Set(VARIANT key,VARIANT value)
	{
		MapRef()[key]=value;
	}
	virtual void __stdcall Erase(VARIANT key)
	{
		ContainerType::iterator it = MapRef().find(key);
		if (it == MapRef().end())
			return;
		MapRef().erase(it);
	}
	virtual void __stdcall Clear(void)
	{
		MapRef().clear();
	}
public:
	BEGIN_INTF(MyMap)
		PROPERTYGET(Count,true)
		METHOD(Get)
		METHOD(Set)
		METHOD(Erase)
		METHOD(Clear)
	END_INTF()
public:
	~MyMap()
	{		
		MapRef().clear();
	}
private:
	static ContainerType& MapRef()
	{
		static ContainerType mapColl;
		return mapColl;
	}
};

template
	<
	typename Owner,
	typename ApplicationT
	>
class ExterObj : public IDispatch
{
	typedef ExterObj<Owner,ApplicationT> ExterObjClass;
	typedef std::vector<IDispatch*> Frames;	
	typedef std::vector<CAdapt<CComPtr<IDispatch> > > Controls;
public:
	virtual void __stdcall put_Title(BSTR c)
	{		
		if(!::IsWindow(hWnd))return;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		CString text(c);
		::SetWindowText(hwnd,text);
		owner->InitTitle(text);
	}
	virtual BSTR __stdcall get_Title(void)
	{
		if(!::IsWindow(hWnd))return NULL;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		char buf[1024];
		::GetWindowText(hwnd,buf,1024);
		return CString(buf).AllocSysString();
	}
	virtual BOOL __stdcall Close(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(isMDI)
			::SendMessage(::GetParent(hwnd),WM_MDIDESTROY,(WPARAM)hwnd,NULL);
		else
			return ::SendMessage(hwnd,WM_SYSCOMMAND,SC_CLOSE,0);
		return TRUE;
	}
	virtual BOOL __stdcall Maximize(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(isMDI)
		{
			::SendMessage(::GetParent(hwnd),WM_MDIMAXIMIZE,(WPARAM)hwnd,NULL);
			return TRUE;
		}
		else
			return ::ShowWindow(hwnd,SW_SHOWMAXIMIZED);
	}
	virtual BOOL __stdcall Minimize(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::ShowWindow(hwnd,SW_MINIMIZE);
	}
	virtual BOOL __stdcall Normal(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(isMDI)
		{
			::SendMessage(::GetParent(hwnd), WM_MDIRESTORE,(WPARAM)hwnd,NULL);
			return TRUE;
		}
		else
			return ::ShowWindow(hwnd,SW_SHOWNORMAL);
	}
	virtual BOOL __stdcall Show(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::ShowWindow(hwnd,SW_SHOW);
	}
	virtual BOOL __stdcall Hide(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::ShowWindow(hwnd,SW_HIDE);
	}	
	virtual BOOL __stdcall IsZoomed(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::IsZoomed(hwnd);
	}	
	virtual BOOL __stdcall IsIconic(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::IsIconic(hwnd);
	}
	virtual unsigned int __stdcall SetLong(unsigned int index,unsigned int newVal)
	{
		if(!::IsWindow(hWnd))return 0;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::SetWindowLong(hwnd,index,newVal);
	}
	virtual unsigned int __stdcall GetLong(unsigned int index)
	{
		if(!::IsWindow(hWnd))return 0;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		return ::GetWindowLong(hwnd,index);
	}
	virtual unsigned int __stdcall GetMessageHwnd(void)
	{
		HWND hwnd=ExterUtility::GetTopLevelWindow((HWND)hWnd);
		return (UINT)hwnd;
	}
	virtual unsigned int __stdcall GetWebBrowserHwnd(void)
	{
		if(!::IsWindow(hWnd))return 0;
		HWND hr=MyFindChildWindow(hWnd,_T("Shell Embedding"));
		hr=MyFindChildWindow(hr,_T("Shell DocObject View"));
		return (UINT)MyFindChildWindow(hr,_T("Internet Explorer_Server"));
	}
	virtual IDispatch* __stdcall GetWebBrowser(void)
	{
		if(!(owner->iePtr))return NULL;
		IDispatch* p=owner->iePtr;
		p->AddRef();
		return p;
	}
	virtual IDispatch* __stdcall GetNewWebBrowser(int index)
	{
		if(!(owner->iePtr))return NULL;
		return owner->GetNewWebBrowser(index);
	}
	virtual IDispatch* __stdcall GetFrameWebBrowser(VARIANT wbObj,VARIANT item)
	{
		IDispatch* p=NULL;
		if(wbObj.vt==VT_EMPTY || wbObj.vt==VT_NULL)
		{
			p=owner->iePtr;
		}
		else if(wbObj.vt==VT_DISPATCH)
		{
			p=wbObj.pdispVal;
		}
		if(!p)return NULL;
		if(item.vt==VT_I4 || item.vt==VT_UI4)
		{
			DWORD index=item.ulVal;
			if(index<0)index=0;
			if(frames.size()<=index)
			{
				//这一查询的有效性基于IE源码，MS并未承诺一直有效。
				CComQIPtr<ITargetFrame2> tFrame2(p);
				CComPtr<IOleContainer> ocPtr;
				tFrame2->GetFramesContainer(&ocPtr);

				if(!ocPtr)return NULL;
				
				CComPtr<IEnumUnknown> enumPtr;
				ocPtr->EnumObjects(OLECONTF_EMBEDDINGS, &enumPtr);
				if(!enumPtr)return NULL;

				CComPtr<IUnknown> unkPtr;
				DWORD i=0;
				while(i<=index)
				{
					CComPtr<IUnknown> unkPtr0;
					enumPtr->Next(1, &unkPtr0, NULL);
					if (!unkPtr0)return NULL;
					CComQIPtr<SHDocVw::IWebBrowser2> wbPtr0(unkPtr0);
					if(!wbPtr0)continue;
					i++;
					unkPtr=CComPtr<IUnknown>(unkPtr0.Detach());
				}
				if(i<=index)return NULL;

				CComQIPtr<IOleObject> ooPtr(unkPtr);

				CComQIPtr<SHDocVw::IWebBrowser2> wbPtr(unkPtr);
				return wbPtr.Detach();
			}
			IDispatch* pRet=frames[index];
			pRet->AddRef();
			return pRet;
		}
		else if(item.vt==VT_BSTR)
		{
			//这一查询的有效性基于IE源码，MS并未承诺一直有效。
			CComQIPtr<ITargetFrame2> tFrame2(p);
			CComPtr<IUnknown> unkPtr;
			tFrame2->FindFrame(item.bstrVal,FINDFRAME_INTERNAL,&unkPtr);
			if(!unkPtr)return NULL;
			
			CComQIPtr<SHDocVw::IWebBrowser2> wbPtr(unkPtr);
			return wbPtr.Detach();
		}
		return NULL;
	}
	virtual VARIANT __stdcall MSHTML_ExecCommand(unsigned int cmdId,unsigned int opt,VARIANT arg1,VARIANT arg2)
	{
		return MsHtmlExecCommandHelper(&CGID_MSHTML,cmdId,opt,arg1,arg2);
	}
	virtual VARIANT __stdcall MSHTML_QueryCmdStatus(unsigned int cmdId,unsigned int statusTextFlag)
	{
		return MsHtmlQueryCmdStatusHelper(&CGID_MSHTML,cmdId,statusTextFlag);
	}	
	virtual VARIANT __stdcall ShellDocView_ExecCommand(unsigned int cmdId,unsigned int opt,VARIANT arg1,VARIANT arg2)
	{
		return WbExecCommandHelper(&CGID_ShellDocView,cmdId,opt,arg1,arg2);
	}
	virtual VARIANT __stdcall ShellDocView_QueryCmdStatus(unsigned int cmdId,unsigned int statusTextFlag)
	{
		return WbQueryCmdStatusHelper(&CGID_ShellDocView,cmdId,statusTextFlag);
	}	
	virtual VARIANT __stdcall GetWindowRect(void)
	{
		if(!::IsWindow(hWnd))return CComVariant();
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		CRect rt;
		::GetWindowRect(hwnd,rt);
		SAFEARRAY* psa=SafeArray::Build(rt.left,rt.top,rt.right,rt.bottom);
		VARIANT vt;
		::VariantInit(&vt);
		vt.vt=VT_ARRAY|VT_VARIANT;
		vt.parray=psa;
		return vt;
	}
	virtual VARIANT __stdcall GetClientRect(void)
	{
		if(!::IsWindow(hWnd))return CComVariant();
		CRect rt;
		::GetClientRect(hWnd,rt);
		SAFEARRAY* psa=SafeArray::Build(rt.left,rt.top,rt.right,rt.bottom);
		VARIANT vt;
		::VariantInit(&vt);
		vt.vt=VT_ARRAY|VT_VARIANT;
		vt.parray=psa;
		return vt;		
	}
	virtual VARIANT __stdcall ScreenToClient(int x,int y)
	{
		if(!::IsWindow(hWnd))return CComVariant();
		CPoint pt;
		pt.x=x;
		pt.y=y;
		::ScreenToClient(hWnd,&pt);
		SAFEARRAY* psa=SafeArray::Build(pt.x,pt.y);
		VARIANT vt;
		::VariantInit(&vt);
		vt.vt=VT_ARRAY|VT_VARIANT;
		vt.parray=psa;
		return vt;		
	}
	virtual VARIANT __stdcall ClientToScreen(int x,int y)
	{
		if(!::IsWindow(hWnd))return CComVariant();
		CPoint pt;
		pt.x=x;
		pt.y=y;
		::ClientToScreen(hWnd,&pt);
		SAFEARRAY* psa=SafeArray::Build(pt.x,pt.y);
		VARIANT vt;
		::VariantInit(&vt);
		vt.vt=VT_ARRAY|VT_VARIANT;
		vt.parray=psa;
		return vt;		
	}	
	virtual BOOL __stdcall Center(void)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(::IsZoomed(hwnd) || ::IsIconic(hwnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hwnd), WM_MDIRESTORE,(WPARAM)hwnd,NULL);
			else
				::ShowWindow(hwnd,SW_SHOWNORMAL);
		}
		CWindow win;
		win.Attach(hwnd);
		BOOL r=win.CenterWindow();
		win.Detach();
		return r;
	}
	virtual BOOL __stdcall Move(int x,int y,int w,int h)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(::IsZoomed(hwnd) || ::IsIconic(hwnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hwnd), WM_MDIRESTORE,(WPARAM)hwnd,NULL);
			else
				::ShowWindow(hwnd,SW_SHOWNORMAL);
		}
		if(::IsZoomed(hwnd) || ::IsIconic(hwnd))return FALSE;
		CRect rt;
		::GetWindowRect(hwnd,rt);
		if(w<0)w=rt.Width();
		if(h<0)h=rt.Height();
		if(x==-1)x=rt.left;
		if(y==-1)y=rt.top;
		return ::MoveWindow(hwnd,x,y,w,h,TRUE);
	}
	virtual BOOL __stdcall MoveBy(int dx,int dy,int dw,int dh)
	{
		if(!::IsWindow(hWnd))return FALSE;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(hWnd,isMDI);
		if(::IsZoomed(hwnd) || ::IsIconic(hwnd))
		{
			if(isMDI)
				::SendMessage(::GetParent(hwnd), WM_MDIRESTORE,(WPARAM)hwnd,NULL);
			else
				::ShowWindow(hwnd,SW_SHOWNORMAL);
		}
		if(::IsZoomed(hwnd) || ::IsIconic(hwnd))return FALSE;
		CRect rt;
		::GetWindowRect(hwnd,rt);
		return ::MoveWindow(hwnd,rt.left+dx,rt.top+dy,rt.Width()+dw,rt.Height()+dh,TRUE);
	}
	virtual void __stdcall SetMenuMask(unsigned int mask)
	{
		owner->SetMenuMask(mask);
	}
#ifdef __ATLAPP_H__
	virtual BSTR __stdcall SelFile(int isOpen, BSTR defExt, BSTR defFileName, BSTR filter)
	{
		if(!::IsWindow(hWnd))return NULL;
		CString ext(defExt);
		CString fn(defFileName);
		CString ft(filter);
		int l=ft.GetLength();
		char *p=ft.GetBuffer(0);
		for(int i=0;i<l;i++)
		{
			if(p[i]=='|')p[i]='\0';
		}
		CFileDialog fd(isOpen,ext,fn,OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,ft,hWnd);
		if(IDOK==fd.DoModal())
		{
			return CString(fd.m_szFileName).AllocSysString();
		}	
		return NULL;
	}
	virtual BSTR __stdcall SelFolder(BSTR title,BSTR path)
	{
		if(!::IsWindow(hWnd))return NULL;
		CString t(title);
		MyFolderDialog fd(hWnd,t,CString(path),BIF_NEWDIALOGSTYLE);	
		if(IDOK==fd.DoModal())
		{
			return CString(fd.m_szFolderPath).AllocSysString();
		}
		return NULL;
	}
	virtual unsigned int __stdcall SelColor(unsigned int initColor)
	{
		if(!::IsWindow(hWnd))return NULL;
		CColorDialog cd(initColor,0,hWnd);
		if(IDOK==cd.DoModal())
		{
			return cd.m_cc.rgbResult;
		}
		return initColor;
	}
	virtual IDispatch* __stdcall SelFont(BSTR fontName,unsigned int size,unsigned int weight,unsigned int onlyTrueType)
	{
		if(!::IsWindow(hWnd))return NULL;
		HDC hDC=::GetDC(NULL);
		unsigned int height=-MulDiv(size, GetDeviceCaps(hDC, LOGPIXELSY), 72);
		::ReleaseDC(NULL,hDC);
		LOGFONT logFont=
		{
			height,
			0,
			0,
			0,
			weight,
			FALSE,
			FALSE,
			FALSE,
			DEFAULT_CHARSET,
			OUT_DEFAULT_PRECIS,
			CLIP_DEFAULT_PRECIS,
			DEFAULT_QUALITY,
			FF_DONTCARE,
			NULL
		};
		::strncpy(logFont.lfFaceName,CString(fontName),CString(fontName).GetLength());
		DWORD flag=CF_FORCEFONTEXIST | CF_SCREENFONTS | CF_INITTOLOGFONTSTRUCT;
		if(onlyTrueType)
			flag |= CF_TTONLY;
		CFontDialog fd(&logFont,flag);

		IDispatch* retVal=NULL;
		if(IDOK==fd.DoModal())
		{
			FONTDESC _fontdesc =
			{
				sizeof(FONTDESC),
				OLESTR("times new roman"),
				FONTSIZE( 14 ),
				FW_NORMAL,
				DEFAULT_CHARSET,
				FALSE,
				FALSE,
				FALSE
			};

			LOGFONT* pFont=fd.m_cf.lpLogFont;
			_fontdesc.cySize.Hi=0;
			_fontdesc.cySize.Lo=fd.m_cf.iPointSize*1000;
			_fontdesc.fItalic=fd.m_cf.lpLogFont->lfItalic;
			_fontdesc.fStrikethrough=pFont->lfStrikeOut;
			_fontdesc.fUnderline=pFont->lfUnderline;
			_fontdesc.lpstrName=CComBSTR(pFont->lfFaceName);
			_fontdesc.sCharset=pFont->lfCharSet;
			_fontdesc.sWeight=(SHORT)pFont->lfWeight;
			::OleCreateFontIndirect(&_fontdesc,IID_IFontDisp,(void**)&retVal);	
		}
		return retVal;
	}
#else
	virtual BSTR __stdcall SelFile(int isOpen, BSTR defExt, BSTR defFileName, BSTR filter)
	{
		if(!::IsWindow(hWnd))return NULL;
		CString ext(defExt);
		CString fn(defFileName);
		CString ft(filter);
		/*
		//MFC的CFileDialog接受的参数就是用|分隔的，无需转为\0，在CFielDialog的构造里会执行这样的转换
		int l=ft.GetLength();
		char *p=ft.GetBuffer(0);
		for(int i=0;i<l;i++)
		{
			if(p[i]=='|')p[i]='\0';
		}
		*/
		CWnd win;
		win.Attach(hWnd);
		CFileDialog fd(isOpen,ext,fn,OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,ft,&win);
		if(IDOK==fd.DoModal())
		{
			win.Detach();
			return fd.GetPathName().AllocSysString();
		}	
		win.Detach();
		return NULL;
	}
	virtual BSTR __stdcall SelFolder(BSTR title,BSTR path)
	{
		if(!::IsWindow(hWnd))return NULL;		
		CString t(title);
		MyFolderDialog fd(hWnd,t,CString(path),BIF_NEWDIALOGSTYLE);
		if(IDOK==fd.DoModal())
		{
			return CString(fd.m_szFolderPath).AllocSysString();
		}
		return NULL;
	}
	virtual unsigned int __stdcall SelColor(unsigned int initColor)
	{
		if(!::IsWindow(hWnd))return NULL;
		CWnd win;
		win.Attach(hWnd);
		CColorDialog cd(initColor,0,&win);
		if(IDOK==cd.DoModal())
		{
			win.Detach();
			return cd.GetColor();
		}
		win.Detach();
		return initColor;
	}
	virtual IDispatch* __stdcall SelFont(BSTR fontName,unsigned int size,unsigned int weight,unsigned int onlyTrueType)
	{
		if(!::IsWindow(hWnd))return NULL;
		HDC hDC=::GetDC(NULL);
		unsigned int height=-MulDiv(size, GetDeviceCaps(hDC, LOGPIXELSY), 72);
		::ReleaseDC(NULL,hDC);
		LOGFONT logFont=
		{
			height,
			0,
			0,
			0,
			weight,
			FALSE,
			FALSE,
			FALSE,
			DEFAULT_CHARSET,
			OUT_DEFAULT_PRECIS,
			CLIP_DEFAULT_PRECIS,
			DEFAULT_QUALITY,
			FF_DONTCARE,
			NULL
		};
		::strncpy(logFont.lfFaceName,CString(fontName),CString(fontName).GetLength());
		DWORD flag=CF_FORCEFONTEXIST | CF_SCREENFONTS | CF_INITTOLOGFONTSTRUCT;
		if(onlyTrueType)
			flag |= CF_TTONLY;
		CFontDialog fd(&logFont,flag);
		
		IDispatch* retVal=NULL;
		if(IDOK==fd.DoModal())
		{
			FONTDESC _fontdesc =
			{
				sizeof(FONTDESC),
				OLESTR("times new roman"),
				FONTSIZE( 14 ),
				FW_NORMAL,
				DEFAULT_CHARSET,
				FALSE,
				FALSE,
				FALSE
			};
			LOGFONT lf;
			fd.GetCurrentFont(&lf);			
			LOGFONT* pFont=&lf;
			_fontdesc.cySize.Hi=0;
			_fontdesc.cySize.Lo=fd.GetSize()*1000;
			_fontdesc.fItalic=pFont->lfItalic;
			_fontdesc.fStrikethrough=pFont->lfStrikeOut;
			_fontdesc.fUnderline=pFont->lfUnderline;
			_fontdesc.lpstrName=CComBSTR(pFont->lfFaceName);
			_fontdesc.sCharset=pFont->lfCharSet;
			_fontdesc.sWeight=(SHORT)pFont->lfWeight;
			::OleCreateFontIndirect(&_fontdesc,IID_IFontDisp,(void**)&retVal);	
		}
		return retVal;
	}
#endif
	virtual IDispatch* __stdcall GetFont(BSTR fontName,unsigned int fontSize,unsigned int weight)
	{		
		FONTDESC _fontdesc =
		{
			sizeof(FONTDESC),
			fontName,
			FONTSIZE( 14 ),
			weight,
			DEFAULT_CHARSET,
			FALSE,
			FALSE,
			FALSE
		}; 		
		_fontdesc.cySize.Hi=0;
		_fontdesc.cySize.Lo=fontSize*10000;
		IDispatch* pFont=NULL;
		::OleCreateFontIndirect(&_fontdesc,IID_IFontDisp,(void**)&pFont);
		return pFont;
	}
	virtual IDispatch* __stdcall GetPicture(BSTR file)
	{
		PICTDESC pictDesc;
		IDispatch* pPic=NULL;
		pictDesc.cbSizeofstruct=sizeof(PICTDESC);
		pictDesc.picType=PICTYPE_BITMAP;
		pictDesc.bmp.hbitmap=BitmapUtility::LoadBitmap(ScriptFile::ConvertPath(CString(file)));
		pictDesc.bmp.hpal=(HPALETTE)::GetStockObject(DEFAULT_PALETTE);
		::OleCreatePictureIndirect(&pictDesc,IID_IPictureDisp,TRUE,(void**)&pPic);
		return pPic;
	}
	virtual IDispatch* __stdcall get_Rgn(void)
	{
		if(!windowRgn)return NULL;
		IDispatch* p=NULL;
		windowRgn.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Menu(void)
	{
		if(!menu)return NULL;
		IDispatch* p=NULL;
		menu.QueryInterface(&p);
		return p;
	}
	virtual void __stdcall RegisterScriptHandler(unsigned int id,BSTR scp)
	{
		owner->RegisterScriptHandler(id,CString(scp));
	}
	virtual void __stdcall UnregisterScriptHandler(unsigned int id)
	{
		owner->UnregisterScriptHandler(id);
	}
	virtual IDispatch* __stdcall CreateObject(BSTR progId)
	{
		CComPtr<IDispatch> dispPtr;
		HRESULT hr=dispPtr.CoCreateInstance(progId,NULL,CLSCTX_SERVER);
		if(FAILED(hr))
			return NULL;
		else
		{
			return dispPtr.Detach();
		}
	}
	virtual IDispatch* __stdcall CreateVector(void)
	{
		return ScriptStl::VectorObj::CreateDispatch();
	}
	virtual IDispatch* __stdcall CreateDeque(void)
	{
		return ScriptStl::DequeObj::CreateDispatch();
	}
	virtual IDispatch* __stdcall CreateList(void)
	{
		return ScriptStl::ListObj::CreateDispatch();
	}
	virtual IDispatch* __stdcall CreateSet(void)
	{
		return ScriptStl::SetObj::CreateDispatch();
	}
	virtual IDispatch* __stdcall CreateMaxPriorityQueue(void)
	{
		return ScriptStl::MaxPriorityQueueObj::CreateDispatch();
	}
	virtual IDispatch* __stdcall CreateMinPriorityQueue(void)
	{
		return ScriptStl::MinPriorityQueueObj::CreateDispatch();
	}
	virtual void __stdcall SetWildcardsSecurityPolicy(unsigned int dwAction,unsigned int policy)
	{
		owner->SetWildcardsSecurityPolicy(dwAction,policy);
	}
	virtual unsigned int __stdcall GetCurrentSecurityPolicy(BSTR url,unsigned int dwAction)
	{
		return owner->GetCurrentSecurityPolicy(url,dwAction);
	}
	virtual void __stdcall SetDispatchOption(unsigned int dispid,VARIANT option)
	{
		owner->SetDispatchOption(dispid,option);
	}
	virtual VARIANT __stdcall GetDispatchOption(unsigned int dispid)
	{
		CComVariant option=owner->GetDispatchOption(dispid);
		VARIANT v;
		::VariantInit(&v);
		option.Detach(&v);
		return v;
	}
	virtual int __stdcall get_ControlNumber(void)
	{
		return static_cast<int>(controls.size());
	}
	virtual IDispatch* __stdcall GetControl(int ix)
	{
		if(ix<0 || ix>=static_cast<int>(controls.size()))
			return NULL;
		CComPtr<IDispatch> p=controls[ix];
		IDispatch* ptr=NULL;
		p.QueryInterface(&ptr);
		return ptr;
	}
	virtual IDispatch* __stdcall CreateScriptEditor(UINT id,BSTR placeHolderID)
	{
		ScriptEditor<Owner>* pEditor=ScriptEditor<Owner>::CreateDispatch();
		pEditor->Init(owner,id,CString(placeHolderID));
		controls.push_back(CAdapt<CComPtr<IDispatch> >(pEditor));
		return pEditor;
	}
	virtual void __stdcall EraseControl(IDispatch* pCtrl)
	{
		Controls::iterator it=controls.begin();
		while(it!=controls.end())
		{
			CComPtr<IDispatch> p=*it;
			IDispatch* ptr=p;
			if(ptr==pCtrl)
			{
				controls.erase(it);
				break;
			}

			it++;
		}
	}
	virtual void __stdcall ClearControls(void)
	{
		controls.clear();
	}
	virtual BSTR __stdcall IntToHex(unsigned int val)
	{
		CString temp;
		temp.Format("%8.8X",val);
		return temp.AllocSysString();
	}
	virtual unsigned int __stdcall HexToInt(BSTR val)
	{
		CString tempV(val);
		tempV.MakeUpper();
		UINT ret=0;
		::sscanf(tempV,"%X",&ret);	
		return ret;
	}
	virtual BSTR __stdcall StrToUTF8(BSTR str)
	{
		return ScriptFile::StrToUTF8(CString(str)).AllocSysString();
	}
	virtual BSTR __stdcall UTF8ToStr(BSTR str)
	{
		return ScriptFile::UTF8ToStr(CString(str)).AllocSysString();
	}
	virtual IDispatch* __stdcall get_Map(void)
	{
		if(!myMap)return NULL;
		IDispatch* p=NULL;
		myMap.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Application(void)
	{
		return ApplicationT::GetPtr();
	}
	virtual IDispatch* __stdcall get_Shell(void)
	{
		if(!shell)return NULL;
		IDispatch* p=NULL;
		shell.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Inet(void)
	{
		if(!inet)return NULL;
		IDispatch* p=NULL;
		inet.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Driver(void)
	{
		if(!inet)return NULL;
		IDispatch* p=NULL;
		driver.QueryInterface(&p);
		return p;
	}
#ifdef USE_ACE_SOCKET
	virtual IDispatch* __stdcall get_Socket(void)
	{
		if(!mySocket)return NULL;
		IDispatch* p=NULL;
		mySocket.QueryInterface(&p);
		return p;
	}
#endif
public:
	BEGIN_INTF(ExterObjClass)		
		PROPERTYPUT(Title,false)
		PROPERTYGET(Title,true)		
		METHOD(Close)
		METHOD(Maximize)
		METHOD(Minimize)
		METHOD(Normal)
		METHOD(Show)
		METHOD(Hide)
		METHOD(IsZoomed)
		METHOD(IsIconic)
		METHOD(SetLong)
		METHOD(GetLong)		
		METHOD(GetMessageHwnd)
		METHOD(GetWebBrowserHwnd)
		METHOD(GetWebBrowser)
		METHOD(GetNewWebBrowser)
		METHOD(GetFrameWebBrowser)
		METHOD(MSHTML_ExecCommand)
		METHOD(MSHTML_QueryCmdStatus)
		METHOD(ShellDocView_ExecCommand)
		METHOD(ShellDocView_QueryCmdStatus)		
		METHOD(GetWindowRect)
		METHOD(GetClientRect)
		METHOD(ScreenToClient)
		METHOD(ClientToScreen)
		METHOD(Center)
		METHOD(Move)
		METHOD(MoveBy)		
		METHOD(SetMenuMask)	
		METHOD(SelFile)
		METHOD(SelFolder)
		METHOD(SelColor)
		METHOD(SelFont)		
		METHOD(GetFont)
		METHOD(GetPicture)		
		PROPERTYGET(Rgn,true)
		PROPERTYGET(Menu,true)
		METHOD(RegisterScriptHandler)
		METHOD(UnregisterScriptHandler)
		METHOD(CreateObject)
		METHOD(CreateVector)
		METHOD(CreateDeque)
		METHOD(CreateList)
		METHOD(CreateSet)
		METHOD(CreateMaxPriorityQueue)
		METHOD(CreateMinPriorityQueue)
		METHOD(SetWildcardsSecurityPolicy)
		METHOD(GetCurrentSecurityPolicy)
		METHOD(SetDispatchOption)
		METHOD(GetDispatchOption)
		PROPERTYGET(ControlNumber,true)
		METHOD(GetControl)
		METHOD(CreateScriptEditor)
		METHOD(EraseControl)
		METHOD(ClearControls)	
		METHOD(IntToHex)
		METHOD(HexToInt)
		METHOD(StrToUTF8)
		METHOD(UTF8ToStr)	
		PROPERTYGET(Map,true)
		PROPERTYGET(Application,true)
		PROPERTYGET(Shell,true)
		PROPERTYGET(Inet,true)
		PROPERTYGET(Driver,true)
#ifdef USE_ACE_SOCKET
		PROPERTYGET(Socket,true)
#endif
	END_INTF()
public:
	ExterObj():hWnd(NULL)
	{}
	~ExterObj()
	{
		try
		{
			ClearFrames();
			ClearControls();
		}
		catch(...)
		{}
	}
	inline void Init(Owner* o)
	{
		owner=o;hWnd=o->m_hWnd;

		MyMap* pMM=MyMap::CreateDispatch();
		myMap.Attach(pMM);

		MyShell<Owner>* pMS=MyShell<Owner>::CreateDispatch();
		pMS->Init(o);
		shell.Attach(pMS);
		
		MyInet<Owner>* pMI=MyInet<Owner>::CreateDispatch();
		pMI->Init(o);
		inet.Attach(pMI);

		MyDriver<Owner>* pMD=MyDriver<Owner>::CreateDispatch();
		pMD->Init(o);
		driver.Attach(pMD);
		
		MyWindowRgn<Owner>* pMW=MyWindowRgn<Owner>::CreateDispatch();
		pMW->Init(o);
		windowRgn.Attach(pMW);	

		pMyMenu=MyMenu<Owner>::CreateDispatch();
		pMyMenu->Init(o);
		menu.Attach(pMyMenu);

#ifdef USE_ACE_SOCKET
		MySocket* pSocket=MySocket::CreateDispatch();
		pSocket->Init(hWnd);
		mySocket.Attach(pSocket);
#endif
	}
	inline void ClearFrames(void)
	{
		frames.clear();
	}
	inline void PutFrame(IDispatch* p)
	{
		Frames::iterator it=std::find(frames.begin(),frames.end(),p);
		if(it!=frames.end())
			return;
		frames.push_back(p);
	}
private:
	VARIANT __stdcall MsHtmlExecCommandHelper(const GUID* pGuid,unsigned int cmdId,unsigned int opt,VARIANT arg1,VARIANT arg2)
	{
		CComPtr<IDispatch> docPtr;
		docPtr.Attach(owner->GetDocumentObj());
		if(!docPtr)
			return CComVariant();
		CComQIPtr<IOleCommandTarget> pCmdTarget(docPtr);
		if(!pCmdTarget)
			return CComVariant();
		CComVariant	argIn=arg1;
		CComVariant argOut=arg2;
		HRESULT hr=pCmdTarget->Exec(pGuid,cmdId,opt,&argIn,&argOut);
		VARIANT rt;
		::VariantInit(&rt);
		argOut.Detach(&rt);
		return rt;
	}
	VARIANT __stdcall MsHtmlQueryCmdStatusHelper(const GUID* pGuid,unsigned int cmdId,unsigned int statusTextFlag)
	{
		CComPtr<IDispatch> docPtr;
		docPtr.Attach(owner->GetDocumentObj());
		if(!docPtr)
			return CComVariant();
		CComQIPtr<IOleCommandTarget> pCmdTarget(docPtr);
		if(!pCmdTarget)
			return CComVariant();
		OLECMD oleCmd;
		oleCmd.cmdID=cmdId;
		oleCmd.cmdf=0;
		CComVariant ret;
		HRESULT hr;
		if(statusTextFlag>0)
		{
			OLECMDTEXT* pCmdText=(OLECMDTEXT*)new char[sizeof(OLECMDTEXT)+1024];
			::ZeroMemory(pCmdText,sizeof(OLECMDTEXT)+1024);
			pCmdText->cmdtextf=(OLECMDTEXTF)(statusTextFlag-1);
			pCmdText->cwActual=0;
			pCmdText->cwBuf=512;
			hr=pCmdTarget->QueryStatus(pGuid,1,&oleCmd,pCmdText);
			if(pCmdText->cwActual<=512)
				pCmdText->rgwz[pCmdText->cwActual]=0;
			ret=CComVariant(CComBSTR(pCmdText->rgwz));			
			delete[] (char*)pCmdText;
		}
		else
		{
			hr=pCmdTarget->QueryStatus(pGuid,1,&oleCmd,NULL);			
			ret=CComVariant(int(oleCmd.cmdf));
		}
		VARIANT rt;
		::VariantInit(&rt);
		ret.Detach(&rt);
		return rt;
	}
	VARIANT __stdcall WbExecCommandHelper(const GUID* pGuid,unsigned int cmdId,unsigned int opt,VARIANT arg1,VARIANT arg2)
	{
		CComQIPtr<IOleCommandTarget> pCmdTarget(owner->iePtr);
		if(!pCmdTarget)
			return CComVariant();
		CComVariant	argIn=arg1;
		CComVariant argOut=arg2;
		HRESULT hr=pCmdTarget->Exec(pGuid,cmdId,opt,&argIn,&argOut);
		VARIANT rt;
		::VariantInit(&rt);
		argOut.Detach(&rt);
		return rt;
	}
	VARIANT __stdcall WbQueryCmdStatusHelper(const GUID* pGuid,unsigned int cmdId,unsigned int statusTextFlag)
	{
		CComQIPtr<IOleCommandTarget> pCmdTarget(owner->iePtr);
		if(!pCmdTarget)
			return CComVariant();
		OLECMD oleCmd;
		oleCmd.cmdID=cmdId;
		oleCmd.cmdf=0;
		CComVariant ret;
		HRESULT hr;
		if(statusTextFlag>0)
		{
			OLECMDTEXT* pCmdText=(OLECMDTEXT*)new char[sizeof(OLECMDTEXT)+1024];
			::ZeroMemory(pCmdText,sizeof(OLECMDTEXT)+1024);
			pCmdText->cmdtextf=(OLECMDTEXTF)(statusTextFlag-1);
			pCmdText->cwActual=0;
			pCmdText->cwBuf=512;
			hr=pCmdTarget->QueryStatus(pGuid,1,&oleCmd,pCmdText);
			if(pCmdText->cwActual<=512)
				pCmdText->rgwz[pCmdText->cwActual]=0;
			ret=CComVariant(CComBSTR(pCmdText->rgwz));			
			delete[] (char*)pCmdText;
		}
		else
		{
			hr=pCmdTarget->QueryStatus(pGuid,1,&oleCmd,NULL);			
			ret=CComVariant(int(oleCmd.cmdf));
		}
		VARIANT rt;
		::VariantInit(&rt);
		ret.Detach(&rt);
		return rt;
	}
	HWND MyFindChildWindow(HWND hwnd,const CString className)
	{
		HWND hR=::FindWindowEx(hwnd,NULL,className,NULL);
		if(!::IsWindow(hR))
			return hwnd;
		return hR;
	}
private:	
	Owner* owner;
	HWND hWnd;

	CComPtr<IDispatch> myMap;
	CComPtr<IDispatch> shell;
	CComPtr<IDispatch> inet;
	CComPtr<IDispatch> driver;
	CComPtr<IDispatch> windowRgn;
	CComPtr<IDispatch> menu;
#ifdef USE_ACE_SOCKET
	CComPtr<IDispatch> mySocket;
#endif
	MyMenu<Owner>* pMyMenu;

	Delegation2<bool,IDispatch*,VARIANT*>* pEvent;

	Frames frames;
	Controls controls;
};

#endif // !defined(AFX_EXTERNALOBJ_H__27C6433D_A12A_495F_BC55_A4F5D2AAB9C6__INCLUDED_)

#pragma once

#include "ExterCommon.h"

template<typename T>
	class MyWindowRgn : public IDispatch
{
	typedef std::vector<HRGN> RgnBuffer;
public:
	virtual void __stdcall SetXForm(double eM11,double eM12,double eM21,double eM22,double eDx,double eDy)
	{
		XFORM xform={eM11,eM12,eM21,eM22,eDx,eDy};		
		xForm=xform;
	}
	virtual void __stdcall InitBMPRgn(BSTR file,unsigned int colorKey)
	{
		CString fileName=ScriptFile::ConvertPath(CString(file));
		HBITMAP hbitmap=BitmapUtility::LoadBitmap(fileName);
		InitBMPRgn_(hbitmap,colorKey);
	}
	virtual void __stdcall CombineBMPRgn(BSTR file,unsigned int colorKey,int mode)
	{
		CString fileName=ScriptFile::ConvertPath(CString(file));
		HBITMAP hbitmap=BitmapUtility::LoadBitmap(fileName);
		CombineBMPRgn_(hbitmap,colorKey,mode);
	}		
	virtual void __stdcall InitFileRgn(BSTR file)
	{
		HRGN hRgn=rgn;
		if(hRgn!=NULL)
			rgn.DeleteObject();
		char* pData=NULL;
		int size=ScriptFile::Read(ScriptFile::ConvertPath(CString(file)),pData);
		if(size<0)
		{
			return;
		}
		rgn.CreateFromData(&xForm,size,(const RGNDATA*)pData);
		delete[] pData;
	}
	virtual void __stdcall CombineFileRgn(BSTR file,int mode)
	{
		CRgn rgn2;
		char* pData=NULL;
		int size=ScriptFile::Read(ScriptFile::ConvertPath(CString(file)),pData);
		if(size<0)
			return;		
		rgn2.CreateFromData(&xForm,size,(const RGNDATA*)pData);
		delete[] pData;
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}
	virtual void __stdcall SaveAsFileRgn(BSTR file)
	{
		int size=rgn.GetRegionData(NULL,0);
		if(size<=0)
			return;
		char* pData=new char[size];
		rgn.GetRegionData((RGNDATA*)pData,size);
		ScriptFile::WriteLocal(ScriptFile::ConvertPath(CString(file)),pData,size);
		delete[] pData;
	}
	virtual void __stdcall PushRgn(void)
	{
		HRGN hRgn=rgn;
		if(hRgn!=NULL)
		{
			rgnBuffer.push_back(hRgn);
			rgn.Detach();
		}
	}
	virtual void __stdcall PeepRgn(unsigned int pos)
	{
		HRGN hRgn=rgn;
		if(hRgn==NULL)
			rgn.CreateRectRgn(0,0,0,0);
		if(pos<0)
			pos=0;
		if(pos>=rgnBuffer.size())
			pos=(unsigned int)rgnBuffer.size()-1;
#ifdef __ATLAPP_H__		
		rgn.CopyRgn(rgnBuffer[pos]);
#else
		CRgn rgn2;
		rgn2.Attach(rgnBuffer[pos]);
		rgn.CopyRgn(&rgn2);
		rgn2.Detach();
#endif
	}
	virtual void __stdcall ClearRgnBuffer(void)
	{
		RgnBuffer::iterator it=rgnBuffer.begin();
		while(it!=rgnBuffer.end())
		{
			::DeleteObject(*it);
			it++;
		}
		rgnBuffer.clear();
	}
	virtual void __stdcall InitRgn(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2)
	{		
		HRGN hRgn=rgn;
		if(hRgn!=NULL)
			rgn.DeleteObject();
		rgn.CreateRectRgn(x1,y1,x2,y2);
	}	
	//modeֵ:
	//RGN_AND          1
	//RGN_OR           2
	//RGN_XOR          3
	//RGN_DIFF         4
	//RGN_COPY         5
	virtual void __stdcall CombineRectRgn(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2,int mode)
	{
		CRgn rgn2;
		rgn2.CreateRectRgn(x1,y1,x2,y2);
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}
	virtual void __stdcall CombineEllipticRgn(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2,int mode)
	{
		CRgn rgn2;
		rgn2.CreateEllipticRgn(x1,y1,x2,y2);
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}
	virtual void __stdcall CombineRoundRectRgn(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2,unsigned int x3,unsigned int y3,int mode)
	{
		CRgn rgn2;
		rgn2.CreateRoundRectRgn(x1,y1,x2,y2,x3,y3);
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}	
	//rgnModeֵ:
	//ALTERNATE        1
	//WINDING          2
	virtual void __stdcall CombinePolygonRgn(VARIANT points,int rgnMode,int mode)
	{
		CRgn rgn2;
		int len=0;
		int* pts=GetArrayFromScript<int>(points,len);
		rgn2.CreatePolygonRgn((POINT*)pts,len/2,rgnMode);
		delete[] pts;
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}
	virtual void __stdcall CombinePolyPolygonRgn(VARIANT points,VARIANT polyCounts,int rgnMode,int mode)
	{
		CRgn rgn2;
		int len=0,len2=0;
		int* pts=GetArrayFromScript<int>(points,len);
		int* counts=GetArrayFromScript<int>(polyCounts,len2);
		rgn2.CreatePolyPolygonRgn((POINT*)pts,(int*)counts,len2,rgnMode);
		delete[] pts;
		delete[] counts;
#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}	
	virtual void __stdcall SetRgn(void)
	{
		if(!::IsWindow(owner->m_hWnd))return;
		bool isMDI;
		HWND hwnd=ExterUtility::GetOuterLevelWindow(owner->m_hWnd,isMDI);
		BOOL r=::SetWindowRgn(hwnd,rgn,TRUE);
		if(r)
		{
			rgn.Detach();
		}
	}
public:
	BEGIN_INTF(MyWindowRgn)
		METHOD(SetXForm)
		METHOD(InitBMPRgn)
		METHOD(CombineBMPRgn)
		METHOD(InitFileRgn)
		METHOD(CombineFileRgn)
		METHOD(SaveAsFileRgn)	
		METHOD(PushRgn)
		METHOD(PeepRgn)
		METHOD(ClearRgnBuffer)
		METHOD(InitRgn)
		METHOD(CombineRectRgn)
		METHOD(CombineEllipticRgn)
		METHOD(CombineRoundRectRgn)
		METHOD(CombinePolygonRgn)
		METHOD(CombinePolyPolygonRgn)
		METHOD(SetRgn)
	END_INTF()
public:
	MyWindowRgn()
	{		
		xForm.eM11=1.0;
		xForm.eM12=0.0;
		xForm.eM21=0.0;
		xForm.eM22=1.0;
		xForm.eDx=0.0;
		xForm.eDy=0.0;
	}
	~MyWindowRgn()
	{
		ClearRgnBuffer();
		HRGN hRgn=rgn;
		if(hRgn!=NULL)
			rgn.DeleteObject();
	}
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	void InitBMPRgn_(HBITMAP hBitmap,unsigned int colorKey)
	{
		HRGN hRgn=rgn;
		if(hRgn!=NULL)
			rgn.DeleteObject();
		HDC hDC=::GetDC(NULL);
		HDC hMemDC=::CreateCompatibleDC(hDC);
		
		BITMAP bm;
		::GetObject(hBitmap,sizeof(bm),&bm);
		HBITMAP hOldBMP=(HBITMAP)::SelectObject(hMemDC,hBitmap);

		COLORREF keyColor=(COLORREF)colorKey;		
		int count=0;
		for(int j=0;j<bm.bmHeight;j++)
		{		
			COLORREF lc=keyColor;
			for(int i=0;i<bm.bmWidth;i++)
			{
				COLORREF c=::GetPixel(hMemDC,i,j);
				if(lc==keyColor && c!=keyColor)
				{
					count++;
				}
				lc=c;
			}
		}
		int size=sizeof(RGNDATAHEADER)+count*sizeof(RECT);
		RGNDATA* pRgnData=(RGNDATA*)new char[size];
		pRgnData->rdh.dwSize=sizeof(RGNDATAHEADER);
		pRgnData->rdh.iType=RDH_RECTANGLES;
		pRgnData->rdh.rcBound.left=0;
		pRgnData->rdh.rcBound.top=0;
		pRgnData->rdh.rcBound.right=bm.bmWidth;
		pRgnData->rdh.rcBound.bottom=bm.bmHeight;		
		pRgnData->rdh.nCount=count;
		pRgnData->rdh.nRgnSize=count*sizeof(RECT);
		count=0;
		RECT* pBuf=(RECT*)pRgnData->Buffer;
		for(int j=0;j<bm.bmHeight;j++)
		{		
			int st=0,ed=-1;
			COLORREF lc=keyColor;
			for(int i=0;i<bm.bmWidth;i++)
			{
				COLORREF c=::GetPixel(hMemDC,i,j);
				if(lc==keyColor && c!=keyColor)
				{
					st=i;count++;
				}
				else if(lc!=keyColor && c==keyColor)
				{
					ed=i;
				}
				else if(lc!=keyColor && i==bm.bmWidth-1)
				{
					ed=i+1;
				}
				if(lc==keyColor && c!=keyColor && i==bm.bmWidth-1)
				{
					ed=i+1;
				}
				if(ed>=st && count>0)
				{
					RECT rt={st,j,ed,j+1};					
					pBuf[count-1]=rt;
					ed=-1;
				}
				lc=c;
			}
		}
		rgn.CreateFromData(&xForm,size,pRgnData);
		delete[] pRgnData;

		::SelectObject(hMemDC,hOldBMP);
		::DeleteObject(hBitmap);
		::DeleteDC(hMemDC);
		::ReleaseDC(NULL,hDC);
	}
	void CombineBMPRgn_(HBITMAP hBitmap,unsigned int colorKey,int mode)
	{
		CRgn rgn2;
		HDC hDC=::GetDC(NULL);
		HDC hMemDC=::CreateCompatibleDC(hDC);
		
		BITMAP bm;
		::GetObject(hBitmap,sizeof(bm),&bm);
		HBITMAP hOldBMP=(HBITMAP)::SelectObject(hMemDC,hBitmap);

		COLORREF keyColor=(COLORREF)colorKey;
		int count=0;
		for(int j=0;j<bm.bmHeight;j++)
		{		
			COLORREF lc=keyColor;
			for(int i=0;i<bm.bmWidth;i++)
			{
				COLORREF c=::GetPixel(hMemDC,i,j);
				if(lc==keyColor && c!=keyColor)
				{
					count++;
				}
				lc=c;
			}
		}
		int size=sizeof(RGNDATAHEADER)+count*sizeof(RECT);
		RGNDATA* pRgnData=(RGNDATA*)new char[size];
		pRgnData->rdh.dwSize=sizeof(RGNDATAHEADER);
		pRgnData->rdh.iType=RDH_RECTANGLES;
		pRgnData->rdh.rcBound.left=0;
		pRgnData->rdh.rcBound.top=0;
		pRgnData->rdh.rcBound.right=bm.bmWidth;
		pRgnData->rdh.rcBound.bottom=bm.bmHeight;		
		pRgnData->rdh.nCount=count;
		pRgnData->rdh.nRgnSize=count*sizeof(RECT);
		count=0;
		RECT* pBuf=(RECT*)pRgnData->Buffer;
		for(int j=0;j<bm.bmHeight;j++)
		{		
			int st=0,ed=-1;
			COLORREF lc=keyColor;
			for(int i=0;i<bm.bmWidth;i++)
			{
				COLORREF c=::GetPixel(hMemDC,i,j);
				if(lc==keyColor && c!=keyColor)
				{
					st=i;count++;
				}
				else if(lc!=keyColor && c==keyColor)
				{
					ed=i;
				}
				else if(lc!=keyColor && i==bm.bmWidth-1)
				{
					ed=i+1;
				}
				if(lc==keyColor && c!=keyColor && i==bm.bmWidth-1)
				{
					ed=i+1;
				}
				if(ed>=st && count>0)
				{
					RECT rt={st,j,ed,j+1};					
					pBuf[count-1]=rt;
					ed=-1;
				}
				lc=c;
			}
		}
		rgn2.CreateFromData(&xForm,size,pRgnData);
		delete[] pRgnData;

		::SelectObject(hMemDC,hOldBMP);
		::DeleteObject(hBitmap);
		::DeleteDC(hMemDC);
		::ReleaseDC(NULL,hDC);

#ifdef __ATLAPP_H__
		rgn.CombineRgn(rgn2,mode);
#else
		rgn.CombineRgn(&rgn,&rgn2,mode);
#endif
	}
private:
	T* owner;

	XFORM xForm;
	CRgn rgn;
	RgnBuffer rgnBuffer;
};

class MyMenuData
{
public:
	typedef std::set<UINT> IDs;
	typedef std::set<HMENU> MenuSet;
	typedef std::map<UINT,HMENU> Menus;
public:
	static inline MyMenuData& InstanceRef(void)
	{
		static MyMenuData menuData;
		return menuData;
	}
public:
	inline HMENU GetMenu(UINT id)
	{
		Menus::const_iterator it=idMenus.find(id);
		if(it!=idMenus.end())
			return it->second;
		return NULL;
	}
	inline void SetMenu(UINT id,HMENU hMenu)
	{
		idMenus[id]=hMenu;
		menuSet.insert(hMenu);
	}
	inline void EraseId(UINT id)
	{
		idMenus.erase(id);
	}
	inline void EraseMenu(HMENU hMenu)
	{
		IDs ids;
		Menus::const_iterator it=idMenus.begin();
		while(it!=idMenus.end())
		{
			if(it->second==hMenu)
				ids.insert(it->first);
			it++;
		}
		IDs::const_iterator it2=ids.begin();
		while(it2!=ids.end())
		{
			idMenus.erase(*it2);
			it2++;
		}
		menuSet.erase(hMenu);
	}
private:
	MyMenuData()
	{}
public:
	~MyMenuData()
	{
		//²˵¥˽¾ۍ
		MenuSet::iterator it=menuSet.begin();
		while(it!=menuSet.end())
		{	
			::DestroyMenu(*it);
			it++;
		}		
	}
public:
	Menus idMenus;
	MenuSet menuSet;
};

template
	<
	typename Owner
	>
	class MyMenu : public IDispatch
{	
public:	
	virtual int __stdcall CreatePopupMenu(void)
	{
		HMENU hMenu=::CreatePopupMenu();	
		if(hMenu)
		{
			MyMenuData::InstanceRef().SetMenu(0,hMenu);
			return (int)hMenu;
		}
		return 0;
	}
	virtual void __stdcall DestroyPopupMenu(int hMenu)
	{
		::DestroyMenu((HMENU)hMenu);
		if(hMenu)
		{
			MyMenuData::InstanceRef().EraseMenu((HMENU)hMenu);
		}
	}
	virtual int __stdcall TrackPopupMenu(int hMenu, int x, int y, int hWnd)
	{
		int x2=x,y2=y;
		HWND hWnd2=owner->m_hWnd;
		if(::IsWindow((HWND)hWnd))
		{
			CPoint pt(x2,y2);
			if(::ClientToScreen((HWND)hWnd,&pt))
			{
				x2=pt.x;
				y2=pt.y;
			}
		}
		return ::TrackPopupMenu((HMENU)hMenu,TPM_NONOTIFY|TPM_RETURNCMD,x2,y2,0,hWnd2,NULL);
	}
	virtual int __stdcall TrackPopupMenu2(int hMenu, int x, int y, int hWnd)
	{
		int x2=x,y2=y;
		HWND hWnd2=owner->m_hWnd;
		if(::IsWindow((HWND)hWnd))
		{
			CPoint pt(x2,y2);
			if(::ClientToScreen((HWND)hWnd,&pt))
			{
				x2=pt.x;
				y2=pt.y;
			}
		}
		return ::TrackPopupMenu((HMENU)hMenu,0,x2,y2,0,hWnd2,NULL);
	}
	virtual void __stdcall InsertSubMenu(int hMenu, int id, int hSubMenu,BSTR title,int byCommand)
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		MyMenuData::InstanceRef().SetMenu(0,(HMENU)hMenu);
		::InsertMenu((HMENU)hMenu,id,flag|MF_POPUP,(UINT_PTR)hSubMenu,CString(title));
	}
	virtual void __stdcall InsertMenuItem(int hMenu, int id, int itemId, BSTR title, int enabled, int checked, int byCommand)
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		if(enabled)
			flag|=MF_ENABLED;
		else
			flag|=MF_GRAYED;
		if(checked)
			flag|=MF_CHECKED;
		else
			flag|=MF_UNCHECKED;
		if(byCommand)
			MyMenuData::InstanceRef().SetMenu(itemId,(HMENU)hMenu);
		::InsertMenu((HMENU)hMenu,id,flag,(UINT_PTR)itemId,CString(title));		
	}
	virtual void __stdcall EnableMenuItem(int hMenu, int id, int enabled, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		if(enabled)
			flag|=MF_ENABLED;
		else
			flag|=MF_GRAYED;
		::EnableMenuItem((HMENU)hMenu,id,flag);
	}
	virtual void __stdcall CheckMenuItem(int hMenu, int id, int checked, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		if(checked)
			flag|=MF_CHECKED;
		else
			flag|=MF_UNCHECKED;
		::CheckMenuItem((HMENU)hMenu,id,flag);
	}
	virtual void __stdcall CheckMenuRadioItem(int hMenu, int idFirst, int idLast, int idCheck, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		::CheckMenuRadioItem((HMENU)hMenu,idFirst,idLast,idCheck,flag);
	}
	virtual int __stdcall MenuItemIsEnabled(int hMenu, int id, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		UINT r=::GetMenuState((HMENU)hMenu,id,flag|MF_GRAYED|MF_CHECKED);
		if(!(r&MF_GRAYED))
			return 1;
		else
			return 0;
	}
	virtual int __stdcall MenuItemIsChecked(int hMenu, int id, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		UINT r=::GetMenuState((HMENU)hMenu,id,flag|MF_GRAYED|MF_GRAYED|MF_CHECKED);
		if((r&MF_CHECKED))
			return 1;
		else
			return 0;
	}
	virtual void __stdcall InsertSeparator(int hMenu, int id, int itemId, int byCommand )
	{
		int hMainMenu=get_MainMenu();
		if(hMenu==hMainMenu)
			return;
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		::InsertMenu((HMENU)hMenu,id,flag|MF_GRAYED,(UINT_PTR)itemId,NULL);
	}
	virtual void __stdcall DeleteMenu(int hMenu, int id, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		MENUITEMINFO mInfo;
		mInfo.cbSize=sizeof(mInfo);
		mInfo.fMask = MIIM_SUBMENU;
		mInfo.hSubMenu=NULL;
		::GetMenuItemInfo((HMENU)hMenu,id,!byCommand,&mInfo);
		
		::DeleteMenu((HMENU)hMenu,id,flag);

		if(mInfo.hSubMenu)
		{
			MyMenuData::InstanceRef().EraseMenu(mInfo.hSubMenu);
		}
		else if(byCommand)
		{
			MyMenuData::InstanceRef().EraseId(id);
		}
	}
	virtual int __stdcall GetMenuItemCount(int hMenu)
	{
		return ::GetMenuItemCount((HMENU)hMenu);
	}
	virtual int __stdcall GetMenuItemId(int hMenu, int position)
	{
		return ::GetMenuItemID((HMENU)hMenu,position);
	}
	virtual BSTR __stdcall GetMenuString(int hMenu, int id, int byCommand )
	{
		int flag=MF_BYCOMMAND;
		if(!byCommand)
			flag=MF_BYPOSITION;
		int size=::GetMenuString((HMENU)hMenu,id,NULL,0,flag);
		char buf[1025];
		buf[0]=0;
		::GetMenuString((HMENU)hMenu,id,buf,size+1,flag);
		buf[size]=0;
		return CString(buf).AllocSysString();
	}
	virtual int __stdcall GetSubMenu(int hMenu, int position)
	{
		return (int)::GetSubMenu((HMENU)hMenu,position);
	}
	virtual int __stdcall CreateMainMenu(void)
	{		
		HMENU hMenu=::CreateMenu();	
		if(hMenu)
		{
			MyMenuData::InstanceRef().SetMenu(0,hMenu);
			return (int)hMenu;
		}
		return 0;
	}
	virtual void __stdcall DestroyMainMenu(int hMenu)
	{
		::DestroyMenu((HMENU)hMenu);
		if(hMenu)
		{
			MyMenuData::InstanceRef().EraseMenu((HMENU)hMenu);
		}
	}
	virtual void __stdcall put_MainMenu(int hMenu)
	{
		HWND hwnd=ExterUtility::GetTopLevelWindow(owner->m_hWnd);
		::SetMenu(hwnd,(HMENU)hMenu);
		::DrawMenuBar(hwnd);
	}
	virtual int __stdcall get_MainMenu(void)
	{
		HWND hwnd=ExterUtility::GetTopLevelWindow(owner->m_hWnd);
		HMENU hMenu=::GetMenu(hwnd);
		return (int)hMenu;
	}
	virtual UINT __stdcall Id2Menu(UINT id)
	{
		return (UINT)MyMenuData::InstanceRef().GetMenu(id);
	}
public:
	BEGIN_INTF(MyMenu)
		METHOD(CreatePopupMenu) 
		METHOD(DestroyPopupMenu)
		METHOD(TrackPopupMenu)
		METHOD(TrackPopupMenu2)
		METHOD(InsertSubMenu)
		METHOD(InsertMenuItem)
		METHOD(EnableMenuItem)
		METHOD(CheckMenuItem)
		METHOD(CheckMenuRadioItem)
		METHOD(MenuItemIsEnabled)
		METHOD(MenuItemIsChecked)
		METHOD(InsertSeparator)
		METHOD(DeleteMenu)
		METHOD(GetMenuItemCount)
		METHOD(GetMenuItemId)
		METHOD(GetMenuString)
		METHOD(GetSubMenu)
		METHOD(CreateMainMenu)
		METHOD(DestroyMainMenu)
		PROPERTYPUT(MainMenu,false)
		PROPERTYGET(MainMenu,true)
		METHOD(Id2Menu)
	END_INTF()
public:
	MyMenu()
	{}
	~MyMenu()
	{}	
	inline void Init(Owner* ptr)
	{
		owner=ptr;
	}
private:
	Owner* owner;
};
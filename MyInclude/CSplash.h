//******************************************************
//文件名称：Splash.h
//作    者： 陈喜军---(cxj@richway.chxj2000@yeah.net)
//建立日期： 2002-5-18 8:29:31
//------------------------------------------------------
//修　　改:  兰翔
//日    期:  2003-6-12
//说    明:  将MFC代码改成ATL代码，简化功能。
//******************************************************

#ifndef _SPLASH_SCRN_
#define _SPLASH_SCRN_

// Splash.h : header file
//

/////////////////////////////////////////////////////////////////////////////
//   Splash Screen class

class CSplashWnd : public CWindowImpl<CSplashWnd>
{
	typedef CWindowImpl<CSplashWnd> ParentClass;
// Construction
protected:
	CSplashWnd(){}
public:
	static CSplashWnd& InstanceRef(void)
	{
		static CSplashWnd splashWnd;
		return splashWnd;
	}

	static void SetBitmap(const CString& img)
	{
		InstanceRef().imgName=img;
	}

	static void ShowSplashScreen(HWND pWnd)
	{		
		if (InstanceRef().IsWindow())
			return;		
		if (InstanceRef().Create(pWnd))
		{
			InstanceRef().ShowWindow(SW_SHOW);
			InstanceRef().UpdateWindow();
		}
	}

	static void PreTranslateMessage(MSG* pMsg)
	{
		if (!InstanceRef().IsWindow())
			return;
		// If we get a keyboard or mouse message, hide the splash screen.
		if (pMsg->message == WM_KEYDOWN ||
			pMsg->message == WM_SYSKEYDOWN ||
			pMsg->message == WM_LBUTTONDOWN ||
			pMsg->message == WM_RBUTTONDOWN ||
			pMsg->message == WM_MBUTTONDOWN ||
			pMsg->message == WM_NCLBUTTONDOWN ||
			pMsg->message == WM_NCRBUTTONDOWN ||
			pMsg->message == WM_NCMBUTTONDOWN)
		{
			InstanceRef().DestroyWindow();
		}
	}
public:
	BEGIN_MSG_MAP(CSplashWnd)
		MESSAGE_HANDLER(WM_CREATE,OnCreate)
		MESSAGE_HANDLER(WM_PAINT,OnPaint)
		MESSAGE_HANDLER(WM_TIMER,OnTimer)
	END_MSG_MAP()

	BOOL Create(HWND pWnd /*= NULL*/)
	{
		HANDLE handle = BitmapUtility::LoadBitmap(ScriptFile::ConvertPath(imgName));
   
	   if ( !handle )    // There were some problems during loading the image
		  return FALSE;
   
	   m_bitmap.DeleteObject();
	   m_bitmap.Attach( (HBITMAP)handle );

		BITMAP bm;
		m_bitmap.GetBitmap(&bm);
		m_ImgSize.cx = bm.bmWidth;
		m_ImgSize.cy = bm.bmHeight;

		return (BOOL)ParentClass::Create(pWnd,CRect(0,0,bm.bmWidth, bm.bmHeight),NULL,WS_POPUP | WS_VISIBLE,0,0);
	}

	LRESULT OnCreate(UINT uMsg, WPARAM wParam, 
                   LPARAM lParam, BOOL& bHandled)
	{
		CenterWindow();
		::SetTimer(m_hWnd,1, 350, NULL);
		return 0;
	}

	LRESULT OnPaint(UINT uMsg, WPARAM wParam, 
                   LPARAM lParam, BOOL& bHandled)
	{
		CPaintDC dc( CWnd::FromHandle(m_hWnd) );
		CRect rc;
		GetClientRect( rc );
		CPoint point(0,0);
		CDC memDC;
		CBitmap bmp; 

		memDC.CreateCompatibleDC( &dc );
		bmp.CreateCompatibleBitmap( &dc, m_ImgSize.cx, m_ImgSize.cy );
		memDC.SelectObject( &bmp );
		memDC.DrawState( point, m_ImgSize, &m_bitmap, DST_BITMAP | DSS_NORMAL );
		dc.BitBlt( 0, 0, rc.right, rc.bottom, &memDC,0, 0, SRCCOPY );
		Sleep(2000);
		return 0;
	}

	LRESULT OnTimer(UINT uMsg, WPARAM wParam, 
                   LPARAM lParam, BOOL& bHandled)
	{
		DestroyWindow();
		return 0;
	}
// Attributes:
private:
	CBitmap m_bitmap;
	CSize   m_ImgSize;
	CString imgName;
};


#endif

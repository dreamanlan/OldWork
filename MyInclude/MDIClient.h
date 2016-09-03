//******************************************************
//文件名称：MDIClient.h
//作    者： 陈喜军---(cxj@richway.chxj2000@yeah.net)
//建立日期： 2002-5-18 8:28:24
//------------------------------------------------------
//修　　改:  兰翔
//日    期:  2003-6-12
//说    明:  将MFC代码改成ATL代码，简化功能。
//******************************************************


#if !defined (__MDIClient_h)
#define __MDIClient_h
/////////////////////////////////////////////////////////////////////////////
// CMDIClient window

class CMDIClient : public CWindowImpl<CMDIClient>
{
	typedef CWindowImpl<CMDIClient> ParentClass;
public:
   enum DisplayModesEnum {
      dispTile,
      dispCenter,
      dispStretch,
      dispCustom
   };
   BEGIN_MSG_MAP(CMDIClient)
	MESSAGE_HANDLER(WM_PAINT, OnPaint)
	MESSAGE_HANDLER(WM_ERASEBKGND,OnEraseBkgnd)
   END_MSG_MAP()

// Construction
public:
	CMDIClient()
	{   
		Reset();
		m_clrHilite = ::GetSysColor(COLOR_BTNHIGHLIGHT);
		m_clrShadow = ::GetSysColor(COLOR_BTNSHADOW);
		m_clrDkShad = ::GetSysColor(COLOR_3DDKSHADOW);
		m_clrNormal = ::GetSysColor(COLOR_BTNFACE);
		m_clrTextGy = ::GetSysColor(COLOR_GRAYTEXT);
		m_clrTextNm = ::GetSysColor(COLOR_BTNTEXT);
	}

	~CMDIClient()
	{
	}
public:
   /////////////////////////////////////////////////////////////////////////////
	// CMDIClient inlines
	void SetOrigin( int x, int y, BOOL bRedraw )
	{
	   m_ptOrigin.x = x;
	   m_ptOrigin.y = y;
	   if ( bRedraw == TRUE && ::IsWindow( m_hWnd ) )
		  Invalidate();   
	}

	inline
	void SetOrigin( const CPoint& point, BOOL bRedraw )
	{
	   m_ptOrigin = point;
	   if ( bRedraw == TRUE && ::IsWindow( m_hWnd ) )
		  Invalidate();      
	}

	inline
	const CSize& GetImageSize() const
	{   
	   return m_sizeImage;
	}

	BOOL SetBitmap( LPCTSTR lpszFileName )
	{
	   HANDLE handle = BitmapUtility::LoadBitmap(ScriptFile::ConvertPath(lpszFileName));
   
	   if ( !handle )    // There were some problems during loading the image
		  return FALSE;
   
	   m_bitmap.DeleteObject();
	   m_bitmap.Attach( (HBITMAP)handle );

		if ( ::IsWindow( m_hWnd ) )
		  Invalidate();
	   m_strFileName = lpszFileName;

	   BITMAP bi;
	   m_bitmap.GetBitmap( &bi );
	   m_sizeImage.cx = bi.bmWidth;
	   m_sizeImage.cy = bi.bmHeight;
  

	   return TRUE;
	}

	BOOL SetBitmap( UINT nBitmapID, COLORMAP* pClrMap, int nCount )
	{
	   m_bitmap.DeleteObject();
	   if ( pClrMap == NULL )  // Load normal
	   {
		  if ( m_bitmap.LoadBitmap( nBitmapID ) == FALSE )
			 return FALSE;
	   }
	   else                    // Load mapped 
	   {      
		  if ( m_bitmap.LoadMappedBitmap( nBitmapID, 0, pClrMap, nCount ) == FALSE )
			 return FALSE;
	   }
   
	   BITMAP bi;
	   m_bitmap.GetBitmap( &bi );
	   m_sizeImage.cx = bi.bmWidth;
	   m_sizeImage.cy = bi.bmHeight;

	   if ( ::IsWindow( m_hWnd ) )
		  Invalidate();
	   return TRUE;
	}

	void SetBkColor( COLORREF clrValue )
	{
	   m_clrBackground = clrValue;
	   m_brush.DeleteObject();
	   m_brush.CreateSolidBrush( m_clrBackground );
	   if ( ::IsWindow( m_hWnd ) )
		  Invalidate();
	}

	void SetDisplayMode( DisplayModesEnum eDisplayMode )
	{
	   m_eDisplayMode = eDisplayMode;      
	   if ( ::IsWindow( m_hWnd ) )
		  Invalidate();
	}
	
	/////////////////////////////////////////////////////////////////////////////
	// CMDIClient message handlers
	LRESULT OnPaint(UINT uMsg, WPARAM wParam, 
                   LPARAM lParam, BOOL& bHandled) 
	{
	   CPaintDC dc( CWnd::FromHandle(m_hWnd) );
	   CRect rc;
	   GetClientRect( rc );
	   CPoint point;
    
	   if ( !(HBITMAP)m_bitmap )   // If no bitmap is selected
		  dc.FillRect( rc, &m_brush );
 
	   if ( (HBITMAP)m_bitmap )
	   {
		  CDC* pDC;
		  CDC memDC;
		  CBitmap bmp; 
            
		  memDC.CreateCompatibleDC( &dc );
		  BOOL bDrawOnMemDC = ( GetDisplayMode() != dispTile ) ? TRUE : FALSE;
		  if ( bDrawOnMemDC )
		  {
			 if ( GetDisplayMode() != dispStretch )
				bmp.CreateCompatibleBitmap( &dc, rc.right, rc.bottom );
			 else
				bmp.CreateCompatibleBitmap( &dc, m_sizeImage.cx, m_sizeImage.cy );
			 memDC.SelectObject( &bmp );
			 pDC = &memDC;
		  }
		  else
			 pDC = &dc;      
 		 /*
		 if(dx > 0 && dy > 0)
		 {
			 for( point.x = 0; point.x <= dx ;point.x += 35)
				 for( point.y = dy; point.y >=0  ; point.y -= 35)
					 pDC->DrawState( point, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
		 }

		 if(dx>0)
		 {
			 point.y = 0;
			 for( point.x = 0; point.x <= dx ;point.x += 5)
				 pDC->DrawState( point, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
		 }
		 if(dy > 0)
		 {
			 point.x = dx;
			 for( point.y = dy; point.y >=0  ; point.y -= 5)
				 pDC->DrawState( point, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
		 
		 }*/
		 //int  dx,dy;
		//画背景
	//	 CSize size(100,50); 
	//	 for ( point.x = 0; point.x < rc.Width();  point.x += 100 )
	//		 for ( point.y = 0; point.y< rc.Height();  point.y+= 50 )
	//	 		pDC->DrawState( point, size, &m_bitmap, DST_BITMAP | DSS_NORMAL );
      
		  switch ( GetDisplayMode() )
		  {
			 case dispCustom:
				{
				   pDC->FillRect( rc, &m_brush );               
				   pDC->DrawState( m_ptOrigin, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
				}
				break;

			 case dispCenter:
				{
				   //pDC->FillRect( rc, &m_brush );
				   CPoint point( ( rc.Width() - m_sizeImage.cx ) , 0 );
				   pDC->DrawState( point, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
				}
				break;

			 case dispTile:
				{
				   for ( point.y = 0; point.y < rc.Height(); point.y += m_sizeImage.cy )
					  for ( point.x = 0; point.x < rc.Width(); point.x += m_sizeImage.cx )
						 pDC->DrawState( point, m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
			  }
				break;

			 case dispStretch:
				{
				   memDC.DrawState( CPoint(0,0), m_sizeImage, &m_bitmap, DST_BITMAP | DSS_NORMAL );
				   dc.SetStretchBltMode( COLORONCOLOR );
				   dc.StretchBlt( 0, 0, rc.right, rc.bottom, &memDC, 
								  0, 0, m_sizeImage.cx, m_sizeImage.cy, SRCCOPY );
				}
				return 0;
		  }
                            
		  if ( bDrawOnMemDC == TRUE )
				dc.BitBlt( 0, 0, rc.right, rc.bottom, pDC, 0, 0, SRCCOPY );
	   }
	   return 0;
	}

	LRESULT OnEraseBkgnd(UINT uMsg, WPARAM wParam, 
                   LPARAM lParam, BOOL& bHandled) 
	{   
	   return TRUE;
	}
private:	
	void Reset()
	{
	   m_ptOrigin.x = m_ptOrigin.y = 0;
	   m_sizeImage.cx = m_sizeImage.cy = 0;
	   //m_eDisplayMode = dispTile;
	   //m_eDisplayMode = dispCenter;
	   m_eDisplayMode = dispStretch;
	   m_strFileName.Empty();      
	   SetBkColor( ::GetSysColor( COLOR_APPWORKSPACE ) );
	   m_bitmap.DeleteObject();

	   if ( ::IsWindow( m_hWnd ) )
		  Invalidate();
	}
	DisplayModesEnum GetDisplayMode() const
	{
	   return m_eDisplayMode;
	}
private:
  	CBitmap m_bitmap;             // The background bitmap
	CBrush m_brush;               // Brush used for background painting
	COLORREF m_clrBackground;     // The background color
	CString m_strFileName;        // The filename if bitmap was loaded from a file
	CPoint m_ptOrigin;            // Coordinates of top-left corner of image. Used when dispCustom is selected
	CSize m_sizeImage;            // Cache the image size;
	DisplayModesEnum m_eDisplayMode;   
	COLORREF	m_clrHilite;	// set to ::GetSysColor(COLOR_BTNHIGHLIGHT)
	COLORREF	m_clrShadow;	// set to ::GetSysColor(COLOR_BTNSHADOW)
	COLORREF	m_clrDkShad;	// set to ::GetSysColor(COLOR_3DDKSHADOW)
	COLORREF	m_clrNormal;	// set to ::GetSysColor(COLOR_BTNFACE)
	COLORREF	m_clrTextGy;	// set to ::GetSysColor(COLOR_GRAYTEXT)
	COLORREF	m_clrTextNm;	// set to ::GetSysColor(COLOR_BTNTEXT)
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // __MDIClient_h

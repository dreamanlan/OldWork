#pragma once

#include "ExterCommon.h"

typedef struct 
{
    HWND _hwnd;
    IUnknown  *_ptl;
    IUnknown *_phlf;
    IWebBrowser2    *_pautoWB2; // use this to reference _pauto's IWebBrowser2 functions
    IUnknown *_pautoEDS; // use this to reference _pauto's IExpDispSupport functions
    IUnknown   *_pautoSS;  // use this to reference _pauto's IShellService functions
    int _eSecureLockIcon;
    DWORD _fCreatingViewWindow :1;
    UINT _uActivateState;   // this is the state we should use when we go active..
                            // this is here so that derived classes can set us for UI or non-UI active

    // The following pidl is used in CBaseBrowser2::GetViewStateStream because
    // at that time, neither _pidlCur nor _pidlPending are initialized.
    LPCITEMIDLIST  _pidlNewShellView;

    IOleCommandTarget* _pctView;

    LPITEMIDLIST _pidlCur;
    IUnknown *_psv;
    IUnknown *_psf; // IShellFolder for _psv (used in CVOCBrowser)
    HWND        _hwndView;
    LPWSTR      _pszTitleCur;

    LPITEMIDLIST _pidlPending;
    IUnknown *_psvPending;
    IUnknown *_psfPending;
    HWND        _hwndViewPending;
    LPWSTR      _pszTitlePending;

    BOOL _fIsViewMSHTML;

} BASEBROWSERDATA, *LPBASEBROWSERDATA;
typedef const BASEBROWSERDATA *LPCBASEBROWSERDATA;

typedef enum
{
    BNS_NORMAL = 0,     // Normal state that we are in
    BNS_BEGIN_NAVIGATE, // A Begin navigate event has happened.
    BNS_NAVIGATE       // A Navigate event has happened...
} BNSTATE;             // The navigate state...

DEFINE_GUID(IID_IBrowserService2, 0x68bd21cc, 0x438b, 0x11d2, 0xa5, 0x60, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);

interface IBrowserService2 : public IUnknown
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS)  PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;

    STDMETHOD(GetParentSite)(THIS_ struct IOleInPlaceSite** ppipsite) PURE;
    STDMETHOD(SetTitle)(THIS_ IShellView* psv, LPCWSTR pszName) PURE;
    STDMETHOD(GetTitle)(THIS_ IShellView* psv, LPWSTR pszName, DWORD cchName) PURE;
    STDMETHOD(GetOleObject)(THIS_ struct IOleObject** ppobjv) PURE;

    STDMETHOD(dummy5)(void) PURE;

    STDMETHOD(dummy6)(void) PURE;
    STDMETHOD(dummy7)(void) PURE;
    STDMETHOD(dummy8)(void) PURE;
    STDMETHOD(dummy9)(void) PURE;
    STDMETHOD(dummy10)(void) PURE;
    STDMETHOD(NavigateToPidl)(THIS_ LPCITEMIDLIST pidl, DWORD grfHLNF) PURE;

    STDMETHOD(dummy12)(void) PURE;
    STDMETHOD(dummy13)(void) PURE;

    STDMETHOD(dummy14)(void) PURE;
    STDMETHOD(dummy15)(void) PURE;

    STDMETHOD(dummy16)(void) PURE;

    STDMETHOD(dummy17)(void) PURE;
    STDMETHOD(dummy18)(void) PURE;

    STDMETHOD (CanNavigateNow) (THIS) PURE;

    STDMETHOD (GetPidl) (THIS_ LPITEMIDLIST *ppidl) PURE;
    STDMETHOD (SetReferrer) (THIS_ LPITEMIDLIST pidl) PURE;
    STDMETHOD_(DWORD, GetBrowserIndex)(THIS) PURE;
    STDMETHOD (GetBrowserByIndex)(THIS_ DWORD dwID, IUnknown **ppunk) PURE;
    STDMETHOD(dummy24)(void) PURE;
    STDMETHOD(dummy25)(void) PURE;

    STDMETHOD(dummy26)(void) PURE;

    STDMETHOD (GetSetCodePage)(THIS_ VARIANT* pvarIn, VARIANT* pvarOut) PURE;
    STDMETHOD(dummy27)(void) PURE;

    STDMETHOD (GetPalette)( THIS_ HPALETTE * hpal ) PURE;

    STDMETHOD(dummy29)(void) PURE;

    STDMETHOD_(LRESULT, WndProcBS)(THIS_ HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) PURE;

    STDMETHOD (SetAsDefFolderSettings)(THIS) PURE;
    STDMETHOD (GetViewRect)(THIS_ RECT * prc) PURE;

    STDMETHOD(dummy33)(void) PURE;
    STDMETHOD(dummy34)(void) PURE;
    STDMETHOD(dummy35)(void) PURE;
    STDMETHOD(dummy36)(void) PURE;
    STDMETHOD(dummy37)(void) PURE;
    STDMETHOD(dummy38)(void) PURE;
    STDMETHOD(dummy39)(void) PURE;

    STDMETHOD(dummy40)(void) PURE;
    STDMETHOD(dummy41)(void) PURE;
    STDMETHOD(dummy42)(void) PURE;
    STDMETHOD(dummy43)(void) PURE;

    STDMETHOD (GetViewWindow)(THIS_ HWND * phwndView) PURE;
    STDMETHOD (GetBaseBrowserData)(THIS_ LPCBASEBROWSERDATA * pbbd) PURE;
    STDMETHOD_(LPBASEBROWSERDATA, PutBaseBrowserData)(THIS) PURE;
    STDMETHOD(dummy47)(void) PURE;
    STDMETHOD (SetTopBrowser)(THIS) PURE;
    STDMETHOD(dummy49)(void) PURE;
    STDMETHOD(dummy50)(void) PURE;
    STDMETHOD(dummy51)(void) PURE;
    STDMETHOD(dummy52)(void) PURE;
    STDMETHOD(dummy53)(void) PURE;
    STDMETHOD(dummy54)(void) PURE;
    STDMETHOD(dummy55)(void) PURE;
    STDMETHOD(dummy56)(void) PURE;
    STDMETHOD(dummy57)(void) PURE;
    STDMETHOD(dummy58)(void) PURE;
    STDMETHOD(dummy59)(void) PURE;
    STDMETHOD(dummy60)(void) PURE;
    STDMETHOD (_NavigateToPidl)(THIS_ LPCITEMIDLIST pidl, DWORD grfHLNF, DWORD dwFlags)PURE;
    STDMETHOD(dummy62)(void) PURE;
    STDMETHOD(dummy63)(void) PURE;
    STDMETHOD(dummy64)(void) PURE;
    STDMETHOD(dummy65)(void) PURE;
    STDMETHOD(dummy66)(void) PURE;
    STDMETHOD(dummy67)(void) PURE;
    STDMETHOD(dummy68)(void) PURE;
    STDMETHOD(dummy69)(void) PURE;
    STDMETHOD(dummy70)(void) PURE;
    STDMETHOD(dummy71)(void) PURE;
    STDMETHOD(dummy72)(void) PURE;
    STDMETHOD(dummy73)(void) PURE;
    STDMETHOD(dummy74)(void) PURE;
    STDMETHOD(dummy75)(void) PURE;
    STDMETHOD(dummy76)(void) PURE;
    STDMETHOD(dummy77)(void) PURE;
    STDMETHOD(dummy78)(void) PURE;
    STDMETHOD(dummy79)(void) PURE;
    STDMETHOD(dummy80)(void) PURE;
    STDMETHOD(dummy81)(void) PURE;
    STDMETHOD(dummy82)(void) PURE;
    STDMETHOD(dummy83)(void) PURE;
    STDMETHOD(dummy84)(void) PURE;
    STDMETHOD(dummy85)(void) PURE;
    STDMETHOD(dummy86)(void) PURE;
    STDMETHOD(dummy87)(void) PURE;
    STDMETHOD(dummy88)(void) PURE;
    STDMETHOD(dummy89)(void) PURE;
    STDMETHOD(dummy90)(void) PURE;
    STDMETHOD(dummy91)(void) PURE;
};
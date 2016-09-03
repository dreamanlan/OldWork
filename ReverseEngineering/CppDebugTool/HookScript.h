// HookScript.h: interface for the HookScript class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HOOKSCRIPT_H__5325AC54_B24F_4FA6_94DE_4F8E2DEE0DC1__INCLUDED_)
#define AFX_HOOKSCRIPT_H__5325AC54_B24F_4FA6_94DE_4F8E2DEE0DC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

extern void _Init(void);
extern void _Finalize(void);
extern void _ThreadInit(void);
extern void _ThreadFinalize(void);
extern void Log(const char* mess);
extern CString GetHookPath(void);
extern void ShowUI(void);
extern void CloseUI(void);

#endif // !defined(AFX_HOOKSCRIPT_H__5325AC54_B24F_4FA6_94DE_4F8E2DEE0DC1__INCLUDED_)

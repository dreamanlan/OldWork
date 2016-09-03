#pragma once

class IControl
{
public:
	virtual HWND __stdcall GetHwnd(void)=0;
	virtual UINT __stdcall GetID(void)=0;
	//获取控件占位HTML元素ID，即控件使用该元素的空间
	virtual BSTR __stdcall GetPlaceHolderID(void)=0;
	virtual LRESULT __stdcall OnNotify(int idCtrl, LPNMHDR pnmh, BOOL& bHandled)=0;
};
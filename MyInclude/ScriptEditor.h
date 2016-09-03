#pragma once

#define PLAT_WIN 1

#include "IControl.h"
#include "Scintilla.h"
#include "SciLexer.h"

#ifdef _DLL

#ifdef _DEBUG
	#pragma comment(lib,"SciLexer_mdd.Lib")
#else
	#pragma comment(lib,"SciLexer_md.Lib")
#endif

#else

#ifdef _DEBUG
	#pragma comment(lib,"SciLexer_mtd.Lib")
#else
	#pragma comment(lib,"SciLexer_mt.Lib")
#endif

#endif //_DLL

#pragma comment(lib,"IMM32.Lib")

#define EDITOR_ID 9876

const COLORREF black = RGB(0,0,0);
const COLORREF white = RGB(0xff,0xff,0xff);

const char htmlKeyWords[] = 
	"a abbr acronym address applet area b base basefont "
	"bdo big blockquote body br button caption center "
	"cite code col colgroup dd del dfn dir div dl dt em "
	"fieldset font form frame frameset h1 h2 h3 h4 h5 h6 "
	"head hr html i iframe img input ins isindex kbd label "
	"legend li link map menu meta noframes noscript "
	"object ol optgroup option p param pre q s samp "
	"script select small span strike strong style sub sup "
	"table tbody td textarea tfoot th thead title tr tt u ul "
	"var xml xmlns "
	"article aside calendar canvas card command commandset datagrid datatree "
	"footer gauge header m menubar menulabel nav progress section switch tabbox "
	"abbr accept-charset accept accesskey action align alink "
	"alt archive axis background bgcolor border "
	"cellpadding cellspacing char charoff charset checked cite "
	"class classid clear codebase codetype color cols colspan "
	"compact content coords "
	"data datafld dataformatas datapagesize datasrc datetime "
	"declare defer dir disabled enctype "
	"face for frame frameborder "
	"headers height href hreflang hspace http-equiv "
	"id ismap label lang language link longdesc "
	"marginwidth marginheight maxlength media method multiple "
	"name nohref noresize noshade nowrap "
	"object onblur onchange onclick ondblclick onfocus "
	"onkeydown onkeypress onkeyup onload onmousedown "
	"onmousemove onmouseover onmouseout onmouseup "
	"onreset onselect onsubmit onunload "
	"profile prompt readonly rel rev rows rowspan rules "
	"scheme scope shape size span src standby start style "
	"summary tabindex target text title type usemap "
	"valign value valuetype version vlink vspace width "
	"text password checkbox radio submit reset "
	"file hidden image "
	"active command contenteditable ping "
	"public !doctype xml";

const char jsKeyWords[] = 
	//java
	"abstract assert boolean break byte case catch char class "
	"const continue default do double else extends final finally float for future "
	"generic goto if implements import inner instanceof int interface long "
	"native new null outer package private protected public rest "
	"return short static super switch synchronized this throw throws "
	"transient try var void volatile while "
	//cs
	"abstract as base bool break byte case catch char checked class "
	"const continue decimal default delegate do double else enum "
	"event explicit extern false finally fixed float for foreach goto if "
	"implicit in int interface internal is lock long namespace new null "
	"object operator out override params private protected public "
	"readonly ref return sbyte sealed short sizeof stackalloc static "
	"string struct switch this throw true try typeof uint ulong "
	"unchecked unsafe ushort using virtual void while "
	//javascript
	"abstract boolean break byte case catch char class "
	"const continue debugger default delete do double else enum export extends "
	"final finally float for function goto if implements import in instanceof "
	"int interface long native new package private protected public "
	"return short static super switch synchronized this throw throws "
	"transient try typeof var void volatile while with";

const char vbsKeyWords[] = 
	"and as byref byval case call const "
	"continue dim do each else elseif end error exit false for function global "
	"goto if in loop me new next not nothing on optional or private public "
	"redim rem resume select set sub then to true type while with "
	"boolean byte currency date double integer long object single string type "
	"variant";

const char pythonKeyWords[] =
	"and assert break class continue def del elif "
	"else except exec finally for from global if import in is lambda None "
	"not or pass print raise return try while yield";

const char phpKeyWords[] =
	"and array as bool boolean break case cfunction class const continue declare "
	"default die directory do double echo else elseif empty enddeclare endfor "
	"endforeach endif endswitch endwhile eval exit extends false float for "
	"foreach function global if include include_once int integer isset list new "
	"null object old_function or parent print real require require_once resource "
	"return static stdclass string switch true unset use var while xor "
	"abstract catch clone exception final implements interface php_user_filter "
	"private protected public this throw try "
	"__class__ __file__ __function__ __line__ __method__ __sleep __wakeup "
	"import phpfunctions";

const char dtdKeyWords[] =
	"ELEMENT DOCTYPE ATTLIST ENTITY NOTATION";

class SciWindow : public IControl
{	
	struct CharacterRange 
	{
		long cpMin;
		long cpMax;
	};
public:	
	SciWindow():wEditor(NULL),ctrlID(0),isDirty(false),lineNumPixelWidth(10)
	{
		if(RefCount()++==0)
		{
			InitScintilla();
		}
	}
	virtual ~SciWindow()
	{
		::DestroyWindow(wEditor);
		wEditor=NULL;

		if(--RefCount()==0)
		{
			ReleaseScintilla();
		}
	}
	void Create(HWND hwnd,UINT id,const char* _placeHolderID)
	{
		if(!wEditor)
		{
			ctrlID=id;
			placeHolderID=CComBSTR(_placeHolderID);
			wEditor = ::CreateWindow(
						"Scintilla",
						"Source",
						WS_CHILD | WS_VSCROLL | WS_HSCROLL | WS_CLIPCHILDREN,
						0, 0, 0, 0,
						hwnd,
						(HMENU)ctrlID,
						_Module.GetModuleInstance(),
						0);
			InitializeEditor();
			::ShowWindow(wEditor, SW_SHOW);
			::SetFocus(wEditor);
		}
	}
	LRESULT SendEditor(UINT Msg, WPARAM wParam=0, LPARAM lParam=0) 
	{
		return ::SendMessage(wEditor, Msg, wParam, lParam);
	}
	CString GetText(void)
	{
		LONG len=SendEditor(SCI_GETLENGTH);
		char* buf=new char[len+1];
		SendEditor(SCI_GETTEXT,len+1,(DWORD)buf);
		buf[len]=0;
		CString text(buf);
		delete[] buf;
		return text;
	}
	void SetText(const char* txt)
	{
		SendEditor(SCI_SETTEXT,0,(DWORD)(LPCSTR)txt);	
		SendEditor(SCI_SETSAVEPOINT);
	}
	bool IsDirty(void)
	{
		return isDirty;
	}
private:
	void SetAStyle(int style, COLORREF fore, COLORREF back=white, int size=-1, const char *face=0)
	{
		SendEditor(SCI_STYLESETFORE, style, fore);
		SendEditor(SCI_STYLESETBACK, style, back);
		if (size >= 1)
			SendEditor(SCI_STYLESETSIZE, style, size);
		if (face) 
			SendEditor(SCI_STYLESETFONT, style, reinterpret_cast<LPARAM>(face));
	}
	void InitializeEditor() 
	{
		SendEditor(SCI_SETCODEPAGE,936,0);
		//设置语言词法
		SendEditor(SCI_SETLEXER, SCLEX_HTML);
		SendEditor(SCI_SETSTYLEBITS, 7);
		//设置fold
		SendEditor(SCI_SETPROPERTY, (WPARAM)"fold", (LPARAM)"1");
		SendEditor(SCI_SETPROPERTY, (WPARAM)"fold.compact", (LPARAM)"0");
		SendEditor(SCI_SETPROPERTY, (WPARAM)"fold.html", (LPARAM)"1");
		SendEditor(SCI_SETPROPERTY, (WPARAM)"fold.html.preprocessor", (LPARAM)"1");

		SendEditor(SCI_SETMARGINWIDTHN, 0, lineNumPixelWidth);
		SendEditor(SCI_SETMARGINWIDTHN, 1, 0);
		SendEditor(SCI_SETMARGINWIDTHN, 2, 0);

		SendEditor(SCI_SETMARGINTYPEN,  1, SC_MARGIN_SYMBOL);
		SendEditor(SCI_SETMARGINMASKN, 1, SC_MASK_FOLDERS);
		SendEditor(SCI_SETMARGINWIDTHN, 1, 14);
		SendEditor(SCI_SETMARGINSENSITIVEN, 1, 1);
				
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDER, SC_MARK_PLUS);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDEROPEN, SC_MARK_MINUS);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDEREND, SC_MARK_EMPTY);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDERMIDTAIL, SC_MARK_EMPTY);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDEROPENMID, SC_MARK_EMPTY);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDERSUB, SC_MARK_EMPTY);
		SendEditor(SCI_MARKERDEFINE, SC_MARKNUM_FOLDERTAIL, SC_MARK_EMPTY);

		SendEditor(SCI_SETFOLDFLAGS, 16, 0); 
		SendEditor(SCI_SETMODEVENTMASK, SC_MOD_CHANGEFOLD | SC_MOD_INSERTTEXT | SC_MOD_DELETETEXT);
		//设置词法用到的关键字
		SendEditor(SCI_SETKEYWORDS, 0, 
			reinterpret_cast<LPARAM>(htmlKeyWords));
		SendEditor(SCI_SETKEYWORDS, 1, 
			reinterpret_cast<LPARAM>(jsKeyWords));
		SendEditor(SCI_SETKEYWORDS, 2, 
			reinterpret_cast<LPARAM>(vbsKeyWords));
		SendEditor(SCI_SETKEYWORDS, 3, 
			reinterpret_cast<LPARAM>(pythonKeyWords));
		SendEditor(SCI_SETKEYWORDS, 4, 
			reinterpret_cast<LPARAM>(phpKeyWords));
		SendEditor(SCI_SETKEYWORDS, 5, 
			reinterpret_cast<LPARAM>(dtdKeyWords));
		//设置词法样式
		// Set up the global default style. These attributes are used wherever no explicit choices are made.
		SetAStyle(STYLE_DEFAULT, black, white, 11, "Verdana");
		SendEditor(SCI_STYLECLEARALL);	// Copies global style to all others

		const COLORREF red = RGB(0xFF, 0, 0);
		const COLORREF offWhite = RGB(0xFF, 0xFB, 0xF0);
		const COLORREF darkGreen = RGB(0, 0x80, 0);
		const COLORREF darkBlue = RGB(0, 0, 0x80);

		// Hypertext default is used for all the document's text
		SetAStyle(SCE_H_DEFAULT, black, white, 11, "Times New Roman");
		
		// Unknown tags and attributes are highlighed in red. 
		// If a tag is actually OK, it should be added in lower case to the htmlKeyWords string.
		SetAStyle(SCE_H_TAG, darkBlue);
		SetAStyle(SCE_H_TAGUNKNOWN, red);
		SetAStyle(SCE_H_ATTRIBUTE, darkBlue);
		SetAStyle(SCE_H_ATTRIBUTEUNKNOWN, red);
		SetAStyle(SCE_H_NUMBER, RGB(0x80,0,0x80));
		SetAStyle(SCE_H_DOUBLESTRING, RGB(0,0x80,0));
		SetAStyle(SCE_H_SINGLESTRING, RGB(0,0x80,0));
		SetAStyle(SCE_H_OTHER, RGB(0x80,0,0x80));
		SetAStyle(SCE_H_COMMENT, RGB(0x80,0x80,0));
		SetAStyle(SCE_H_ENTITY, RGB(0x80,0,0x80));

		SetAStyle(SCE_H_TAGEND, darkBlue);
		SetAStyle(SCE_H_XMLSTART, darkBlue);	// <?
		SetAStyle(SCE_H_XMLEND, darkBlue);		// ?>
		SetAStyle(SCE_H_SCRIPT, darkBlue);		// <script
		SetAStyle(SCE_H_ASP, RGB(0x4F, 0x4F, 0), RGB(0xFF, 0xFF, 0));	// <% ... %>
		SetAStyle(SCE_H_ASPAT, RGB(0x4F, 0x4F, 0), RGB(0xFF, 0xFF, 0));	// <%@ ... %>

		//VBSCRIPT样式

		SetAStyle(SCE_HB_DEFAULT, black);
		SetAStyle(SCE_HB_COMMENTLINE, darkGreen);
		SetAStyle(SCE_HB_NUMBER, RGB(0,0x80,0x80));
		SetAStyle(SCE_HB_WORD, darkBlue);
		SendEditor(SCI_STYLESETBOLD, SCE_HB_WORD, 1);
		SetAStyle(SCE_HB_STRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HB_IDENTIFIER, black);
		
		// This light blue is found in the windows system palette so is safe to use even in 256 colour modes.
		const COLORREF lightBlue = RGB(0xA6, 0xCA, 0xF0);
		// Show the whole section of VBScript with light blue background
		for (int bstyle=SCE_HB_DEFAULT; bstyle<=SCE_HB_STRINGEOL; bstyle++) 
		{
			SendEditor(SCI_STYLESETFONT, bstyle, reinterpret_cast<LPARAM>("Georgia"));
			SendEditor(SCI_STYLESETBACK, bstyle, lightBlue);
			// This call extends the backround colour of the last style on the line to the edge of the window
			SendEditor(SCI_STYLESETEOLFILLED, bstyle, 1);
		}
		SendEditor(SCI_STYLESETBACK, SCE_HB_STRINGEOL, RGB(0x7F,0x7F,0xFF));
		SendEditor(SCI_STYLESETFONT, SCE_HB_COMMENTLINE, reinterpret_cast<LPARAM>("Comic Sans MS"));

		//ASP VBSCRIPT样式

		SetAStyle(SCE_HBA_DEFAULT, black);
		SetAStyle(SCE_HBA_COMMENTLINE, darkGreen);
		SetAStyle(SCE_HBA_NUMBER, RGB(0,0x80,0x80));
		SetAStyle(SCE_HBA_WORD, darkBlue);
		SendEditor(SCI_STYLESETBOLD, SCE_HBA_WORD, 1);
		SetAStyle(SCE_HBA_STRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HBA_IDENTIFIER, black);
		
		// Show the whole section of ASP VBScript with bright yellow background
		for (int bastyle=SCE_HBA_DEFAULT; bastyle<=SCE_HBA_STRINGEOL; bastyle++) 
		{
			SendEditor(SCI_STYLESETFONT, bastyle, reinterpret_cast<LPARAM>("Georgia"));
			SendEditor(SCI_STYLESETBACK, bastyle, RGB(0xFF, 0xFF, 0));
			// This call extends the backround colour of the last style on the line to the edge of the window
			SendEditor(SCI_STYLESETEOLFILLED, bastyle, 1);
		}
		SendEditor(SCI_STYLESETBACK, SCE_HBA_STRINGEOL, RGB(0xCF,0xCF,0x7F));
		SendEditor(SCI_STYLESETFONT, SCE_HBA_COMMENTLINE, reinterpret_cast<LPARAM>("Comic Sans MS"));
		
		//JavaScript样式
		
		SetAStyle(SCE_HJ_START, RGB(0x80,0x80,0));
		SetAStyle(SCE_HJ_DEFAULT, black);
		SetAStyle(SCE_HJ_COMMENT, darkGreen);
		SetAStyle(SCE_HJ_COMMENTLINE, darkGreen);
		SetAStyle(SCE_HJ_COMMENTDOC, darkGreen);
		SetAStyle(SCE_HJ_NUMBER, RGB(0,0x80,0x80));
		SetAStyle(SCE_HJ_WORD, black);
		SetAStyle(SCE_HJ_KEYWORD, darkBlue);
		SetAStyle(SCE_HJ_DOUBLESTRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HJ_SINGLESTRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HJ_SYMBOLS, black);

		SetAStyle(SCE_HJA_START, RGB(0x80,0x80,0));
		SetAStyle(SCE_HJA_DEFAULT, black);
		SetAStyle(SCE_HJA_COMMENT, darkGreen);
		SetAStyle(SCE_HJA_COMMENTLINE, darkGreen);
		SetAStyle(SCE_HJA_COMMENTDOC, darkGreen);
		SetAStyle(SCE_HJA_NUMBER, RGB(0,0x80,0x80));
		SetAStyle(SCE_HJA_WORD, black);
		SetAStyle(SCE_HJA_KEYWORD, darkBlue);
		SetAStyle(SCE_HJA_DOUBLESTRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HJA_SINGLESTRING, RGB(0x80,0,0x80));
		SetAStyle(SCE_HJA_SYMBOLS, black);

		// Show the whole section of Javascript with off white background
		for (int jstyle=SCE_HJ_DEFAULT; jstyle<=SCE_HJ_SYMBOLS; jstyle++) {
			SendEditor(SCI_STYLESETFONT, jstyle, reinterpret_cast<LPARAM>("Lucida Sans Unicode"));
			SendEditor(SCI_STYLESETBACK, jstyle, offWhite);
			SendEditor(SCI_STYLESETEOLFILLED, jstyle, 1);
		}
		SendEditor(SCI_STYLESETBACK, SCE_HJ_STRINGEOL, RGB(0xDF, 0xDF, 0x7F));
		SendEditor(SCI_STYLESETEOLFILLED, SCE_HJ_STRINGEOL, 1);

		// Show the whole section of Javascript with brown background
		for (int jastyle=SCE_HJA_DEFAULT; jastyle<=SCE_HJA_SYMBOLS; jastyle++) {
			SendEditor(SCI_STYLESETFONT, jastyle, reinterpret_cast<LPARAM>("Lucida Sans Unicode"));
			SendEditor(SCI_STYLESETBACK, jastyle, RGB(0xDF, 0xDF, 0x7F));
			SendEditor(SCI_STYLESETEOLFILLED, jastyle, 1);
		}
		SendEditor(SCI_STYLESETBACK, SCE_HJA_STRINGEOL, RGB(0x0,0xAF,0x5F));
		SendEditor(SCI_STYLESETEOLFILLED, SCE_HJA_STRINGEOL, 1);
	}
	void SetLineNumberWidth(void) 
	{
		int lineNumWidth = 1;
		int lineCount = SendEditor(SCI_GETLINECOUNT);

		lineNumWidth = 1;
		while (lineCount >= 10) 
		{
			lineCount /= 10;
			++lineNumWidth;
		}
		// The 4 here allows for spacing: 1 pixel on left and 3 on right.
		int pixelWidth = 4 + lineNumWidth * SendEditor(SCI_TEXTWIDTH, STYLE_LINENUMBER, (LPARAM)"9");
		if(pixelWidth!=lineNumPixelWidth)
		{
			lineNumPixelWidth=pixelWidth;
			SendEditor(SCI_SETMARGINWIDTHN, 0, lineNumPixelWidth);
		}
	}
	int GetCurrentPosition(void)
	{
		return SendEditor(SCI_GETCURRENTPOS);
	}
	int GetCurrentLineNumber(void) 
	{
		return GetLineFromPosition(GetCurrentPosition());
	}
	int GetCharAt(int index)
	{
		return SendEditor(SCI_GETCHARAT,index);
	}
	CharacterRange GetSelection() 
	{
		CharacterRange crange;
		crange.cpMin = SendEditor(SCI_GETSELECTIONSTART);
		crange.cpMax = SendEditor(SCI_GETSELECTIONEND);
		return crange;
	}
	void SetSelection(int anchor, int currentPos) 
	{
		SendEditor(SCI_SETSEL, anchor, currentPos);
	}	
	void SetLineIndentation(int line, int indent) 
	{
		if (indent < 0)
			return;
		CharacterRange crange = GetSelection();
		int posBefore = GetLineIndentPosition(line);
		SendEditor(SCI_SETLINEINDENTATION, line, indent);
		int posAfter = GetLineIndentPosition(line);
		int posDifference = posAfter - posBefore;
		if (posAfter > posBefore) 
		{
			// Move selection on
			if (crange.cpMin >= posBefore) 
			{
				crange.cpMin += posDifference;
			}
			if (crange.cpMax >= posBefore) 
			{
				crange.cpMax += posDifference;
			}
		} 
		else if (posAfter < posBefore) 
		{
			// Move selection back
			if (crange.cpMin >= posAfter) 
			{
				if (crange.cpMin >= posBefore)
					crange.cpMin += posDifference;
				else
					crange.cpMin = posAfter;
			}
			if (crange.cpMax >= posAfter) 
			{
				if (crange.cpMax >= posBefore)
					crange.cpMax += posDifference;
				else
					crange.cpMax = posAfter;
			}
		}
		SetSelection(crange.cpMin, crange.cpMax);
	}
	int GetLineIndentation(int line) 
	{
		return SendEditor(SCI_GETLINEINDENTATION, line);
	}
	int GetLineIndentPosition(int line) 
	{
		return SendEditor(SCI_GETLINEINDENTPOSITION, line);
	}
	int GetLineStartPosition(int line)
	{
		return SendEditor(SCI_POSITIONFROMLINE, line);
	}
	int GetLineFromPosition(int pos)
	{
		return SendEditor(SCI_LINEFROMPOSITION,pos);
	}
	int GetIndent(void)
	{
		int r=SendEditor(SCI_GETINDENT);
		if(r==0)
			r=SendEditor(SCI_GETTABWIDTH);
		return r;
	}
	void ToggleFold(int line)
	{
		SendEditor(SCI_TOGGLEFOLD, line);
	}
private:
	static inline void InitScintilla(void)
	{
		Scintilla_RegisterClasses(_Module.GetModuleInstance());
		Scintilla_LinkLexers();
	}
	static inline void ReleaseScintilla(void)
	{
		Scintilla_ReleaseResources();
	}
	static inline int& RefCount(void)
	{
		static int refCount=0;
		return refCount;
	}
private:
	HWND wEditor;
	UINT ctrlID;
	CComBSTR placeHolderID;
	bool isDirty;
	int lineNumPixelWidth;
public:	
	virtual HWND __stdcall GetHwnd(void)
	{
		return wEditor;
	}
	virtual UINT __stdcall GetID(void)
	{
		return ctrlID;
	}
	virtual BSTR __stdcall GetPlaceHolderID(void)
	{
		return placeHolderID;
	}
	virtual LRESULT __stdcall OnNotify(int idCtrl, LPNMHDR pnmh, BOOL& bHandled)
	{
		SCNotification* notify = (SCNotification*)pnmh;
		if(notify->nmhdr.code==SCN_MARGINCLICK)
		{
			const int modifiers = notify->modifiers;
			const int position = notify->position;
			const int margin = notify->margin;
			const int line = GetLineFromPosition(position);

			switch (margin) {
			case 1:
				{
					ToggleFold(line);
				}
				break;
			}
		}
		else if(notify->nmhdr.code==SCN_SAVEPOINTREACHED)
		{
			isDirty=false;
		}
		else if(notify->nmhdr.code==SCN_SAVEPOINTLEFT)
		{
			isDirty=true;
		}
		else if(notify->nmhdr.code==SCN_MODIFIED)
		{
			if(notify->linesAdded)
				SetLineNumberWidth();
		}
		else if(notify->nmhdr.code==SCN_CHARADDED)
		{
			char ch=(char)notify->ch;
			int pos = GetCurrentPosition();
			int curLine = GetCurrentLineNumber();
			int lineStart = GetLineStartPosition(curLine);
			int indentSize = GetIndent();
			int indentBlock = GetLineIndentation(curLine - 1);
			int indentPos = GetLineIndentPosition(curLine);

			if (ch == '}') 
			{	// Dedent maybe
				if(pos>0 && lineStart<indentPos && indentPos==pos-1)
				{
					SetLineIndentation(curLine, GetLineIndentation(curLine) - indentSize);
				}
			} 
			else if (ch == '\n') 
			{				
				char _ch=0;
				if(pos>2)
				{
					_ch=(char)GetCharAt(pos-3);
				}

				if(_ch == '{')
				{
					SetLineIndentation(curLine, indentBlock+indentSize);
				}
				else
				{
					SetLineIndentation(curLine, indentBlock);
				}
			}
		}
		return 0;
	}
};

template<typename T>
	class ScriptEditor : public IDispatch
{
public:
	virtual DWORD __stdcall get_ScriptEditorPtr(void)
	{
		return reinterpret_cast<DWORD>(this);
	}
	virtual int __stdcall SendCommand(UINT msg,VARIANT wparam,VARIANT lparam)
	{
		CString strWParam,strLParam;
		DWORD wParam=0;
		DWORD lParam=0;
		if(wparam.vt==VT_BSTR)
		{
			strWParam=CString(wparam.bstrVal);
			wParam=(DWORD)(LPCSTR)strWParam;
		}
		else
		{
			wParam=wparam.lVal;
		}
		if(lparam.vt==VT_BSTR)
		{
			strLParam=CString(lparam.bstrVal);
			lParam=(DWORD)(LPCSTR)strLParam;
		}
		else
		{
			lParam=lparam.lVal;
		}
		return sciWin.SendEditor(msg,wParam,lParam);
	}
	virtual void __stdcall put_Text(BSTR txt)
	{
		sciWin.SetText(CString(txt));
	}
	virtual BSTR __stdcall get_Text(void)
	{
		CString txt=sciWin.GetText();
		return txt.AllocSysString();
	}
	virtual BOOL __stdcall get_IsDirty(void)
	{
		if(sciWin.IsDirty())
			return TRUE;
		return FALSE;
	}
	virtual BOOL __stdcall get_Visible(void)
	{
		HWND hwnd=sciWin.GetHwnd();
		return ::IsWindowVisible(hwnd);
	}
	virtual void __stdcall Show(void)
	{		
		HWND hwnd=sciWin.GetHwnd();		
		if(!::IsWindow(hwnd))
			return;
		::ShowWindow(hwnd,SW_SHOW);
		owner->InsertControl(&sciWin);
	}
	virtual void __stdcall Hide(void)
	{
		HWND hwnd=sciWin.GetHwnd();
		if(!::IsWindow(hwnd))
			return;
		::ShowWindow(hwnd,SW_HIDE);
		owner->EraseControl(&sciWin);
	}
	virtual DWORD __stdcall get_Hwnd(void)
	{
		return (DWORD)sciWin.GetHwnd();
	}
public:
	BEGIN_INTF(ScriptEditor)
		PROPERTYGET(ScriptEditorPtr,true)
		METHOD(SendCommand)
		PROPERTYPUT(Text,false)
		PROPERTYGET(Text,true)
		PROPERTYGET(IsDirty,true)
		PROPERTYGET(Visible,true)
		METHOD(Show)
		METHOD(Hide)
		PROPERTYGET(Hwnd,true)
	END_INTF()
public:
	ScriptEditor(void)
	{		
	}
	~ScriptEditor(void)
	{
		owner->EraseControl(&sciWin);
	}
	void Init(T* ptr,UINT id,const char* placeHolderID)
	{
		owner=ptr;
		if(!::IsWindow(owner->m_hWnd))
			return;
		sciWin.Create(owner->m_hWnd,id,placeHolderID);
		owner->InsertControl(&sciWin);
	}
private:
	T* owner;
	SciWindow sciWin;
};

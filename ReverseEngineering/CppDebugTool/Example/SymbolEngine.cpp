///////////////////////////////////////////////////////////////////////////////
//
// SymbolEngine.cpp
//
// Author: Oleg Starodumov (www.debuginfo.com)
//
// This file contains the implementation of CSymbolEngine class, 
// which implements a simple DbgHelp-based symbol engine
//
//


///////////////////////////////////////////////////////////////////////////////
// Include files
//

// The following is needed to use Unicode functions of DbgHelp in Unicode build
#ifdef UNICODE
#define DBGHELP_TRANSLATE_TCHAR
#endif

#include <windows.h>
#include <tchar.h>
#include <dbghelp.h>

#include <malloc.h>
#include <crtdbg.h>

#include <string>

typedef std::basic_string<TCHAR>  TString; // must be defined before including SymboleEngine.h

#include "SymbolEngine.h"


///////////////////////////////////////////////////////////////////////////////
// Directives 
//

#pragma comment( lib, "dbghelp.lib" )


///////////////////////////////////////////////////////////////////////////////
// Helper classes
//

	// Wrapper for SYMBOL_INFO_PACKAGE structure 
	//
struct CSymbolInfoPackage : public SYMBOL_INFO_PACKAGE 
{
	CSymbolInfoPackage() 
	{
		si.SizeOfStruct = sizeof(SYMBOL_INFO); 
		si.MaxNameLen   = sizeof(name) / sizeof(TCHAR); 
	}
};

	// Wrapper for IMAGEHLP_LINE64 structure 
	//
struct CImageHlpLine64 : public IMAGEHLP_LINE64 
{
	CImageHlpLine64() 
	{
		SizeOfStruct = sizeof(IMAGEHLP_LINE64); 
	}
}; 


///////////////////////////////////////////////////////////////////////////////
// Function declarations
//

	// Notification callback
BOOL CALLBACK DebugInfoCallback( HANDLE hProcess, ULONG ActionCode, 
                                 ULONG64 CallbackData, ULONG64 UserContext ); 


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - constructors / destructor 
//

CSymbolEngine::CSymbolEngine()
: m_hProcess( NULL ), m_LastError( 0 ) 
{
}

CSymbolEngine::~CSymbolEngine()
{
	Close();
}


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - initialization / cleanup operations
//

bool CSymbolEngine::Init( HANDLE hProcess, PCTSTR SearchPath, bool Invade, bool Notify )
{
	// Check parameters and preconditions 

	if( m_hProcess != NULL )
	{
		_ASSERTE( !_T("Already initialized.") );
		if( hProcess != m_hProcess )
		{
			m_LastError = ERROR_INVALID_FUNCTION;
			return false;
		}
		else
		{
			return true;
		}
	}


	// Call SymInitialize

	if( !SymInitialize( hProcess, SearchPath, Invade ? TRUE : FALSE ) )
	{
		m_LastError = GetLastError();
		_ASSERTE( !_T("SymInitialize failed.") );
		return false;
	}


	// Register the notification callback, if requested

	if( Notify )
	{
		if( !SymRegisterCallback64( hProcess, DebugInfoCallback, (ULONG64)this ) )
		{
			m_LastError = GetLastError();
			_ASSERTE( !_T("SymInitialize failed.") );
			return false;
		}
	}


	// Complete 

	m_hProcess = hProcess;

	return true;

}

void CSymbolEngine::Close()
{
	if( m_hProcess != NULL )
	{
		if( !SymCleanup( m_hProcess ) )
		{
			m_LastError = GetLastError();
			_ASSERTE( !_T("SymCleanup failed.") );
		}

		m_hProcess = NULL;
	}
}


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - module operations
//

DWORD64 CSymbolEngine::LoadModuleSymbols( HANDLE hFile, const TString& ImageName, DWORD64 ModBase, DWORD ModSize )
{
	// Check preconditions 

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Symbol engine is not yet initialized.") );
		m_LastError = ERROR_INVALID_FUNCTION;
		return 0;
	}


	// In Unicode build, ImageName parameter should be translated to ANSI

#ifdef _UNICODE
	char* pImageName = 0;
	if( !ImageName.empty() )
	{
		size_t BufSize = 2 * ImageName.length();
		pImageName = (char*)_alloca( BufSize + 2 );
		size_t res = wcstombs( pImageName, ImageName.c_str(), BufSize );
		pImageName[BufSize] = 0;
		if( res == -1 )
		{
			_ASSERTE( !_T("Module name has bad format.") );
			m_LastError = ERROR_INVALID_PARAMETER;
			return false;
		}
	}
#else
	const char* pImageName = ImageName.empty() ? 0 : ImageName.c_str();
#endif //_UNICODE


	// Load symbols for the module

	DWORD64 rv = SymLoadModule64( m_hProcess, hFile, pImageName, NULL, ModBase, ModSize );

	if( rv == 0 )
	{
		m_LastError = GetLastError();
		_ASSERTE( !_T("SymLoadModule64() failed.") );
		return 0;
	}


	// Complete 

	return rv;
}

DWORD64 CSymbolEngine::LoadModuleSymbols( const TString& ImageName, DWORD64 ModBase, DWORD ModSize )
{
	// Check parameters

	if( ImageName.empty() )
	{
		_ASSERTE( !_T("Empty module name.") );
		m_LastError = ERROR_INVALID_PARAMETER;
		return false;
	}

	// Delegate the work to the more generic function

	return LoadModuleSymbols( NULL, ImageName, ModBase, ModSize );
}

DWORD64 CSymbolEngine::LoadModuleSymbols( HANDLE hFile, DWORD64 ModBase, DWORD ModSize )
{
	// Check parameters 

	if( ( hFile == NULL ) || ( hFile == INVALID_HANDLE_VALUE ) )
	{
		_ASSERTE( !_T("Invalid file handle.") );
		m_LastError = ERROR_INVALID_PARAMETER;
		return false;
	}


	// Delegate the work to the more generic function

	return LoadModuleSymbols( hFile, TString(), ModBase, ModSize );

}

bool CSymbolEngine::UnloadModuleSymbols( DWORD64 ModBase )
{
	// Check preconditions 

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Symbol engine is not yet initialized.") );
		m_LastError = ERROR_INVALID_FUNCTION;
		return false;
	}

	if( ModBase == 0 )
	{
		_ASSERTE( !_T("Module base address is null.") );
		m_LastError = ERROR_INVALID_PARAMETER;
		return false;
	}


	// Unload symbols

	if( !SymUnloadModule64( m_hProcess, ModBase ) )
	{
		m_LastError = GetLastError();
		_ASSERTE( !_T("SymUnloadModule64() failed.") );
		return false;
	}


	// Complete 

	return true;
}

bool CSymbolEngine::GetModuleInfo( DWORD64 Addr, IMAGEHLP_MODULE64& Info )
{
	// Check preconditions 

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Symbol engine is not yet initialized.") );
		m_LastError = ERROR_INVALID_FUNCTION;
		return false;
	}


	// Obtain module information

	memset( &Info, 0, sizeof(Info) );

	Info.SizeOfStruct = sizeof(Info);

	if( !SymGetModuleInfo64( m_hProcess, Addr, &Info ) )
	{
		m_LastError = GetLastError();
		_ASSERTE( !_T("SymGetModuleInfo64() failed.") );
		return false;
	}

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - symbol operations
//

bool CSymbolEngine::FindSymbolByAddress( DWORD64 Address, TString& Name, DWORD64& Displacement )
{
	// Check preconditions 

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Symbol engine is not yet initialized.") );
		m_LastError = ERROR_INVALID_FUNCTION;
		return false;
	}


	// Look up the symbol

	CSymbolInfoPackage sip; // it contains SYMBOL_INFO structure plus additional 
	                        // space for the name of the symbol 

	DWORD64 Disp = 0; 

	if( !SymFromAddr( m_hProcess, Address, &Disp, &sip.si ) )
	{
		// Failed, but do not assert here - it is usually normal when a symbol is not found
		m_LastError = GetLastError();
		return false;
	}

	Name          = sip.si.Name;
	Displacement  = Disp;

	return true;

}

bool CSymbolEngine::FindLineByAddress( DWORD64 Address, TString& File, DWORD& Line, DWORD64& Displacement )
{
	// Check preconditions 

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Symbol engine is not yet initialized.") );
		m_LastError = ERROR_INVALID_FUNCTION;
		return false;
	}


	// Look up the line

	CImageHlpLine64 LineInfo; 

	DWORD Disp = 0; 

	if( !SymGetLineFromAddr64( m_hProcess, Address, &Disp, &LineInfo ) )
	{
		// Failed, but do not assert here - it is usually normal when a line is not found
		m_LastError = GetLastError();
		return false;
	}

	File          = LineInfo.FileName;
	Line          = LineInfo.LineNumber;
	Displacement  = Disp;

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - stack walking operations
//

	// Turn off optimizations to make sure that frame pointer is present 
#pragma optimize ( "", off )

bool CSymbolEngine::StackWalk( CSymbolEngine::FrameColl_t& Frames, int FramesToSkip, HANDLE hThread, CONTEXT* pContext )
{
	// Cleanup 

	m_LastError = 0; 

	Frames.clear(); 

	if( FramesToSkip < 0 )
		FramesToSkip = 0;


	// Collect the data needed by StackWalk64 

		// Machine type 

	DWORD MachineType = 0; 

		// Stack frame 

	STACKFRAME64 StackFrame; 
	memset( &StackFrame, 0, sizeof(StackFrame) );

		// Architecture-specific initialization 

#ifdef _M_IX86

			// Machine type 

	MachineType = IMAGE_FILE_MACHINE_I386;

			// STACKFRAME64 structure 

	if( pContext != 0 ) 
	{
		StackFrame.AddrPC.Offset      = pContext->Eip;
		StackFrame.AddrPC.Mode        = AddrModeFlat;
		StackFrame.AddrStack.Offset   = pContext->Esp;
		StackFrame.AddrStack.Mode     = AddrModeFlat;
		StackFrame.AddrFrame.Offset   = pContext->Ebp;
		StackFrame.AddrFrame.Mode     = AddrModeFlat;
	}
	else 
	{
		unsigned long InstPtr;
		unsigned long StackPtr;
		unsigned long BasePtr; 

		__asm 
		{
			call x
			x:
			pop [InstPtr]
			mov [StackPtr], esp
			mov [BasePtr], ebp
		}

		StackFrame.AddrPC.Offset      = InstPtr; 
		StackFrame.AddrPC.Mode        = AddrModeFlat;
		StackFrame.AddrStack.Offset   = StackPtr; 
		StackFrame.AddrStack.Mode     = AddrModeFlat;
		StackFrame.AddrFrame.Offset   = BasePtr; 
		StackFrame.AddrFrame.Mode     = AddrModeFlat;
	}

#else

	#error This architecture is not supported.

#endif //_M_IX86


	// Walk the stack 

	while( 1 ) 
	{
		// Call StackWalk64 

		if( !StackWalk64( 
			MachineType,  // Machine architecture type 
			m_hProcess,   // Process handle 
			hThread,      // Thread handle 
			&StackFrame,  // Stack frame 
			pContext,     // Thread context (not required for x86)
			0,            // Read memory function - not used 
			SymFunctionTableAccess64,  // Function table access function (FPO access on x86) 
			SymGetModuleBase64, // Function that can determine module base for the given address 
			0             // Address translation function - not used 
		) )
		{
			// StackWalk64 failed 
			m_LastError = GetLastError(); 
			break; 
		}


		// Check the stack frame 

		bool bSaveFrame = true; 

		if( StackFrame.AddrPC.Offset == 0 ) 
		{
			// Do not save it 
			bSaveFrame = false; 
		}

		if( StackFrame.AddrPC.Offset == StackFrame.AddrReturn.Offset ) 
		{
			// Do not save it 
			bSaveFrame = false; 
		}

		if( FramesToSkip > 0 )
		{
			bSaveFrame = false;
			FramesToSkip--;
		}


		// Save the stack frame 

		if( bSaveFrame ) 
		{
			CStackFrame NewFrame( StackFrame.AddrPC.Offset, 
			                      StackFrame.AddrReturn.Offset, 
			                      StackFrame.AddrFrame.Offset 
			                    ); 

			Frames.push_back( NewFrame );

		}


		// Proceed to the next frame 

	}


	// Complete 

	return ( Frames.size() > 0 );

}

	// Turn the optimizations on again
#pragma optimize ( "", on )


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngine - option control operations
//

DWORD CSymbolEngine::GetOptions() const
{
	return SymGetOptions();
}

void CSymbolEngine::SetOptions( DWORD Options )
{
	SymSetOptions( Options );
}

void CSymbolEngine::AddOptions( DWORD Options )
{
	DWORD CurOptions = GetOptions();

	CurOptions |= Options;

	SetOptions( CurOptions );
}


///////////////////////////////////////////////////////////////////////////////
// Notification callback 
//

BOOL CALLBACK DebugInfoCallback
(
	HANDLE   /* hProcess */ , 
	ULONG    ActionCode, 
	ULONG64  CallbackData, 
	ULONG64  UserContext
) 
{
	// Note: This function should return TRUE only if it handles the event, 
	// otherwise it must return FALSE (see documentation). 

	CSymbolEngine* pEngine = (CSymbolEngine*)UserContext;

	if( pEngine == 0 )
	{
		_ASSERTE( !_T("Engine pointer is null.") );
		return FALSE;
	}

	if( ActionCode == CBA_DEBUG_INFO ) 
	{
		if( CallbackData != 0 ) 
		{
			_ASSERTE( !::IsBadStringPtr( (const TCHAR*)CallbackData, UINT_MAX ) ); 

			pEngine->OnEngineNotify( TString( (const TCHAR*)CallbackData ) );

			return TRUE; 
		}
	}

	return FALSE; 
}


///////////////////////////////////////////////////////////////////////////////
//
// ExcepMon.cpp
// 
// Author: Oleg Starodumov (www.debuginfo.com)
//
//


///////////////////////////////////////////////////////////////////////////////
// Dependencies
//
// This example depends on two other source files:
//   * SymbolEngine.h
//   * SymbolEngine.cpp
//


///////////////////////////////////////////////////////////////////////////////
// Description
//
// This example shows how to perform the following tasks:
//   * Start an application under debugger
//   * Attach the debugger to a process
//   * Implement the debugging loop
//   * Process debug events and display meaningful output
//   * Load/unload symbols for a module, display information about the kind 
//     of symbols loaded for a module
//   * Monitor exceptions in the debuggee, and display the call stack 
//     for every exception
//
// In additional, the following implementation details can be interesting:
//   * What handles are passed to the debugger by the Debugging API, 
//     how the debugger should work with those handles, which of them should 
//     be closed, etc.
//   * Obtaining the module path and name from the module's file handle
//   * Wrapping of the debugger logic into a simple class
//
// Note: This example uses PSAPI.DLL, and thus cannot run on Windows 9x
//


///////////////////////////////////////////////////////////////////////////////
// Usage:
//
// ExcepMon -p <pid>   Attach to the specified process
// ExcepMon <CmdLine>  Launch the specified executable, with the specified 
//                       command line parameters
//


///////////////////////////////////////////////////////////////////////////////
// Include files
//

// Let us use Unicode DbgHelp functions and structures in Unicode builds
#ifdef UNICODE
#define DBGHELP_TRANSLATE_TCHAR
#endif

#include <windows.h>
#include <tchar.h>
#include <dbghelp.h>
#include <windows.h>
#include <psapi.h>

#include <stdio.h>
#include <malloc.h>
#include <crtdbg.h>

#include <string>
#include <map>

// It must be defined before SymbolEngine.h is included
typedef std::basic_string<TCHAR>  TString;

// Include the declaration of CSymbolEngine class, which we will use 
// to work with debug information
#include "SymbolEngine.h"


///////////////////////////////////////////////////////////////////////////////
// Type definitions
//

typedef std::vector<TString> TStringVec_t;


///////////////////////////////////////////////////////////////////////////////
// Directives
//

#pragma comment ( lib, "psapi.lib" )


///////////////////////////////////////////////////////////////////////////////
// CModuleInfo class declaration
//
// It contains information about a module loaded into the debuggee process
//

class CModuleInfo
{
public:

	// Constructors / destructor

	CModuleInfo();
	CModuleInfo( LPVOID BaseAddr, DWORD Size, const TString& FullName );
	CModuleInfo( const CModuleInfo& o );
	~CModuleInfo();


public:

	// Accessors

		// Base address
	void    SetBaseAddress( LPVOID BaseAddr ) { m_BaseAddr = BaseAddr; }
	LPVOID  BaseAddress() const { return m_BaseAddr; }

		// Size
	void    SetSize( DWORD Size ) { m_Size = Size; }
	DWORD   Size() const { return m_Size; }

		// Full name
	void     SetFullName( const TString& FullName ) { m_FullName = FullName; }
	TString  FullName() const { return m_FullName; }

		// File / module name
			// File name (without path, without extension)
	TString  FileName() const; 
			// File name (without path, with extension)
	TString  FileNameExt() const;
			// File name (without path, without extension); if not available, module base address string
			// (it is guaranteed that the function returns a non-empty string)
	TString  ModuleName() const; 

		// Does the address belong to the module ?
	bool IsYourAddress( LPVOID Address ) const;


public:

	// Operators

	CModuleInfo& operator=( const CModuleInfo& o );


protected:

	// Data members 

		// Base address
	LPVOID m_BaseAddr;

		// Module size
	DWORD m_Size;

		// Full name
	TString m_FullName;

};


///////////////////////////////////////////////////////////////////////////////
// CSymbolEngineEx class declaration
//
// It extends CSymbolEngine class to provide the output of DbgHelp 
// status notifications
//

class CSymbolEngineEx : public CSymbolEngine
{
public:

	virtual void OnEngineNotify( const TString& Message ) 
	{
		_tprintf( _T("%s%s"), m_Prefix.c_str(), Message.c_str() );
	}

	void SetPrefix( const TString& Prefix )
	{ 
		m_Prefix = Prefix; 
	}

protected:

	TString m_Prefix;

};


///////////////////////////////////////////////////////////////////////////////
// CDebugger class declaration
//

class CDebugger 
{
public:

	// Constructor / destructor

	CDebugger();
	virtual ~CDebugger();


public:

	// Operations 

		// StartProcess
	bool StartProcess( const TString& FileName, const TString& CmdLine );

		// AttachToProcess
	bool AttachToProcess( DWORD ProcessId );

		// DebugLoop
	bool DebugLoop( DWORD Timeout = INFINITE );


protected:

	// Debug event handlers

	virtual void OnCreateProcessEvent( DWORD ProcessId );
	virtual void OnExitProcessEvent( DWORD ProcessId );
	virtual void OnCreateThreadEvent( DWORD ThreadId, HANDLE hThread );
	virtual void OnExitThreadEvent( DWORD ThreadId );
	virtual void OnLoadModuleEvent( LPVOID ImageBase, HANDLE hFile );
	virtual void OnUnloadModuleEvent( LPVOID ImageBase );
	virtual void OnExceptionEvent( DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Info );
	virtual void OnDebugStringEvent( DWORD ThreadId, const OUTPUT_DEBUG_STRING_INFO& Info );
	virtual void OnTimeout();


protected:

	// Helper functions

		// Show symbol information for a module
	void ShowSymbolInfo( LPVOID ImageBase );

		// Find module by address
	bool FindModuleByAddress( LPVOID Address, CModuleInfo& ModInfo );

		// Get the call stack of a thread, with symbol and source information
	bool GetCallStack( HANDLE hThread, CSymbolEngine::FrameColl_t& Frames, TStringVec_t& Symbols );

		// Show call stack (a more generic wrapper aroung GetCallStack, which 
		// gets the call stack and prints it)
	void ShowCallStack( DWORD ThreadId );


protected:

	// Type definitions

	typedef std::map<LPVOID, CModuleInfo> ModuleColl_t;
	typedef std::map<DWORD, HANDLE> ThreadHandleColl_t;


protected:

	// Data members

			// Process handle
		HANDLE m_hProcess;

			// Collection of modules
		ModuleColl_t m_Modules;

			// Collection of thread handles
		ThreadHandleColl_t m_ThreadHandles;

			// Symbol engine
		CSymbolEngineEx m_SymbolEngine;

};


///////////////////////////////////////////////////////////////////////////////
// Helper functions
//

	// Get debuggee command line
bool GetDebuggeeCommandLine( int argc, TCHAR* argv[], int StartIndex, TString& CmdLine );

	// Get file name from handle
bool GetFileNameFromHandle( HANDLE hFile, TString& FileName );
void GetFileNameFromHandleHelper( TString& FileName );

	// Get module size
bool GetModuleSize( HANDLE hProcess, LPVOID ImageBase, DWORD& Size );

	// Close handle helper
void CloseHandleHelper( HANDLE h );

	// Enable debug privilege
bool EnableDebugPrivilege( bool Enable );

	// Help and logo printers 
void PrintHelp();
void PrintLogo();


///////////////////////////////////////////////////////////////////////////////
// main() function 
//

int _tmain( int argc, TCHAR* argv[] )
{
	// Command line parameter constants 

	const TCHAR* ccAttach  = _T("-p");
	const TCHAR* ccHelp    = _T("-?");


	// Print logo 

	PrintLogo();


	// Enable debug privilege

	EnableDebugPrivilege( true );


	// Instantiate the debugger object

	CDebugger Debugger;


	// Obtain and check command line parameters 

	if( argc < 2 )
	{
		PrintHelp();
		return 0;
	}

	if( _tcscmp( argv[1], ccHelp ) == 0 )
	{
		PrintHelp();
		return 0;
	}
	else if( _tcscmp( argv[1], ccAttach ) == 0 )
	{
		// Attach requested

		DWORD ProcessId = _ttol( argv[2] );

		_tprintf( _T("Mode:  Attach\n") );
		_tprintf( _T("Pid:   %u\n\n"), ProcessId );

		if( !Debugger.AttachToProcess( ProcessId ) )
		{
			_tprintf( _T("AttachToProcess() failed.\n") );
			return 0;
		}

	}
	else 
	{
		// Launch requested

		TString CmdLine;

		if( !GetDebuggeeCommandLine( argc, argv, 1, CmdLine ) || CmdLine.empty() )
		{
			// Something wrong with the command line...
			PrintHelp();
			return 0;
		}

		_tprintf( _T("Mode:     Launch\n") );
		_tprintf( _T("Command:  %s\n\n"), CmdLine.c_str() );

		if( !Debugger.StartProcess( _T(""), CmdLine ) )
		{
			_tprintf( _T("StartProcess() failed.\n") );
			return 0;
		}

	}


	// Enter the debug loop

	DWORD Timeout = INFINITE;

	Debugger.DebugLoop( Timeout );


	return 0;
}


///////////////////////////////////////////////////////////////////////////////
// CDebugger - constructors / destructor 
//

CDebugger::CDebugger()
: m_hProcess( NULL )
{
	m_SymbolEngine.SetPrefix( _T("  ") );
}

CDebugger::~CDebugger()
{
	// no actions
}


///////////////////////////////////////////////////////////////////////////////
// CDebugger::StartProcess() function
//
// This function starts the specified executable under debugger
//

bool CDebugger::StartProcess( const TString& FileName, const TString& CmdLine )
{
	// Prepare parameters for CreateProcess

	LPCTSTR lpFileName = FileName.empty() ? 0 : FileName.c_str();

	LPTSTR lpCmdLine = 0; // It should be writeable - we have to make a copy

	if( CmdLine.length() > 0 )
	{
		lpCmdLine = (LPTSTR)_alloca( ( CmdLine.length() + 1 ) * sizeof(TCHAR) );
		_tcscpy( lpCmdLine, CmdLine.c_str() );
	}


	// Create the process 

	STARTUPINFO si = { sizeof(si) };

	PROCESS_INFORMATION pi = { NULL, NULL, 0, 0 };

	if( !CreateProcess( lpFileName, lpCmdLine, NULL, NULL, FALSE, 
		CREATE_NEW_CONSOLE | DEBUG_ONLY_THIS_PROCESS, NULL, NULL, &si, &pi ) )
	{
		_tprintf( _T("CreateProcess() failed. Error: %u \n"), GetLastError() );
		_ASSERTE( !_T("CreateProcess() failed.") );
		return false;
	}

	// Close the process and thread handles 
	// (we can obtain them later with debug events)

	if( pi.hProcess != NULL )
	{
		if( !CloseHandle( pi.hProcess ) )
		{
			_tprintf( _T("CloseHandle() failed. Error: %u \n"), GetLastError() );
			_ASSERTE( !_T("CloseHandle() failed.") );
		}
	}

	if( pi.hThread != NULL )
	{
		if( !CloseHandle( pi.hThread ) )
		{
			_tprintf( _T("CloseHandle() failed. Error: %u \n"), GetLastError() );
			_ASSERTE( !_T("CloseHandle() failed.") );
		}
	}


	// Complete 

	return true;

}


///////////////////////////////////////////////////////////////////////////////
// CDebugger::AttachToProcess() function
//

bool CDebugger::AttachToProcess( DWORD ProcessId )
{
	if( !DebugActiveProcess( ProcessId ) )
	{
		_tprintf( _T("DebugActiveProcess() failed. Error: %u \n"), GetLastError() );
		_ASSERTE( !_T("DebugActiveProcess() failed.") );
		return false;
	}

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// CDebugger::DebugLoop() function
//

bool CDebugger::DebugLoop( DWORD Timeout )
{
	// Run the debug loop and handle the events 

	DEBUG_EVENT DebugEvent;

	bool bContinue = true;

	bool bSeenInitialBreakpoint = false;

	while( bContinue ) 
	{
		// Call WaitForDebugEvent 

		if( WaitForDebugEvent( &DebugEvent, Timeout ) )
		{
			// Handle the debug event 

			DWORD ContinueStatus = DBG_CONTINUE;

			switch( DebugEvent.dwDebugEventCode ) 
			{
			case CREATE_PROCESS_DEBUG_EVENT:
				// Save the process handle
				m_hProcess = DebugEvent.u.CreateProcessInfo.hProcess;

				// Handle the event
				OnCreateProcessEvent( DebugEvent.dwProcessId );
				OnCreateThreadEvent( DebugEvent.dwThreadId, DebugEvent.u.CreateProcessInfo.hThread );
				OnLoadModuleEvent( DebugEvent.u.CreateProcessInfo.lpBaseOfImage, 
					DebugEvent.u.CreateProcessInfo.hFile );
				
				// With this event, the debugger receives the following handles:
				//   CREATE_PROCESS_DEBUG_INFO.hProcess - debuggee process handle
				//   CREATE_PROCESS_DEBUG_INFO.hThread  - handle to the initial thread of the debuggee process
				//   CREATE_PROCESS_DEBUG_INFO.hFile    - handle to the executable file that was 
				//                                        used to create the debuggee process (.EXE file)
				// 
				// hProcess and hThread handles will be closed by the operating system 
				// when the debugger calls ContinueDebugEvent after receiving 
				// EXIT_PROCESS_DEBUG_EVENT for the given process
				// 
				// hFile handle should be closed by the debugger, when the handle 
				// is no longer needed
				//

				CloseHandleHelper( DebugEvent.u.CreateProcessInfo.hFile );

				break;

			case EXIT_PROCESS_DEBUG_EVENT:
				// Handle the event
				OnExitProcessEvent( DebugEvent.dwProcessId );

				// Reset the process handle (it will be closed at the next call 
				// to ContinueDebugEvent
				m_hProcess = NULL;
				bContinue = false; // Last event - exit the loop
				break;

			case CREATE_THREAD_DEBUG_EVENT:
				OnCreateThreadEvent( DebugEvent.dwThreadId, DebugEvent.u.CreateThread.hThread );

				// With this event, the debugger receives the following handle:
				//   CREATE_THREAD_DEBUG_INFO.hThread  - handle to the thread that has been created
				// 
				// This handle will be closed by the operating system 
				// when the debugger calls ContinueDebugEvent after receiving 
				// EXIT_THREAD_DEBUG_EVENT for the given thread
				// 

				break;

			case EXIT_THREAD_DEBUG_EVENT:
				OnExitThreadEvent( DebugEvent.dwThreadId );
				break;

			case LOAD_DLL_DEBUG_EVENT:
				OnLoadModuleEvent( DebugEvent.u.LoadDll.lpBaseOfDll, DebugEvent.u.LoadDll.hFile );
				
				// With this event, the debugger receives the following handle:
				//   LOAD_DLL_DEBUG_INFO.hFile    - handle to the DLL file 
				// 
				// This handle should be closed by the debugger, when the handle 
				// is no longer needed
				//

				CloseHandleHelper( DebugEvent.u.LoadDll.hFile );

					// Note: Closing the file handle here can lead to the following side effect:
					//   After the file has been closed, the handle value will be reused 
					//   by the operating system, and if the next "load dll" debug event 
					//   comes (for another DLL), it can contain the file handle with the same 
					//   value (but of course the handle now refers to that another DLL). 
					//   Don't be surprised!
					//

				break;

			case UNLOAD_DLL_DEBUG_EVENT:
				OnUnloadModuleEvent( DebugEvent.u.UnloadDll.lpBaseOfDll );
				break;

			case OUTPUT_DEBUG_STRING_EVENT:
				OnDebugStringEvent( DebugEvent.dwThreadId, DebugEvent.u.DebugString );
				break;

			case RIP_EVENT:
				break;

			case EXCEPTION_DEBUG_EVENT:
				OnExceptionEvent( DebugEvent.dwThreadId, DebugEvent.u.Exception );

					// By default, do not handle the exception 
					// (let the debuggee handle it if it wants to)

				ContinueStatus = DBG_EXCEPTION_NOT_HANDLED;

					// Now the special case - the initial breakpoint 

				DWORD ExceptionCode = DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;

				if( !bSeenInitialBreakpoint && ( ExceptionCode == EXCEPTION_BREAKPOINT ) )
				{
					// This is the initial breakpoint, which is used to notify the debugger 
					// that the debuggee has initialized 
					// 
					// The debugger should handle this exception
					// 

					ContinueStatus = DBG_CONTINUE;

					bSeenInitialBreakpoint = true;

				}
				break;
			}

			// Let the debuggee continue 

			if( !ContinueDebugEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, ContinueStatus ) )
			{
				_tprintf( _T("ContinueDebugEvent() failed. Error: %u \n"), GetLastError() ); 
				_ASSERTE( !_T("ContinueDebugEvent() failed.") );
				return false;
			}


			// Proceed to the beginning of the loop...

		}
		else
		{
			// WaitForDebugEvent failed...

			// Is it because of timeout ?

			DWORD ErrCode = GetLastError();

			if( ErrCode == ERROR_SEM_TIMEOUT ) 
			{
				// Yes, report and continue
				OnTimeout();
			}
			else 
			{
				// No, exit the loop
				_tprintf( _T("WaitForDebugEvent() failed. Error: %u \n"), GetLastError() ); 
				_ASSERTE( !_T("WaitForDebugEvent() failed.") );
				return false;
			}
		}
	}


	// Complete 

	return true;

}


///////////////////////////////////////////////////////////////////////////////
// CDebugger - debug event handlers
//

void CDebugger::OnCreateProcessEvent( DWORD ProcessId )
{
	// Check parameters and preconditions

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Debuggee process handle is NULL.") );
		return;
	}


	// Report the event

	_tprintf( _T("PROCESS CREATE: %u\n"), ProcessId );

	
	// Initialize the symbol engine

	m_SymbolEngine.AddOptions( SYMOPT_DEBUG | SYMOPT_LOAD_LINES );

		// The fourth parameter asks the symbol engine to receive status 
		// messages from DbgHelp 
		// -> Set it to "true" if you want to enable the messages

	if( !m_SymbolEngine.Init( m_hProcess, 0, false, false ) )
		_tprintf( _T("Symbol engine initialization failed. Error: %u\n"), m_SymbolEngine.LastError() );

}

void CDebugger::OnExitProcessEvent( DWORD ProcessId )
{
	// Report the event

	_tprintf( _T("PROCESS EXIT: %u\n"), ProcessId );


	// Deinitialize the symbol engine

	m_SymbolEngine.Close();

}

void CDebugger::OnCreateThreadEvent( DWORD ThreadId, HANDLE hThread )
{
	// Report the event

	_tprintf( _T("THREAD CREATE: %u\n"), ThreadId );


	// Check and save the thread handle

	if( hThread == NULL )
	{
		_ASSERTE( !_T("Thread handle is null.") );
	}
	else
	{
		// Save the thread handle
		m_ThreadHandles[ThreadId] = hThread;
	}
}

void CDebugger::OnExitThreadEvent( DWORD ThreadId )
{
	// Report the event

	_tprintf( _T("THREAD EXIT: %u\n"), ThreadId );


	// Remove the thread handle from the collection

	m_ThreadHandles.erase( ThreadId );

}

void CDebugger::OnLoadModuleEvent( LPVOID ImageBase, HANDLE hFile )
{
	// Check parameters and preconditions

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Debuggee process handle is NULL.") );
		return;
	}


	// Obtain and save the module information

		// Module name

	TString ImageName; 

	if( !GetFileNameFromHandle( hFile, ImageName ) )
		ImageName = _T(""); // for safety

		// Module size 

	DWORD ModuleSize = 0;

	if( !GetModuleSize( m_hProcess, ImageBase, ModuleSize ) )
	{
		ModuleSize = 0; // Just in case
		_ASSERTE( !_T("GetModuleSize() failed.") );
	}

	LPVOID ImageEnd = (BYTE*)ImageBase + ModuleSize;

		// Save the information

	m_Modules[ImageBase] = CModuleInfo( ImageBase, ModuleSize, ImageName );


	// Report the event

	_tprintf( _T("MODULE LOAD: %08p-%08p %s\n"), ImageBase, ImageEnd, ImageName.c_str() );


	// Load symbols for the module

	if( ( hFile != NULL ) && ( hFile != INVALID_HANDLE_VALUE ) )
	{
		_tprintf( _T("  Loading symbols...\n") );

		if( !m_SymbolEngine.LoadModuleSymbols( hFile, ImageName, (DWORD64)ImageBase, ModuleSize ) )
		{
			_tprintf( _T("  Symbols cannot be loaded (error code: %u)\n"), m_SymbolEngine.LastError() );
		}
		else
		{
			ShowSymbolInfo( ImageBase );
		}
	}
	else 
	{
		_tprintf( _T("  Symbols cannot be loaded (file handle is null).\n") );
	}

}

void CDebugger::OnUnloadModuleEvent( LPVOID ImageBase )
{
	// Obtain the module name

	TString ImageName( _T("<unknown>") );

	ModuleColl_t::iterator pm = m_Modules.find( ImageBase );

	if( pm != m_Modules.end() )
		ImageName = pm->second.FullName();


	// Report the event

	_tprintf( _T("MODULE UNLOAD: %08p %s\n"), ImageBase, ImageName.c_str() );


	// Unload module symbols 

	m_SymbolEngine.UnloadModuleSymbols( (DWORD64)ImageBase );


	// Remove the module name from the collection

	m_Modules.erase( pm );

}

void CDebugger::OnExceptionEvent( DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Info )
{
	// Report the exception

	_tprintf( _T("EXCEPTION (%s)\n"), Info.dwFirstChance ? _T("first-chance") : _T("second-chance") );

	_tprintf( _T("  Code:        %08x\n"), Info.ExceptionRecord.ExceptionCode );
	_tprintf( _T("  Address:     %08p\n"), Info.ExceptionRecord.ExceptionAddress );
	_tprintf( _T("  ThreadId:    %u\n"),   ThreadId );
	_tprintf( _T("  Flags:       %08x\n"), Info.ExceptionRecord.ExceptionFlags );
	_tprintf( _T("  NumberParameters:  %u\n"), Info.ExceptionRecord.NumberParameters );

	DWORD NumParameters = Info.ExceptionRecord.NumberParameters;

	if( NumParameters > EXCEPTION_MAXIMUM_PARAMETERS )
		NumParameters = EXCEPTION_MAXIMUM_PARAMETERS;

	for( DWORD i = 0; i < NumParameters; i++ )
		_tprintf( _T("    Parameter[%d]:     %08p\n"), i, Info.ExceptionRecord.ExceptionInformation[i] );


	// Report the call stack

	ShowCallStack( ThreadId );

}

void CDebugger::OnDebugStringEvent( DWORD ThreadId, const OUTPUT_DEBUG_STRING_INFO& Info )
{
	// Check parameters and preconditions

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Debuggee process handle is NULL.") );
		return;
	}

	if( ( Info.lpDebugStringData == 0 ) || ( Info.nDebugStringLength == 0 ) )
	{
		_ASSERTE( !_T("No debug string information.") );
		return;
	}


	// Read the string from the debuggee's address space

	if( Info.fUnicode ) 
	{
		// Read as Unicode string

		const SIZE_T cMaxChars = 0xFFFF; 
		WCHAR Buffer[cMaxChars+1] = {0};

		SIZE_T CharsToRead = Info.nDebugStringLength; 

		if( CharsToRead > cMaxChars ) 
			CharsToRead = cMaxChars;

		SIZE_T BytesRead = 0;

		if( !ReadProcessMemory( m_hProcess, Info.lpDebugStringData, Buffer, CharsToRead * sizeof(WCHAR), &BytesRead ) || ( BytesRead == 0 ) )
		{
			_tprintf( _T("ReadProcessMemory() failed. Error: %u\n"), GetLastError() );
			_ASSERTE( !_T("ReadProcessMemory failed.") );
			return;
		}

		wprintf( L"ODS(%u): %s\n", ThreadId, Buffer );
	}
	else 
	{
		// Read as ANSI string

		const SIZE_T cMaxChars = 0xFFFF; 
		CHAR Buffer[cMaxChars+1] = {0};

		SIZE_T CharsToRead = Info.nDebugStringLength; 

		if( CharsToRead > cMaxChars ) 
			CharsToRead = cMaxChars;

		SIZE_T BytesRead = 0;

		if( !ReadProcessMemory( m_hProcess, Info.lpDebugStringData, Buffer, CharsToRead * sizeof(CHAR), &BytesRead ) || ( BytesRead == 0 ) )
		{
			_tprintf( _T("ReadProcessMemory() failed. Error: %u\n"), GetLastError() );
			_ASSERTE( !_T("ReadProcessMemory failed.") );
			return;
		}

		printf( "ODS(%u): %s\n", ThreadId, Buffer );
	}
}

void CDebugger::OnTimeout()
{
	_tprintf( _T("DebugLoop - Timeout.\n") );
}


///////////////////////////////////////////////////////////////////////////////
// CDebugger - helper functions
// 

	// This function displays information about symbols loaded for the specified 
	// module
	// 
void CDebugger::ShowSymbolInfo( LPVOID ImageBase )
{
	// Check parameters

	if( ImageBase == 0 )
	{
		_ASSERTE( !_T("Image base address is null.") );
		return;
	}


	// Obtain module and symbol information

	IMAGEHLP_MODULE64 ModInfo;

	if( !m_SymbolEngine.GetModuleInfo( (DWORD64)ImageBase, ModInfo ) )
	{
		_ASSERTE( !_T("CSymbolEngine::GetModuleInfo() failed.") );
		return;
	}


	// Display module and symbol information

	_tprintf( _T("  Symbols: ") );

	switch( ModInfo.SymType )
	{
		case SymNone: 
			_tprintf( _T("Not available.\n") ); 
			break; 

		case SymExport: 
			_tprintf( _T("Exports\n") ); 
			break; 

		case SymCoff: 
			_tprintf( _T("COFF\n") ); 
			break; 

		case SymCv: 
			_tprintf( _T("CodeView\n") ); 
			break; 

		case SymSym: 
			_tprintf( _T("SYM\n") ); 
			break; 

		case SymVirtual: 
			_tprintf( _T("Virtual\n") ); 
			break; 

		case SymPdb: 
			_tprintf( _T("PDB\n") ); 
			break; 

		case SymDia: 
			_tprintf( _T("DIA\n") ); 
			break; 

		case SymDeferred: 
			_tprintf( _T("Deferred\n") ); // not actually loaded 
			break; 

		default: 
			_tprintf( _T("Unknown format\n") ); 
			break; 
	}

	// Additional information about PDB symbols

	if( ModInfo.SymType == SymPdb )
	{
		// ModInfo.LoadedImageName can contain the name of .DBG file

		TCHAR szFileExt[_MAX_EXT] = {0}; 
		_tsplitpath( ModInfo.LoadedImageName, NULL, NULL, NULL, szFileExt ); 

		if( _tcsicmp( szFileExt, _T(".dbg") ) == 0 )
			_tprintf( _T("    Symbol file: %s\n"), ModInfo.LoadedImageName );

		_tprintf( _T("    Symbol file: %s\n"), ModInfo.LoadedPdbName );
	}

}

	// This function looks up the module by address
	//
bool CDebugger::FindModuleByAddress( LPVOID Address, CModuleInfo& ModInfo )
{
	ModuleColl_t::const_iterator pm;

	for( pm = m_Modules.begin(); pm != m_Modules.end(); pm++ )
	{
		const CModuleInfo& Module = pm->second;

		if( Module.IsYourAddress( Address ) )
		{
			ModInfo = Module;
			return true;
		}
	}

	return false;
}

	// This function obtains the call stack of the specified thread
	//
	// The first parameter contains the thread handle of the target thread 
	// The results are returned in the second and third parameters 
	//
	// In the second parameter, a collection of CSymbolEngine::CStackFrame objects 
	// is returned, which describe the stack frames
	// In the third parameter, a collection of symbol names (with displacement 
	// and source file/line information, if available) is returned, which describe 
	// the symbols that correspond to the stack frames
	//
bool CDebugger::GetCallStack( HANDLE hThread, CSymbolEngine::FrameColl_t& Frames, TStringVec_t& Symbols )
{
	// Check parameters 

	if( hThread == NULL )
	{
		_ASSERTE( !_T("Thread handle is null.") );
		return false;
	}

	Frames.clear();
	Symbols.clear();


	// Obtain the call stack

		// Obtain the thread context

	CONTEXT Ctx;
	Ctx.ContextFlags = CONTEXT_FULL;

	if( !GetThreadContext( hThread, &Ctx ) )
	{
		_ASSERTE( !_T("GetThreadContext() failed.") );
		return false;
	}

		// Obtain the call stack

	if( !m_SymbolEngine.StackWalk( Frames, 0, hThread, &Ctx ) )
	{
		_ASSERTE( !_T("CDebugEngine::StackWalk() failed.") );
		return false;
	}

		// Resolve the call stack to symbols and source files/lines

	size_t i;

	for( i = 0; i < Frames.size(); i++ )
	{
		const CSymbolEngine::CStackFrame& Frame = Frames[i];

		TString SymName;
		DWORD64 SymDisp = 0;

		if( m_SymbolEngine.FindSymbolByAddress( Frame.Ip, SymName, SymDisp ) )
		{
			CModuleInfo ModInfo;

			if( FindModuleByAddress( (LPVOID)Frame.Ip, ModInfo ) )
			{
				SymName = ModInfo.ModuleName() + _T("!") + SymName;
			}

			if( SymDisp != 0 )
			{
				const size_t cBufSize = 16;
				TCHAR szBuffer[cBufSize+1] = {0};
				_sntprintf( szBuffer, cBufSize, _T("%I64x"), SymDisp );
				szBuffer[cBufSize] = 0;

				SymName += _T("+");
				SymName += szBuffer;
			}

			DWORD    SymLine;
			TString  SymFile;

			if( m_SymbolEngine.FindLineByAddress( Frame.Ip, SymFile, SymLine, SymDisp ) )
			{
				const size_t cBufSize = 512;
				TCHAR szBuffer[cBufSize+1] = {0};
				_sntprintf( szBuffer, cBufSize, _T("[%s @ %u]"), SymFile.c_str(), SymLine );
				szBuffer[cBufSize] = 0;

				SymName += _T(" ");
				SymName += szBuffer;
			}
		}
		else
		{
			// Construct the symbol name from the module name and displacement, if available 

				// Look up the module

			CModuleInfo Module;

			if( !FindModuleByAddress( (LPVOID)Frame.Ip, Module ) )
			{
				// This address does not belong to a module -> use the raw address

				const size_t cBufSize = 16;
				TCHAR szBuffer[cBufSize+1] = {0};
				_sntprintf( szBuffer, cBufSize, _T("%08I64x"), Frame.Ip );
				szBuffer[cBufSize] = 0;

				SymName = szBuffer;
			}
			else
			{
				SymName = Module.ModuleName();

				SymDisp = Frame.Ip - (DWORD64)Module.BaseAddress();

				if( SymDisp != 0 )
				{
					const size_t cBufSize = 16;
					TCHAR szBuffer[cBufSize+1] = {0};
					_sntprintf( szBuffer, cBufSize, _T("%I64x"), SymDisp );
					szBuffer[cBufSize] = 0;

					SymName += _T("!");
					SymName += szBuffer;
				}
			}

		}

		Symbols.push_back( SymName );

	}

	_ASSERTE( Frames.size() == Symbols.size() );

	return true;

}

	// This function displays the call stack of the specified thread
	//
void CDebugger::ShowCallStack( DWORD ThreadId )
{
	// Obtain the call stack

		// Obtain the thread handle 

	ThreadHandleColl_t::const_iterator pt = m_ThreadHandles.find( ThreadId );

	if( pt == m_ThreadHandles.end() )
	{
		_tprintf( _T("ERROR: Thread handle not found for thread %u\n"), ThreadId );
		_ASSERTE( !_T("Thread handle not found.") );
		return;
	}

	HANDLE hThread = pt->second;

	if( hThread == NULL )
	{
		_tprintf( _T("ERROR: Thread handle is null for thread %u\n"), ThreadId );
		_ASSERTE( !_T("Thread handle is null.") );
		return;
	}

		// Obtain the call stack 

	CSymbolEngine::FrameColl_t Frames;
	TStringVec_t Symbols;

	if( !GetCallStack( hThread, Frames, Symbols ) )
	{
		_tprintf( _T("ERROR: Cannot obtain call stack for thread %u\n"), ThreadId );
		return;
	}

	if( Frames.size() != Symbols.size() )
	{
		_tprintf( _T("ERROR: Cannot obtain call stack for thread %u (internal error)\n"), ThreadId );
		_ASSERTE( !_T("Incorrect call stack walk results.") );
		return;
	}


	// Display the call stack

	_tprintf( _T("  CALL STACK:\n") );

	_tprintf( _T("    Frame     RetAddr   Addr\n") );

	for( size_t j = 0; j < Frames.size(); j++ )
	{
		const CSymbolEngine::CStackFrame& Frame = Frames[j];
		const TString& SymName = Symbols[j];

		_tprintf( _T("    %08I64x  %08I64x  %08I64x  %s\n"), 
			Frame.Bp, Frame.RetAddr, Frame.Ip, SymName.c_str() ); 
	}

}


///////////////////////////////////////////////////////////////////////////////
// CModuleInfo class implementation
// 

CModuleInfo::CModuleInfo()
: m_BaseAddr( 0 ), m_Size( 0 )
{
}

CModuleInfo::CModuleInfo( LPVOID BaseAddr, DWORD Size, const TString& FullName )
: m_BaseAddr( BaseAddr ), m_Size( Size ), m_FullName( FullName )
{
}

CModuleInfo::CModuleInfo( const CModuleInfo& o )
: m_BaseAddr( o.m_BaseAddr ), m_Size( o.m_Size ), m_FullName( o.m_FullName )
{
}

CModuleInfo::~CModuleInfo()
{
}

CModuleInfo& CModuleInfo::operator=( const CModuleInfo& o )
{
	if( &o != this )
	{
		m_BaseAddr   = o.m_BaseAddr;
		m_Size       = o.m_Size;
		m_FullName   = o.m_FullName;
	}

	return *this;
}

TString CModuleInfo::FileName() const
{
	TString rv;

	if( !m_FullName.empty() )
	{
		TCHAR szFileName[_MAX_FNAME] = {0};
		_tsplitpath( m_FullName.c_str(), NULL, NULL, szFileName, NULL ); 

		rv = szFileName;
	}

	return rv;
}

TString CModuleInfo::FileNameExt() const
{
	TString rv;

	if( !m_FullName.empty() )
	{
		TCHAR szFileName[_MAX_FNAME] = {0};
		TCHAR szFileExt[_MAX_EXT] = {0}; 
		_tsplitpath( m_FullName.c_str(), NULL, NULL, szFileName, szFileExt ); 

		rv = szFileName;
		rv += szFileExt;
	}

	return rv;
}

TString CModuleInfo::ModuleName() const
{
	if( !FileName().empty() )
	{
		return FileName();
	}
	else
	{
		const size_t cBufSize = 18;
		TCHAR szBuffer[cBufSize+1] = {0};
		_sntprintf( szBuffer, cBufSize, _T("<%08p>"), m_BaseAddr );
		szBuffer[cBufSize] = 0;

		return TString( szBuffer );
	}
}

bool CModuleInfo::IsYourAddress( LPVOID Address ) const
{ 
	if( Address == 0 )
		return false;
	if( m_BaseAddr == 0 )
		return false;
	if( m_Size == 0 )
		return false;

	if( Address < m_BaseAddr )
		return false;

	if( Address >= ( (BYTE*)m_BaseAddr + m_Size ) )
		return false;

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// GetDebuggeeCommandLine() function
// 
// This function constructs the debuggee command line from the command line 
// parameters of the debugger
//
// The first two parameters receive the debugger's command line, 
// StartIndex parameter identifies the first parameter on the debugger's 
// command line that belongs to the debuggee's command line 
// (that is, the path/name of the debuggee executable)
//
// The constructed command line is returned in the last parameter
//

bool GetDebuggeeCommandLine( int argc, TCHAR* argv[], int StartIndex, TString& CmdLine )
{
	// Cleanup the [out] parameter

	CmdLine = _T("");


	// Check parameters 

	_ASSERTE( argc > 0 );
	_ASSERTE( argv != 0 );
	_ASSERTE( StartIndex >= 0 );
	_ASSERTE( StartIndex < argc );

	if( ( argc <= 0 ) || ( argv == 0 ) || ( StartIndex < 0 ) || ( StartIndex >= argc ) )
	{
		_ASSERTE( _T("Invalid parameter.") );
		return false;
	}


	// Concatenate the parameters to the destination string 

	while( StartIndex < argc )
	{
		bool HasSpace = ( _tcschr( argv[StartIndex], _T(' ') ) != NULL );

		if( HasSpace )
			CmdLine += _T("\"");

		CmdLine += argv[StartIndex];

		if( HasSpace )
			CmdLine += _T("\"");

		if( StartIndex < argc )
			CmdLine += _T(" ");

		StartIndex++;
	}


	// Complete 
	
	return true;

}


///////////////////////////////////////////////////////////////////////////////
// GetFileNameFromHandle function
// 
// This function uses the file handle to obtain the name of the file
// 
// The implementation is based on MSDN sample (see "Obtaining a File Name 
// From a File Handle" article)
// 
// Note: This function uses PSAPI library, and therefore the sample 
// does not support Windows 9x operating systems
//

bool GetFileNameFromHandle( HANDLE hFile, TString& FileName )
{
	DWORD ErrCode = 0;


	// Cleanup the [out] parameter

	FileName = _T("");


	// Check parameters 

		// Is the handle valid ?

	if( ( hFile == NULL ) || ( hFile == INVALID_HANDLE_VALUE ) )
	{
		_ASSERTE( !_T("") );
		return false;
	}

		// Does the file have a non-zero size ?
		// (files with zero size cannot be mapped)

	DWORD FileSizeHi = 0;
	DWORD FileSizeLo = 0;

	FileSizeLo = GetFileSize( hFile, &FileSizeHi );

	if( ( FileSizeLo == INVALID_FILE_SIZE ) && ( GetLastError() != NO_ERROR ) ) 
	{
		// GetFileSize failed 
		ErrCode = GetLastError();
		_ASSERTE( !_T("GetFileSize() failed.") );
		return false;
	}
	else if( ( FileSizeLo == 0 ) && ( FileSizeHi == 0 ) ) 
	{
		// File size is zero
		_ASSERTE( !_T("File size is zero.") );
		return false;
	}


	// Obtain the file name

	bool bSuccess = false;

	HANDLE hMapFile     = NULL;
	PVOID pViewOfFile   = NULL;

	do
	{
		// Map the file into memory 

		hMapFile = CreateFileMapping( hFile, NULL, PAGE_READONLY, 0, 1, NULL );

		if( hMapFile == NULL )
		{
			// File cannot be mapped
			ErrCode = GetLastError();
			_ASSERTE( !_T("CreateFileMapping failed.") );
			break;
		}

		pViewOfFile = MapViewOfFile( hMapFile, FILE_MAP_READ, 0, 0, 1 );

		if( pViewOfFile == NULL ) 
		{
			// View of file cannot be mapped
			ErrCode = GetLastError();
			_ASSERTE( !_T("MapViewOfFile failed.") );
			break;
		}


		// Obtain the file name 

		const DWORD cBufSize = MAX_PATH;
		TCHAR szFileName[cBufSize+1] = {0};

		if( !GetMappedFileName( GetCurrentProcess(), pViewOfFile, szFileName, cBufSize ) )
		{
			// GetMappedFileName failed
			ErrCode = GetLastError();
			_ASSERTE( !_T("GetMappedFileName failed.") );
			break;
		}


		// Save the file name 

		FileName = szFileName;


		// The file name returned by GetMappedFileName will contain the device name. 
		// Let's replace it with the drive name, if it is available 

		GetFileNameFromHandleHelper( FileName );


		// Record the success

		bSuccess = true;

	}
	while( 0 );


	// Cleanup

	if( pViewOfFile != NULL )
	{
		if( !UnmapViewOfFile( pViewOfFile ) ) 
		{
			ErrCode = GetLastError();
			_ASSERTE( !_T("UnmapViewOfFile() failed.") );
		}
	}

	if( hMapFile != NULL ) 
	{
		if( !CloseHandle( hMapFile ) ) 
		{
			ErrCode = GetLastError();
			_ASSERTE( !_T("CloseHandle() failed.") );
		}
	}


	// Complete 

	return bSuccess;

}

void GetFileNameFromHandleHelper( TString& FileName )
{
	DWORD ErrCode = 0;


	// Check the parameter

	if( FileName.length() == 0 )
		return;


	// Obtain the list of drives available in the system

	const DWORD cBufSize = 512;
	TCHAR szDrives[cBufSize+1] = {0};

	DWORD rv = GetLogicalDriveStrings( cBufSize, szDrives );

	if( ( rv == 0 ) || ( rv > cBufSize) )
	{
		ErrCode = GetLastError();
		_ASSERTE( !_T("GetLogicalDriveStrings() failed.") );
		return;
	}


	// Walk through the list of drives and find the one 
	// that corresponds to the given file name

	TCHAR* p = szDrives;

	do
	{
		_ASSERTE( !IsBadStringPtr( p, UINT_MAX ) );

		TCHAR szDrive[3] = _T(" :");
		_tcsncpy( szDrive, p, 2 );

		TCHAR szDevice[cBufSize+1] = {0};

		rv = QueryDosDevice( szDrive, szDevice, cBufSize );

		if( ( rv == 0 ) || ( rv >= cBufSize ) )
		{
			ErrCode = GetLastError();
			_ASSERTE( !_T("QueryDosDevice() failed.") );
		}
		else
		{
			// Is the device name the same as in the file name ?

			size_t DevNameLen = _tcslen( szDevice );

			if( _tcsnicmp( FileName.c_str(), szDevice, DevNameLen ) == 0 )
			{
				// Yes, it is -> Substitute it into the file name

				TCHAR szNewFileName[cBufSize+1] = {0};

				_stprintf( szNewFileName, _T("%s%s"), szDrive, FileName.c_str()+DevNameLen );

				FileName = szNewFileName;

				return; // Complete

			}
		}


		// Proceed to the next drive name 

		while( *p++ );

	}
	while( *p );


	// Drive not found, do not change the file name

}


///////////////////////////////////////////////////////////////////////////////
// GetModuleSize function
//
// This function obtains the size of the module by analyzing the virtual 
// memory information of the process
//

bool GetModuleSize( HANDLE hProcess, LPVOID ImageBase, DWORD& Size )
{
	// Check parameters and preconditions 

	if( hProcess == NULL )
	{
		_ASSERTE( !_T("Process handle is null.") );
		return false;
	}

	if( ImageBase == 0 )
	{
		_ASSERTE( !_T("Module address is null.") );
		return false;
	}


	// Scan the address space of the process and determine where the memory region 
	// allocated for the module ends (that is, we are looking for the first range 
	// of pages whose AllocationBase is not the same as the load address of the module)

	bool bFound = false;

	MEMORY_BASIC_INFORMATION mbi;

	BYTE* QueryAddress = (BYTE*)ImageBase;

	while( !bFound )
	{
		if( VirtualQueryEx( hProcess, QueryAddress, &mbi, sizeof(mbi) ) != sizeof(mbi) )
			break;

		if( mbi.AllocationBase != ImageBase )
		{
			// Found, calculate the module size
			Size = QueryAddress - (BYTE*)ImageBase;
			bFound = true;
			break;
		}

		QueryAddress += mbi.RegionSize;

	}


	// Complete

	return bFound;
}


///////////////////////////////////////////////////////////////////////////////
// Close handle helper
//

void CloseHandleHelper( HANDLE h )
{
	DWORD ErrCode = 0;

	if( ( h != NULL ) && ( h != INVALID_HANDLE_VALUE ) )
	{
		if( !CloseHandle( h ) )
		{
			ErrCode = GetLastError();
			_ASSERTE( !_T("CloseHandle() failed.") );
		}
	}
}


///////////////////////////////////////////////////////////////////////////////
// EnableDebugPrivilege function 
// 
// This function enables or disables debug privilege
//

bool EnableDebugPrivilege( bool Enable ) 
{
	bool Success = false;

	HANDLE hToken = NULL;

	DWORD ec = 0;

	do
	{
		// Open the process' token

		if( !OpenProcessToken( GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &hToken ) )
		{
			ec = GetLastError();
			_ASSERTE( !_T("OpenProcessToken() failed.") );
			break;
		}


		// Lookup the privilege value 

		TOKEN_PRIVILEGES tp; 

		tp.PrivilegeCount = 1;

		if( !LookupPrivilegeValue( NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid ) )
		{
			ec = GetLastError();
			_ASSERTE( !_T("LookupPrivilegeValue() failed.") );
			break;
		}


		// Enable/disable the privilege

		tp.Privileges[0].Attributes = Enable ? SE_PRIVILEGE_ENABLED : 0;

		if( !AdjustTokenPrivileges( hToken, FALSE, &tp, sizeof(tp), NULL, NULL ) )
		{
			ec = GetLastError();
			_ASSERTE( !_T("AdjustPrivilegeValue() failed.") );
			break;
		}


		// Success 

		Success = true;

	}
	while( 0 );


	// Cleanup

	if( hToken != NULL ) 
	{
		if( !CloseHandle( hToken ) )
		{
			ec = GetLastError();
			_ASSERTE( !_T("CloseHandle() failed.") );
		}
	}


	// Complete 

	return Success;

}


///////////////////////////////////////////////////////////////////////////////
// Help and logo printers 
//

void PrintHelp()
{
	_tprintf( _T("Usage:\n") );
	_tprintf( _T("  ExcepMon -p <pid>   attach to the process\n") );
	_tprintf( _T("  ExcepMon <CmdLine>  launch the process\n") );
	_tprintf( _T("\n") );
}

void PrintLogo()
{
	_tprintf( _T("ExcepMon sample application\n") ); 
	_tprintf( _T("Author: Oleg Starodumov (www.debuginfo.com)\n\n") ); 
}


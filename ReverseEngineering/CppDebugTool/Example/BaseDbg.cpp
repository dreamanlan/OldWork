///////////////////////////////////////////////////////////////////////////////
//
// BaseDbg.cpp
// 
// Author: Oleg Starodumov (www.debuginfo.com)
//
//


///////////////////////////////////////////////////////////////////////////////
// Description
//
// This example shows how to perform the following tasks:
//   * Start an application under debugger
//   * Attach the debugger to a process
//   * Implement the debugging loop
//   * Process debug events and display meaningful output
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
// BaseDbg -p <pid>   Attach to the specified process
// BaseDbg <CmdLine>  Launch the specified executable, with the specified 
//                    command line parameters
//


///////////////////////////////////////////////////////////////////////////////
// Include files
//

#include <windows.h>
#include <psapi.h>
#include <tchar.h>

#include <stdio.h>
#include <malloc.h>
#include <crtdbg.h>

#include <string>
#include <map>


///////////////////////////////////////////////////////////////////////////////
// Directives
//

#pragma comment ( lib, "psapi.lib" )


///////////////////////////////////////////////////////////////////////////////
// Type definitions
//

typedef std::basic_string<TCHAR>  TString;


///////////////////////////////////////////////////////////////////////////////
// CDebugger class declaration
//
// This class wraps the basic Debugging API operations and debug event processing
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
	virtual void OnCreateThreadEvent( DWORD ThreadId );
	virtual void OnExitThreadEvent( DWORD ThreadId );
	virtual void OnLoadModuleEvent( LPVOID ImageBase, HANDLE hFile );
	virtual void OnUnloadModuleEvent( LPVOID ImageBase );
	virtual void OnExceptionEvent( DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Info );
	virtual void OnDebugStringEvent( DWORD ThreadId, const OUTPUT_DEBUG_STRING_INFO& Info );
	virtual void OnTimeout();


protected:

	// Type definitions

	typedef std::map<LPVOID, TString> ModuleNameColl_t;


protected:

	// Data members

			// Process handle
		HANDLE m_hProcess;

			// Collection of module names
		ModuleNameColl_t m_ModuleNames;

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


	// Complete

	return 0;
}


///////////////////////////////////////////////////////////////////////////////
// CDebugger - constructors / destructor 
//

CDebugger::CDebugger()
: m_hProcess( NULL )
{
	// no actions
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
// This function attaches the debugger to the specified process
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
// This function implements the debugging loop and handles the debug events
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
				OnCreateThreadEvent( DebugEvent.dwThreadId );
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
				OnCreateThreadEvent( DebugEvent.dwThreadId );

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
	_tprintf( _T("PROCESS CREATE: %u\n"), ProcessId );
}

void CDebugger::OnExitProcessEvent( DWORD ProcessId )
{
	_tprintf( _T("PROCESS EXIT: %u\n"), ProcessId );
}

void CDebugger::OnCreateThreadEvent( DWORD ThreadId )
{
	_tprintf( _T("THREAD CREATE: %u\n"), ThreadId );
}

void CDebugger::OnExitThreadEvent( DWORD ThreadId )
{
	_tprintf( _T("THREAD EXIT: %u\n"), ThreadId );
}

void CDebugger::OnLoadModuleEvent( LPVOID ImageBase, HANDLE hFile )
{
	// Check parameters and preconditions

	if( m_hProcess == NULL )
	{
		_ASSERTE( !_T("Debuggee process handle is NULL.") );
		return;
	}


	// Obtain the module name and save it for future use

	TString ImageName; 

	if( !GetFileNameFromHandle( hFile, ImageName ) )
		ImageName = _T(""); // for safety

	m_ModuleNames[ImageBase] = ImageName;


	// Obtain the module size and the address range occupied by the module

	DWORD ModuleSize = 0;

	if( !GetModuleSize( m_hProcess, ImageBase, ModuleSize ) )
	{
		ModuleSize = 0; // Just in case
		_ASSERTE( !_T("GetModuleSize() failed.") );
	}

	LPVOID ImageEnd = (BYTE*)ImageBase + ModuleSize;


	// Report the event

	_tprintf( _T("MODULE LOAD: %08p-%08p %s\n"), ImageBase, ImageEnd, ImageName.c_str() );
}

void CDebugger::OnUnloadModuleEvent( LPVOID ImageBase )
{
	// Obtain the module name

	TString ImageName( _T("<unknown>") );

	ModuleNameColl_t::iterator pm = m_ModuleNames.find( ImageBase );

	if( pm != m_ModuleNames.end() )
		ImageName = pm->second;


	// Report the event

	_tprintf( _T("MODULE UNLOAD: %08p %s\n"), ImageBase, ImageName.c_str() );


	// Remove the module name from the collection

	m_ModuleNames.erase( pm );

}

void CDebugger::OnExceptionEvent( DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Info )
{
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
	_tprintf( _T("  BaseDbg -p <pid>   attach to the process\n") );
	_tprintf( _T("  BaseDbg <CmdLine>  launch the process\n") );
	_tprintf( _T("\n") );
}

void PrintLogo()
{
	_tprintf( _T("BaseDbg sample application\n") ); 
	_tprintf( _T("Author: Oleg Starodumov (www.debuginfo.com)\n\n") ); 
}


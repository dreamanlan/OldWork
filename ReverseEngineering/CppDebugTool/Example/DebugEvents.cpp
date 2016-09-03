///////////////////////////////////////////////////////////////////////////////
//
// DebugEvents.cpp
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
//   * Process debug events (only raw data is displayed)
//
// In additional, the following implementation details can be interesting:
//   * What handles are passed to the debugger by the Debugging API, 
//     how the debugger should work with those handles, which of them should 
//     be closed, etc.
//


///////////////////////////////////////////////////////////////////////////////
// Usage:
//
// DebugEvents -p <pid>   Attach to the specified process
// DebugEvents <CmdLine>  Launch the specified executable, with the specified 
//                        command line parameters
//


///////////////////////////////////////////////////////////////////////////////
// Include files
//

#include <windows.h>
#include <tchar.h>

#include <stdio.h>
#include <malloc.h>
#include <crtdbg.h>

#include <string>


///////////////////////////////////////////////////////////////////////////////
// Type definitions
//

typedef std::basic_string<TCHAR>  TString;


///////////////////////////////////////////////////////////////////////////////
// Function declarations
//

	// Start debugging
bool StartProcess( const TString& FileName, const TString& CmdLine );
bool AttachToProcess( DWORD ProcessId );

	// Debug loop
bool DebugLoop( DWORD Timeout = INFINITE );

	// Debug event reporting
void ReportCreateProcessEvent( DWORD ProcessId, DWORD ThreadId, const CREATE_PROCESS_DEBUG_INFO& Event );
void ReportExitProcessEvent( DWORD ProcessId, DWORD ThreadId, const EXIT_PROCESS_DEBUG_INFO& Event );
void ReportCreateThreadEvent( DWORD ProcessId, DWORD ThreadId, const CREATE_THREAD_DEBUG_INFO& Event );
void ReportExitThreadEvent( DWORD ProcessId, DWORD ThreadId, const EXIT_THREAD_DEBUG_INFO& Event );
void ReportLoadDllEvent( DWORD ProcessId, DWORD ThreadId, const LOAD_DLL_DEBUG_INFO& Event );
void ReportUnloadDllEvent( DWORD ProcessId, DWORD ThreadId, const UNLOAD_DLL_DEBUG_INFO& Event );
void ReportExceptionEvent( DWORD ProcessId, DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Event );
void ReportDebugStringEvent( DWORD ProcessId, DWORD ThreadId, const OUTPUT_DEBUG_STRING_INFO& Event );
void ReportRipEvent( DWORD ProcessId, DWORD ThreadId, const RIP_INFO& Event );
void ReportTimeout( DWORD Timeout );

	// Get debuggee command line
bool GetDebuggeeCommandLine( int argc, TCHAR* argv[], int StartIndex, TString& CmdLine );

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

		if( !AttachToProcess( ProcessId ) )
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

		if( !StartProcess( _T(""), CmdLine ) )
		{
			_tprintf( _T("StartProcess() failed.\n") );
			return 0;
		}

	}


	// Enter the debug loop

	DebugLoop();


	// Complete

	return 0;
}


///////////////////////////////////////////////////////////////////////////////
// StartProcess() function
//
// This function starts the specified executable under debugger
//

bool StartProcess( const TString& FileName, const TString& CmdLine )
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
// AttachToProcess() function
//
// This function attaches the debugger to the specified process
//

bool AttachToProcess( DWORD ProcessId )
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
// DebugLoop() function 
//
// This function implements the debugging loop and handles the debug events
//

bool DebugLoop( DWORD Timeout )
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
				ReportCreateProcessEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                          DebugEvent.u.CreateProcessInfo );
				
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

				{
					HANDLE hFile = DebugEvent.u.CreateProcessInfo.hFile;

					if( ( hFile != NULL ) && ( hFile != INVALID_HANDLE_VALUE ) )
					{
						if( !CloseHandle( hFile ) )
						{
							_tprintf( _T("CloseHandle(hFile) failed. Error: %u\n"), GetLastError() );
							_ASSERTE( !_T("CloseHandle(hFile) failed.") );
						}
					}
				}

				break;

			case EXIT_PROCESS_DEBUG_EVENT:
				ReportExitProcessEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                        DebugEvent.u.ExitProcess );
				bContinue = false; // Last event - exit the loop
				break;

			case CREATE_THREAD_DEBUG_EVENT:
				ReportCreateThreadEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                         DebugEvent.u.CreateThread );

				// With this event, the debugger receives the following handle:
				//   CREATE_THREAD_DEBUG_INFO.hThread  - handle to the thread that has been created
				// 
				// This handle will be closed by the operating system 
				// when the debugger calls ContinueDebugEvent after receiving 
				// EXIT_THREAD_DEBUG_EVENT for the given thread
				// 

				break;

			case EXIT_THREAD_DEBUG_EVENT:
				ReportExitThreadEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                       DebugEvent.u.ExitThread );
				break;

			case LOAD_DLL_DEBUG_EVENT:
				ReportLoadDllEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                    DebugEvent.u.LoadDll );
				
				// With this event, the debugger receives the following handle:
				//   LOAD_DLL_DEBUG_INFO.hFile    - handle to the DLL file 
				// 
				// This handle should be closed by the debugger, when the handle 
				// is no longer needed
				//

				{
					HANDLE hFile = DebugEvent.u.LoadDll.hFile;

					if( ( hFile != NULL ) && ( hFile != INVALID_HANDLE_VALUE ) )
					{
						if( !CloseHandle( hFile ) )
						{
							_tprintf( _T("CloseHandle(hFile) failed. Error: %u\n"), GetLastError() );
							_ASSERTE( !_T("CloseHandle(hFile) failed.") );
						}
					}
				}

					// Note: Closing the file handle here can lead to the following side effect:
					//   After the file has been closed, the handle value will be reused 
					//   by the operating system, and if the next "load dll" debug event 
					//   comes (for another DLL), it can contain the file handle with the same 
					//   value (but of course the handle now refers to that another DLL). 
					//   Don't be surprised!
					//

				break;

			case UNLOAD_DLL_DEBUG_EVENT:
				ReportUnloadDllEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                      DebugEvent.u.UnloadDll );
				break;

			case OUTPUT_DEBUG_STRING_EVENT:
				ReportDebugStringEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                        DebugEvent.u.DebugString );
				break;

			case RIP_EVENT:
				ReportRipEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                DebugEvent.u.RipInfo );
				break;

			case EXCEPTION_DEBUG_EVENT:
				ReportExceptionEvent( DebugEvent.dwProcessId, DebugEvent.dwThreadId, 
				                      DebugEvent.u.Exception );

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
				// Yes, report timeout and continue 
				ReportTimeout( Timeout );
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
// Debug event reporting functions
//

void ReportCreateProcessEvent( DWORD ProcessId, DWORD ThreadId, const CREATE_PROCESS_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: Process creation\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  CREATE_PROCESS_DEBUG_INFO members:\n") );
	_tprintf( _T("    hFile:                  %08p\n"), Event.hFile );
	_tprintf( _T("    hProcess:               %08p\n"), Event.hProcess );
	_tprintf( _T("    hThread                 %08p\n"), Event.hThread );
	_tprintf( _T("    lpBaseOfImage:          %08p\n"), Event.lpBaseOfImage );
	_tprintf( _T("    dwDebugInfoFileOffset:  %08x\n"), Event.dwDebugInfoFileOffset );
	_tprintf( _T("    nDebugInfoSize:         %08x\n"), Event.nDebugInfoSize );
	_tprintf( _T("    lpThreadLocalBase:      %08p\n"), Event.lpThreadLocalBase );
	_tprintf( _T("    lpStartAddress:         %08p\n"), Event.lpStartAddress );
	_tprintf( _T("    lpImageName:            %08p\n"), Event.lpImageName );
	_tprintf( _T("    fUnicode:               %u\n"), Event.fUnicode );

}

void ReportExitProcessEvent( DWORD ProcessId, DWORD ThreadId, const EXIT_PROCESS_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: Process exit\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  EXIT_PROCESS_DEBUG_INFO members:\n") );
	_tprintf( _T("    dwExitCode:             %u\n"), Event.dwExitCode );

}

void ReportCreateThreadEvent( DWORD ProcessId, DWORD ThreadId, const CREATE_THREAD_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: Thread creation\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  CREATE_THREAD_DEBUG_INFO members:\n") );
	_tprintf( _T("    hThread                 %08p\n"), Event.hThread );
	_tprintf( _T("    lpThreadLocalBase:      %08p\n"), Event.lpThreadLocalBase );
	_tprintf( _T("    lpStartAddress:         %08p\n"), Event.lpStartAddress );

}

void ReportExitThreadEvent( DWORD ProcessId, DWORD ThreadId, const EXIT_THREAD_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: Thread exit\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  EXIT_THREAD_DEBUG_INFO members:\n") );
	_tprintf( _T("    dwExitCode:             %u\n"), Event.dwExitCode );

}

void ReportLoadDllEvent( DWORD ProcessId, DWORD ThreadId, const LOAD_DLL_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: DLL loaded\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  LOAD_DLL_DEBUG_INFO members:\n") );
	_tprintf( _T("    hFile:                  %08p\n"), Event.hFile );
	_tprintf( _T("    lpBaseOfDll:            %08p\n"), Event.lpBaseOfDll );
	_tprintf( _T("    dwDebugInfoFileOffset:  %08x\n"), Event.dwDebugInfoFileOffset );
	_tprintf( _T("    nDebugInfoSize:         %08x\n"), Event.nDebugInfoSize );
	_tprintf( _T("    lpImageName:            %08p\n"), Event.lpImageName );
	_tprintf( _T("    fUnicode:               %u\n"), Event.fUnicode );

}

void ReportUnloadDllEvent( DWORD ProcessId, DWORD ThreadId, const UNLOAD_DLL_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: DLL unloaded\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  UNLOAD_DLL_DEBUG_INFO members:\n") );
	_tprintf( _T("    lpBaseOfDll:            %08p\n"), Event.lpBaseOfDll );

}

void ReportExceptionEvent( DWORD ProcessId, DWORD ThreadId, const EXCEPTION_DEBUG_INFO& Event )
{
	_tprintf( _T("EVENT: Exception\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  EXCEPTION_DEBUG_INFO members:\n") );
	_tprintf( _T("    dwFirstChance:          %u\n"), Event.dwFirstChance );
	_tprintf( _T("    EXCEPTION_RECORD members:\n") );
	_tprintf( _T("      ExceptionCode:        %08x\n"), Event.ExceptionRecord.ExceptionCode );
	_tprintf( _T("      ExceptionFlags:       %08x\n"), Event.ExceptionRecord.ExceptionFlags );
	_tprintf( _T("      ExceptionRecord:      %08p\n"), Event.ExceptionRecord.ExceptionRecord );
	_tprintf( _T("      ExceptionAddress:     %08p\n"), Event.ExceptionRecord.ExceptionAddress );
	_tprintf( _T("      NumberParameters:     %u\n"), Event.ExceptionRecord.NumberParameters );

	DWORD NumParameters = Event.ExceptionRecord.NumberParameters;

	if( NumParameters > EXCEPTION_MAXIMUM_PARAMETERS )
		NumParameters = EXCEPTION_MAXIMUM_PARAMETERS;

	for( DWORD i = 0; i < NumParameters; i++ )
		_tprintf( _T("      ExceptionInformation[%d]:     %08p\n"), i, Event.ExceptionRecord.ExceptionInformation[i] );

}

void ReportDebugStringEvent( DWORD ProcessId, DWORD ThreadId, const OUTPUT_DEBUG_STRING_INFO& Event )
{
	_tprintf( _T("EVENT: Debug string\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  OUTPUT_DEBUG_STRING_INFO members:\n") );
	_tprintf( _T("    lpDebugStringData:      %08p\n"), Event.lpDebugStringData );
	_tprintf( _T("    fUnicode:               %u\n"), Event.fUnicode );
	_tprintf( _T("    nDebugStringLength:     %u\n"), Event.nDebugStringLength );

}

void ReportRipEvent( DWORD ProcessId, DWORD ThreadId, const RIP_INFO& Event )
{
	_tprintf( _T("EVENT: RIP\n") );

	_tprintf( _T("  ProcessId:                %u\n"), ProcessId );
	_tprintf( _T("  ThreadId:                 %u\n"), ThreadId );

	_tprintf( _T("  RIP_INFO members:\n") );
	_tprintf( _T("    dwError:                %08x\n"), Event.dwError );
	_tprintf( _T("    dwType:                 %08x\n"), Event.dwType );

}

void ReportTimeout( DWORD Timeout )
{
	_tprintf( _T("TIMEOUT: %u milliseconds\n"), Timeout );
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
	_tprintf( _T("  DebugEvents -p <pid>   attach to the process\n") );
	_tprintf( _T("  DebugEvents <CmdLine>  launch the process\n") );
	_tprintf( _T("\n") );
}

void PrintLogo()
{
	_tprintf( _T("DebugEvents sample application\n") ); 
	_tprintf( _T("Author: Oleg Starodumov (www.debuginfo.com)\n\n") ); 
}


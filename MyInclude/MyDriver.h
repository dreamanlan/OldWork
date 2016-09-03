#pragma once

#include "ExterCommon.h"

template<typename T>
class MyDriver : public IDispatch
{
public:
	virtual HANDLE __stdcall Load( BSTR sName, BSTR sPath )
	{
		SC_HANDLE	schSCManager=(SC_HANDLE)INVALID_HANDLE_VALUE;
		BOOL		okay=FALSE;
		HANDLE		hDevice=INVALID_HANDLE_VALUE;

		CString Name(sName);
		CString Path(sPath);
		m_Error=0;

		schSCManager = OpenSCManager( NULL, NULL, SC_MANAGER_ALL_ACCESS );

		// Remove old instances
		RemoveDriver( schSCManager, Name );

		// Ignore success of installation: it may already be installed.
		InstallDriver( schSCManager, Name, Path );

		// Ignore success of start: it may already be started.
		StartDriver( schSCManager, Name );

		// Do make sure we can open it.
		okay = OpenDevice( Name, &hDevice );
		if(FALSE==okay)
		{
			m_Error = GetLastError();
		}
		CloseServiceHandle( schSCManager );

		return hDevice;
	}
	virtual BOOL __stdcall Unload( BSTR sName )
	{
		SC_HANDLE	schSCManager=(SC_HANDLE)INVALID_HANDLE_VALUE;
		CString Name(sName);
		m_Error=0;

		schSCManager = OpenSCManager(	NULL,                 // machine (NULL == local)
			NULL,                 // database (NULL == default)
			SC_MANAGER_ALL_ACCESS // access required
			);

		StopDriver( schSCManager, Name );
		RemoveDriver( schSCManager, Name );

		CloseServiceHandle( schSCManager );

		return TRUE;
	}
	virtual DWORD __stdcall IoControl(DWORD handle,DWORD code,DWORD bufferIn,DWORD inSize,DWORD outBuffer,DWORD outSize)
	{
		m_Error=0;
		DWORD bytesReturn=(DWORD)-1;
		if(FALSE==DeviceIoControl((HANDLE)handle,code,(LPVOID)bufferIn,inSize,(LPVOID)outBuffer,outSize,&bytesReturn,NULL))
		{
			bytesReturn=(DWORD)-1;
			m_Error=GetLastError();
		}
		return bytesReturn;
	}
	virtual DWORD __stdcall get_Error(void)
	{
		return m_Error;
	}
public:
	BEGIN_INTF(MyDriver)	
		METHOD(Load)
		METHOD(Unload)
		METHOD(IoControl)
		PROPERTYGET(Error,true)
	END_INTF()
public:
	MyDriver():owner(NULL),m_Error(0)
	{}
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	static inline BOOL InstallDriver( IN SC_HANDLE SchSCManager, IN LPCTSTR DriverName, IN LPCTSTR ServiceExe )
	{
		SC_HANDLE  schService=(SC_HANDLE)INVALID_HANDLE_VALUE;

		//
		// NOTE: This creates an entry for a standalone driver. If this
		//       is modified for use with a driver that requires a Tag,
		//       Group, and/or Dependencies, it may be necessary to
		//       query the registry for existing driver information
		//       (in order to determine a unique Tag, etc.).
		//

		schService = CreateService( SchSCManager,          // SCManager database
			DriverName,           // name of service
			DriverName,           // name to display
			SERVICE_ALL_ACCESS,    // desired access
			SERVICE_KERNEL_DRIVER, // service type
			SERVICE_DEMAND_START,  // start type
			SERVICE_ERROR_IGNORE,  // error control type
			ServiceExe,            // service's binary
			NULL,                  // no load ordering group
			NULL,                  // no tag identifier
			NULL,                  // no dependencies
			NULL,                  // LocalSystem account
			NULL                   // no password
			);
		if ( schService == NULL )
			return FALSE;

		CloseServiceHandle( schService );

		return TRUE;
	}
	static inline BOOL StartDriver( IN SC_HANDLE SchSCManager, IN LPCTSTR DriverName )
	{
		SC_HANDLE  schService=(SC_HANDLE)INVALID_HANDLE_VALUE;
		BOOL       ret=FALSE;

		schService = OpenService( SchSCManager,
			DriverName,
			SERVICE_ALL_ACCESS
			);
		if ( schService == NULL )
			return FALSE;

		ret = StartService( schService, 0, NULL )
			|| GetLastError() == ERROR_SERVICE_ALREADY_RUNNING 
			|| GetLastError() == ERROR_SERVICE_DISABLED;

		CloseServiceHandle( schService );
		return ret;
	}
	static inline BOOL OpenDevice( IN LPCTSTR DriverName, HANDLE * lphDevice )
	{
		TCHAR    completeDeviceName[64];
		HANDLE   hDevice=INVALID_HANDLE_VALUE;

		//
		// Create a \\.\XXX device name that CreateFile can use
		//
		// NOTE: We're making an assumption here that the driver
		//       has created a symbolic link using it's own name
		//       (i.e. if the driver has the name "XXX" we assume
		//       that it used IoCreateSymbolicLink to create a
		//       symbolic link "\DosDevices\XXX". Usually, there
		//       is this understanding between related apps/drivers.
		//
		//       An application might also peruse the DEVICEMAP
		//       section of the registry, or use the QueryDosDevice
		//       API to enumerate the existing symbolic links in the
		//       system.
		//

		if( (GetVersion() & 0xFF) >= 5 ) {

			//
			// We reference the global name so that the application can
			// be executed in Terminal Services sessions on Win2K
			//
			wsprintf( completeDeviceName, TEXT("\\\\.\\Global\\%s"), DriverName );

		} else {

			wsprintf( completeDeviceName, TEXT("\\\\.\\%s"), DriverName );
		}

		hDevice = CreateFile( completeDeviceName,
			GENERIC_READ | GENERIC_WRITE,
			0,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			NULL
			);
		if ( hDevice == ((HANDLE)-1) )
			return FALSE;

		// If user wants handle, give it to them.  Otherwise, just close it.
		if ( lphDevice )
			*lphDevice = hDevice;
		else
			CloseHandle( hDevice );

		return TRUE;
	}
	static inline BOOL StopDriver( IN SC_HANDLE SchSCManager, IN LPCTSTR DriverName )
	{
		SC_HANDLE       schService=(SC_HANDLE)INVALID_HANDLE_VALUE;
		BOOL            ret=FALSE;
		SERVICE_STATUS  serviceStatus;

		ZeroMemory(&serviceStatus,sizeof(serviceStatus));

		schService = OpenService( SchSCManager, DriverName, SERVICE_ALL_ACCESS );
		if ( schService == NULL )
			return FALSE;

		ret = ControlService( schService, SERVICE_CONTROL_STOP, &serviceStatus );

		CloseServiceHandle( schService );

		return ret;
	}
	static inline BOOL RemoveDriver( IN SC_HANDLE SchSCManager, IN LPCTSTR DriverName )
	{
		SC_HANDLE  schService=(SC_HANDLE)INVALID_HANDLE_VALUE;
		BOOL       ret=FALSE;

		schService = OpenService( SchSCManager,
			DriverName,
			SERVICE_ALL_ACCESS
			);

		if ( schService == NULL )
			return FALSE;

		ret = DeleteService( schService );
		CloseServiceHandle( schService );
		return ret;
	}
private:
	T* owner;
	DWORD m_Error;
};
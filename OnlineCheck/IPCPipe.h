#pragma once

#define PIPE_BUFFER_SIZE 64*1024

#define COMMAND_PAUSE				0x00000001
#define COMMAND_CONTINUE			0x00000002
#define COMMAND_PROXY_RELOAD		0x00000003
#define COMMAND_PROXY_APPEND		0x00000004

#define PIPE_STATUS_READ			0
#define PIPE_STATUS_WRITE			1
#define PIPE_STATUS_CONNECT			2
#define PIPE_STATUS_NUM				3

struct CommandPackageHead
{
	DWORD Command;
	DWORD Size;
};
struct ProxyData
{
	DWORD IP;
	DWORD Port;
};

class Schedule;
class IPCPipe
{
	IPCPipe(Schedule* ptr,HANDLE event);
public:
	~IPCPipe(void);
	static UINT WINAPI CommandThread(LPVOID obj);
private:
	void Exec(void);
	void DoRead(void);
	void DoWrite(void);
	void DoConnect(void);
private:
	HANDLE hPipe,hEvent;
	OVERLAPPED overlapped;
	int status;
	Schedule* pSchedule;

	char readBuffer[PIPE_BUFFER_SIZE];
	DWORD readPtr;
	char writeBuffer[PIPE_BUFFER_SIZE];
	DWORD writePtr;
};

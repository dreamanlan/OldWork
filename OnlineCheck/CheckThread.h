#pragma once

#define HOSTNAME_LENGTH		512
#define URL_LENGTH			1024
#define SEND_DATA_LENGTH	1024

class Schedule;
class AccessSocket : public CAsyncProxySocket
{
	AccessSocket(void);
public:
	virtual ~AccessSocket();
	static UINT WINAPI CheckThread(LPVOID obj);
protected:
	void OnProxyOperationFailed(int nOpID);
	void OnListenFinished(unsigned long &retProxyIp,int &retProxyPort);
	void OnAccept(int nErrorCode);
	void OnOutOfBandData(int nErrorCode);
	void OnClose(int nErrorCode);
	void OnSend(int nErrorCode);
	void OnReceive(int nErrorCode);
	void OnConnect(int nErrorCode);
private:
	void Init(Schedule* p,HANDLE event,DWORD connindex,DWORD tid);
	CString GetObjInfo(void);
	void StartCount(void);
	void CalcCount(void);
	void PrintError(DWORD err,LPCSTR title);
	void StartCommunication(void);
	void SuccessCommunication(void);
	void EndCommunication(void);
	void ClearCommunication(void);
	bool CheckName(void);
	void Run(void);
private:
	Schedule* pSchedule;
	HANDLE hEvent;
	DWORD connIndex;
	DWORD threadID;

	char* buffer;
	DWORD bufptr;
	unsigned __int64 proxyID;

	DWORD portNum;
	char hostName[HOSTNAME_LENGTH];
	char urlPath[URL_LENGTH];
	char sendTemplate1[SEND_DATA_LENGTH];
	char sendTemplate2[SEND_DATA_LENGTH];
	char sendData[SEND_DATA_LENGTH];

	char curName[32];
	LARGE_INTEGER stTime;
	bool isSuccess;
};

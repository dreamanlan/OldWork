#pragma once

class DebugThread
{
public:
	static DebugThread* Start(void);
	static UINT WINAPI Loop(LPVOID obj);
	static void Terminate(DebugThread*& pObj);
public:
	void Signal(void);
private:
	DebugThread(void);
	~DebugThread(void);
private:
	void TerminateSignal(void);
	inline void OnceWork(void);
private:
	HANDLE hThread;//仅仅代外部记忆，外部函数会在对象实例初始化后赋值，并在实例释放前取回值。

	bool isTerm;
	HANDLE hEvent;
};

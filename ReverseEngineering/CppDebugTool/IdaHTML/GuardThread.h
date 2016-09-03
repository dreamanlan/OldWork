#pragma once

//GuardThread的作用是作为后台线程将所有GUI请求转发到前台线程统一处理。
//转发机制为：
//	  Event=>GuardThread=>MSG=>GUI Thread

class GuardThread
{
public:
	static GuardThread* Start(void);
	static UINT WINAPI Loop(LPVOID obj);
	static void Terminate(GuardThread*& pObj);
public:
	void Signal(void);
private:
	GuardThread(void);
	~GuardThread(void);
private:
	void TerminateSignal(void);
	inline void OnceWork(void);
private:
	HANDLE hThread;//仅仅代外部记忆，外部函数会在对象实例初始化后赋值，并在实例释放前取回值。

	bool isTerm;
	HANDLE hEvent;
};

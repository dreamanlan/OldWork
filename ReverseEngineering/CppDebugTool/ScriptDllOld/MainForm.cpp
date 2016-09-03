#include "StdAfx.h"
#include "MainForm.h"

void ShowMainForm(void)
{
	ScriptDllOld::MainForm* pMainForm=new ScriptDllOld::MainForm();
	pMainForm->Show();
	Application::Run();
}
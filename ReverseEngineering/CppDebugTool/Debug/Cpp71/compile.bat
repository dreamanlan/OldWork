cpp\cl.exe /MD /LD /Fotemp\temp.obj /Fetemp\temp.dll HookScript.cpp
copy temp\temp.dll HookScript.dll
del temp\*.*
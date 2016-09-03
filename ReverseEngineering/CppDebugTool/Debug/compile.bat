cpp\cl.exe /LD /FA /Fotemp\temp.obj /Fetemp\temp.dll HookScript.cpp
copy temp\temp.dll HookScript.dll
del /Q temp\*.*

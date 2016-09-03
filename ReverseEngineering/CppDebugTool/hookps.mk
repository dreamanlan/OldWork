
hookps.dll: dlldata.obj hook_p.obj hook_i.obj
	link /dll /out:hookps.dll /def:hookps.def /entry:DllMain dlldata.obj hook_p.obj hook_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del hookps.dll
	@del hookps.lib
	@del hookps.exp
	@del dlldata.obj
	@del hook_p.obj
	@del hook_i.obj

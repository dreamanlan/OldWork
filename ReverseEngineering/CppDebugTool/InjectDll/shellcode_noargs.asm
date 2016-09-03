.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	nop
	nop
	call Delta
Delta:
	pop ebp
	lea eax, [ebp + (offset ApiName - Delta)]
	push eax
	mov eax, [esp+8]
	push eax
	call dword ptr [ebp + (offset ApiGetProcAddress - Delta)]
	test eax ,eax
	jz Quit
	mov edi, eax
	call edi
Quit:	
	retn 4
	
ApiGetProcAddress dd ? ;fill in runtime
ApiName db ? ;fill in runtime

end start

end
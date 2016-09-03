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
	mov eax, [ebp + (offset ApiNamePtr - Delta)]
	push eax
	mov eax, [esp+8]
	push eax
	call dword ptr [ebp + (offset ApiGetProcAddress - Delta)]
	test eax ,eax
	jz Quit
	mov edi, eax
	mov ecx,[ebp + (offset ArgNum - Delta)]
	lea edx,[ebp + (offset ArgsPtr - Delta)]
	mov eax,ecx
	shl eax,2
	add eax,edx
PushArgs:	
	sub eax,4
	push [eax]
	loop PushArgs
	call edi
Quit:	
	retn 4
	
ApiGetProcAddress dd ? ;fill in runtime
ArgNum dd ? ;fill in runtime
ApiNamePtr dd ? ;fill in runtime
ArgsPtr dd ? ;fill in runtime

end start

end
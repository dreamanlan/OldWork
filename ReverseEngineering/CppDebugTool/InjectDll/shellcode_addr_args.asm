.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	call Delta
Delta:
	pop ebp
	mov edi,[esp+4]
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
	
ArgNum dd ? ;fill in runtime
ArgsPtr dd ? ;fill in runtime

end start

end
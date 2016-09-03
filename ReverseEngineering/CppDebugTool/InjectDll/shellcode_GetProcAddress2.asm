.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	call Delta
Delta:
	pop ebp
	mov eax, [ebp + (offset ApiOrdinal - Delta)]
	push eax
	mov eax, [ebp + (offset ModuleHandle - Delta)]
	push eax	
	mov eax, [esp+0ch]
	call eax
	retn 4
	
ModuleHandle dd 0 ;fill in runtime
ApiOrdinal dd 0 ;fill in runtime

end start

end
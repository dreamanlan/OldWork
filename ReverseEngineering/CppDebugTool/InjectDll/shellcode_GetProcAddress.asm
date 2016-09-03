.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	call Delta
Delta:
	pop ebp
	lea eax, [ebp + (offset ApiName - Delta)]
	push eax
	mov eax, [ebp + (offset ModuleHandle - Delta)]
	push eax	
	mov eax, [esp+0ch]
	call eax
	retn 4
	
ModuleHandle dd 0 ;fill in runtime
ApiName dd ? ;

end start

end
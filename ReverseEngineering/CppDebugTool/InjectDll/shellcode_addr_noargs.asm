.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	mov eax, [esp+4]
	call eax
	retn 4
	nop
	nop

end start

end
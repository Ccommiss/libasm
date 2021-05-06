
;char *strcpy(char *dest, const char *src);
; dest = rdi
; src = rsi
global ft_strcpy
SECTION .text
ft_strcpy :
	mov rax, rsi
	ret
; whil :
; 	  ; For example, movsd copies a dword from [ds:esi] to [es:edi] (or rdi in 64-bit mode), and does this:
; 				; With a REP prefix, it does this ECX times,
; 	add rcx, 1
; 	cld
; 	rep	movsb
; 	cmp rsi, 0
; 	je finish ; if yes go to finish

;finish :
;	add rcx, 1
;	sub rsi, rcx
;mov rax, rsi
;	ret


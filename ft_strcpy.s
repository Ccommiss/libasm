
;char *strcpy(char *dest, const char *src);
; dest = rdi
; src = rsi
global ft_strcpy
extern ft_strlen
SECTION .text

ft_strcpy:
	push 	rdi			
	mov 	rdi, rsi	
	call 	ft_strlen
	mov 	rcx, rax
	pop 	rdi		
	mov 	rax, rdi
	rep 	movsb		
	mov 	BYTE [rdi], 0	
	jmp 	end

end:
	ret					; return rax
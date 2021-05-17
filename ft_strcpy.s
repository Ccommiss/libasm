global ft_strcpy
extern ft_strlen
SECTION .text

ft_strcpy:
	push 	rdi				; save rdi (dest str) on top of the stack
	mov 	rdi, rsi		; mov rsi (src str) in rdi
	call 	ft_strlen		; find len of src
	mov 	rcx, rax		; len of src becomes the counter for movsb
	pop 	rdi				; rdi is back (dest str)
	mov 	rax, rdi		;
	rep 	movsb			; copy rsi (src) in rdi (dst) byte per byte and inc both registers
	mov 	BYTE [rdi], 0	; \0
	jmp 	end

end:
	ret					; return rax

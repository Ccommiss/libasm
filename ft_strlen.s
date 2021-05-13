global ft_strlen
SECTION .text



ft_strlen:
	push rbx;
	mov rax, 0 ; reset rax
	mov rcx, -1
    cmp rdi, 0 ; chaine vide 
    je finish     

	mov   rbx, rdi   ; save rdiadd  in rbx
	cld	
    repne scasb ; Scan String (uses sting in RDI) until finding same char as in eax ; The SCAS instruction
				; subtracts the destination string element from the contents of the EAX, AX, or AL register (
				; va incrementer ladresse de rdi genre comme *rdi++
 	sub   rdi, rbx            ; length = dist2 - dist1
 	mov   rax, rdi
	sub	  rax, 1
	jmp	finish
	
finish:
	pop rbx
    ret

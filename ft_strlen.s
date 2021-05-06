global ft_strlen
SECTION .text
ft_strlen:
	mov   rbx, rdi   ;save rdiadd  in rbx
    ;xor eax, eax ; equivalent to  mov eax, 0, 0 but more efficient
	mov rax, 0
    repne scasb ; Scan String (uses sting in RDI) until finding same char as in eax ; The SCAS instruction
				; subtracts the destination string element from the contents of the EAX, AX, or AL register (
				; va incrementer ladresse de rdi genre comme *rdi++
 	sub   rdi, rbx            ; length = dist2 - dist1
 	mov   rax, rdi
	sub		rax, 1
    ret

SECTION .data
msg     db      'Hello World!', 0Ah     ; assign msg variable with your message string

SECTION .text
global  _start

_start:

    mov     rdx, 13     ; number of bytes to write - one for each letter plus 0Ah (line feed character)
    mov     rsi, msg    ; move the memory address of our message string into ecx
    mov     rdi, 1      ; write to the STDOUT file
    mov     rax, 1     ; invoke SYS_WRITE (kernel opcode 4)
	syscall
     ; invoke SYS_EXIT (kernel opcode 1)
	mov		rdi, 0
	mov		rax, 60
	syscall


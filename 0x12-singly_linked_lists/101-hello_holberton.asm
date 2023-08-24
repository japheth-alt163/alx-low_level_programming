section .data
    hello db "Hello, Holberton",0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax  ; Clear RAX register (no floating-point args)
    call printf
    pop rbp

    mov rax, 60   ; syscall: exit
    xor rdi, rdi  ; status: 0
    syscall

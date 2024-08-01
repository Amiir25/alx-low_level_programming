section .data
    fmt db 'Hello, Holberton', 0xA, 0

section .text
    extern printf
    global _start

_start:
    mov rdi, fmt

    mov rax, 0
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall

section .data
    format db "%s", 10, 0
    message db "Hello, Holberton", 0

section .text
    global main

main:
    push rbp
    mov rdi, format
    mov rsi, message
    mov rax, 0 ; can be xor rax, rax
    call printf

    pop rbp
    mov rax, 0 ; normal, no error, return value
    ret

section .data
    format db "Hello, Holberton", 0x0a, 0

section .text
    extern printf

global main

main:
    ; Prepare the format string address
    lea edi, [format]

    ; Call printf
    mov eax, 0
    call printf

    ; Exit the program
    xor edi, edi
    mov eax, 60
    syscall

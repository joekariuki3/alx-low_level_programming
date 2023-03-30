; hello_holberton.asm

global main
extern printf

section .data
    hello db "Hello, Holberton", 10, 0 ; string with a newline character and null terminator

section .text
main:
    ; Prepare the arguments for printf
    lea rdi, [rel hello] ; Load the address of the hello string into RDI
    xor rax, rax          ; Clear RAX (printf uses RAX to store the number of vector registers used for floating point arguments)

    ; Call printf
    call printf

    ; Set the return value and exit
    xor rax, rax ; Clear RAX for return value (0)
    ret

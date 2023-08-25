; Extern declaration of printf function
extern printf

section .text
   global main

main:
   push rbp                 ; Push the base pointer onto the stack

   mov rdi, fmt             ; Load the format string address into rdi
   mov rsi, msg             ; Load the message address into rsi
   mov rax, 0               ; Load the format specifier for the printf call
   call printf              ; Call the printf function

   pop rbp                  ; Pop the base pointer from the stack

   mov rax, 0               ; Set return value to 0
   ret                      ; Return from the main function

section .data
   msg: db "Hello, Holberton", 0 ; Define a null-terminated string with the message
   fmt: db "%s", 10, 0          ; Define a format string ("%s" followed by newline and null terminator)

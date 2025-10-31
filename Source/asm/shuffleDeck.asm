global shuffleDeck

section .text

shuffleDeck: 

    ;rdi = pointer to deck, rsi = deck size
    push rbx
        cmp rsi, 1
        jle done                ;skip shuffle if there is only one element in the array

        mov rcx, rsi            ; move size to rcx
        sub rcx, 1              ;subtract 1, i goes from 0..n-1

loop:                       ;loop through each element of array

retryRand: 
        rdrand eax              ;random number put into eax
        jnc retryRand           ; retry getting rand if carry flag is 0

        ;scale random number to be within bounds
        mul esi           ;multiply random num by n
        mov eax, edx            ;shift to the higher bits; edx holds the higher bits that resulted from multiplying eax and ecx


        mov rdx, [rdi + 8*rcx]
        mov rbx, [rdi + 8*rax]

        mov [rdi + 8*rcx], rbx
        mov [rdi + 8*rax], rdx
    
        sub rcx, 1              ;decrement i

        cmp rcx, 0
        jge loop

done:
    pop rbx
    ret



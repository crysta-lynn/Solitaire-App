;ASM implementation of fisher-yates shuffle, using rdrand to generate
;a random integer, then scaling it down using multiplication and a 
;bit shifting thing that made my brain hurt

global shuffleDeck

section .text

shuffleDeck: 

    ;edi = pointer to deckOrder, esi = deck size
    push rbx
        cmp esi, 1
        jle done                ;skip shuffle if there is only one element in the array

        mov ecx, esi            ; move size to ecx
        sub ecx, 1              ;subtract 1, i goes from 0..n-1

loop:                       ;loop through each element of array

retryRand: 
        rdrand eax              ;random number put into eax
        jnc retryRand           ; retry getting rand if carry flag is 0

        ;scale random number to be within bounds
        mul ecx                 ;multiply random num by n
        mov eax, edx            ;shift to the higher bits; edx holds the higher bits that resulted from multiplying eax and ecx

        ;swap i and 
        mov edx, [rdi + 4*rcx]  
        mov ebx, [rdi + 4*rax]

        mov [rdi + 4*rcx], ebx
        mov [rdi + 4*rax], edx
    
        sub ecx, 1              ;decrement i

        cmp ecx, 0
        jge loop

done:
    pop rbx
    ret



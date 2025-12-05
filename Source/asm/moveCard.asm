global moveCardASM

;rdi = source ptr, rsi = ptr to source size, rdx = destination ptr, rcx = ptr to destination size, r8 = count
;cards are not actually being moved, but ints that correspond to specific cards

section .text
    ;last index in source = source size - 1
    sub rsi, 1
    ;destination index = destination size
    ;current item = last index in source - count
    mov r9, rsi
    sub r9, r8
    ;for (current item ; current item <= last element in source; i += 1) 
    jmp loopTest
    loop:


    add rcx, 1

    loopTest:
    cmp r9, rsi
    jle loop

    ret

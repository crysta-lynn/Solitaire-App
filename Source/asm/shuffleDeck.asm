global shuffleDeck

section .text

shuffleDeck: 
    ;rdi = pointer to deck, rsi = deck size
    rdrand rax

    
ret

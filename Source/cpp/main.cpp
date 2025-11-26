#include <iostream>
#include "card.h"
#include "deck.h"



int main() {
    
    Deck d;   
    d.shuffle();
    d.shuffle();
    d.print();
    return 0;
}
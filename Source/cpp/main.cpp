#include <iostream>
#include "card.h"
#include "deck.h"



int main() {
    
    deck d;   
    std::cout << "Hello, solitaire." << std::endl;
    d.shuffle();

    return 0;
}
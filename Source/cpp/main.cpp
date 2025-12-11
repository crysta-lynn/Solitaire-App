//main.cpp is currently used inplace of the game class to call class 
//functions for debug and testing.
//eventually this will  be used to begin the game

#include <iostream>
#include "card.h"
#include "deck.h"
#include "game.h"



int main() {
    
    Deck d;   
    d.shuffle();
    d.shuffle();
    d.print(); 
    return 0;
}
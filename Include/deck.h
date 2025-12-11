//Deck.h declares the Deck class. The class initializes a standard 52 card
//deck of playing cards. Its member functions are shuffle and print.


#pragma once

#include "card.h"
#include <vector>
#include <array>

class Deck{
private:
    std::vector<Card> deck;
    int deckOrder[52];

public:
    Deck();
    ~Deck();

    void shuffle();

    void print();
};



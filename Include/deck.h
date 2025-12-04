#pragma once

#include "card.h"
#include <vector>

class Deck{
private:
    std::vector<Card> cards;
    int deckOrder[52];

public:
    Deck();
    ~Deck();

    void shuffle();

    void print();
};



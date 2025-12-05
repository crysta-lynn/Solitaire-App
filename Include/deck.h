#pragma once

#include "card.h"
#include <vector>
#include <array>

class Deck{
private:
    std::vector<Card> initialDeck;
    int deckOrder[52];

public:
    Deck();
    ~Deck();

    void shuffle();

    void print();
};



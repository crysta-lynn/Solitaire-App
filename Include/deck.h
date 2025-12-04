#pragma once

#include "card.h"
#include <vector>
#include <array>

const int maxPileSize = 52;

struct pile{ 
    std:: array<int, maxPileSize> cards;
    int size = 0;
};

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



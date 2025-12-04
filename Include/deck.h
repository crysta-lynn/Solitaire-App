#pragma once

#include "card.h"
#include <vector>

struct pile{ 
    std:: vector<Card> cards;
};

class Deck{
private:
    pile initialDeck;
    int deckOrder[52];

public:
    Deck();
    ~Deck();

    void shuffle();

    void print();
};



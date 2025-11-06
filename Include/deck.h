#pragma once

#include "card.h"
#include <vector>

class Deck{
private:
    std::vector<Card> cards;

public:
    Deck();
    ~Deck();

    void shuffle();

    void print();
};



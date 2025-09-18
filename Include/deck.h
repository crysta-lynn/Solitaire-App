#pragma once

#include "card.h"
#include <vector>

class deck{
private:
    std::vector<Card> cards;

public:
    deck();
    ~deck();

    void shuffle();
};
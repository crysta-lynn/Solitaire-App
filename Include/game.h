#pragma once

#include "deck.h"
#include <vector>
#include <array>

struct pile{ 
    std:: vector<Card> cards;
};

class Game {
private:
    Deck deck;

    pile stock;
    pile waste;
    std::array<pile, 7> tableau;
    std::array<pile, 4> foundation;

public:
    Game();

};


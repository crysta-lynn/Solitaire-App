#pragma once

#include "deck.h"
#include <vector>
#include <array>

const int maxPileSize = 52;

struct pile{ 
    std:: array<int, maxPileSize> cards;
    int size = 0;
};

class Game {
private:
    Deck deck;

    pile stock;
    pile waste;
    std::array<pile, 7> tableau;
    std::array<pile, 4> foundation;

    void moveCards(pile source, pile destination, int numberOfCardsToMove);
    void dealTableau();
    void dealRemaining();

public:
    Game();

    void deal();

};


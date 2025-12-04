#pragma once

#include "deck.h"
#include <vector>
#include <array>

class Game {
private:
    Deck deck;

    pile stock;
    pile waste;
    std::array<pile, 7> tableau;
    std::array<pile, 4> foundation;

    void moveCard(pile source, pile destination, int numberOfCardsToMove);
    void dealTableau();
    void dealRemaining();

public:
    Game();

    void deal();

};


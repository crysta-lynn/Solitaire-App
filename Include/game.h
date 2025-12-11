//game.h holds the game class. This class will deal out the cards into
//a klondike solitaire format, with a tableau and stock. The class will
//also manage each pile, including, not only the tableau and stock, but
//the waste and foundation as well.

//Each pile will be made up of an array of integers.


#pragma once

#include "deck.h"
#include <vector>
#include <array>

const int maxPileSize = 52;

struct pile{ 
    std:: array<int, maxPileSize> cards;
    int size = 0;  //amount of cards in the array.
};

class Game {
private:
    Deck deck;

    pile stock;
    pile waste;
    std::array<pile, 7> tableau;
    std::array<pile, 4> foundation;

    void moveCard(pile& source, pile& destination, int count);
    void dealTableau();
    void dealRemaining();

public:
    Game();

    void deal();

};


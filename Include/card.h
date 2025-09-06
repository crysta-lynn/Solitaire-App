#pragma once

enum class rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN , EIGHT, NINE, JACK, QUEEN, KING};
enum class suit {SPADE, CLOVER, HEART, DIAMOND};

class Card {
private:

    rank rank;
    suit suit;    

public:
    card(rank, suit){};
    ~card();
    
    getRank() const;
    getSuit() const;
    
}
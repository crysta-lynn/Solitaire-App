#pragma once

enum class Suit {SPADE, CLOVER, HEART, DIAMOND};

class Card {
private:

    int rank;
    Suit suit;    

public:
    Card();
    ~Card();
    
    int getRank() const;
    Suit getSuit() const;
    
};
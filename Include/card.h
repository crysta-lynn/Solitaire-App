#pragma once

#include <string>
#include <iostream>

enum class Suit {SPADE, CLOVER, HEART, DIAMOND};

class Card {
private:

    int rank;
    Suit suit;    

public:
    Card(Suit suit, int rank);
    ~Card();
    
    int getRank() const;
    Suit getSuit() const;

    std::string toString() const;

};

std::ostream& operator<<(std::ostream& os, const Card& card);
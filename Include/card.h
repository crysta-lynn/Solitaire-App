#pragma once

#include <string>
#include <iostream>

enum Suit : int {SPADE, CLUB, HEART, DIAMOND};

class Card {
private:

    int rank;
    Suit suit;    
    bool faceUp = false;

public:
    Card(Suit suit, int rank, bool faceUp);
    ~Card();
    
    int getRank() const;
    Suit getSuit() const;

    std::string toString() const;

};

std::ostream& operator<<(std::ostream& os, const Card& card);
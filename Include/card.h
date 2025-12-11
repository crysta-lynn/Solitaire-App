//card.h declares a card class to represent individual playing cards 
//with a rank, suit, and face-up state.
//Member functions include getters and a string conversion function.


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
#include "card.h"

Card::Card(Suit suit, int rank, bool faceUp)
: suit{suit}
, rank{rank}
, faceUp{false}
{}

Card::~Card(){}

int Card::getRank() const {
    return rank;
}
Suit Card::getSuit() const {
    return suit;
}

std::string Card::toString() const {
    std::string suitString;

    switch (suit) {
        case Suit::HEART:
            suitString = "Hearts"; 
            break;
        case Suit::DIAMOND:
            suitString = "Diamonds";
            break;
        case Suit::CLUB:
            suitString = "Clubs";
            break;
        case Suit::SPADE:
            suitString = "Spades";
            break;
    }

    return std::to_string(rank) + " of " + suitString;
}

std::ostream& operator<<(std::ostream& os, const Card& card) {
    os << card.toString();
    return os;
}
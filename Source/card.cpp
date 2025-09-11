#include "card.h"

Card::Card(){}
Card::~Card(){}

int Card::getRank() const {
    return rank;
}
Suit Card::getSuit() const {
    return suit;
}

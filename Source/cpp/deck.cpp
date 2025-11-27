#include "deck.h"
#include <iostream>

extern "C" void shuffleDeck(Card* cards, int cardsSize);

Deck::Deck() {
   cards.reserve(52);
   
   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         cards.emplace_back(static_cast<Suit>(suit), rank);

      }
   }
}

Deck::~Deck() {};

void Deck::shuffle() {

   shuffleDeck(cards.data(), cards.size());

};

void Deck::print() {
   for (int c = 1; c < cards.size(); c +=1) {
      std::cout << cards[c] << std::endl;
   }
}

#include "deck.h"
#include "random"
#include <iostream>

extern "C" void shuffleDeck(Card* cards, int cardsSize);

deck::deck() {
   cards.reserve(52);
   
   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         cards.emplace_back(static_cast<Suit>(suit), rank);
         std::cout << cards[cardCounter] << std::endl;
         cardCounter += 1;

      }
   }
}

deck::~deck() {};

void deck::shuffle() {
   shuffleDeck(cards.data(), cards.size());
   for (int i = 0; i < cards.size(); i += 1) {
      std::cout << cards[i] << std::endl;
   }
};
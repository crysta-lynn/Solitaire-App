#include "deck.h"
#include <iostream>

extern "C" void shuffleDeck(int* deckOrder, int cardsSize);

Deck::Deck() {
   cards.reserve(52);
   
   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         cards.emplace_back(static_cast<Suit>(suit), rank);
         deckOrder[cardCounter] = cardCounter;
         
         std::cout << deckOrder[cardCounter] << " ";
         cardCounter += 1;
      }
   }
   std::cout << std::endl;
}

Deck::~Deck() {};

void Deck::shuffle() {

   shuffleDeck(deckOrder, cards.size());

};

void Deck::print() {
   for (int c = 1; c < cards.size(); c +=1) {
      std::cout << cards[deckOrder[c]] << std::endl;
   }
}

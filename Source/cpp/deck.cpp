#include "deck.h"
#include <iostream>

extern "C" void shuffleDeck(int* deckOrder, int cardsSize);

Deck::Deck() {

   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         initialDeck.emplace_back(Card(static_cast<Suit>(suit), rank, false));
         deckOrder[cardCounter] = cardCounter;
         
         cardCounter += 1;
      }
   }
}

Deck::~Deck() {};

void Deck::shuffle() {

   shuffleDeck(deckOrder, initialDeck.size());

};

void Deck::print() {
   for (int c = 1; c < initialDeck.size(); c +=1) {
      std::cout << initialDeck[deckOrder[c]] << std::endl;
   }
}

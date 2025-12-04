#include "deck.h"
#include <iostream>

extern "C" void shuffleDeck(int* deckOrder, int cardsSize);

Deck::Deck() {
   initialDeck.cards.reserve(52);
   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         initialDeck.cards.emplace_back(static_cast<Suit>(suit), rank);
         deckOrder[cardCounter] = cardCounter;
         
         cardCounter += 1;
      }
   }
}

Deck::~Deck() {};

void Deck::shuffle() {

   shuffleDeck(deckOrder, initialDeck.cards.size());

};

void Deck::print() {
   for (int c = 1; c < initialDeck.cards.size(); c +=1) {
      std::cout << initialDeck.cards[deckOrder[c]] << std::endl;
   }
}

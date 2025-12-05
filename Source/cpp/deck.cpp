#include "deck.h"
#include <iostream>

// cards will stay in the initial deck,

extern "C" void shuffleDeck(int* deckOrder, int cardsSize);

Deck::Deck() {

   int cardCounter = 0;

   for (int suit = 0; suit < 4; suit += 1) {
      for (int rank = 1; rank <= 13; rank += 1) {

         deck.emplace_back(Card(static_cast<Suit>(suit), rank, false));
         deckOrder[cardCounter] = cardCounter;
         
         cardCounter += 1;
      }
   }
}

Deck::~Deck() {};

void Deck::shuffle() {

   shuffleDeck(deckOrder, deck.size());

};

void Deck::print() {
   for (int c = 1; c < deck.size(); c +=1) {
      std::cout << deck[deckOrder[c]] << std::endl;
   }
}

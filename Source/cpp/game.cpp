#include "game.h"

extern "C" void moveCardASM(int* source, int* sourceSize, int* destination, int* destinationSize, int numberOfCardsToMove);

Game::Game() {
    deck.shuffle();
    deal();
}

//moveCards should move a card at a specific index in the pile and every card above it
void Game::moveCard(pile& source, pile& destination, int count) {
    int* src = source.cards.data();
    int* dest = destination.cards.data();
    moveCardASM(src, &source.size, dest, &destination.size, count);
}

void Game::dealTableau() {
    
}

void Game::dealRemaining() {

}

void Game::deal() {
    
}
#include "game.h"

extern "C" void moveCard(int* source, int sourceSize, int* destination, int destinationSize, int numberOfCardsToMove);

Game::Game() {
    deck.shuffle();
    deal();
}

//moveCards should move a card at a specific index in the pile and every card above it
void Game::moveCards(pile source, pile destination, int pileIndex) {
    int* src = source.cards.data();
    int* dest = destination.cards.data();
    moveCard(src, source.size, dest, destination.size, pileIndex);
}

void Game::dealTableau() {
    
}

void Game::dealRemaining() {

}

void Game::deal() {
    
}
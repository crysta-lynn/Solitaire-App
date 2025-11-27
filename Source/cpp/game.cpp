#include "game.h"

Game::Game(){
    deck.shuffle();
    deal();
}

void Game::deal() {
    for (int pile = 0; pile < 7; pile += 1) {
        for (int row = 0; row <= pile; row += 1) {
             
        }
    }
}
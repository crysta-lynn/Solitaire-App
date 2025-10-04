#include <iostream>
#include "card.h"
#include "deck.h"

extern "C" int test(int, int);

int main() {
    deck d;   
    std::cout << "Hello, solitaire." << std::endl;

    std::cout << std::endl << test(5, 5) << std::endl;


    return 0;
}
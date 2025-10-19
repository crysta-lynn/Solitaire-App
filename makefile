compiler = g++
warning = -Wall -Wextra
version = -std=c++17
include = -IInclude/
sourcePath = Source/cpp/
sourcePathASM = Source/asm/

compile = $(compiler) $(warning) $(version)


all: solitaire

solitaire: $(sourcePath)main.cpp deck.o card.o shuffleDeck.o
	$(compile) $(include) $(sourcePath)main.cpp deck.o card.o shuffleDeck.o -o solitaire

deck.o: $(sourcePath)deck.cpp
	$(compile) $(include) $(sourcePath)deck.cpp -c -o deck.o 

card.o: $(sourcePath)card.cpp
	$(compile) $(include) $(sourcePath)card.cpp -c -o card.o 

shuffleDeck.o: $(sourcePathASM)shuffleDeck.asm
	nasm -felf64 $(sourcePathASM)shuffleDeck.asm -o shuffleDeck.o

clean:
	rm -f *.o solitaire

.PHONY: clean
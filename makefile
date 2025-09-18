compiler = g++
warning = -Wall -Wextra
version = -std=c++17
include = -IInclude/
sourcePath = Source/

compile = $(compiler) $(warning) $(version)





all: solitaire

solitaire: $(sourcePath)main.cpp deck.o card.o
	$(compile) $(include) $(sourcePath)main.cpp deck.o card.o  -o solitaire

deck.o: $(sourcePath)deck.cpp
	$(compile) $(include) $(sourcePath)deck.cpp -c -o deck.o 

card.o: $(sourcePath)card.cpp
	$(compile) $(include) $(sourcePath)card.cpp -c -o card.o 

clean:
	rm -f *.o solitaire

.PHONY: clean
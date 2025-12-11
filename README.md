# Solitaire App
A long term personal project to practice c++. The goal is to create a solitaire application from scratch with c++.

The code in this project defines cards, piles, and a deck, and begins building the game logic of klondike solitaire. A game class will handle dealing and moving cards from pile to pile.

Parts of this program are written in x86-64 assembly for a course project. 


## To Do
- Create card piles
    - Tableau[7] - initially 1 to 7 cards, top card face up.
    - Foundation[4] - initially empty, fill with cards A to King as found, all face up.
    - Stock - filled with the cards that remain after dealing, all face down, move 3 at a time to the waste pile. once empty, refill from waste.
    - waste - initially empty, is filled as you go through the stock. The top 3 cards are visible and the top one is playable. all are face up
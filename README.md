# Solitaire App
A long term personal project. The goal is to create a solitaire application from scratch with c++.
X86_64 assembly will be used to create some functions for a class project


## To Do
- Create card piles
    - Tableau[7] - initially 1 to 7 cards, top card face up.
    - Foundation[4] - initially empty, fill with cards A to King as found, all face up.
    - Stock - filled with the cards that remain after dealing, all face down, move 3 at a time to the waste pile. once empty, refill from waste.
    - waste - initially empty, is filled as you go through the stock. The top 3 cards are visible and the top one is playable. all are face up

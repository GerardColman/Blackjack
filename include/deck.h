//
// Created by gcolm on 29/10/2020.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include <vector>
#include "card.h"
using namespace std;

class Deck {
    vector<Card> cardDeck;
    public:
        Deck(); // fills deck
        Card drawRandCard(); // Draws a random card
        Card drawGivenCard(int value, string suite); //Draws a given card
        void addCard(Card);
        string toString();
        int size();
};


#endif //BLACKJACK_DECK_H

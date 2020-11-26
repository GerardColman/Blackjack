//
// Created by gcolm on 26/11/2020.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H
#include <string>
#include <vector>
#include "card.h"

using namespace std;
class Player {
    private:
        string name = "";
        vector<Card> hand = {};
    public:
        void addToHand(Card newCard);
        string getName();
        Player(string name);
};


#endif //BLACKJACK_PLAYER_H

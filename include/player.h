//
// Created by gcolm on 26/11/2020.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H
#include <string>

class Player {
    private:
        std::string name = "";
    public:
        std::string getName();
        Player();
};


#endif //BLACKJACK_PLAYER_H

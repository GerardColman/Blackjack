//
// Created by gcolm on 26/11/2020.
//

#include "player.h"
Player::Player(string name) {
    this->name = name;
}
string Player::getName() {
    return name;
}
void Player::addToHand(Card newCard) {
    if (hand.size() == 2){
        throw "Cannot add card, hand already full!";
    }else{
        hand.push_back(newCard);
    }
}
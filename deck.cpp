//
// Created by gcolm on 29/10/2020.
//

#include "deck.h"


Deck::Deck() {
    for(int j = 0;j<4;j++) {
        string suite;
        if(j == 0){
            suite = "Hearts";
        }else if(j==1){
            suite = "Diamonds";
        }else if(j==2){
            suite = "Clubs";
        }else if(j==3){
            suite = "Spades";
        }
        for (int i = 1; i <= 13; i++) {
            string value;
            if(i == 1){
                value = "Ace";
            }else if(i==11){
                value = "Jack";
            }else if(i==12){
                value = "Queen";
            }else if(i==13){
                value = "King";
            }else{
                value = to_string(i);
            }
            Card new_card(value, suite);
            cardDeck.push_back(new_card);
        }
    }
}

string Deck::toString() {
    string out;
    for(Card temp : cardDeck){
        out += temp.toString();
    }
    return out;
}

int Deck::size() {
    return cardDeck.size();
}

Card Deck::drawGivenCard(string value, string suite) {
    for(int i = 0;i<cardDeck.size();i++){
        Card temp_card = cardDeck.at(i);
        if(temp_card.getSuite() == suite || temp_card.getValue() == value){
            return temp_card;
        }
    }

}
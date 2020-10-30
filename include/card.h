//
// Created by gcolm on 29/10/2020.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H


#include <string>
using namespace std;
class Card {
    string suite;
    string value;
    public:
        void setValue(string newVal);
        void setSuite(string newSuite);
        string getValue();
        string getSuite();
        Card(string value, string suite);
        string toString();
};


#endif //BLACKJACK_CARD_H

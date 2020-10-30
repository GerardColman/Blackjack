//
// Created by Gerard on 29/10/2020.
//

#include "card.h"


void Card::setValue(string newVal) {
    this->value = newVal;
}

void Card::setSuite(string newSuite) {
    this->suite = newSuite;
}

string Card::getValue() {
    return value;
}

string Card::getSuite() {
    return suite;
}

Card::Card(string value, string suite) {
    this->value = value;
    this->suite = suite;
}

string Card::toString() {
    return getValue() + ", " + getSuite() + "\n";
}

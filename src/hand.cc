#include "hand.h"
#include <iostream>

Hand::Hand(struct Card **pocket):
    pocket(new struct Card *[2]) {} 
    // Initialzing pointer to array of pointers (2 to be exact) of "Struct Card"

// TODO: Write Destructor
Hand::~Hand() {
    delete this->pocket[0];
    delete this->pocket[1];
    delete [] this->pocket;
}

// Function used for testing
void Hand::printHand() {
    std::cout << this->pocket[0]->rank << std::endl;
}

struct Card** Hand::getHand() {
    return this->pocket;
}

void Hand::addCard(struct Card *card, int pos) {
    this->pocket[pos] = card;  
}

bool Hand::suited() {
    if (pocket[0]->suit == pocket[1]->suit) {
        return true;
    } else {
        return false;
    }
}

bool Hand::pair() {
     
    if (pocket[0]->rank == pocket[1]->rank) {
        return true;
    } else {
        return false;
    }
}




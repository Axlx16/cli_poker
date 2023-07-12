#include "player.h"
#include <iostream>

void v1(void) {
    // Creating pointers to "struct Card" that are filled with garbage
    struct Card * c1 = new struct Card;  // Declaration and initialization
    struct Card * c2 = new struct Card;  // Declaration and initialization

    c1->rank = 4; // Filling in the fields of the initialzed "Card" structure
    c1->suit = 2; // Filling in the fields of the initialzed "Card" structure
    c2->rank = 8; // Filling in the fields of the initialzed "Card" structure
    c2->suit = 1; // Filling in the fields of the initialzed "Card" structure
    
    struct Card * c3 = new struct Card;  // Declaration and initialization
    struct Card * c4 = new struct Card;  // Declaration and initialization
    
    c3->rank = 293; // Filling in the fields of the initialzed "Card" structure
    c3->suit = 2; // Filling in the fields of the initialzed "Card" structure
    c4->rank = 8; // Filling in the fields of the initialzed "Card" structure
    c4->suit = 1; // Filling in the fields of the initialzed "Card" structure

    struct Card **p1; // Declaration NOT initialization
    struct Card **p2;

    Hand *myhand = new Hand(p1); // Initialize new "hand object"
    Hand *myotherhand = new Hand(p2);

    myhand->addCard(c1, 0); // Use function from hand class to add value since
                         //     "pocket" is a private field
    myhand->addCard(c2, 1); // Use function from hand class to add value since
                         //     "pocket" is a private field
    
    myotherhand->addCard(c3, 0); // Use function from hand class to add value since
                         //     "pocket" is a private field
    myotherhand->addCard(c4, 1); // Use function from hand class to add value since
                         //     "pocket" is a private field

    Player *myplayer = new Player("Alex", 10000, 2, true, myhand); // Declaration and initialization of player object

    (myplayer->getHand())->printHand(); 
    myplayer->nextHand(myotherhand);
    (myplayer->getHand())->printHand();



    delete myplayer;

}

int main(void) { 

}
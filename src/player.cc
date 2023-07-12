#include "player.h"
#include <iostream>

Player::Player(std::string name, int money, int pos, bool user, Hand *hand): 
    name(name), money(money), pos(pos), hand(hand) {}
    // hand is not being initialized since we are passing a hand pointer to it



std::string Player::getName() {
    return this->name;
}

int Player::getMoney() {
    return this->money;
}

int Player::getPos() {
    return this->pos;
}

void Player::nextPos() {
    // Will require access to number of players
    
}

Hand * Player::getHand() {
    return this->hand; 
}

void Player::nextHand(Hand *new_hand) {
    // Deleting current hand 
    delete hand; // Using the destructor from hand class
    this->hand = new_hand;
}
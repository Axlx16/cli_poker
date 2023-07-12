#include <string>
#include "hand.h"


class Player {
    private: 
        std::string name; 
        int money;          // Amount of money player has
        int pos;            // Current position at the table
        bool user;          // Determines if player is real or a cpu
        Hand *hand;
                

    public:
        Player(std::string name, int money, int pos, bool user, Hand *hand);
        std::string getName();
        int getMoney();
        int getPos();
        void nextPos();
        Hand * getHand();
        void nextHand(Hand *new_hand);
        
};
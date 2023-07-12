
struct Card {
    int rank;       // D = 0, H = 1, C = 2, S = 3                       
    int suit;       // A = 0, ... , K = 12
};

class Hand {
    private: 
        struct Card **pocket;         // Pointer to array of "struct Card" pointers
    
    public:
        Hand(struct Card **pocket);
        ~Hand();
        void printHand(); 
        struct Card** getHand();
        void addCard(struct Card *card, int pos);
        bool suited();
        bool pair();
    
};
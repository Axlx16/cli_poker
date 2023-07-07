#include <string>


class Player {
    private: 
        std::string const& name; 
        int money;
        int pos;        

    public:
        std::string getName();
        int getMoney();
        int getPos();
        int nextPos();
        
};
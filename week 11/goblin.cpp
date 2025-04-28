#include <iostream>

class goblin
{
private:
    /* data */
public:
    goblin(){
        std::cout << "A villanous Goblin has appeared! Fear not, I have a wicked spell for this wicked monster!" << std::endl;
    };
    ~goblin(){
        std::cout << "A-brah-ca-da-brah!\n(The Goblin Violently combusted.)" << std::endl;
    };
};

int main(){
    goblin goblen;
    return 0;
}


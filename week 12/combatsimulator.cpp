#include <iostream>
#include <ctime>

int rolling(int sides){
    return (rand()% sides) + 1;
}

int main(){
    srand(time(0));

    int proHP = 20;
    int proCH = 15;
    int eneHP = 10;
    int eneCH = 12;

    std::cout << "~~ The Battle Begins. ~~" << std::endl;

    while (proHP > 0 && eneHP > 0)
    {
        std::cout << "\n--- Your turn. " << std::endl;
        int proRoll = rolling(20);
        std::cout << "You rolled a " << proRoll << std::endl;
        if (proRoll >= eneCH)
        {
            int proDMG = rolling(8);
            eneHP -= proDMG;
            std::cout << "You struck with all your might and dealt " << proDMG << " damage to the enemy.\nFoe hp: " << eneHP << std::endl;
        }
        else
        {
            std::cout << "You tripped on a pebble instead. (Turn negated.)" << std::endl;
        }

        if (eneHP <= 0)
        {
            break;
        }
        
        std::cout << "\n--- Foe's turn. " << std::endl;
        int eneRoll = rolling(20);
        std::cout << "They rolled a " << proRoll << std::endl;
        if (eneRoll >= proCH)
        {
            int eneDMG = rolling(6);
            proHP -= eneDMG;
            std::cout << "They struck you with their all and dealt " << eneDMG << " damage to you.\nYour hp: " << proHP << std::endl;
        }
        else
        {
            std::cout << "A butterfly flew into their eye (Turn negated.)" << std::endl;
        }

        if (proHP <= 0)
        {
            break;
        }
    }

    if (proHP <= 0)
    {
        std::cout << "You have fallen down and your Foe was VICTORIOUS." << std::endl;
    }
    else
    {
        std::cout << "Your Foe has fallen and you rose VICTORIOUS." << std::endl;
    }
    
    return 0;
}

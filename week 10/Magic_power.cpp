#include <iostream>

class MagicalItem
{
private:
    std::string name; 
    std::string powers;
    int amount;
public:
    MagicalItem(const std::string& name, const std::string& powers, int amount):
    name(name), powers(powers), amount(amount){std::cout << "You call upon " << name << " ( " << powers << " ) as your new power... \n(" << amount << " uses)\n";}

    void shots(){
        if (amount > 0)
        {
            amount --;
            std::cout << "\nYou fire " << name << ".\n" << amount << " in reserve." << std::endl;
        }
        else
        {
            std::cout << name << " has discarded you as its owner. (No usages.)" << std::endl;
        }
    }
};

int main(){
    MagicalItem sword("Sword of the Fallen", "Dark", 7);
    sword.shots();
    sword.shots();
    sword.shots();
    sword.shots();
    sword.shots();
    sword.shots();
    sword.shots();
    sword.shots();

    return 0;
}


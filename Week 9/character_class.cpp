#include <iostream>

enum CharacterClass { Warrior, Mage, Archer, Rogue };

struct Character
{
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Archer: return "Archer";
        case CharacterClass::Rogue: return "Rogue";
        case CharacterClass::Mage: return "Mage";
        default: return "???";
    }
}

int main() {
    Character group[4] = {
        {"John", CharacterClass::Archer, 25, 9.0f},
        {"Slime", CharacterClass::Mage, 20, 7.7f},
        {"Gar", CharacterClass::Warrior, 30, 10.5f},
        {"Demon", CharacterClass::Rogue, 15, 6.0f}
    };

    std::cout << "Members:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Name: " << group[i].name << ", Type: " << classToString(group[i].type) << ", Health: " << group[i].health << ", Strength: " << group[i].strength << std::endl;
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += group[i].health;
    }
    float average = static_cast<float>(sum) / 4.0f;
    
    std::cout << "Health average is: " << average;

    return 0;
}
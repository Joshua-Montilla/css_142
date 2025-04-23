#include <iostream>

void drinkPotion(int& hp, int heal){
    hp += heal;
}

void damageHero(int* hp, int damage){
    *hp -= damage;
}

int main(){
    int hero = 10;

    std::cout << "The Hero starts and finds a health potion. (+20 hp)\n";
    drinkPotion(hero, 20);
    std::cout << "Current HP: " << hero;
    std::cout << "\n\nThe Hero trips down a cliff, nearly killing them. (-25 hp)";
    damageHero(&hero, 25);
    std::cout << "\nCurrent HP: " << hero << std::endl;


    return 0;
}
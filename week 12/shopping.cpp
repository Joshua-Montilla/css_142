#include <iostream>

int main(){
    int startmon = 100;
    int payment = 10;
    int potions = 0;

    std::cout << "Welcome Stranger! We sell potions here, how many you takin'? ";
    std::cin >> potions;
    int costperpotion = potions * payment;
    std::cout << "That'll be... hmmmmmm... " << costperpotion << "G!" << std::endl;

    if (startmon > costperpotion)
    {
        startmon -= costperpotion;
        std::cout << "Pleasure doing business with you, eeheeheeeh.\n(" << startmon << "G left)" << std::endl;
    }
    else
    {
        std::cout << "You can't afford this many, buy less or get out of here." << std::endl;
    }
    
    return 0;
    
}
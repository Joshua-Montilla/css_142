#include <iostream>

void counting(int seconds){
    std::cout << "Going in ";
    for (int i = seconds; i > 0; i--)
    {
        std::cout << i << "..." << std::endl;
    }
    std::cout << "Punch it!" << std::endl;
}

int main(){
    int numbars = 3;
    counting(numbars);
    return 0;
}
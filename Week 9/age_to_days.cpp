#include <iostream>
int main(){
    std::string name;
    int age;
    

    std::cout << "Enter your name:";
    std::getline(std::cin, name);

    std::cout << "Enter your Age:";
    std::cin >> age;
    int days = age * 365;
    std::cout << "Hello, " << name << "! You are about " << days << " days old.";
    
    
    return 0;
}

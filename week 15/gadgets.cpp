#include <iostream>

int main(){
    std::string pocket = "BatClaw";
    std::string hand = "Grapple Gun";

    std::cout << "Currently holding: " << hand << "\nIn pocket: " << pocket << std::endl;

    std::swap(pocket, hand);

    std::cout << "\nCurrently holding: " << hand << "\nIn pocket: " << pocket << std::endl;
}
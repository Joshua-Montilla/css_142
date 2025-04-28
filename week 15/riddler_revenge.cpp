#include <iostream>
#include <utility>
#include <tuple>

std::tuple<int, std::string, bool> getRiddle(){
    return std::make_tuple(7, "What has roots as nobody sees, is taller than trees...", true);
}

int main(){
    int riddlenumber;
    std::string riddlemessage;
    bool solved;

    std::tie(riddlenumber, riddlemessage, solved) = getRiddle();

    std::cout << "Riddle\n " << riddlenumber << " / " << riddlemessage << std::endl;
    std::cout << "Solved? " << (solved ? "Yes!":"No!") << std::endl;

    return 0;
}
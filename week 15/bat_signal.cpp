#include <iostream>

int main(){
    std::pair<std::string, std::string> signal("Joker", "Gotham State Penitentiary");

    std::cout << signal.first << " was last seen around " << signal.second << "!" << std::endl;
}

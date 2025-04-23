#include <iostream>
#include <cmath>

int main(){
    int crew_memb;
    double distance, fuel, ship_weight, life_support;

    std::cout << "Enter distance to new area: ";
    std::cin >> distance;
    std::cout << "Fuel for travel (tons): ";
    std::cin >> fuel;
    std::cout << "Weight of ship (tons): ";
    std::cin >> ship_weight;
    std::cout << "Length of life support (days): ";
    std::cin >> life_support;
    std::cout << "How many people on the ship: ";
    std::cin >> crew_memb;

    double efficiency = (fuel / ship_weight) * 100;
    double speed = (fuel * 10000) / (crew_memb * ship_weight);
    double travel = (distance * 1000000) / speed;

    bool completable = (efficiency >= 20.0) && (life_support >= travel + 10) && (crew_memb >= 2 && crew_memb <= 8) && (ship_weight < 500);

    std::printf("\nFuel efficiency: %.2f percent\nEstimated speed: %.0f km/day\nEstimated travel time: %.0f day(s)", efficiency, speed, travel);

    std::cout << "\nMission Status: ";
    if (completable)
    {
        std::cout << "We will be able to arrive there all good." << std::endl;
    }
    else
    {
        std::cout << "We won't be able to make this." << std::endl;
    }
    
    return 0;
}
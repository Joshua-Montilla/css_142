/*

    Your task:

        This program will make use of conditional statements by checking
        if someone is speeding or not

        In this file, create a main() method, that will perform the following
        algorithm:

            1. Rename this file to SpeedTrap.cpp
            2. Prompt the user to enter an int for the speed limit.
            3. Prompt the user to enter a double for the driver’s speed.
            4. If the speed is legal (i.e. less than or equal to the speed limit),
                Print a message indicating that the speed is legal
            Otherwise,
                Print a message indicating that the driver will receive a speeding ticket.

    Specifications:  
    
        For full credit, your program must meet the following specifications:

        1. Your program must use only a single if statement.
        2. Use meaningful variable names and follow all naming conventions.
        3. Use meaningful prompts to ask the user for the speed limit and the vehicle’s
        speed. (You may assume the user will only enter positive numbers.)
        4. You may choose creative output messages, but the program must print the
        correct message based on the user input.

        Don't forget to put your name and date somewhere at the top of the file!

        
*/
/* 
SpeedTrap 
You will enter a speed limit in which then after that you'll enter if your past or before that speed limit and it will prompt you accordingly.
Joshua Montilla 
 2/16/2025
*/

#include <iostream>

int main() {
    int speed_limit;
    double driver_speed;

    std::cout << "Enter the speed limit: ";
    std::cin >> speed_limit;
    std::cout << "Enter your current speed: ";
    std::cin >> driver_speed; 

    if (driver_speed <= speed_limit) { 
        std::cout << "You are currently moving at the speed limit! keep at it." << std::endl;
    }
    else std::cout << "You must lower your speed before you get a ticket." << std::endl;

    return 0;
}
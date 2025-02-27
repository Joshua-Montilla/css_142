/*

Your task is to create the complete Rectangle class and test it in a .cpp file  as specified here:
    0. Rename this file to RectangleTester.cpp

    - Remember that only ONE .cpp file can have a main() method!

    -The Rectangle Class
        This class will either be declared and defined within a single header file or
        declared within a header file and defined in a separate .cpp file
        Your class should have two private fields, length and width of type double
        You will then need to declare/define several public methods that will complete the following:
            - A method to get the width
            - A method to get the length
            - A method to set the width
            - A method to set the length
            - A method to get the area
                ** If you're not sure how to calculate the area of a rectangle, look it up **

    - The RectangleTester file
        Your main() program is in the RectangleTester.cpp file. 
        This program will test the Rectangle class, confirming that it works correctly, by
        creating several Rectangle objects that represent rooms of an apartment. The purpose
        of the tester program is to ensure that all the methods work correctly.
        The main() method will perform the following steps:
            1. Create three Rectangle objects, one for each of three rooms in an apartment
            (the kitchen, a bedroom, and the living room).
            2. Ask the user for the length and width of each of the three rooms. Use the "setter"
            methods to set those values in each of the three Rectangle objects.
            3. Report to the user the size (length x width) and area of each of the three rooms,
            using the "getter" methods.
            4. Also report the total area of the apartment by adding the areas of the rooms.
        
Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments are included.
        - The filenames correctly match.
        - The Rectangle class has the proper header and is in a file with the correct name.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - Numbers are printed with reasonable formatting. This means limiting the number
        of decimal digits when appropriate.
        - The program uses the methods and pseudocode defined above and produces
        correct results. In particular, private fields may only be accessed by using the
        setter and getter methods.
        - The program runs without error and does not crash.
        - The program’s input and output are formatted appropriately with sufficient and
        clear explanatory messages.

Finishing Up
    When you have finished, there are up to three files to submit for this assignment:
        - if you chose to declare and define your class in one header file then you only
        need to submit two files with the following names...
            - Rectangle.h
            - RectangleTester.cpp

        - if you chose to declare your class in a header file and define it within a .cpp
        file, then you need to submit three files in total with the following names...
            - Rectangle.h
            - RectangleDefinitions.cpp
            - RectangleTester.cpp
*/

/*
RectangleTester
You'll enter a number for the length and width of the places provided in the code and it'll multiply them giving you the area of each of the places and then add all the areas together giving you the total area of all places in the code.

Joshua Montilla
2/23/2025

*/

#include <iostream>
#include "Rectangle.h"
#include <iomanip>

int main(){
    Rectangle Kitchen;
    Rectangle Bedroom;
    Rectangle Livingroom;
    double width;
    double length;
    double area;
    

    std::cout << "What is the length of your Bedroom?:";
    std::cin >> length;
    Bedroom.setlength(length);
    std::cout << "What is the Width of your Bedroom?:";
    std::cin >> width;
    Bedroom.setwidth(width);
    
    std::cout << "What is the length of your Kitchen?:";
    std::cin >> length;
    Kitchen.setlength(length);
    std::cout << "What is the Width of your Kitchen?:";
    std::cin >> width;
    Kitchen.setwidth(width);
    
    std::cout << "What is the length of your Livingroom?:";
    std::cin >> length;
    Livingroom.setlength(length);
    std::cout << "What is the Width of your Livingroom?:";
    std::cin >> width;
    Livingroom.setwidth(width);
    std::cout << "\nYour Bedroom is " << std::fixed << std::setprecision(1) << Bedroom.getlength() << " x " << std::fixed << std::setprecision(1) << Bedroom.getwidth() << ",  the area of the Bedroom is: " << std::fixed << std::setprecision(1) << Bedroom.getarea() << " sq ft" << std::endl;
    std::cout << "Your Kitchen is " << std::fixed << std::setprecision(1) << Kitchen.getlength() << " x " << std::fixed << std::setprecision(1) << Kitchen.getwidth() << ",  the area of the Kitchen is: " << std::fixed << std::setprecision(1) << Kitchen.getarea() << " sq ft" << std::endl;
    std::cout << "Your LivingRoom is " << std::fixed << std::setprecision(1) << Livingroom.getlength() << " x " << std::fixed << std::setprecision(1) << Livingroom.getwidth() << ",  the area of the Livingroom is: " << std::fixed << std::setprecision(1) << Livingroom.getarea() << " sq ft" << std::endl;

    area = Kitchen.getarea() + Bedroom.getarea() + Livingroom.getarea();
    std::cout << "\nThe total area of the three rooms together is: " << std::fixed << std::setprecision(1) << area << " sq ft" << std::endl;
    
    return 0;
}

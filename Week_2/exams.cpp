/*
    0. Rename this file to Exams.cpp

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - The name of the file
        - A brief description of the program (or class) that’s in the file
        - Your name
        - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/

/*
    exams

    Joshua montilla
    1/29/25
*/

#include <iostream>

int main() {
    double exam1;
    double exam2;
    double exam3;
    double average;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter the score for the first exam: ";
    std::cin >> exam1;
    std::cout << "Enter the score for the second exam: ";
    std::cin >> exam2;
    std::cout << "Enter the score for the final exam: ";
    std::cin >> exam3;

    average = (exam1 + exam2 + exam3) / 3;

    std::cout << "\nName: " + name << std::endl;
    std::cout << "First exam score: " << exam1 << std::endl;
    std::cout << "Second exam score: " << exam2 << std::endl;
    std::cout << "Final exam score: " << exam3 << std::endl;
    std::cout << "Average exam score: " << average << std::endl;


    return 0;

}

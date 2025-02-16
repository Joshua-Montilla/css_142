/*

    Your task:
        - Rename this file to Roman.cpp

        In this file create a single main() method, that will perform the following algorithm:

            - Use a do-while loop to prompt the user for an integer input in the range 1
            through 10, inclusive. If the input is not in range let them try again. Repeat until
            the user successfully enters a correct value.

            - Once a valid value is entered, print a descriptive message that reports the
            roman numeral that is equal to the value given.

        Specifications:

            For full credit, your program must meet the following specifications:
                1. Your method of converting the number to a Roman numeral must use only one
                multi-branch if statement. You must not use the Boolean operators && (and),
                || (or), and ! (not) when performing the conversion.

                2. Use meaningful variable names and follow all naming conventions.
                
                3. Use meaningful prompts and output messages.

                4. User input that is invalid must be handled sensibly, as described above. Invalid
                input in this case would be a number that is not in the range [1, 10], inclusive.
                (You may assume that only integers will be input.) Your program must print an
                appropriate message if the user input is outside the range [1, 10] and allow the
                user to re-enter their number.

            Extra-credit opportunity:
                For up to 3 additional points, extend your program so that it generates the correct
                response for any integer value in the range [1, 100], inclusive.
                If you choose to do the extra credit, to achieve the maximum extra credit you may use
                at most two multi-branch if statements to generate the Roman numeral.
                (Hint: Don’t use a 100-branch if statement! Instead, find a creative way to separate the
                tens from the ones...)

*/
/*
Roman

Joshua Montilla
2/16/25
*/

#include <iostream>

int main() {
    int number;

    do
    {
        std::cout << " Enter a number from 1 to 10: ";
        std::cin >> number;
        if (number == 1)
        std::cout << "You've pressed 1 aka I ";
        else if (number == 2)
        std::cout << "You've pressed 2 aka II ";
        else if (number == 3)
        std::cout << "You've pressed 3 aka III ";
        else if (number == 4)
        std::cout << "You've pressed 4 aka IV ";
        else if (number == 5)
        std::cout << "You've pressed 5 aka V ";
        else if (number == 6)
        std::cout << "You've pressed 6 aka VI ";
        else if (number == 7)
        std::cout << "You've pressed 7 aka VII ";
        else if (number == 8)
        std::cout << "You've pressed 8 aka VIII ";
        else if (number == 9)
        std::cout << "You've pressed 9 aka IX ";
         else if (number == 10)
        std::cout << "You've pressed 10 aka X ";
        else 
        std::cout << "Not a number within 1-10 ";
    } while (number);
    return 0;
}
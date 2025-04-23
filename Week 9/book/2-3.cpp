#include <iostream>

enum Operator {Add, Subtract, Multiply, Divide};

class Calculator
{
private:
    Operator myOperator;
public:
   Calculator(Operator op);

   int calculate(int num1, int num2);

   Operator getOp(){
    return myOperator;
   }
};

Calculator::Calculator(Operator op):myOperator(op) { }

int Calculator::calculate(int num1, int num2){
    switch (getOp())
    {
    case Operator::Add:{
        return num1 + num2;
    }
    case Operator::Subtract:{
        return num1 - num2;
    }
    case Operator::Multiply:{
        return num1 * num2;
    }
    case Operator::Divide:{
        return num1 / num2;
    }
        
        break;
    
    default:{
        std::cout << "Doesn't work." << std::endl;
    }
        break;
    }
}

int main(){
    int num1;
    int num2;
    Calculator cal1 = (Operator::Add);

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Here's your sum: " << cal1.calculate(num1, num2) << std::endl;

    return 0;
}

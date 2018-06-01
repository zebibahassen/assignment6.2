#include <iostream>
#include "add.h"
 
int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two integers: " << std::endl;
    cin >> firstNumber >> secondNumber;

    std::cout << "The sum is " << add(firstNumber,secondNumber) << std::endl;
    return 0;
}

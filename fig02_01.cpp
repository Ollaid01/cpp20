/**
 * @file fig02_01.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

int main() {

    // declaring and initialing variables to zero
    int num1{0};
    int num2{0};
    int sum{0};

    // read numbers from user prompt data
    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    sum = num1 + num2; // sum of numbers

    std::cout << "Sum is : " << sum << "." << std::endl;  // display sum; end line.

    return 0;
}
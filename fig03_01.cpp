/**
 * @file fig03_01.cpp
 * @author your name (you@domain.com)
 * @brief decision making equality and relational operator.
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream> // enables program to perform input and output 

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main() {

    int num1{0}, num2{0}; // two integers to compare (initialized to 0)

    cout << "Entrer two integers to compare: " ;
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << num1 << " == " << num2 << endl;
    }

    if (num1 != num2) {
        cout << num1 << " != " << num2 << endl;
    }

    if (num1 < num2) {
        cout << num1 << " < " << num2 << endl;
    }

    if (num1 > num2) {
        cout << num1 << " > " << num2 << endl;
    }

    return 0;
}
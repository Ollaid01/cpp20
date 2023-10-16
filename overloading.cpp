/**
 * @file overloading.cpp
 * @author ollaid mat
 * @brief overloading fucntion cpp
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

int square(int value);
double square(double value);

int main() {

    int intValue;
    cout << "Give int value : \n";
    cin >> intValue;

    double doubleValue;
    cout << "Give double value : \n";
    cin >> doubleValue;

    cout << "int-square of : " << intValue << " is : " << square(intValue) << endl;
    cout << "double-square of : " << doubleValue << " is : " << square(doubleValue) << endl;

    return 0;
}

int square(int value) {
    return value *= value;
}

double square(double value) {
    return value *= value;
}
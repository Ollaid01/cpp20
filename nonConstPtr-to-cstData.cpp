/**
 * @file nonConstPtr-to-cstData.cpp
 * @author mat ollaid
 * @brief attempt to modify data throught a non-constant pointer to constant data
 * @version 0.1
 * @date 2023-10-22
 * 
 * @copyright Copyright (c) 2023 
 * 
 */
#include <iostream>

using namespace std;

int main() {

    int y{0};
    const int* yPtr{&y}; // here pointer think integer value is a constant , but not y is not constant

    cout << "y value is : " << y << endl;
    cout << "yPtr value is : " << yPtr << endl;

    // attempt to modify y'data throught yPtr
    *yPtr = 200; // cannot modify y throught yPtr by deferencing operator

    return 0;
}
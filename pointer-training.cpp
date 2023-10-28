/**
 * @file pointer-training.cpp
 * @author mat ollaid
 * @brief using constant pointer
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

using namespace std;

int main() {

    int x{2}, y{10};
    cout << "x : " << x << " and y : " << y << endl;

    // ptr is constant pointer to an integer that can  be modified through ptr
    // ptr always point to the same memory location
    int* const ptr{&x};

    *ptr = 20;
    cout << "x : " << x << " and *ptr : " << *ptr << endl; 

    ptr = &y; // cannot do this

    return 0;
}
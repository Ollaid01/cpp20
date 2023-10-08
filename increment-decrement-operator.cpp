/**
 * @file increment-decrement-operator.cpp
 * @author ollaid mat
 * @brief increment/decrement operator
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

using namespace std;

int main() {

    // intializing data in declaration
    int data{5};

    // demonstation postfix-increment operator
    cout << "data before post-increment is      : " << data << endl;
    cout << "            post-increment data is : " << data++ << endl;
    cout << "data after-increment data is       : " << data << endl;

    cout << endl; // skip a line 

    // demonstrate prefix increment operator
    data = 5;
    cout << "data before prefix-increment is      : " << data << endl;
    cout << "            prefix-increment data is : " << ++data << endl;
    cout << "data after-increment data is         : " << data << endl;

    return 0;
}

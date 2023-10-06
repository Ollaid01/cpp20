/**
 * @file fig06.cpp
 * @author your name (you@domain.com)
 * @brief while iteration statement
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    // using while iteration statement
    int product{3};
    while (product <= 100) {
        product = 3 * product;
    }

    cout << "Product value is : " << product << endl;

    return 0;
}
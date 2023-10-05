/**
 * @file fig05.cpp
 * @author your name (you@domain.com)
 * @brief if/else double selection statement
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

using namespace std;

int main() {

    int studentGrade{30};

    if(studentGrade >= 60) {
        cout << "Passed" << endl;
    }
    else {
        cout << "Failed" << endl;
    }

    return 0;
}

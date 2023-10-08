/**
 * @file nested-control-statement.cpp
 * @author ollaid mat
 * @brief nested controlled statement
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

int main() {

    // initalizing variables in declarations
    int passes{0};
    int failures{0};
    int studentCounter{1};

    // process 10 students using counter-controlled loop
    while(studentCounter <= 10) {

        cout << "Enter result (1 = pass, 2 = fail): ";
        // prompt user for input and obtain value from user
        int result{0};
        cin >> result;

        // check result with if .. else is nested in the while statement
        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }

        // increment studentCounter so loop eventually teminates 
        studentCounter = studentCounter + 1;
    }

    // prepare and display results
    cout << "Passed: " << passes << "\nFailed: " << failures << endl;

    // determine whether more than 8 students passed
    if (passes > 8)
        cout << "Bonus to instructor !"  << endl;

    return 0;
}
/**
 * @file sentinel_controlled_iteration.cpp
 * @author ollaid Mat
 * @brief sentinel-controlled iteration
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int totalGrades{0};

    // counter
    int gradesCounter{0};
    while (gradesCounter != -1)
    {
        // get grade from user prompt
        int grade{0};
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;

        // check grade
        if (grade >= 0 && grade <=100) // check if grade number is valid (integers range 0-100)
        {
            // perform total grade
            totalGrades = totalGrades + grade;

            // incremente interationGrade
            gradesCounter = gradesCounter + 1;
        }
        else if(grade == -1) // quit if grade input equal -1
        {
            break; // for quit while loop or user prompt
        }
    }

    // print sum of average
    cout << "Total of grades : " << totalGrades << endl;

    // avoid divide by 0 an getting floatting point exception
    if (gradesCounter != 0) {
        double average{static_cast<double> (totalGrades) / gradesCounter};
        // io stream manipulator for fixed point scientif notation for 
        // display average value with 2 decimal
        cout << setprecision(2) << fixed;
        cout << "Average of student : " << average << endl;
    }
    else {
        cout << "No grades were entered " << endl;
    }
    
    return 0;
}
/**
 * @file counter_iteration.cpp
 * @author your name (you@domain.com)
 * @brief counter-controlled iteration
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

using namespace std;

int main() {

    // grades of stdudents
    int totalStudent{10};
    int sumGrades{0};

    // get all grades from user prompt data
    int gradeCounter{1};
    while(gradeCounter <= totalStudent) 
    {
        // ask grade of student
        cout << "Enter grade of student " << gradeCounter << " : ";

        // local variable (scope - only used in while loop)
        int studentGrade{0};

        // input each grade
        cin >> studentGrade;

        // check grade - integers in the range (0 - 100)
        if (studentGrade >= 0 && studentGrade <= 100) {
            
            // total all the grades entered
            sumGrades = sumGrades + studentGrade;

            // inrement number of grades entered
            gradeCounter = gradeCounter + 1;
        }
    }

    // perform the averaging calculation
    int gradesAverage{sumGrades / totalStudent};

    // print result
    cout << "The class average is : " << gradesAverage << endl;

    return 0;
}
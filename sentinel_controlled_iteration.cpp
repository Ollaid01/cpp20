#include <iostream>
using namespace std;

int main() {

    int totalGrades{0};

    // counter
    int counterGrades{0};
    while (counterGrades != -1)
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
            counterGrades = counterGrades + 1;
        }
        else if(grade == -1) // quit if grade input equal -1
        {
            break; // for quit while loop or user prompt
        }
    }

    // print sum of average
    cout << "Total of grades : " << totalGrades << endl;

    // avoid divide by 0 an getting floatting point exception
    cout << "Average of student : " << (counterGrades > 0 ? (totalGrades / counterGrades) : totalGrades) << endl;
    
    return 0;
}
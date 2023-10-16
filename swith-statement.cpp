#include <iostream>
using namespace std;

int main() {

    //
    cout << "Enter grade : " << endl;

    int grade;

    while(cin >> grade){
    
        switch(grade) {
            case 1:
                cout << grade << endl;
                break;
            default:
                cout << "default: " << grade << endl;
                break;
        }

    }

    return 0;
}
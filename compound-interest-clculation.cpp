#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    // set precision
    cout << fixed << setprecision(2);
    
    //
    double principal{1000.00};
    double rate{0.05};

    //
    cout << "Initial principal : " << principal << endl;
    cout << "   Interesst rate : " << rate << endl;

    //
    cout << "Year : " << setw(20) << "  Amount on deposit " << endl;

    //
    for(int year{1}; year<=20; ++year)
    {
        double amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year << setw(20) << amount << endl;
    }

    return 0;
}
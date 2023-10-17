#include <iostream>
#include <array>
using namespace std;

int main() {

    // define array of 5 double
    array<double, 5> values;

    // initialize values of 5 doubles
    for(size_t i{0}; i<values.size(); ++i) {
        values[i]  = 0.0;
    }

    // print values by accessing element
    for(size_t i{0}; i < values.size(); ++i) {
        cout << "Values [" << i << "] = " << values[i] << endl;
    }

    // print values by accessing elements via at member function
    cout << "Using at member function " << endl;
    for(size_t i{0}; i < values.size(); ++i) {
        cout << "Values [" << i << "] = " << values.at(i) << endl;
    }

    // test wrong case without exception
    cout << "Values [100] = " << values[100] << endl;
    // test wrong case with exception
    cout << "Values [1000] = " << values.at(100) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int squareByValue(int value);
void squareByReference(int& value);

int main() {

    int x{2}, z{4};

    // demonstrate squareByValue
    cout << "Value of x  = " << x << " before square by value " << endl;
    cout << "SquareByValue of x  = " << squareByValue(x) << endl;
    cout << "Value of x = " << x << " after square by value " << endl;

    // demonstrate squareByReference
    cout << "Value of z = " << z << "before square by reference " << endl;
    squareByReference(z);
    cout << "Value of z = " << z << " after square by reference " << endl;

    return 0;
}

int squareByValue(int value) {
    return value *= value;
}

void squareByReference(int& value) {
    value *= value;
}
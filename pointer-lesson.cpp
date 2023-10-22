#include <iostream>

using namespace std;

void cubeByPtr(int* param) {
    *param = 3 * *param ;
}

void cubeByRef(int& param) {
    param =  param * param * param;
}

int cubeByValue(int param) {
    return param * param * param;
}

int main() {

    // declare and initialize integer
    int number{8};

    // declare int pointer and initialize it to nullptr
    cout << "Cube is : " << number <<endl;
    cout << "Cube by value : " << cubeByValue(number) << endl;
    cubeByRef(number);
    cout << "Cube by Ref : " <<  number << endl;
    cubeByPtr(&number);
    cout << "Cube by Pointer : " << number << endl;

    return 0;
}
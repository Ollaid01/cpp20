#include <iostream>

using namespace std;

int main() {

    // attempt to modify data througth a non-constant pointer to constant data

    int y{21};
    int z{9};
    const int* yPtr{&y};

    cout << "y : " << y << endl;
    cout << "y ptr : " << yPtr << endl;
    cout << "* yPtr : " << *yPtr << endl;

    yPtr = &z;
    cout << "y ptr : " << yPtr << endl;
    cout << "* yPtr : " << *yPtr << endl;

    *yPtr = 99;


    return 0;
}
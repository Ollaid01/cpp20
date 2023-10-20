#include <iostream>

using namespace std;

int main() {

    int count{7};
    cout << "The value of count variable: " << count << endl;

    // create pointer to int and initialize it to null
    int* countPtr{nullptr};
    cout << "The value of countPtr is : " << countPtr << endl;

    return 0;
}
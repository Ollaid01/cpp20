#include <iostream>

using namespace std;

int main() {

    // declare and initialize integer
    constexpr int count{5};

    // declare int pointer and initialize it to nullptr
    const int* countPtr{&count};

    // print pointer
    cout << "the adress of count is : " << &count 
         << "\n the value of count is : " << count
         << "\n\n the value of countPtr is : " << countPtr 
         << "\n the value of *countPtr is : " << *countPtr << endl;

    // set pointer to 

    return 0;
}
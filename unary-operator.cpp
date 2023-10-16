#include <iostream>
using namespace std;

const int number{7};

int main() {

    const double number{3.14};

    cout << "The local value of number is : " << number << endl;
    cout << "The global value of number is : " << ::number << endl;

    return 0;
}
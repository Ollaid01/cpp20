#include <iostream>

using namespace std;

int main() {

    int total{0};

    // sum even integers throught 2 with for statement
    for (int number{2}; number<=20; number+=2)
    {
        total += number;
    }

    cout << "Sum is : " << total << endl;

    return 0;
}
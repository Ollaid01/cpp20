#include <iostream>

using namespace std;

int main() {

    int counter{1};

    while (counter <= 10) 
    {
        cout << counter << " ";
        ++counter;
    }

    cout << "\n";

    return 0;
}
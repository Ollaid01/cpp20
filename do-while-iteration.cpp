#include <iostream>

using namespace std;

int main() {

    int counter{1};

    do 
    {
        cout << "The counter value is : " << counter << endl;
        ++counter;
    } while (counter<=10);


    return 0;
}
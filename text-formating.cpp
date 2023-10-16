#include <iostream>
#include <format> // need g++ 13 or +

using namespace std;

int main(){

    int total{100};

    cout << "the total value is : " << total << endl;

    format("Total value {}\n ", total);

    return 0;
}
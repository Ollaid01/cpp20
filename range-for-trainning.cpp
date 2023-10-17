#include <iostream>
#include <array>

using namespace std;

int main() {

    array<int, 5> values{1, 2, 3, 4, 5};

    // before modification : using standard loop
    for(size_t i{0}; i < values.size(); ++i) {
        cout << " value of i is : " << values.at(i) << endl;
    }

    // modification : intialize values using range-based for
    for(int& itemRef : values) {
        itemRef += 1;
    }

    cout << "========" << endl;

    // after modificiation : print item of values using range-for
    for(const int item : values) {
        cout << "item : " << item << endl;
    }

    cout << "========" << endl;

    // calculate total of item
    for(int total{0}; const int item : values) {
        total += item;
        cout << "Item : " << item << " | Total : " << total << endl;
    }

    return 0;
}
#include <iostream>
#include <array>

using namespace std;

int main() {

    // choice 1
    array values{1, 2, 3, 4, 5};

    // choice 1: using for loop for display items of values
    for (size_t i{0}; i < values.size(); ++i) {
        cout << " values i : " << values.at(i) << endl;
    }

    cout << "=====" << endl;

    // choice 2 : display item range based for
    for (const int item: values) {
        cout << " values i : " << item << endl;
    }

    cout << "=====" << endl;

    // modification : multipy the item of array by 2
    for(int& itemRef : values) { // itemRef is a reference to an int
        itemRef *= 2;
    }

    // display after modification
    for(const int item : values) {
        cout << " value i is : " << item << endl;
    }

    cout << "=========" << endl;

    // calculate total item using range based-for
    for(int total_item{0}; const int item : values) {
        total_item += item;
        cout << "Item : " << item << " | Total item : " << total_item << endl;
    }

    return 0;
}
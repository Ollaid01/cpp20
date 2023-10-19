#include <iostream>
#include <array>

using namespace std;

int main() {

    // create array size variable
    constexpr size_t arraySize{5};

    // create array with arraySize element and default initialize it
    array<int, arraySize> items{};

    // using range-based for for initialize items array
    // for(int& item : items) {
    //     item = 2 + 2 * item;
    // }

    // using external iteration for initialize array items
    for(int i{0}; i < items.size(); ++i) {
        items.at(i) = 2 + 2 * i;
    }

    // after modification : using range-based-for to print element of array items
    // for(const int& item :  items) {
    //     cout << item << " ";
    // }

    // print items using internal iteration (more secure)
    for(const int& item : items) {
        cout << item << " ";
    }

    cout << " \n ======== \n";

    // print items using external iteration (less secure)
    for(size_t i{0}; i < items.size(); ++i) {
        cout << items.at(i) << " ";
    }

    cout << " \n ======== \n";

    return 0;
}
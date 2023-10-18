#include <iostream>
#include <array>

using namespace std;

int main() {

    // create array size variable
    constexpr int arraySize{5};

    // create array with arraySize element and default initialize it
    array<int, arraySize> items{};

    // using range-based for for initialize items array
    for(int& item : items) {
        item = 2 + 2 * item;
    }

    // after modification : using range-based-for to print element of array items
    for(const int& item :  items) {
        cout << item << " ";
    }

    cout << "\n";

    return 0;
}
#include <iostream>
#include <array>
#include <algorithm>    // contains sort and binary search
 
using namespace std;

int main() {

    // enables string object litterals
    using namespace string_literals;

    // colors is infered to be an array<string, 7>
    array colors{"red"s, "orange"s, "yellow"s, "green"s, "blue"s, "indigo"s, "violet"s};

    // dislay original array : using range-based-for  (internal iteration)
    for(const string& color : colors) {
        cout << color << " ";
    }

    cout << "\n ==== " << endl;

    // output array using external iteration
    for(size_t i{0}; i < colors.size(); ++i) {
        cout << colors.at(i) << endl;
    }

    cout << "\n" ;

    return 0;
}
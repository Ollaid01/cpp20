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
    cout << "Unsorted colors array : " << endl;
    for(const string& color : colors) {
        cout << color << " ";
    }

    cout << "\n ==== " << endl;

    // sort content of colors array
    sort(begin(colors), end(colors));

    // print content of colors sorted
    cout << "Sorted colors array : \n";
    for(const string& color : colors) {
        cout << color << " "; 
    }

    cout << "\n ==== " << endl;


    // search string colors array
    // search for 'indigo' in colors
    bool found{binary_search(begin(colors), end(colors), "indigo")};

    //
    cout << (found ? "indigo was in colors" : "indigo was not in colors") << endl; 

    cout << "\n";

    // search cyan string in colors
    bool foundCyan{binary_search(begin(colors), end(colors), "cyan")};
    cout << " cyan " << (foundCyan ? " was in " : " was not in ") << " in colors " << endl;

    cout << "\n ======= \n ";

    return 0;
}
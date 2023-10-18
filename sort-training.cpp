#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {

    using namespace string_literals;

    // create array of type inferred string object
    array colors{"red"s, "orange"s, "yellow"s, "green"s, "blue"s, "indigo"s, "violet"s};

    // output : print colors array contents
    for (const string& color : colors) {
        cout << color << " ";
    }

    cout << "\n";

    // sort colors
    sort(begin(colors), end(colors));

    // output : print colors sorted
    for (const string& color : colors) {
        cout << color << " "; 
    } 

    cout << "\n" ;

    return 0;
}
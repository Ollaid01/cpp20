#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {

    using namespace string_literals;

    // create array of string
    array colors{"red"s, "orange"s, "yellow"s, "green"s, "blue"s, "indigo"s, "violet"s};

    // output: display colors content
    for (const string& color : colors) {
        cout << color << endl;
    }

    // search indigo string in colors array
    bool found{binary_search(begin(colors), end(colors), "indigo")};
    cout << "indigo " << (found ? " was in " : " was not in ") << endl;

    // search cyan string in colors array
    bool foundCyan{binary_search(begin(colors), end(colors), "cyan")};
    cout << (foundCyan ? " cyan was " :  " cyan was not ") << endl;

    return 0;
}
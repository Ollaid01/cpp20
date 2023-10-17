#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 5> values{1, 4, 8, 12, 16};

    //output each array element value: braced initalizer
    for(size_t i{0}; i < values.size(); ++i) {
        cout << "Values[" << i << "] = " << values.at(i) << endl;
    }

    cout << "=========" << endl;

    // class template initializer
    array values2{1.1, 4.4, 3.3, 5.5};
    for(size_t i{0}; i < values2.size(); ++i){
        cout << "Values[" << i << "] = " << values2.at(i) << endl;
    }

    return 0;
}
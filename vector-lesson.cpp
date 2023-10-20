#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void output_vector(const vector<int>& items);
void input_vector(vector<int>& items);

int main() {

    vector<int> integers1(5);
    vector<int> integers2(3);
    
    input_vector(integers1);
    input_vector(integers2);

    output_vector(integers1);
    output_vector(integers2);

    // compare two vectors:
    cout << (integers1 != integers2 ? "vectors are not equals !" :  "vectors are equals !") << endl;

    // initalize vector by another
    vector<int> integers3(integers2);
    output_vector(integers3);

    // overloading operator =, by assigning integers2 by integers3
    integers2 = integers3;
    cout << "integer 1 : ";
    output_vector(integers1);
    cout << "integer 2 : ";
    output_vector(integers2);
    cout << "integer 3 : ";
    output_vector(integers3);

    // compare vectors with ==
    cout << (integers2 == integers3 ? "Vectors equals" : "Vectors differents") << endl;

    // use the value at location 5 of integers1 to rvalue
    cout << "integers1.at(3) is : " << integers1.at(4) << endl;

    // set value at location 4 as an lvalue
    integers1.at(4) = 1000;
    output_vector(integers1);

    // attempt to use out-of-range index
    try {
        cout << "Attempt to display integers.at(15) : " << endl;
        cout << integers1.at(15) << endl; // ERROR : out of range
    } catch (const out_of_range& ex) {
        cerr << "An exception occurred " << ex.what() << endl;
    }

    // attempt to use out-of-range exception
    try {
        cout << "Attempt to display integers2.at(100) " << endl;
        cout << integers2.at(100) << endl; // ERROR : out of range occurred
    } catch(const out_of_range& ex) {
        cerr << "An exception occurred : " << ex.what() << endl; 
    }

    // changing the size of the vector
    cout << "Current integers3 size is : " << integers3.size() << endl;
    integers3.push_back(2000); // add 2000 to end of the vector
    cout << "New integers3 size is : " << integers3.size() << endl;
    cout << "Integers3 now contains : " << endl;
    output_vector(integers3);

    cout << endl;

    return 0;
}

void output_vector(const vector<int>& items) {
    cout << "Vector content : ";
    for (const int item : items) {
        cout << item << " ";
    }
    cout << endl;
}

void input_vector(vector<int>& items) {
    cout << "Add integer to vector : " << endl;
    for (int& item : items) {
        cin >> item;
    }
}

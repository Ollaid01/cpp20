#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void output_vector(const vector<int>& items);
void input_vector(vector<int>& items);

int main() {

    vector<int> integers1(5);
    vector<int> integers2(10);
    
    input_vector(integers1);
    input_vector(integers2);

    output_vector(integers1);
    output_vector(integers2);

    // compare two vectors:
    cout << (integers1 != integers2 ? "vectors are not equals !" :  "vectors are equals !") << endl;

    // initalize vector by another
    vector<int> integers3(integers1);
    output_vector(integers3);

    // overloading operator =, by assigning integers2 by integers3
    integers2 = integers3;
    cout << "integer 1 : ";
    output_vector(integers1);
    cout << "integer 2 : ";
    output_vector(integers2);
    cout << "integer 3 : ";
    output_vector(integers3);

    cout << endl;

    return 0;
}

void output_vector(const vector<int>& items) {
    cout << "Vector content : ";
    for (auto item : items) {
        cout << item << " ";
    }
    cout << endl;
}

void input_vector(vector<int>& items) {
    cout << "Add integer to vector : " << endl;
    for (size_t i{1}; i <= items.size(); ++i) {
        cout << " Element " << i << " : " ;
        int value;
        cin >> value;
        items.at(i-1) = value;
    }
}

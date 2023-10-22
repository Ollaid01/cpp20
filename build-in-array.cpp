#include <iostream>
#include <array>

using namespace std;

void sumElement(const int values[], size_t numberOfElements) {
    int total{0}; 
    for (size_t i{0}; i < numberOfElements; ++i) {
        total += values[i];
    }
    cout << "Total of values is : " << total << endl;
}

void sumElement_v2(const int* values, size_t numbersOfElements) {
    int total{0};
    for (size_t i{0}; i < numbersOfElements; ++i) {
        total += values[i];
    }
    cout << "Total of values is : " << total << endl;
}

void printArray(const int* values, size_t nbElement) {
    for (size_t i{0}; i < nbElement; ++i) {
        cout << values[i] << " ";
    }
    cout << endl;
}

int main() {

    // create build in array and calculate sum of elements
    int cTab[5]{10, 2, 33, 4, 15};
    printArray(cTab, 5);
    sumElement(cTab, 5);
    sumElement_v2(cTab, 5);
    sort(begin(cTab), end(cTab));
    cout << "Sort array : " << endl;
    printArray(cTab, 5);

    // lambda expression to print collections of items
    auto showValues {
        [](const auto& items, const auto& message) {
            cout << message << " : " << endl;
            for (const auto& item : items) {
                cout << item << " ";
            }
            cout << endl;
        }
    };

    // convert build-in array to std:array
    // create standard array from build-in array
    const auto std_array{to_array(cTab)};
    showValues(std_array, "Print std array from build-in array ");

    // create second build-in array
    int values2[]{40, 20, 1, 2, 5, 20};
    printArray(values2, 6);
    // convert second values_2 to standard array
    auto std_array_2{to_array(values2)};
    showValues(std_array_2, "Print Values 2 ");
    // sort values2 with build-in format
    sort(begin(values2), end(values2));
    printArray(values2, 6);
    // sort std-array_2
    sort(begin(std_array_2), end(std_array_2));
    showValues(std_array_2, "Print std_array sorted with to_array format ");



    return 0;
}
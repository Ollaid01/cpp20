#include <iostream>
#include <array>

using namespace std;

constexpr size_t rows{2};
constexpr size_t columns{3};

void printArray(const array<array<int, columns>, rows>& arrayToPrint);

int main() {

    // create multidim arrays
    constexpr array values1{array{1, 2, 3}, array{4, 5, 6}};
    constexpr array values2{array{10, 11, 12}, array{14, 15, 16}};

    // print values1 by row
    printArray(values1);

    return 0;
}

void printArray(const array<array<int, columns>, rows>& arrayToPrint) {
    // loop througt array's rows
    for (const auto& row : arrayToPrint) {
        // loop throught array's columns
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }
}
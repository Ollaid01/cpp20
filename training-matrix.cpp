#include <iostream>
#include <array>

using namespace std;

constexpr size_t columns{3};
constexpr size_t rows{2};

void print_matrix(array<array<int, columns>, rows>& matrix);

int main() {

    array matrix{array{2, 3, 4}, array{7, 9, 11}};
    print_matrix(matrix);

    return 0;
}


void print_matrix(array<array<int, columns>, rows> &matrix) {
    // loop throught rows
    for (const auto& row : matrix) {
        // loop throught columns
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }
}

#include <iostream>
#include <array>

using namespace std;

constexpr int columns{3};
constexpr int rows{2};

void print_matrix(const array<array<int, columns>, rows>& matrix);

int main() {

    // create matrix
    constexpr array matrix{array{1, 9, 3}, array{4, 5, 6}};

    // print matrix
    print_matrix(matrix);

    return 0;
}

void print_matrix(const array<array<int, columns>, rows>& matrix) {

    // loop throught rows
    for (const auto& row : matrix){
        // loop throught columns
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }
}

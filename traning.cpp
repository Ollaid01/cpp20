#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main() {

    // exercice 1
    constexpr size_t array_size{5};
    array<int, array_size> numbers{};

    // get input numbers from prompt data
    int iteration_loop{0};
    while (iteration_loop < array_size) {
        cout << "Enter iteration n°" << iteration_loop << " : ";
        cin >> numbers.at(iteration_loop);
        ++iteration_loop;
    }

    // output with range-based for loop
    for (const int& number : numbers) {
        cout << number << " ";
    }

    // compute accumulate
    cout << "The sum is : " << accumulate(begin(numbers), end(numbers), 0) << "\n";

    cout << "\n";

    return 0;
}
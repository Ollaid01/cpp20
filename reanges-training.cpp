#include <iostream>
#include <ranges>
#include <numeric>

using namespace std;

int main() {

    // lambda to display result of ranges opertaions
    auto showValues {
        [](auto& values, auto& message) {
            
            cout << "The values are : ";
            for (auto value : values) {
                cout << value << " ";
            }
            cout << endl;
        }
    };

    // generate integers 1-11
    auto values = views::iota(1, 11);
    showValues(values, "Generated integers : ");

    // filtering even integers
    auto even_values = values | views::filter([](const auto& x){return x%2 == 0;});
    showValues(even_values, "Filtering even values ");

    // filter odd values
    auto odd_values = values | views::filter([](const auto& x){return x%2 != 0;});
    showValues(odd_values, "Filtering odd values ");

    // Mapping: transform even values as an square
    auto square_values = values | views::transform([](const auto& x){return x*x;});
    showValues(square_values, "Mapping even values to square ");

    return 0;
}
#include <iostream>
#include <array>
#include <numeric>
#include <ranges>

using namespace std;

int main() {

    constexpr size_t array_size{5};
    array<int, array_size> integers{1, 2, 3, 4, 5};

    // show values and message
    auto showValues = [](auto& values, const string& message){

        cout << message << " : ";
        
        for (auto value :  values) {
            cout << value << " ";
        }

        cout << endl;
    };

    // generates integers 1-10
    auto values = views::iota(1, 11);
    showValues(values, "Generate integers 1-10 ");

    auto even_values = values | views::filter([](const auto& x){return x % 2 == 0;});
    showValues(even_values, "Filtering even integers ");

    auto odd_integers = values | views::filter([](const auto& x){return x % 2 != 0;});
    showValues(odd_integers, "Filtering Odd integers ");

    auto square_values = values | views::transform([](const auto& x){return x*x;});
    showValues(square_values, "Mapping even integers to square ");


    return 0;
}
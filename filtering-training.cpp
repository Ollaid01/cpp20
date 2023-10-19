#include <iostream>
#include <array>
#include <numeric>
#include <ranges>

using namespace std;

int multiply(const int& x, const int& y) {
    return x * y;
}

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

    // using accummulate to perform sum of integers
    cout << "The product of values is : " << accumulate(begin(values), end(values), 1, multiply) << endl;  

    // using accumulate to perform sum of integers array
    cout << "The sum of integers is : " << accumulate(begin(values), end(values), 0) << endl;

    // perform product using lambda experession
    cout << "[lambda] The product is : " << accumulate(begin(values), end(values), 1, 
                [](const auto& x, const auto& y){return x * y;}) << endl;

    // combine filter and map to perform square even integers
    auto result = 
                values | views::filter([](const auto& x){return x % 2 == 0;})
                       | views::transform([](const auto& x){return x * x;});
    showValues(result, "Combine filter and tranform to get squares of integers ");

    return 0;
}
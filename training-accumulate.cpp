#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int main() {

    constexpr size_t array_size{5};
    array<int, array_size> integers{4, 5, 7, 9, 100};

    // using accumulate for product elemnts array
    cout << "[accum] The product is : " << accumulate(begin(integers), end(integers), 1, multiply) << endl;

    //using lambda expression
    cout << "[lamabdaExpr] The product is : " << accumulate(begin(integers), end(integers), 1, 
        [](const auto& x, const auto& y){return x * y;}) << endl;

    return 0;
}

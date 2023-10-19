/**
 * @file product-array.cpp
 * @author ollaid mat
 * @brief compute the product of array using accumulate and lambda expression
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <array>
#include <numeric>

using namespace std;

// 
int multiply(int x, int y) {
    return x * y;
}

int main() {

    constexpr size_t array_size{5};
    array<int, array_size> matrix{2, 3, 4, 5, 6};

    cout << "The product of matrix is : " << accumulate(begin(matrix), end(matrix), 1, multiply) << endl;

    // v2 : using lammbda expression
    cout << "The product is (using lambda-expr) : " << accumulate(begin(matrix), end(matrix), 1, [](const auto& x, const auto& y){return x * y;}) << endl;

 
    return 0;
}

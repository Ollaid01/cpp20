/**
 * @file supersized_integer.cpp
 * @author ollaid molad
 * @brief using supersizing integer with boost multiprecision opensource library
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

int main() {

    // initialising cpp_ints
    const cpp_int value1{"1000000000000000000000000000000"};
    const cpp_int value2{9223372036854775807LL};
    const int value3{3};

    cout << "INITIAL VALUES"
        << "\n cpp_int value1: " << value1
        << "\n cpp_int value2: " << value2
        << "\n cpp_int value3: " << value3 << endl;

    // print numeric limit of integer type
    // std::numeric_limits<type>::min() or std::numeric_limits<type>::max()
    cout << "Min int limit : " << std::numeric_limits<int>::min() << endl;
    cout << "Max int limit : " << std::numeric_limits<int>::max() << endl;

    return 0;
}
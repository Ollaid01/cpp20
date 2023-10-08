/**
 * @file text-formatting.cpp
 * @author ollaid mat
 * @brief text formatting with function (need to install libfmt-dev)
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
#include "fmt/format.h"

using namespace std;

int main() {

    int grade{20};
    string name{"Ollaid Mat"};

    fmt::print(" {} !", name);

    return 0;
}
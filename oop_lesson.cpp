#include <iostream>
#include <fmt/format.h>
#include "salariedEmployee.h"

using namespace std;

int main(int argc, char* argv[]) {

    // instantiate salariedEmployee object
    SalariedEmployee employee{"Sue Jones", 300.0};

    // get salariedEmployee data
    cout << employee.getName() << endl;

    return 0;
}
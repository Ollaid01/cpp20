#include <iostream>
#include <fmt/format.h>

#include "SalEmployee.h"

using namespace std;

int main(int argc, char* argv[]) {

    SalEmployee employee("Diallo", 2700.30);
    cout << employee.toString() << endl;

    return 0;
}
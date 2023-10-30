#include <iostream>
#include <fmt/format.h>
#include "salariedEmployee.h"
#include "SalariedComEmployee.h"

int main(int argc, char* argv[]) {

    SalariedEmployee employee{"Marie V", 300.45};
    cout << employee.toString() << endl;

    cout << " =========== " << endl;

    SalariedComEmployee employee2{"Marie V", 300.45, 125, 0.3};
    employee2.setName("Mathieu D.");
    employee2.setSalary(130);
    employee2.setGrossSales(206);
    employee2.setComissions(0.8);
    cout << employee2.toString() << endl;

    cout << "========= \n Natural Pointer \n========= " << endl;

    // natural : aim a base-class pointer at derived-class object
    SalariedEmployee* salariedPtr{&employee2};
    cout << fmt::format("Name (Ptr) : {}", salariedPtr->getName()) << endl;
    salariedPtr->setName("Roxane M");
    cout << fmt::format("Name (Ptr) : {}", salariedPtr->getName()) << endl;
    cout << salariedPtr->toString() << endl;

    // Not allowed: a derived-class pointer at baed-class object


    return 0;
}
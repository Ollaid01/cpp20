#include <iostream>
#include <fmt/format.h>
#include "salariedEmployee.h"
#include "SalariedComEmployee.h"

int main(int argc, char* argv[]) {

    // SalariedEmployee employee{"Marie V", 300.45};
    // cout << employee.toString() << endl;

    // cout << " =========== " << endl;

    SalariedComEmployee salariedComission{"Marie V", 300.45, 125, 0.3};
    // salariedComission.setName("Mathieu D.");
    // salariedComission.setSalary(130);
    // salariedComission.setGrossSales(206);
    // salariedComission.setComissions(0.8);
    // cout << salariedComission.toString() << endl;

    // cout << "========= \n Natural Pointer \n========= " << endl;

    // natural : aim a base-class pointer at derived-class object (allowed)
    SalariedEmployee* salariedPtr{&salariedComission};

    // invoke base-class member functions on derivated class object through base-class pointer (allowed)
    string name{salariedPtr->getName()};
    double salary{salariedPtr->getSalary()};
    // double grossSales{salariedPtr->getGrossSales()}: disallow 

    // cout << fmt::format("Name (Ptr) : {}", salariedPtr->getName()) << endl;
    // salariedPtr->setName("Roxane M");
    // cout << fmt::format("Name (Ptr) : {}", salariedPtr->getName()) << endl;
    // cout << salariedPtr->toString() << endl;

    // Not allowed: a derived-class pointer at baed-class object


    return 0;
}
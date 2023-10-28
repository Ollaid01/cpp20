#include <iostream>
#include <fmt/format.h>
#include <stdexcept>
#include "SalEmployee.h"

using namespace std;

SalEmployee::SalEmployee(string_view name, double salary) : emp_name(name) {
    setSalary(salary);
};

string SalEmployee::getName() const {
    return emp_name;
}

double SalEmployee::getSalary() const {
    return emp_salary;
}

void SalEmployee::setName(string_view name) { 
    emp_name = name; 
}

void SalEmployee::setSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("salary must >= 0.0 !");
    }
    emp_salary = salary;
}

double SalEmployee::earnings() const {
    return getSalary();
}

string SalEmployee::toString() const {
    return fmt::format("Name: {} \nSalary: {}", emp_name, emp_salary);
}
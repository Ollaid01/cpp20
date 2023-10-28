#include <stdexcept>
#include <fmt/format.h>
#include "salariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(string_view name, double salary) : m_name(name) {
    setSalary(salary);
}

// set name
void SalariedEmployee::setName(string_view name) {
    m_name = name; // should validate
}

// return name
string SalariedEmployee::getName() const { return m_name; }

// set salary
void SalariedEmployee::setSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }

    m_salary = salary;
}

// return salary
double SalariedEmployee::getSalary() const { return m_salary; }

// calculate earnings
double SalariedEmployee::earnings() const { return getSalary(); }

// return string representation of salariedEmployee object
string SalariedEmployee::toString() const {
    return fmt::format("Name: {}\nSalary: ${:.2f}\n", getName(), getSalary());
}
#include <iostream>
#include <string>
#include <string_view>

#pragma once

using namespace std;

class SalEmployee {
    
public:
    SalEmployee(string_view name, double salary);

    double getSalary() const;
    void setSalary(double salary);

    string getName() const;
    void setName(string_view name);

    double earnings() const;
    string toString() const;

private:
    string emp_name{};
    double emp_salary{0.0};
    
};

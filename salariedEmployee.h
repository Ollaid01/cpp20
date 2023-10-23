/**
 * @file salariedEmployee.h
 * @author ollaid mat
 * @brief salaraied employee class definition
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once // prevent multiple inclusion for header

using namespace std;

#include <string>
#include <string_view>

class SalariedEmployee 
{

public:
    SalariedEmployee(string_view name, double salary);

    // sets and gets
    string getName() const;
    void setName(string_view name);

    double getSalary() const;
    void setSalary(double salary);

    double earnings() const;
    string toString() const;

private:
    string m_name{};
    double m_salary{0.0};

};

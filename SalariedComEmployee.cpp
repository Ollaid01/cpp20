
#include <fmt/format.h>
#include <iostream>
#include <stdexcept>
#include "SalariedComEmployee.h"

using namespace std;

SalariedComEmployee::SalariedComEmployee(string_view name, double salary, 
    double grossSales, double comissionRate) : SalariedEmployee{name, salary} // call based-constructor
{
    setGrossSales(grossSales);
    setComissions(comissionRate);
}

void SalariedComEmployee::setComissions(double comission) {
    
    if (comission <= 0.0 || comission >= 1.0) {
        throw invalid_argument("Commission must be between 0.0 to 1.0 !");
    }

    m_comissionRate = comission;
}

double SalariedComEmployee::getComissions() const {
    return m_comissionRate;
}

void SalariedComEmployee::setGrossSales(double grossSales) {

    if (grossSales < 0.0) {
        throw invalid_argument("Gross Sale must > 0.0 ! ");
    }

    m_grossSales = grossSales;
}

double SalariedComEmployee::getGrossSales() const {
    return m_grossSales;
}

double SalariedComEmployee::earnings() const {
    return SalariedEmployee::earnings() + getGrossSales() * getComissions();
}


string SalariedComEmployee::toString() const {
    return fmt::format("{}Gross Sales : {} \nComission Rate: {}", SalariedEmployee::toString(), getGrossSales(), getComissions());
}
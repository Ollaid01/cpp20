#pragma once

#include <string>
#include <string_view>
#include "salariedEmployee.h"

using namespace std;

class SalariedComEmployee : public SalariedEmployee {

    public:
        SalariedComEmployee(string_view name, double salary, double grossSales, double comissionRate);

        double getGrossSales() const;
        void setGrossSales(double grossSales);

        double getComissions() const;
        void setComissions(double comission);

        string toString() const;
        double earnings() const;


    private:
        double m_grossSales{0.0};
        double m_comissionRate{0.0};

};
#pragma once

#include <string_view>

#include "Animal.h"

using namespace std;

class Dog : public Animal {

public:
    Dog(string_view name, int age);

    int get_age() const;
    void set_age(int age);

    string toSpeak() const override;

private:

    int d_age{0};

};
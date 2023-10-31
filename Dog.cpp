
#include <string_view>
#include <stdexcept>
#include <fmt/format.h>

#include "Dog.h"

using namespace std;

Dog::Dog(string_view name, int age) : Animal{name} {
    set_age(age);
}

void Dog::set_age(int age) {
    if (age < 0) {
        throw invalid_argument("Age must be >= 0 !");
    }

    d_age = age;
}

int Dog::get_age() const  {
    return d_age;
}

string Dog::toSpeak() const {
    return fmt::format("A {} speak ! ", get_name());
}
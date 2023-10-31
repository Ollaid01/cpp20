#include <string>
#include <string_view>
#include <fmt/format.h>

#include "Animal.h"

using namespace std;

Animal::Animal(string_view name) : a_name(name) {};

void Animal::set_name(string_view name) {
    a_name = name;
}

string Animal::get_name() const {
    return a_name;
}

string Animal::toString() const {
    return fmt::format("Hey! My name is : {}", get_name());
}

string Animal::toSpeak() const {
    return fmt::format("An Animal speak ! ");
}

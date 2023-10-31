
#pragma once 

#include <string>
#include <string_view>

using namespace std;

class Animal {

public:
    Animal(string_view name);

    void set_name(string_view name);
    string get_name() const;

    string toString() const;

    virtual string toSpeak() const;

private:
    string a_name{};

};
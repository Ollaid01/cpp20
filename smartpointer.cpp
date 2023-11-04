#include <iostream>
#include <fmt/format.h>
#include <memory>

using namespace std;

class Integer {

public:
    // constructor
    Integer(int i) : value{i} {
        cout << fmt::format("Constructor for Integer {}", value) << endl;
    }

    // destructor
    ~Integer() {
        cout << fmt::format("Destructor for Integer {}", value) << endl;
    }

    int get_value() const {
        return value;
    }

private:
    int value{0};

};

int main(int argc, char* argv[]) {

    Integer myInteger{5};

    // create a uniq_pt
    cout << "Creating a unique_ptr object that points to an Integer " << endl;
    
    // create a unique_ptr object "aim" it at a new Integer object
    auto ptr{make_unique<Integer>(10)};

    // interact with Integer ptr by usign a unique_ptr to call an Integer member function
    cout << "Integer value : " << ptr->get_value() << " \n Main ends " << endl;
    
    return 0;
}
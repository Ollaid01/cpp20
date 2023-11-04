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

    // unique_ptr -  erreur de copie  - une seule instance de unique_ptr peut detenir cette ressource a la fois
    unique_ptr<int> p1(new int(15));
    // unique_ptr<int> p2 = p1; // Erreur de copie  - la copie est interdite
    unique_ptr<int> p3 = move(p1); // transfert de propriete
    cout << "Unique ptr - p3 : " << *p3 << endl;

    unique_ptr<int> p4(new int(20));
    unique_ptr<double> p5(new double(10.2));
    auto int_ptr{make_unique<int>(22)};
    cout << "make unique int ptr int_pt : " << *int_ptr << endl;

    // using shared_ptr : propriétés partagé d'une ressource, plusierurs shared_ptr peuvent detenir la meme ressource
    shared_ptr<int> sp1(new int(50));
    cout << "shared ptr sp1 = " << *sp1 << endl;
    // copie ou partage de la ressource de sp1 avec sp2
    shared_ptr<int> sp2 = sp1; // copie ou partage valide OK
    cout << "partage de la ressource de sp1 avec sp2 : " << *sp2 << endl;

    // using make_shared
    auto msptr{make_shared<int>(100)};
    msptr = sp1;
    cout << fmt::format("msptr : {} | sp1 : {} ", *msptr, *sp1) << endl;


    return 0;
}
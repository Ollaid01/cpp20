#include <iostream>
#include <fmt/format.h>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main(int argc, char* argv[]) {

    Animal myAnimal{"Animal"};
    myAnimal.set_name("Animal");
    cout << fmt::format("{}", myAnimal.toString()) << endl;
    cout << fmt::format("{}", myAnimal.toSpeak()) << endl;

    cout << "==========" << endl;

    Dog myDog{"Chien", 2};
    cout << fmt::format("{}", myDog.toString()) << endl;
    cout << fmt::format("{}", myDog.toSpeak()) << endl;

    cout << "========== BASED-CLASS to BASE CLASS OJECT ===========" << endl;
    // using natural pointer: aim based-class pointer at based-class object 
    Animal* animalPtr{&myAnimal};
    cout << fmt::format("{}\n{}:\n{}\n",
                        "Calling virtual function toSpeak() with based-class pointer",
                        "To based-class object invokes based class functionality !",
                        animalPtr->toSpeak()
                        );  // based class version

    cout << "========== DERIVED-CLASS to DERIVED CLASS OBJECT ===========" << endl;
    // natural: derived class pointer at derived class object
    Dog* dogPtr{&myDog};
    cout << fmt::format("{}\n{}:\n{}\n",
                        "Calling virtual function toSpeak() with derived-class pointer",
                        "To derived-class object invokes based class functionality !",
                        dogPtr->toSpeak()
                        );  // derived class version

    cout << "========== BASED-CLASS Pointer at DERIVED CLASS OBJECT ===========" << endl;
    // aim based-class pointer at derived class object
    animalPtr = &myDog;        

    // runtime polymorphism : invokes Dog via based-class pointer to derived class object
    cout << fmt::format("{}\n{}:\n{}\n",
                        "Calling virtual function toSpeak() with based-class pointer",
                        "to derived-class object invokes derived class functionality !",
                        animalPtr->toSpeak()
                        );  // polymorphism version

    return 0;
}
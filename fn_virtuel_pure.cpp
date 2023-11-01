#include <iostream>

class Animal {

    public:
        virtual void speak() const = 0; // functionn virtuel pure qui fait Animal devient automatiquement abstraite
};

class Chien : public Animal {

    public:
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

class Chat: public Animal {

    public:
    void speak() const override {
        std::cout << "Meow Meow !" << std::endl;
    }
};

int main(int argc, char* argv[]) {

    // Animal myAnimal; // not allowed, compilation error (error: cannot declare variable ‘myAnimal’ to be of abstract type ‘Animal’)

    Chien myDogInstance;
    Animal* myDog{&myDogInstance}; // alowed and choice right version of speak function (chien)
    myDog->speak();

    Chat myChatInstance;
    Animal* myChat{&myChatInstance}; // alowed and choice right version of speak function (chat)
    myChat->speak();

    return 0;
}
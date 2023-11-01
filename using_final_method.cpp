class Base {

public:
    virtual void func() final {}
};

class Derived : public Base {

public:
    void func() override {} // compilation error 
};
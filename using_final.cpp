
// ============= for class

class Base {};

class Derived final : public Base {}; // Derived class can nopt be derived by another class

class FurtherDerived : public Derived {}; // cannot , compilation error


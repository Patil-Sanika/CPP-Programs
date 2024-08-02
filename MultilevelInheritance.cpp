#include <iostream>

// Base class
class Base {
public:
    void baseFunction() {
        std::cout << "Function of Base class" << std::endl;
    }
};

// Intermediate class derived from Base class
class Intermediate : public Base {
public:
    void intermediateFunction() {
        std::cout << "Function of Intermediate class" << std::endl;
    }
};

// Derived class derived from Intermediate class
class Derived : public Intermediate {
public:
    void derivedFunction() {
        std::cout << "Function of Derived class" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.baseFunction();         // Calling function from Base class
    obj.intermediateFunction(); // Calling function from Intermediate class
    obj.derivedFunction();      // Calling function from Derived class
    return 0;
}

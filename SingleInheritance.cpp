#include <iostream>

// Base class
class Base {
public:
    void baseFunction() {
        std::cout << "Function of Base class" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void derivedFunction() {
        std::cout << "Function of Derived class" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.baseFunction();    // Calling function from Base class
    obj.derivedFunction(); // Calling function from Derived class
    return 0;
}

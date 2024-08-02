#include <iostream>

// Base class 1
class Base1 {
public:
    void display() {
        std::cout << "Base1 display function" << std::endl;
    }
};

// Base class 2
class Base2 {
public:
    void display() {
        std::cout << "Base2 display function" << std::endl;
    }
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    void display() {
        Base1::display(); // Calling Base1's display function
        Base2::display(); // Calling Base2's display function
        std::cout << "Derived display function" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}

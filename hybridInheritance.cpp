#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "This is a Vehicle" << endl;
    }
};

// Derived class inheriting from base class Vehicle
class Car : public Vehicle {
public:
    void display() {
        cout << "This is a Car" << endl;
    }
};

// Another base class
class Engine {
public:
    void displayEngine() {
        cout << "This is an Engine" << endl;
    }
};

// Derived class inheriting from both Car and Engine
class SportsCar : public Car, public Engine {
public:
    void displaySportsCar() {
        cout << "This is a Sports Car" << endl;
    }
};

int main() {
    SportsCar obj;
    obj.display();         // Accessing method from Car class
    obj.displayEngine();   // Accessing method from Engine class
    obj.displaySportsCar();// Accessing method from SportsCar class

    return 0;
}

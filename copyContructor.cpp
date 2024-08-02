#include <iostream>
#include <cstring>

class Person {
private:
    char* name;
    int age;

public:
    // Constructor
    Person(const char* name, int age) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Copy constructor
    Person(const Person& other) {
        age = other.age;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    // Destructor
    ~Person() {
        delete[] name;
    }

    // Display function
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("John Doe", 30);
    Person person2 = person1; // Invokes the copy constructor

    std::cout << "Person 1: ";
    person1.display();
    
    std::cout << "Person 2: ";
    person2.display();

    return 0;
}

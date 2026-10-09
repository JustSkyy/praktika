#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "The animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Animal animal;
    Dog dog;

    cout << "Base class method:" << endl;
    animal.eat();

    cout << endl;

    cout << "Derived class methods:" << endl;
    dog.eat();
    dog.bark();

    return 0;
}
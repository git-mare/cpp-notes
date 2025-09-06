#include <iostream>

using namespace std;

/*
Inheritance allows a class (derived class)
to inherit attributes and methods from another class (base class
*/

class Animal {
    public:
        bool isAlive;
    
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal {
    public:
        string breed;

    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog dog1;
    dog1.isAlive = true;
    dog1.breed = "Labrador";

    cout << "Is the dog alive? " << (dog1.isAlive ? "Yes" : "No") << endl;
    cout << "Breed: " << dog1.breed << endl;
    dog1.eat();
    dog1.bark();

    return 0;
}
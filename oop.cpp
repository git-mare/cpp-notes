#include <iostream>

using namespace std;

/*
Getter and Setter able the user to access private attributes of a class.
Getter methos return the value as a "read-only" attribute.
Setter methods set or update the value of a private attribute.
*/

class Human {
    private:
        string occupation;
    
    public:
        string name;
        int age;

    // constructor
    Human(string name, string occupation, int age) {
        this->name = name;
        this->occupation = occupation;
        this->age = age;

    }

    // methods
    void eat() {
        cout << name << " is eating." << endl;
    }
    void sleep() {
        cout << name << " is sleeping." << endl;
    }

    // getter and setter methods
    string getOccupation() {
        return occupation;
    }
    void setOccupation(string occupation) {
        this-> occupation = occupation;
    }
};


int main() {

    Human human1("mare", "programmer", 21);

    human1.eat();
    human1.sleep();
    cout << human1.name << " is a " << human1.getOccupation() << endl;

    human1.setOccupation("engineer");
    cout << human1.name << " is now a " << human1.getOccupation() << endl;

    return 0;
}
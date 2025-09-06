#include <iostream>

using namespace std;

/* pointers
- store memory addresses of variables
- declared using *
*/

int main() {

    string name = "mare";
    string *pName = &name; // pointer to name address
    
    int age = 23;
    int *pAge = &age; // pointer to age address

    string cars[] = {"BMW", "Audi", "Mercedes"};
    string *pCars = cars; // pointer to the first element of the array
    
    // to avoid dangling pointers, initialize pointers to nullptr
    int *randomPointer = nullptr; // pointer that points to nothing

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *pCars << endl;
}
#include <iostream>

/* const on parameters
- prevents modification of the parameter inside the function
- useful for large objects to avoid copying while ensuring the object is not modified
*/

void printInfo(const std::string &name, const int age);

int main(){
    std::string name = "mare";
    int age = 23;
    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int age) {
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}
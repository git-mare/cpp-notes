#include <iostream>

using namespace std;

typedef std::string text_t; // an option
using number_t = int; // best option (work better with templates)


int main() {
    text_t name = "mare";
    number_t age = 23;

    cout << name << endl;
    cout << age << endl; 

    return 0;
}
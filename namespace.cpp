#include <iostream>

/* 
Namespaces is used to define a value for the same variable
But in different "versions". 
The "version" in question is the keyword namespace:
*/

namespace first {
    int x = 10;
}

namespace second {
    int x = 20;
}

int main () {
    std::cout << first::x << std::endl; // value from namespace first 
    std::cout << second::x << std::endl; // value from namespace second

    // can also use "using namespace" to avoid using the namespace keyword
    using namespace first;
    using namespace std;

    cout << x << std::endl; // value from namespace first (because of using namespace first)
    return 0;
}
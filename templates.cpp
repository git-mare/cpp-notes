#include <iostream>

/* 
A template is a formula for creating classes/functions that receive
types as parameters. This allows a function/class to work on different
data types without being rewritten for each one. (like in ./overloaded_functions.cpp)
*/

using namespace std;
/*
<typename T>
T is a placeholder for a data type
It is possible to use more than one type by separating them with commas
Like this -> template <typename T, typename U>
*/


// In this case, it is possible to use only 1 type for the whole function
template <typename T>
T greater_value(T a, T b) {
    return (a > b) ? a : b; 
}


/*
But if the function is made like this
it is possible to use different types for each parameter
*/
auto lowest_value(auto a, auto b) {
    return (a < b) ? a : b; 
}


int main() {

    cout << greater_value(3, 7) << endl; // only int 
    cout << lowest_value(3.5, 7) << endl; // mixed types
    return 0;
}
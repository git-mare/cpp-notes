#include <iostream>

int main() {
    // Declare a pointer to int and initialize it with NULL (no valid address yet)
    int *pNum = NULL;

    // 'new int' returns the address of that memory, which is stored in pNum
    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // Free the dynamically allocated memory to avoid memory leaks
    delete pNum;

    return 0;
}

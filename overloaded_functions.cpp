#include <iostream>
using namespace std;

void pizza();
void pizza(string topping);
void pizza(string topping, int slices);

int main() {
    using namespace std;
    pizza();
    pizza("pepperoni");
    pizza("pepperoni", 8);
    return 0;
}


void pizza() {
    cout << "i like pizza" << endl;
}

void pizza(string topping) {
    cout << "i like pizza with " << topping << endl;
}

void pizza(string topping, int slices) {
    cout << "i like pizza with " << topping << " and " << slices << " slices" << endl;
}
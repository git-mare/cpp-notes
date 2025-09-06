#include <iostream>

using namespace std;

int main() {
    string cars[5] = {"ford", "chevy", "honda", "toyota", "nissan"};    

    for (string car : cars) {
        cout << car << endl;
    }

    return 0;
}
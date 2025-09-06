#include <iostream>

using namespace std;
void list_all_items(string arr[], int size);
void list_all_items(double arr[], int size);

int main() {
    // Arrays must have the same data type
    string cars[5] = {"ford", "chevy", "honda", "toyota", "nissan"};
    double prices[3] = {19.99, 29.99, 39.99};

    list_all_items(cars, sizeof(cars)/sizeof(cars[0]));
    list_all_items(prices, sizeof(prices)/sizeof(prices[0]));
    return 0;
}

void list_all_items(string arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

}

void list_all_items(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}
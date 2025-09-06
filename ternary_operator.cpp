#include <iostream>

int main() {
    using namespace std;
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;

    grade >= 50 ? cout << "u passed" << endl : cout << "u failed" << endl;
}
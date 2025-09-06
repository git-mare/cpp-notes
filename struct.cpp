#include <iostream>

using namespace std;

struct Student {
    string name;
    double gpa;
    bool enrolled;
};

Student student1 = { "mare", 3.5, true };
Student student2 = { "lang", 3.8, false };

int main() {
    cout << "Student 1: " << student1.name << endl;
    cout << "GPA: " << student1.gpa << endl;
    cout << "Enrolled: " << (student1.enrolled ? "Yes" : "No") << endl;
    cout << "---------------------------" << endl;
    cout << "Student 2: " << student2.name << endl;
    cout << "GPA: " << student2.gpa << endl;
    cout << "Enrolled: " << (student2.enrolled ? "Yes" : "No") << endl;
    cout << "---------------------------" << endl;

    return 0;
}
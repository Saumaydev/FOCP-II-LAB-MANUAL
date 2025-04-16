#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void displayStudents(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Name: " << arr[i].name << ", Marks: " << arr[i].marks << endl;
    }
}

int main() {
    Student students[] = {
        {"Prateek", 85},
        {"Dev", 92},
        {"Pearl", 78}
    };
    int size = sizeof(students) / sizeof(students[0]);

    displayStudents(students, size);

    return 0;
}

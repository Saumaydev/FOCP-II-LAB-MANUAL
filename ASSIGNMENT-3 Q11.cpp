#include <iostream>
#include <string>

using namespace std;

void greet() {
    cout << "Hello!" << endl;
}

void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(const string& name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet(); 
    greet("Jenny");
    greet("Norman", 59);

    return 0;
}
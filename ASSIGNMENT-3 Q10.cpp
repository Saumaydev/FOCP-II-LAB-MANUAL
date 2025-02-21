#include <iostream>

using namespace std;

int multiply(int a, int b) {
    cout << "product of two integers: ";
    return a * b;
}

double multiply(int a, double b) {
    cout << "product of one integer and one double: ";
    return a * b;
}

float multiply(float a, float b, float c) {
    cout << "product of three floats: ";
    return a * b * c;
}

int main() {
    cout << multiply(17, 10) << endl; 
    cout << multiply(5, 2.5) << endl; 
    cout << multiply(2.1f, 3.9f, 9.5f) << endl;

    return 0;
}
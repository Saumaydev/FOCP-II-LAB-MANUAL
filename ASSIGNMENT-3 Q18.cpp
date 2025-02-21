#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a; 
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "GCD is: " << gcd(a, b) << endl; 
    return 0;
}
#include <iostream>
#include <cmath> 

using namespace std;

int power(int base, int exponent) {
    cout << "Integer power: ";
    int result = 1;
   
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

double power(double base, int exponent) {
    cout << "Double power: ";
    return pow(base, exponent); 
}

int main() {
    cout << power(2, 5) << endl;   
    cout << power(2.1, 5) << endl;  

    return 0;
}
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        return -1;
    }

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int fact = factorial(number);

    if (fact != -1)
        cout << "Factorial of " << number << " is " << fact << endl;
    else
        cout << "Factorial is not defined for negative numbers." << endl;

    return 0;
}

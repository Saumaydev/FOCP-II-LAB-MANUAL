#include <iostream>

using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int fact = factorial(num);
    cout << "Factorial of " << num << " is " << fact << endl;
    

return 0;
}
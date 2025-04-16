#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = fibonacci(number);
    cout << "Fibonacci number at position " << number << " is " << result << endl;

    return 0;
}

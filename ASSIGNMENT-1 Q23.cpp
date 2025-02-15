// WAP that determines whether a given number is a prime using a while loop.

#include <iostream>
using namespace std;
int main() {
    int n, i = 2;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime)
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";
    return 0;
}
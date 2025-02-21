#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) {
        return false;
    }

    int originalNumber = n;
    int reversedNumber = 0;

    while (n != 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
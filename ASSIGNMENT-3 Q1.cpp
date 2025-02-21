#include <iostream>

using namespace std;

int maxNumber(int a, int b) {
    if (a > b) {
        return a;
    } 
    else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int max = maxNumber(num1, num2);

    cout << "The maximum number is: " << max << endl;

return 0;
}
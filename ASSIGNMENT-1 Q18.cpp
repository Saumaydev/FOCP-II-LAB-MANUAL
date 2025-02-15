//WAP that a perform a circular left and right shift of a bits on a given integer and display the result.
#include <iostream>
using namespace std;
int main() {
    int num, n, shift;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter number of bits to shift: ";
    cin >> n;
    cout << "Enter direction to shift (left=0, right=1): ";
    cin >> shift;
    if (shift == 0) {
        cout << "After shifting " << n << " bits left, the number becomes: " << (num << n);
    } else {
        cout << "After shifting " << n << " bits right, the number becomes: " << (num >> n);
    }
    return 0;
}
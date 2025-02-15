//WAP to calculate the factorial of a number using a do-while loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    do {
        fact *= n;
        n--;
    } while (n > 0);
    cout << "Factorial: " << fact << endl;
    return 0;
}
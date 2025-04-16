#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumOfNaturalNumbers(n) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int* generateFibonacci(int n) {
    if (n <= 0) {
        return nullptr;
    }

    int* fibArray = new int[n];

    if (n >= 1) fibArray[0] = 0;
    if (n >= 2) fibArray[1] = 1;

    for (int i = 2; i < n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray;
}

int main() {
    int n;
    cin >> n;

    int* fibArray = generateFibonacci(n);

    if (fibArray != nullptr) {
        for (int i = 0; i < n; i++) {
            cout << fibArray[i] << " ";
        }
        cout << endl;

        delete[] fibArray;
    } else {
        cout << "Invalid input. n must be greater than 0." << endl;
    }

    return 0;
}
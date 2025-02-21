#include <iostream>

using namespace std;

class Calculator {
    public:
    int sum(int a, int b) {
        cout << "sum";
        return a + b;
    }

    double sum(double a, double b, double c) {
        cout << "sum of three doubles: ";
        return a + b + c;
    }

    float sum(float a, int b) {
        cout << "sum of one float and one integer: ";
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << calc.sum(1,2) << endl;
    cout << calc.sum(2.5, 3.1, 1.9) << endl;
    cout << calc.sum(2.2f, 7) << endl;

    return 0;
}
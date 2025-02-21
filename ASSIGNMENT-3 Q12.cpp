#include <iostream>
using namespace std;

int area(int side) {
    cout << "Area of square: ";
    return side * side;
}

int area(int length, int width) {
    cout << "Area of rectangle: ";
    return length * width;
}

double area(double radius) {
    cout << "Area of circle: ";
    return 3.14 * radius * radius;
}

int main() {
    cout << area(10) << endl;
    cout << area(2, 3) << endl;
    cout << area(5.0) << endl;
  

    return 0;
}
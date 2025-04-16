#include <iostream>
using namespace std;

string reverseString(string str) {
    if (str.empty()) {
        return str;
    }
    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

#include <iostream>
#include <cstdarg>
using namespace std;

void concatStrings(int count, ...) {
    va_list args;
    va_start(args, count);
    string result = "";
    for (int i = 0; i < count; i++) {
        result += va_arg(args, char*);
    }
    va_end(args);
    cout << result << endl;
}

int main() {
    concatStrings(3, "Hello, ", "Prateek", "Sharma");
    return 0;
}
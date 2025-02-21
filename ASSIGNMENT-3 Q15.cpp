#include <iostream>

using namespace std;

template<typename... Args>
int sum(Args... args) {
    return (0 + ... + args); 
}

int main() {
    int result = sum(1, 2, 3, 4, 5);
    cout << "Sum: " << result << endl;
    return 0;
}
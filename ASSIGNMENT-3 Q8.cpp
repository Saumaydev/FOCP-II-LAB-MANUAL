#include <iostream>
#include <string>

using namespace std; 
void print(const string& str) {
    cout << "String: " << str << endl;
}

void print(int num) {
    cout << "Integer: " << num << endl;
}

void print(const string& str, int num) {
    cout << "String: " << str << ", Integer " << num << endl;
}

int main() {
    print("Hello"); 
    print(17);                  
    print("The answer is", 17); 

    return 0;
}
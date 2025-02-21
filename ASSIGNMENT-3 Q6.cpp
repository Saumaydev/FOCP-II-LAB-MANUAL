#include<iostream>

using namespace std; 
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; ++i) {
            int next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
}

int main() {
    int n;
    cout << "enter the value of n" << endl; 
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
//WAP to preform division without using the / operator , implementing both integer and floation point division manually.
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Integer division: " << a/b << endl;
    cout << "Floating point division: " << (float)a/b << endl;
    return 0;
    }
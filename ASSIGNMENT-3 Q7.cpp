#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}


int main() {
  int a,b;
  cout<<"enter the numbers";
  cin>>a>>b;
  cout<<gcd(a,b)<<endl;
  return 0;
}
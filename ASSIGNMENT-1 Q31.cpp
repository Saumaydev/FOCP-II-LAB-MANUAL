//. Develop a program to reverse the digits of a given number and terminate early if the reversed number becomes a palindrome. 
//. A palindrome is a number that reads the same forwards and backwards. For example, 121 is a palindrome, while 123 is not.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x,r,rev;
    cout<<"enter number to be reversed: ";
    cin>>x;
    int o = x;
    rev = 0;
    while (x!=0){
        r = (x%10);
        rev = ((rev*10) + r);
        x=x/10;
    }
    if(o==rev){
        cout<<"palindrome number!";
        return 0 ;
    }
    cout<<"reversed number is: "<<rev;

    return 0 ;
}
 /*Develop a program to simulate a number-guessing game where the user has limited attempts 
to guess a randomly generated number. Provide feedback for each guess (too high, too low) 
and terminate the game when the number is guessed or attempts are exhausted. */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"you have three attempts!";
    int ans = 87;
    int n = 3;
    while(n>0){
        int a;
        cout<<"enter: ";
        cin>>a;
        if(a>ans){
            cout<<"too high! ";
            n--;
            cout<<"you have "<<n<<" attempts left! ";
        }
        else if(a==ans){
            cout<<"right answer! ";
            return 0 ;
        }
        else if(a<ans){
            cout<<"too low! ";
            n--;
            cout<<"you have "<<n<<" attempts left! ";
        }
        else{
            cout<<"wrong input!";
            n--;
        }
    }
    cout<<"better luck next time!";
}
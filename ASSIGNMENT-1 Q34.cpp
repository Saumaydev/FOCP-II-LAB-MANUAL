//WAP that takes input for a 2D array and prints the array in a formatted table, ensuring proper alignment of all elements.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int r,c;
    cout<<"enter number of rows: ";
    cin>>r;
    cout<<"enter number of columns: ";
    cin>>c;
    int arr[r][c];
    int x;
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            cout<<"enter element: ";
            cin>>x;
            arr[i][j]=x;

        }
    }
    cout << "\nThe array in a formatted table:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << setw(10) << arr[i][j]; 
        }
        cout << endl; 
    }

    return 0;
}

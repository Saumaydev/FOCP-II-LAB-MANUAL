#include <iostream>
using namespace std;

void doubleArray(int (&arr)[6]) {
    for (int i = 0; i < 6; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    
    doubleArray(arr);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

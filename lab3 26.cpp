#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int maxOfRest = findMax(arr, size - 1);
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << findMax(arr, size) << endl;
    return 0;
}

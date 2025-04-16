#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);
    if (result != -1) {
        cout << "Second largest element: " << result << endl;
    } else {
        cout << "Array does not have enough elements to find the second largest." << endl;
    }

    return 0;
}

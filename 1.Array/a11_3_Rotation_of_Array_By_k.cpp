#include <iostream>
using namespace std;

// Time Complexity: O(n*d)

void rotateArrayLeft(int arr[], int size) {
    int temp = arr[0];
    for(int i = 1; i < size; i++) {
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
}


void rotateArray(int arr[], int size, int k) {
    for(int i = 0; i < k; i++) {
        rotateArrayLeft(arr, size);
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int k = 2;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateArray(arr, size, k);
}
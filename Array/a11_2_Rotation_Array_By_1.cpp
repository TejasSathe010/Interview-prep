#include <iostream>
using namespace std;

void rotateArray(int arr[], int size) {
    int j = size-1;
    for(int i = 0; i < size; i++) {
        swap(arr[i], arr[j]);
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateArray(arr, size);
}
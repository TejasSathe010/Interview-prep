#include <iostream>
using namespace std;

void rotateArrayLeft(int arr[], int size) {
    int temp = arr[0];
    for(int i = 1; i < size; i++) {
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void rotateArrayRight(int arr[], int size) {
    int temp = arr[size-1];
    cout << arr[temp] << endl;
    for(int i = size - 1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
 
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateArrayLeft(arr, size);
    cout << endl;
    rotateArrayRight(arr, size);
}
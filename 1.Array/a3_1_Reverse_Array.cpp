#include <iostream>
using namespace std;

void printReversed(int arr[], int size) {
    for(int i=size-1; i>=0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printReversed(arr, size);
}
#include <iostream>
using namespace std;


int removeDuplicates(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size-1; i++) {
        if(arr[i] == arr[i+1]) {
            continue;
        }
        arr[j++] = arr[i];
    }
    arr[j++] = arr[size-1];
    return j;
}



int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    size = removeDuplicates(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
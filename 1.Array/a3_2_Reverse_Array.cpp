#include <iostream>
using namespace std;

//Time Complexity: O(n)

void printReversed(int arr[], int size) {
    
    int i=0, j=size-1;
    // cout << i << " " << j;

    while(i<j) {
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printReversed(arr, size);
}
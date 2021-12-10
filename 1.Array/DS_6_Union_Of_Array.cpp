#include <iostream>
using namespace std;

// Time Complexity: O(m+n)
// For Unsorted array, use SET. or array containing duplicate use SET.
// For Union and Itersection as well use SET.

void unionArray(int arr1[], int arr2[], int size1, int size2) {
    int i=0, j=0;
    while (i<size1 && j<size2) {
        if(arr1[i]<arr2[j]) {
            cout << arr1[i++] << " ";
        } else if(arr1[i]>arr2[j]) {
            cout << arr2[j++] << " ";
        } else {
            cout << arr1[i++] << " ";
            j++;
        }
    }

    while(i < size1) {
        cout << arr1[i++] << " ";
    }

    while(j < size2) {
        cout << arr2[j++] << " ";
    }
}


int main() {
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    unionArray(arr1, arr2, size1, size2);
}
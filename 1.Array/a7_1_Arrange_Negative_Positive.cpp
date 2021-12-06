#include <iostream>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)


void arrageNegativePositive(int arr[], int size) {
    int j = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            if(i != j) {
               swap(arr[i], arr[j]);
            }
            j++;
        }
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrageNegativePositive(arr, size);
}
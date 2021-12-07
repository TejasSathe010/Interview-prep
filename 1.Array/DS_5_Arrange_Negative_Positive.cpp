#include <iostream>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

// TODO: Program code in which order is maintained.

void arrageNegativePositive(int arr[], int size) {
    
    int left = 0;
    int right = size-1;
    
    // For Dry Run : {-5, 4, -3, 2, -1, 0, 1, -2, 3, -4};
    while (left <= right) {
        if(arr[left] < 0) {
            left++;
        } else if((arr[left] > 0) && (arr[right] < 0)) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else {
            right--;
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
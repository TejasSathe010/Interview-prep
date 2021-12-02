// Array is sorted.
#include <iostream>
using namespace std;

// This Complexity: O(logn)

int findOccurrences(int arr[], int size, int k, bool firstOcc) {
    int start = 0;
    int end = size-1;
    int index = -1;


    while (start <= end) {
        int mid = start + (end-start) / 2;
        if(arr[mid] == k) {
            index = mid;
            if(firstOcc) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else if(arr[mid] > k) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return index;
}



int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 8, 9};
    int k = 4;
    int size = sizeof(arr)/sizeof(arr[0]);
    int firstOcc = findOccurrences(arr, size, k, true);
    int lastOcc = findOccurrences(arr, size, k, false);
    cout << firstOcc << " " << lastOcc << endl;
    cout << "No of occurrences are " << (lastOcc - firstOcc) << endl;
}
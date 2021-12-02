#include <iostream>
using namespace std;

//Time Complexity: O(logn)
// Space Complexity: O(1)

int getPeakElement(int arr[], int start, int end, int size) {
    int mid = start+(end - start) / 2;

    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == size || arr[mid] >= arr[mid+1])) {
        return arr[mid];
    } else if(arr[mid-1] >= arr[mid]) {
        return getPeakElement(arr, start, mid-1, size);
    } else {
        return getPeakElement(arr, mid+1, end, size);
    }
}


int peakElement(int arr[], int n) {
    return getPeakElement(arr, 0, n-1, n);
}

int main() {
    int arr[] = { 1, 3, 20, 40, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int peak = peakElement(arr, size);
    cout << peak << endl;
}
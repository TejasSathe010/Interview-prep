#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// This Complexity: O(n)

int getMin(int arr[], int size) {
    if(size == 0) return arr[0];
    return min(arr[size-1], getMin(arr, size-1));
}

int getMax(int arr[], int size) {
    if(size == 0) return arr[0];
    return max(arr[size-1], getMax(arr, size-1));
}


int main() {
    int arr[] = { 2, 3, 20, 40, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = getMin(arr, size);
    cout << min << endl;

    int max = getMax(arr, size);
    cout << max << endl;
}
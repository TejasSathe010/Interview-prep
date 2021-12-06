#include <iostream>
#include <climits>
using namespace std;

// Time Complexity: O(n);
// Space Complexity: O(1)

int getMin(int arr[], int size) {
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size) {
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int main() {
    int arr[] = { 1, 3, 20, 40, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = getMin(arr, size);
    cout << min << endl;

    int max = getMax(arr, size);
    cout << max << endl;
}
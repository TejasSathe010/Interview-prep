#include <iostream>
using namespace std;

int peakElement(int arr[], int n) {
    if(n == 1) return arr[0];
    if(arr[0] >= arr[1]) {
        return arr[0];
    }


    for(int i = 1; i < n-1; i++) {
        if(arr[i] >=arr[i-1] && arr[i] >= arr[i+1]) {
            return arr[i];
        }
    }

    if(arr[n-1] >= arr[n-2]) {
        return arr[n-1];
    }

    return -1;
}

int main() {
    int arr[] = { 1, 3, 20, 40, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int peak = peakElement(arr, size);
    cout << peak << endl;
}
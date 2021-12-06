#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int size) {
    int large = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i] > large) {
            large = arr[i];
        }

        if(arr[i] < large && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = { 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLarge = secondLargest(arr, size);
    cout << secondLarge << endl;
}
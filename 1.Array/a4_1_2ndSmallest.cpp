#include <iostream>
#include <climits>
using namespace std;

int secondSmallest(int arr[], int size) {
    int small = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < size; i++) {

        if(size == 1) {
            small = secondSmallest = arr[0];
            break;
        }

        if(arr[i] < small) {
            small = arr[i];
        }

        if(arr[i] > small && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main() {
    int arr[] = { 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondSmall = secondSmallest(arr, size);
    cout << secondSmall << endl;
}
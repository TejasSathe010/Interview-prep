#include <iostream>
#include <utility>
using namespace std;

pair<int, int> min_Max(int arr[], int size) {
    int min=0, max=0, i=0;
    pair<int, int> result;
    if(size == 1) {
        min = arr[0];
        max = arr[0];
    }

    if(size%2 == 0) {
        if(arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }
        i = 2;
    } else {
        max = arr[0];
        min = arr[0];
        i = 1;
    }

    while(i<size-1) {
        if(arr[i] > arr[i+1]) {
            if(arr[i+1] < min) {
                min = arr[i+1];
            } 
            if(arr[i] > max) {
                max = arr[i];
            }
        } else {
            if(arr[i] < min) {
                min = arr[i];
            } 
            if(arr[i+1] > max) {
                max = arr[i+1];
            }
        }
        i = i + 2;
    }
    result.first = min;
    result.second = max;
    return result;
}

int main() {
    int arr[] = {7, 7, 7, 1, 5, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> result = min_Max(arr, size);

    cout << result.first << " ";
    cout << result.second << endl;
}
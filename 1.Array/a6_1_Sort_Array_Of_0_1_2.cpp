#include <iostream>
using namespace std;

void sortArrays(int arr[], int size) {
    int zeroCount = 0, oneCount = 0, twoCount = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }
        if(arr[i] == 1) {
            oneCount++;
        }
        if(arr[i] == 2) {
            twoCount++;
        }
    }

    // cout << count0 << " " << count1 << " " << count2;

    for(int i = 0; i < zeroCount; i++) {
        arr[i] = 0;
    }
    for(int i = zeroCount; i < (zeroCount + oneCount); i++) {
        arr[i] = 1;
    }
    for(int i = (zeroCount + oneCount); i < size; i++) {
        arr[i] = 2;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {0, 1, 2, 0, 0, 1, 2, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArrays(arr, size);
}
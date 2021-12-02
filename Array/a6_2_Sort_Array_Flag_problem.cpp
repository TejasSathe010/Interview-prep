#include <iostream>
using namespace std;

void sortArrays(int arr[], int size) {
    int l = 0;
    int m = 0;
    int h = size-1;

    while(m <= h) {
        if(arr[m] == 0) {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }

        if(arr[m] == 1) {
            m++;
        }

        if(arr[m] == 2) {
            swap(arr[m], arr[h]);
            h--;
        }
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
#include <iostream>
using namespace std;

int findMissingNum(int arr[], int n) {
    int arr_XOR = arr[0];
    int num_XOR = 1;

    for (int i = 1; i < n; i++) {
        arr_XOR ^= arr[i];
    }

    for (int i = 2; i <= n+1; i++) {
        num_XOR ^= (i);
    }

    return arr_XOR ^ num_XOR;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingNum = findMissingNum(arr, size);
    cout << missingNum << endl;
}
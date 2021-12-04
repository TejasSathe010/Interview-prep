#include <iostream>
using namespace std;

int findMissingNum(int arr[], int n) {
    int total = 0;
    int totalSum = ((n+1)*(n+2)/2);
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return totalSum - total;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingNum = findMissingNum(arr, size);
    cout << missingNum << endl;
}
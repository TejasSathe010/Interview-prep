#include <iostream>
using namespace std;

int findDuplicateFloyds(int arr[], int size) {
    int slowPtr = arr[0];
    int fastPtr = arr[0];

    do{
        slowPtr = arr[slowPtr];
        fastPtr = arr[arr[fastPtr]];
    }while(slowPtr != fastPtr);

    fastPtr = arr[0];
    while(fastPtr != slowPtr) {
        slowPtr = arr[slowPtr];
        fastPtr = arr[fastPtr];
    }
    return fastPtr;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int dupli = findDuplicateFloyds(arr, size);
    cout << dupli << endl;
}

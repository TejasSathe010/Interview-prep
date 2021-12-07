#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    int dupli = -1;
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]);
        if(arr[index] < 0) {
            return index;
        } else {
            arr[index] = -arr[index];
        }
    }
    return dupli;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int dupli = findDuplicate(arr, size);
    cout << dupli << endl;
}
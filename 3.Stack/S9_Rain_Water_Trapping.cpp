#include <iostream>
#include <vector>
using namespace std;

void rainStorage(int arr[], int size) {
    vector<int> result;
    int max_to_left[size];
    int max_to_right[size];

    max_to_left[0] = arr[0];
    max_to_right[size-1] = arr[size-1];

    for(int i = 1; i < size; i++) {
        max_to_left[i] = max(max_to_left[i-1], arr[i]);
        max_to_right[size-i-1] = max(max_to_right[size-1], arr[size-i-1]);
    }

    for(int i = 0; i < size; i++) {
        result.push_back(min(max_to_right[i], max_to_left[i]) - arr[i]);
    }

    vector<int>::iterator itr;
    for(itr=result.begin(); itr != result.end(); itr++) {
        cout << *itr << " ";
    }
}


int main() {
    int arr[] = {3, 0, 0, 2, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    rainStorage(arr, size);
}
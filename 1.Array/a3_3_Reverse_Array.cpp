#include <iostream>
using namespace std;

void reverseArray(int arr[], int i, int j) {
    if(i >= j) return;

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    reverseArray(arr, ++i, --j);
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = size-1;
    reverseArray(arr, i, j);
    printArray(arr, size);
}
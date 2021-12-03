#include <iostream>
using namespace std;

// Time Complexity: O(n)

int GCD(int a, int b) {
    if(b==0) return a;
    return GCD(b, a%b);
}

void rotateArray(int arr[], int size, int k) {
    int d=-1, i, temp, j;
    for(i=0; i<GCD(size, k); i++) {
        j = i;
        temp = arr[j];
        while(1) {
            d = (j+k)%size;

            if(d == i) {
                break;
            }

            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }

    for(int i=0; i< size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int k = 2;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateArray(arr, size, k);
}
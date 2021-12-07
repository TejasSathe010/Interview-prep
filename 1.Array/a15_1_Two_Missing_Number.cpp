#include <iostream>
#include <math.h>
using namespace std;

int fact(int n) {
    return (n==0) ? 1 : fact(n-1);
}

void printRepeating(int arr[], int size) {
    int sum = 0;
    int product = 1;
    int X=0, Y=0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    sum = sum - (size  * (size+1) / 2);
    product = product / (fact(size));

    int D = sqrt(sum*sum - 4*product);
    X = (D - sum) / 2;
    Y = X - D;

    cout << "Missing Nums are " << X << " " << Y << endl;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, size);
}
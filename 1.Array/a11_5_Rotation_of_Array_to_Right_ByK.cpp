#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
  while(start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    start++;
    end--;
  }
}

void rotationByK(int arr[], int size, int k) {
  // To Right
  k = k%size;
  reverse(arr, 0, size-1);
  reverse(arr, 0, k-1);
  reverse(arr, k, size-1);
  
  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
}

int main() 
{
    int k = 2;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotationByK(arr, size, k);
}



// #include <iostream>
// using namespace std;

// void reverse(int arr[], int start, int end) {
//   while(start < end) {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
    
//     start++;
//     end--;
//   }
// }


// void rotationByK(int arr[], int size, int k) {
//   // To Left
     // k = k%size;
//   reverse(arr, 0, size-1);
//   reverse(arr, 0, size-k-1);
//   reverse(arr, size-k, size-1);
  
//   for(int i=0; i<size; i++) {
//     cout << arr[i] << " ";
//   }
// }

// int main() 
// {
//     int k = 2;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     rotationByK(arr, size, k);
// }
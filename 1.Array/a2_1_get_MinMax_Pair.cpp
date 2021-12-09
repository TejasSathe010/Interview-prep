#include <iostream>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair findMinMax(int arr[], int size) {
  struct Pair minMax;
  if(size == 1) {
    minMax.min = arr[0];
    minMax.max = arr[0];
    return minMax;
  }
  
  if(arr[0] < arr[1]) {
    minMax.min = arr[0];
    minMax.max = arr[1];
  } else {
    minMax.min = arr[1];
    minMax.max = arr[0];
  }
  
  for(int i=2; i<size; i++) {
    if(arr[i] > minMax.max) {
      minMax.max = arr[i];
    }
    if(arr[i] < minMax.min) {
      minMax.min = arr[i];
    }
  }
  return minMax;
}


int main() 
{
    int arr[] = {1000, 1000, 445, 1, 330, 3000};
    int size = sizeof(arr) / sizeof(arr[0]);
    struct Pair minMax = findMinMax(arr, size);
    cout << minMax.min << " " << minMax.max;
    return 0;
}
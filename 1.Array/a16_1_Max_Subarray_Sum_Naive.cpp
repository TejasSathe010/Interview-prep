#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArraySum(int arr[], int size) {
  int maxi=0;
  for(int i=0; i<size; i++) {
    for(int j=i; j<size; j++) {
      int sum = 0;
      for(int k=i; k<=j; k++) {
        sum+=arr[k];
      }
      if (maxi == 0 || maxi < sum) {
        maxi = sum;
      }
    }
  }
  return maxi;
}


int main() 
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = maxSubArraySum(arr, size);
    cout << max << endl;
}
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int findKthSmallest(int arr[], int size, int k) {
    priority_queue<int, vector<int>, greater<int> > p_queue;
    for(int i = 0; i < size; i++) {
        p_queue.push(arr[i]);
    }
    int ans=0, i=1;
    while(!p_queue.empty()) {
        if(i==k) {
            ans = p_queue.top();
            break;
        }
        i++;
        p_queue.pop();
    }
    return ans;
}


int main() {
    int k=2;
    int arr[] = { 7, 1, 5, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int kthSmall = findKthSmallest(arr, size, k);
    cout << kthSmall << endl;
}
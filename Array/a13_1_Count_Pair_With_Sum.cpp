#include <iostream>
#include <unordered_map>
using namespace std;

int countPairWithSum(int arr[], int size, int sum) {
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (m.find(sum - arr[i]) != m.end()) {
            count += m[sum - arr[i]];
        }
        m[arr[i]]++;
    }

    unordered_map<int, int>::iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }

    return count;
}

int main() {
    int arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 11;
    int count = countPairWithSum(arr, size, sum);
    cout << count << endl;
}
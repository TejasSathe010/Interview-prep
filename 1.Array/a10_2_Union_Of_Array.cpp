#include <iostream>
#include <unordered_map>
using namespace std;

// Time Complexity: O(m+n)

void unionArray(int arr1[], int arr2[], int size1, int size2) {
    unordered_map<int, int> mp;

    for(int i = 0; i < size1; i++) {
        mp[arr1[i]]++;
    }

    for(int i = 0; i < size2; i++) {
        mp[arr2[i]]++;
    }
    
    // unordered_map<int, int>::iterator itr;
    // for(itr = mp.begin(); itr != mp.end(); itr++) {
    //     cout << itr->first << " " << itr->second << endl;
    // }

    cout << mp.size() << endl;
}



int main() {
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    unionArray(arr1, arr2, size1, size2);
}
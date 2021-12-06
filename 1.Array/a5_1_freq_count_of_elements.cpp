// CPP program to count frequencies of array items
#include <iostream>
#include <unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)


void countFreq(int arr[], int n)
{
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    unordered_map<int, int>::iterator itr;
	for(itr = mp.begin(); itr != mp.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}

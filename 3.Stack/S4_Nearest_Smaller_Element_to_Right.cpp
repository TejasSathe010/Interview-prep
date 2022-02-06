#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;


(int arr[], int size) {
    vector<int> v;
    stack<int> s;

    for (int i = size-1; i >= 0; i--) {
        if(s.empty()) {
            v.push_back(-1);
        } else if(!s.empty() && s.top() < arr[i]) {
            v.push_back(s.top());
        } else {
            while(!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }

            if(s.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++) {
        cout << *itr << " ";
    }
}


int main() {

    int arr[] = {1, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    nearestSmallerToRight(arr, size);
    return 0;
}

// -1 2 -1 -1
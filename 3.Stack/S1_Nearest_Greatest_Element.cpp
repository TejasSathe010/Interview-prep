#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void nearestGreat(int arr[], int size) {
    stack<int> s;
    vector<int> v;
    
    for(int i=size-1; i>=0; i--) {
        if(s.empty()) {
            v.push_back(-1);
        } else if(!s.empty() && s.top() > arr[i]) {
                v.push_back(s.top());
        } else {
            while(!s.empty() && s.top() <= arr[i]) {
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

    nearestGreat(arr, size);
    return 0;
}
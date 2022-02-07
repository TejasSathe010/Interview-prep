#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void stockSpan(int arr[], int size) {
    stack<int> s;
    vector<int> v;

    for(int i = 0; i < size; i++) {
        if(s.empty()) {
            v.push_back(1);
        } else if (!s.empty() && arr[s.top()] > arr[i]){
            v.push_back(1);
        } else {
            while(!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(i+1);
            } else {
                v.push_back(i-s.top());
            }
        }
        s.push(i);
    }

    vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++) {
        cout << *itr << " ";
    }
}

int main() {

    int arr[] = { 10, 4, 5, 90, 120, 80 };
    // 1 1 2 4 5 1
    // {100, 80, 60, 70, 60, 75, 85};
    // 1 1 1 2 1 4 6
    int size = sizeof(arr) / sizeof(arr[0]);

    stockSpan(arr, size);
    return 0;
}
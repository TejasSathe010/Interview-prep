#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> NSL(int arr[], int size) {
    vector<int> left;
    stack<int> s;

    for(int i = 0; i < size; i++) {
        if(s.empty()) {
            left.push_back(-1);
        } else if(!s.empty() && arr[s.top()] < arr[i]) {
            left.push_back(s.top());
        } else {
            while(!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            if(s.empty()) {
                left.push_back(-1);
            } else {
                left.push_back(s.top());
            }
        }
        s.push(i);
    }
    return left;
}

vector<int> NSR(int arr[], int size) {
    vector<int> right;
    stack<int> s;

    for(int i = size-1; i >= 0; i--) {
        if(s.empty()) {
            right.push_back(size);
        } else if(!s.empty() && arr[s.top()] < arr[i]) {
            right.push_back(s.top());
        } else {
            while(!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            if(s.empty()) {
                right.push_back(size);
            } else {
                right.push_back(s.top());
            }
        }
        s.push(i);
    }
    reverse(right.begin(), right.end());
    return right;
}

int MAH(int arr[], int size) {
    vector<int> left = NSL(arr, size);
    vector<int> right = NSR(arr, size);

    vector<int> width;
    for (int i = 0; i < left.size(); i++) {
        width.push_back(right[i] - left[i] - 1);
    }

    // vector<int>::iterator itr;
    // for (itr = width.begin(); itr != width.end(); itr++) {
    //     cout << *itr << " ";
    // }

    vector<int> area;
    for (int i = 0; i < width.size(); i++) {
        area.push_back(width[i] * arr[i]);
    }
    int max = *max_element(area.begin(), area.end());
    return max;
}

int main() {
    int arr[] = { 6, 2, 5, 4, 5, 1, 6};

    int max = MAH(arr, sizeof(arr) / sizeof(arr[0]));
    cout << max << endl;
}
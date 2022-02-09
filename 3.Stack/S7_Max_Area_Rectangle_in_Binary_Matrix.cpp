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

int maxAreaRect(int arr[4][4], int m, int n) {
    for(int i = 0; i < n; i++) {
        v.push_back(arr[0][i]);
    }
    int maximum = MAH(arr[0], n);
    for(int i = 1; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = arr[i-1][j] + arr[i][j];
            }
        }
        maximum = max(maximum, MAH(arr[i], n));
    }
    return maximum;
}

int main() {
    int arr[4][4] = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    int max = maxAreaRect(arr, 4, 4);
    cout << max << endl;
    return 1;
}
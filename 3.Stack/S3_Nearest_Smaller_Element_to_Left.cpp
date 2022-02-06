#include <iostream>
#include <stack>
#include <vector>
using namespace std;


void nearestSmallerToLeft(int arr[], int size) {
    vector<int> v;
    stack<int> s;

    for (int i = 0; i < size; i++) {
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
    vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++) {
        cout << *itr << " ";
    }
}


int main() {

    int arr[] = {4, 5, 2, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    nearestSmallerToLeft(arr, size);
    return 0;
}

// -1 4 -1 2 2
#include <iostream>
#include <stack>
using namespace std;

stack<int> s1;
stack<int> s2;

void s_enqueue(int data) {
    s1.push(data);
}

void s_deque() {
    while(!s1.empty()) {
        int val = s1.top();
        s1.pop();
        s2.push(val);
    }
    cout << s2.top() << " ";
    s2.pop();
    while(!s2.empty()) {
        int val = s2.top();
        s2.pop();
        s1.push(val);
    }
}


int main() {
    
    s_enqueue(15);
    s_enqueue(8);
    s_enqueue(23);
    s_deque();
    s_enqueue(28);
    s_enqueue(38);
    s_deque();
    s_enqueue(48);
    s_deque();
    return 1;
}



#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

string isBalanced(string str) {
    unordered_map<char, int> symbols = {{'[', -3}, {'(', -2}, {'{', -1}, {']', 3}, {')', 2}, {'}', 1}};
    stack<int> s;
    for(int i = 0; i < str.length(); i++) {
        if(symbols[str[i]] < 0) {
            s.push(str[i]);
        } else {
            if(s.empty()) return "NO";
            char val = s.top();
            s.pop();
            if(symbols[str[i]]+symbols[val] != 0) {
                return "NO";
            }
        }
    }
    if(s.empty()) return "YES";
    return "NO";
}

int main() {
    string str = "{([[[]]])}";
    string isBal = isBalanced(str);
    cout << isBal << endl;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    int n_ops;
    cin >> n_ops;
    for(int i=0; i<n_ops; i++) {
        int ops;
        cin >> ops;
        switch (ops) {
        case 1:
            {
                string inp;
                cin >> inp;
                stk.push(str);
                str.append(inp);
            }
            break;
        case 2:
            {
                int inp;
                cin >> inp;
                stk.push(str);
                str.erase(str.size()-inp);
            }
            break;
        case 3:
            {
                int inp;
                cin >> inp;
                cout << str[inp-1] << endl;
            }
            break;
        case 4:
            {
                str = stk.top();
                stk.pop();
            }
            break;
        default:
            break;
        }
    }
    return 0;
}

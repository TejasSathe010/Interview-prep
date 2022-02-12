#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str = "";
    int n_ops;
    cin >> n_ops;
    for(int i=0; i<n_ops; i++) {
        int ops;
        cin >> ops;
        switch (ops) {
        case 1:
            {
                string inp;
                getline(cin, inp);
                stk.push(str);
                str.append(inp);
            }
            break;
        case 2:
            {
                int inp;
                cin >> inp;
                stk.push(str);
                str.erase(str.end()-1-inp, str.end());
            }
            break;
        case 3:
            {
                int inp;
                cin >> inp;
                cout << str[inp] << endl;
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

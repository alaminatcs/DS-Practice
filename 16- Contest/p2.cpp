/*
Problem Name: 
Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x; cin >> n >> m;
    stack<int> s; queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> x; s.push(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x; q.push(x);
    }
    if(n != m) cout << "NO\n";
    else {
        int rem = 1;
        while (!s.empty()) {
            if(s.top() != q.front()) {
                rem = 0; break;
            }
            s.pop(); q.pop();
        }
        if (rem) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
/*
Problem Name: Queue using STL Library.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x; cin >> n; queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> x; q.push(x);
    }
    while (!q.empty()) {
        cout << q.front() << " "; q.pop();
    } cout << "\n";
    return 0;
}
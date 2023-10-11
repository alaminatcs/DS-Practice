/*
Problem Name: Stack using STL Library.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x; cin >> n; stack<int> st;
    for (int i = 0; i < n; i++) {
        cin >> x; st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << " "; st.pop();
    } cout << "\n";
    return 0;
}
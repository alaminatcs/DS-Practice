/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n; vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    b.insert(b.end(), a.begin(),  a.end());
    for (auto var : b) cout << var << " ";
    return 0;
}
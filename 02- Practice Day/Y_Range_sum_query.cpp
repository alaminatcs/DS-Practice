/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
*/
#include <bits/stdc++.h>
#define lld long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, q; cin >> n >> q; vector<lld> sum(n+1, 0);

    lld x, s = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x; s += x; sum[i] = s;
    }
    
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        cout << sum[r] - sum[l-1] << "\n";
    }
    return 0;
}
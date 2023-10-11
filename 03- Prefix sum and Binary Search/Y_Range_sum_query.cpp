/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
*/
#include <bits/stdc++.h>
using namespace std;

long long prefix_sum(int l, int r, long long *ar_sum) {
    if(l == 1) return ar_sum[r-1];
    else return ar_sum[r-1] - ar_sum[l-2];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, q, arr[n]; cin >> n >> q;
    for(int i = 0; i < n; i++) cin >> arr[i];

    long long sum = 0, ar_sum[n] = {0};
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        ar_sum[i] = sum;
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << prefix_sum(l, r, ar_sum) << "\n";
    }
    return 0;
}
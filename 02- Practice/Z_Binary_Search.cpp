/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, q; cin >> n >> q; vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++) {
        int x, rem = 0; cin >> x;
        int l = 0, r = v.size()-1;
        while (l <= r) {
            int mid = (l+r+1)/2;
            if (v[mid] == x) {
                rem = 1; break;
            }
            else if (v[mid] < x) l = mid+1;
            else r = mid-1;
        }
        if (rem) cout << "found\n";
        else cout << "not found\n";
    }
    return 0;
}
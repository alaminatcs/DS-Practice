/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n; vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end()); int count = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[j]-v[i] == 1) {
                count++; break;
            }
            else if (v[j]-v[i] > 1) break;
        }
    }
    cout << count << "\n";
    return 0;
}
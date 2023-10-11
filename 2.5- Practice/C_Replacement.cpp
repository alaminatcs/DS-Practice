/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n; vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    replace_if(v.begin(), v.end(), [](int var) {return var>0;}, 1);
    replace_if(v.begin(), v.end(), [](int var) {return var<0;}, 2);
    for (auto var : v) cout << var << " "; cout << "\n";
    return 0;
}
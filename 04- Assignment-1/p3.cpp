/*
Problem Name: Get sorted.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

void solve_fun() {
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int status = 0;
    for(int i = 0; i < n-1; i++) {
        if(ar[i] > ar[i+1]) {
            status = 1; break;
        }
    }
    if(status) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    // Write your code here
    int tc; cin >> tc;
    while(tc--) {
        solve_fun();
    }
    return 0;
}

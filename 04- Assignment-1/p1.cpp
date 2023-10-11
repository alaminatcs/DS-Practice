/*
Problem Name: Duplicate
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    int status = 0;
    for(int i = 0; i < n-1; i++) {
        if(ar[i] == ar[i+1]) {
            status =  1;
            break;
        }
    }
    if(status) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

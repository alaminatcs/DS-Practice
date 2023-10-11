/*
Problem Name: Get prefix sum.
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
    long long pre[n];
    pre[0] = ar[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + ar[i];
    }
    for(int i = n-1; i > 0; i--) {
        cout << pre[i] << " ";
    }
    cout << pre[0] << "\n";
    return 0;
}

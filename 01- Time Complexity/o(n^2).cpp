/*
Problem Name: O(n^2) time complexity.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        } cout << "\n";
    }    
    return 0;
}
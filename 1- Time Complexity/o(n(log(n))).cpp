/*
Problem Name: O(N(log(N))) time complexity.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = n, c = 0;
        while (x) {
            c++; x /= 2;
        } cout << c << "\n";
    }    
    return 0;
}
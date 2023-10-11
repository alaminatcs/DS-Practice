/*
Problem Name: O(log(N)) time complexity example.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int i = 1, no_steps = 0;
    while (i < n) {                 // for (i = 1; i <= n; i *= 2)
        i *= 2; no_steps++;
    }
    cout << no_steps << " steps required using 2 base log\n";

    no_steps = 0;
    while (n) {
        no_steps++; n /=  10;
    }
    cout <<  no_steps << " steps required using 10 base log\n";
    return 0;
}
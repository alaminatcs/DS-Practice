/*
Problem Name: sqrt(N) time complexity.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i*i <= n; i++) {        //sqrt(n)
        cout << i << " ";
    }
//eg: divisor count
    int count = 0;
    for (int i = 1; i*i <= n; i++) {       //sqrt(n)
        if (n%i == 0) count += 2;// {10/(2) = (5)} here we got 2 div at the same time
    }
    cout << count << " no of divisor\n";
    return 0;
}
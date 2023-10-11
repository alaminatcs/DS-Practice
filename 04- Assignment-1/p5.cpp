/*
Problem Name: Printing X
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if((n+1)/2 == i) {
            for(int j = 1; j < i; j++) cout << " ";
            cout << "X";
        }
        else if(i <= n/2) {
            for(int j = 1; j < i; j++) cout << " ";
            cout << "\\";
            for(int j = 1; j <= n-(2*i); j++) cout << " ";
            cout << "/";
        }
        else {
            for(int j = 1; j <= n-i; j++) cout << " ";
            cout << "/";
            for(int j = 1; j < 2*(i-(n+1)/2); j++) cout << " ";
            cout << "\\";
        }
        cout << "\n";
    }
    return 0;
}

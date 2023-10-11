/*
Problem Name: Insert it
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int n; cin >> n; int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    int m; cin >> m; int br[m];
    for(int i = 0; i < m; i++) cin >> br[i];
    int x; cin >> x;
    
    if(x == 0) {
        for(int i = 0; i < m; i++) cout << br[i] << " ";
        for(int i = 0; i < n-1; i++) cout << ar[i] << " ";
        cout << ar[n-1] << "\n";
    }
    else if(x == n) {
        for(int i = 0; i < n; i++) cout << ar[i] << " ";
        for(int i = 0; i < m-1; i++) cout << br[i] << " ";
        cout << br[m-1] << "\n";
    }
    else {
        for(int i = 0; i < n; i++) {
            if(i == x-1) {
                cout << ar[i] << " ";
                for(int j = 0; j < m; j++) {
                    cout << br[j] << " ";
                }
            }
            else {
                cout << ar[i];
                if(i != n-1) cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

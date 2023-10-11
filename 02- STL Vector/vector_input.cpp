/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v(5);       //if we declare with size then we can i/p usnig cin >> v[i] otherwise need to push_back()
    for (int i = 0; i < 5; i++) {
        getline(cin, v[i]);         //string with space
        //cin >> v[i];
    }
    cout << v.size() << "\n";
    for (auto var : v) cout << var << "\n";
    cout << v[4].size();
    return 0;
}
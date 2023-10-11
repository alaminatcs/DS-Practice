/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(26, 0); char ch;
    while((ch=cin.get()) != EOF) {
        v[ch-'a']++;
    }

    for(int i=0; i<26; i++) {
        if (v[i]) cout << char(97+i) << " : " << v[i] << "\n";
    }
    return 0;
}
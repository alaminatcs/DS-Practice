/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";
    
    v.resize(10, 0);
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size();
    v.clear(); cout << "\n";                //do not delete the memory, only clear the value
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size();
    return 0;
}
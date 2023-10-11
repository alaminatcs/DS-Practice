/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    //What will be the complexity of the vector assign() operation?
    vector<int> v = {1, 2, 3, 4, 5, 7};
    for (auto var : v) cout << var << " ";

    cout << "\n"; v.insert(v.begin()+5, 6);
    for (auto var : v) cout << var << " ";

    cout << "\n"; v.resize(10, 1);
    for (auto var : v) cout << var << " ";

    vector<int> v2(v); cout << "\n";
    v2.erase(v2.begin()+5, v2.end());
    for (auto var : v2) cout << var << " ";

    replace(v2.begin(), v2.end(), 4, 0); cout << "\n";
    for (auto var : v2) cout << var << " ";

    vector<int>::iterator it = find(v2.begin(), v2.end(), 0);
    cout << "\n" << it - v2.begin();
    return 0;
}
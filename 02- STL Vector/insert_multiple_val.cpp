/*
Problem Name: Insert multiple values.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> x;
    for (auto var : x) cout << var << " ";
    cout<< x.capacity() << "\n" ;

    vector<int> y(2);
    for (auto var : y) cout << var << " ";
    cout << y.capacity() << "\n";

    vector<int> v = {1, 2, 3};
    for (auto var : v) cout << var << " ";
    cout << "\n";

    vector<int> v2 = {4, 5};
    v.insert(v.begin()+3, v2.begin(), v2.end());
    for (auto var : v) cout << var << " ";
    cout << v2.capacity() << "\n";

    v.resize(20, 0);
    //for (auto var : v) cout << var << " ";
    cout << v.capacity() << "\n";

    v[19] = 1; v2.push_back(3);
    //for (auto var : v) cout << var << " ";
    cout << v2.capacity() << "\n";
    return 0;
}
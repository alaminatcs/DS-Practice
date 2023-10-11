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
    
    v.insert(v.begin()+5, 0);       //insert single value 0 at 5th index
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    vector<int> v2 = {6, 7, 8, 9, 10};
    v.insert(v.end(), v2.begin(), v2.end());
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    v.erase(v.begin()+5);
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    v.erase(v.begin()+5, v.end());     //remove multiple values
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    replace(v.begin()+2, v.end(), 3, 0);    //replace a value
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    auto l1 = [](int val) {return val==4 || val==2;};
    replace_if(v.begin(), v.end(), l1, 3);    //replace multiple values
    for (auto var : v) cout << var << " ";
    cout << "\nsize of vector: " << v.size() << "\n";

    vector<int>::iterator itr = find(v.begin(), v.end(), 3);        //find single val
    cout << *itr << " find at index no: " << itr - v.begin() << "\n";

    auto lis = [](int val) {return val==0 || val==5;};          // find multiple values
    auto it = find_if(v.begin(), v.end(), lis);
    while (it != v.end()) {
        cout << *it << " find at index no: " << it - v.begin() << "\n";
        it = find_if(next(it), v.end(), lis);
    }
    return 0;
}
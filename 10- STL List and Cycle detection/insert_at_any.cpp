#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;
    
    myList.insert(next(myList.begin(), 2), 25);
    myList.insert(next(myList.begin(), 4), 35);
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;
}
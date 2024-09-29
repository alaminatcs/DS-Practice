/*
Problem Name: 
Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/special-queries-1-1
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; queue<string> q;
    while (n--) {
        int x; cin >> x;
        if (x) {
            if (q.empty()) cout << "Invalid\n";
            else {
                cout << q.front() << "\n"; q.pop();
            }
        }
        else {
            string st; cin >> st; q.push(st);
        }
    }
    return 0;
}
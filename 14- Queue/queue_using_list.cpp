/*
Problem Name: Queue using List.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class myQueue {
public:
    list<int> l;
    void push(int val) {
        l.push_back(val);
    }
    void pop() {
        l.pop_front();
    }
    int front() {
        return l.front();
    }
    int empty() {
        if (l.size() == 0) return 1;
        else return 0;
    }
};

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x; cin >> n; myQueue q;
    for (int i = 0; i < n; i++) {
        cin >> x; q.push(x);
    }
    while (!q.empty()) {
        cout << q.front() << " "; q.pop();
    } cout << "\n";
    return 0;
}
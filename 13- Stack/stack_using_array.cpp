/*
Problem Name: Stack using Array.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    int push(int val) {
        v.push_back(val);
    }
    int pop() {
        v.pop_back();
    }
    int top() {
        return v.back();
    }
    bool empty() {
        return v.empty();
    }
};

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n; myStack st;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; st.push(x);
    }
    cout << "top: " << st.top() << "\n";
    st.pop(); cout << "top: " << st.top() << "\n";
    cout << "isEmpty: " << st.empty() << "\n";
    return 0;
}
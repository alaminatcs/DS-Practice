/*
Problem Name: Stack using List.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* nxp; Node* pre;
    Node(int val) {
        this->val = val;
        this->nxp = NULL;
        this->pre = NULL;
    }
};

class myStack {
public:
    Node* head = NULL; Node* tail = NULL; int siz = 0;

    void push(int val) {
        Node* nd = new Node(val); siz++;
        if (head == NULL) {
            head = nd; tail = nd; return;
        }
        tail->nxp = nd; nd->pre = tail; tail = tail->nxp;
    }
    void pop() {
        if (head == NULL) return;
        Node* del = tail; siz--;
        tail = tail->pre; delete del;
        if (tail == NULL) head = NULL;   
     }
    int top() {
        return tail->val;
    }
    bool empty() {
        if (siz == 0) return 1;
        else return 0;
    }
};

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n; myStack st;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << " "; st.pop();
    } cout << "\n";
    return 0;
}
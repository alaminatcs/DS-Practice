/*
Problem Name: Queue using Doubly Linked List.
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

class myQueue {
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
        Node* del = head; head = head->nxp; siz--;
        if (head == NULL) {
            tail = NULL; delete del; return;
        }
        head->pre = NULL; delete del;
    }
    int front() {
        return head->val;
    }
    int empty() {
        if (siz == 0) return 1;
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
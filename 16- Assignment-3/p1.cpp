/*
Problem Name: 
Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again-1
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* nxp; Node* pre;
    Node (int val) {
        this->val = val;
        this->nxp = NULL; this->pre = NULL;
    }
};

class MyStack {
public:
    Node* head = NULL; Node* tail = NULL; int siz = 0;
    void push(int val) {
        Node* nd = new Node(val); siz++;
        if(head == NULL) {
            head = nd; tail = nd; return;
        }
        tail->nxp = nd; nd->pre = tail; tail = tail->nxp;
    }
    void pop() {
        if (head == NULL) return;
        Node* del = tail; siz--;
        tail = tail->pre; delete del;
        if(tail == NULL) head = NULL;
    }
    int top() {
        return tail->val;
    }
    bool empty() {
        if (siz == 0) return true;
        else return false;
    }
};

class MyQueue {
public:
    Node* head = NULL; Node* tail = NULL; int siz = 0;
    void push(int val) {
        Node* nd = new Node(val); siz++;
        if(head == NULL) {
            head = nd; tail = nd; return;
        }
        tail->nxp = nd; nd->pre = tail; tail = tail->nxp;
    }
    void pop() {
        if (head == NULL) return;
        Node* del = head; siz--;
        head = head->nxp; delete del;
        if(head == NULL) tail = NULL;
    }
    int front() {
        return head->val;
    }
    bool empty() {
        if (siz == 0) return true;
        else return false;
    }
};

int main()
{
    // Write your code here
    int n, m, x; cin >> n >> m;
    MyStack s; MyQueue q;
    for (int i = 0; i < n; i++) {
        cin >> x; s.push(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x; q.push(x);
    }
    if(n != m) cout << "NO\n";
    else {
        int rem = 1;
        while (!s.empty()) {
            int vs = s.top(), vq = q.front();
            if(vs != vq) {
                rem = 0; break;
            }
            s.pop(); q.pop();
        }
        if(rem) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

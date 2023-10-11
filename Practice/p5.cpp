#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* left; Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL; this->right = NULL;
    }
};

Node* input_scan() {
    int val; cin >> val; Node* root = NULL;
    if (val != -1) root = new Node(val);
    queue<Node*> q; if (root) q.push(root);

    while (!q.empty()) {
        Node* p = q.front(); q.pop();
        int l, r; cin >> l >> r;
        Node* left; Node* right;
        if (l != -1) {
            left = new Node(l); p->left = left;
        }
        if (r != -1) {
            right = new Node(r); p->right = right;
        }
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

int main() {
    Node* root = input_scan();
    priority_queue<int> pq;
    if (root) {
        queue<Node*> q; q.push(root);
        while (!q.empty()) {
            Node* f = q.front(); q.pop();
            pq.push(f->val);
            if (f->left) q.push(f->left);
            if (f->right) q.push(f->right);
        }
    }
    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int x; cin >> x; pq.push(x);
        }
        else if (type == 2) {
            cout << pq.top() << "\n"; pq.pop();
        }
    }
    return 0;
}
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

void level_order(Node *root) {
    vector<int> v;
    if (root) {
        queue<Node*> q; q.push(root);
        while (!q.empty()) {
            Node* f = q.front(); q.pop();
            v.push_back(f->val);
            if (f->right) q.push(f->right);
            if (f->left) q.push(f->left);
        }
    }
    reverse(v.begin(), v.end());
    for (auto val : v) cout << val << " ";
}

int main() {
    // Write your code here
    Node* root = input_scan();
    level_order(root); cout << "\n";
    return 0;
}
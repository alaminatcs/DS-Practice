/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

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

void post_order(Node *root) {
    if (root == NULL) return;
    post_order(root->left); post_order(root->right);
    v.push_back(root->val);
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        Node* root = input_scan();
        v.erase(v.begin(), v.end()); post_order(root);
        for (auto val : v) cout << val << " ";
        cout << "\n";
    }
    return 0;
}
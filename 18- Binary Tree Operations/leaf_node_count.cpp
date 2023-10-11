/*
Problem Name: Leaf node count of a binary tree.
Problem Link: 
*/
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

void node_count(Node *root) {
    if (root) {
        queue<Node*> q; q.push(root); int c = 0;
        while (!q.empty()) {
            Node* f = q.front(); q.pop(); int l, r;
            if (f->left) q.push(f->left);
            else l = 1;
            if (f->right) q.push(f->right);
            else r = 1;
            if (l==1 && r==1) c++;
        }
        cout << c << "\n";
    }
    else cout << "0\n";
}

int pre_leaf_nc(Node *root) {
    if (root == NULL) return 0;
    if (root->left==NULL && root->right==NULL) return 1;
    else {
        int left = pre_leaf_nc(root->left);
        int right = pre_leaf_nc(root->right);
        return left + right;
    }
}

int main() {
    Node* root = input_scan();
    //node_count(root);         // using level order
    cout << pre_leaf_nc(root) << "\n";      /// node count using pre_order
    return 0;
}
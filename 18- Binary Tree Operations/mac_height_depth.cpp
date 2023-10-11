/*
Problem Name: max height and depth count of a binary tree.
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

// void node_count(Node *root) {
//     if (root) {
//         queue<Node*> q; q.push(root); int l=0, r=0, c=1;
//         while (!q.empty()) {
//             Node* f = q.front(); q.pop();
//             if (f->left) {
//                 q.push(f->left); l++;
//             }
//             if (f->right) {
//                 q.push(f->right); r++;
//             }
//             c = max(c, max(l, r));
//         }
//         cout << c << "\n";
//     }
//     else cout << "0\n"; 
// }

int ht_dep_count(Node* root) {
    if (root == NULL) return 0;
    int left = ht_dep_count(root->left);
    int right = ht_dep_count(root->right);
    return max(left, right) + 1;
}

int main() {
    Node* root = input_scan();
    cout <<  ht_dep_count(root);         // using pre_order
    //node_count(root); not completed     /// node count using pre_order
    return 0;
}
/*
Problem Name: Binary Tree traverse using Level Order.
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

void levelorder(Node* root) {
    queue<Node*> q; q.push(root);
    while (!q.empty()) {
        Node* f = q.front(); q.pop();
        cout << f->val << " ";
        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
}

int main() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);

    //connection
    root->left = a; root->right = b;
    a->left = c; a->right = d;
    b->left = e; b->right = f;

    levelorder(root);
    return 0;
}
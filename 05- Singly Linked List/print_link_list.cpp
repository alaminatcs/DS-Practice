/*
Problem Name: Singly Link list with Dynamic node.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* nxp;
    Node(int val) {
        this->val = val;
        this->nxp = NULL;
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(60);
    
    head->nxp = a;
    a->nxp = b;         //head->nxp->nxp = b;
    b->nxp = c;
    c->nxp = d;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->nxp;
    }
    return 0;
}
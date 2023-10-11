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
    Node* a = new Node(40);
    Node* b = new Node(70);
    
    head->nxp = a;
    head->nxp->nxp = b;    //a->nxp = b; 

    cout << head->val << " " << head->nxp->val << " ";
    cout << head->nxp->nxp->val << "\n";
    return 0;
}
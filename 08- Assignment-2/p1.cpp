#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* nxp;
    Node(int val) {
        this->val = val;
        this->nxp = NULL;
    }
};

void insert_val(Node *&head, Node *&tail, int val) {
    Node *nd = new Node(val);
    if(head == NULL) {
        head = nd; tail = nd; return;
    }
    tail->nxp = nd; tail = nd;
}

void find_max_min(Node *head, Node *tail) {
    int mx = head->val, mn = head->val;
    Node *temp = head;
    while(temp != NULL) {
        if(temp->val > mx) mx = temp->val;
        if(temp->val < mn) mn = temp->val;
        temp = temp->nxp;
    }
    cout << mx << " " << mn << "\n";
}

int main()
{
    // Write your code here
    Node *head = NULL, *tail = NULL;
    while(true) {
        int val; cin >> val;
        if(val == -1) break;
        insert_val(head, tail, val);
    }
    find_max_min(head, tail);
    return 0;
}
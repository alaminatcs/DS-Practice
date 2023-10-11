/*
Problem Name: 
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

void insert_val(Node *&head, Node *&tail, int val) {
    Node *nd = new Node(val);
    if(head == NULL) {
        head = nd; tail = nd; return;
    }
    Node *temp = head;
    while(temp->nxp != NULL) {
        temp = temp->nxp;
    }
    temp->nxp = nd; tail = nd;
}

void sort_link_list(Node *head) {
    for(Node *i = head; i->nxp != NULL; i = i->nxp) {
        bool rem = true;
        for(Node *j = i->nxp; j != NULL; j = j->nxp) {
            if(i->val > j->val) {
                swap(i->val, j->val); rem = false;
            }
        }
        if (rem) break;
    }
}

void print_val(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->nxp;
    }
}

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    Node *head = NULL, *tail = NULL;
    cout << "insert your values: ";
    while(1) {
        int val; cin >> val;
        if(val == -1) break;
        insert_val(head, tail, val);
    }
    cout << "before sorting: " ; print_val(head);

    sort_link_list(head); cout << "\n";
    
    cout << "after sorting: "; print_val(head);
    return 0;
}
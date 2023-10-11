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

void insert_val(Node* &head, int val) {
    Node* nd = new Node(val);
    if(head == NULL) {
        head = nd; return;
    }
    Node* temp = head;
    while(temp->nxp != NULL) {
        temp = temp->nxp;
    }
    temp->nxp = nd;
}

void print_val(Node* head) {
    cout << "Here is your link list: ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->nxp;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL;

    while(1) {
        cout << "insert your option: ";
        int op; cin >> op;
        if(op == 1) {
            int val; cin >> val;
            insert_val(head, val);
        }
        else if(op == 2) {
            print_val(head);
        }
        else break;
    }
    return 0;
}
/*
Problem Name: 
Problem Link: 
*/
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

void insert_val(Node* &head, int val) {
    Node* nd = new Node(val);
    if(head == NULL) {
        head = nd;
        cout << "Inserted at head\n";
        return;
    }
    Node* temp = head;
    while(temp->nxp != NULL) {
        temp = temp->nxp;
    }
    temp->nxp = nd;
    cout << "Inserted at tail\n";
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
    //ios_base::sync_with_stdio(0); cin.tie(0);
    Node* head = NULL;
    cout << "Insert your link list values: \n";
    while(1) {
        int val; cin >> val;
        if(val == -1) break;
        insert_val(head, val);
    }
    print_val(head);
    return 0;
}
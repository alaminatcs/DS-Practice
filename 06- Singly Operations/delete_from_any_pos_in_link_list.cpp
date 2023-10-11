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

void insert_any_pos(Node* &head, int pos, int val) {
    Node* nd = new Node(val);
    Node* temp = head;
    if(pos == 1) {
        nd->nxp = head; head = nd;
    }
    else {
        for(int i = 2; i < pos; i++) {
            temp = temp->nxp;
            if (temp == NULL) {
                cout << "Invalid Index\n"; return;
            }
        }
        if (temp == NULL) {
            cout << "Invalid Index\n"; return;
        }
        nd->nxp = temp->nxp; temp->nxp = nd;
    }
    cout << "Inserted at " << pos << " no position\n";
}

void delete_any_pos(Node* &head, int pos) {
    Node *dnd;
    if(head == NULL) {
        cout << "Head is not available\n"; return;
    }
    if(pos == 1) {                              //corner case handle
        dnd = head; head = head->nxp;
    }
    else {
        Node *temp = head;
        for(int i = 2; i < pos; i++) {
            if(temp->nxp == NULL) break;
            temp = temp->nxp;
        }
        if(temp->nxp == NULL) {                 //corner case handle
            cout << "Invalid Index\n"; return;
        }
        dnd = temp->nxp; temp->nxp = dnd->nxp;
    }
    delete dnd;
}

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
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
        else if(op == 3) {
            cout << "at any pos, val: ";            //assume on 0 based position
            int pos, val; cin >> pos >> val;
            insert_any_pos(head, pos, val);
        }
        else if(op == 4) {
            cout << "delete from any pos: ";       //assume on 0 based position
            int pos; cin >> pos;
            delete_any_pos(head, pos);
        }
        else break;
    }
    return 0;
}
/*
Problem Name: Insert at any position in Doubly Linked List.
*/
#include <bits/stdc++.h>
using namespace std;

int counter = 0;                    //node counter

class Node {
public:
    int val; Node* next, * prev;
    Node(int v) {
        val = v; prev = NULL; next = NULL;
    }
};

void insert_any(Node* &head, Node* &tail, int val, int pos) {
    Node* nod = new Node(val);

    if (pos<0 || pos>counter) {
        cout << "Invalid Positions\n"; return;
    }
    if (pos == 0) {
        if (head == NULL) {
            head = nod; tail = nod;
            counter++; return;
        }
        nod->next = head; head->prev = nod; head = nod;
        counter++; return;
    }

    Node* temp = head; pos--;
    while (pos--) {
        temp = temp->next;
    }
    if(temp->next == NULL) {
        nod->prev = temp; temp->next = nod;
        tail = nod; counter++; return;
    }
    temp->next->prev = nod; nod->next = temp->next;
    nod->prev = temp; temp->next = nod; counter++;
}


void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " "; temp = temp->next;
    }
    cout << "\n";
}

void print_backward(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " "; temp = temp->prev;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL, * tail = NULL;
    while (true) {
        cout << "insert type: "; int type; cin >> type;
        if (type == 1) {
            int val, pos; cin >> pos >> val;        // 0 based position
            insert_any(head, tail, val, pos);
        }
        else if (type == 2) {
            cout << "forward: "; print_forward(head);
        }
        else if (type == 3) {
            cout << "backward: "; print_backward(tail);
        }
        else break;
    }    
    return 0;
}
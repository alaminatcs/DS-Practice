/*
Problem Name: Doubly Linked List Implementation.
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* next, * prev;
    Node(int v) {
        val = v; prev = NULL; next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* nod = new Node(val);
    if (head == NULL) {
        head = nod; tail = nod; return;
    }
    tail->next = nod; nod->prev = tail; tail = nod;
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
        int val; cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }
    print_forward(head);
    print_backward(tail);
    return 0;
}
/*
Problem Name: Take a singly linked list as input, then take q queries. In each query you
will be given an index and value. You need to insert those values in the given index
and print the linked list. If the index is invalid print “Invalid”.
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* next;
    Node (int val) {
        this->val = val; this->next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node; tail = new_node;
    }
    else {
        tail->next = new_node; tail = new_node;
    }
}

void insert_any(Node *&head, int index, int val) {
    Node* new_node = new Node(val);
    if (index == 0) {
        new_node->next = head; head = new_node;
    }
    else {
        Node *temp = head;
        for (int i = 1; i < index; i++) {
            temp = temp->next;
            if (temp == NULL) {
                cout << "Invalid"; return;
            }
        }
        if (temp == NULL) {
            cout << "Invalid"; return;
        }
        new_node->next = temp->next; temp->next = new_node; 
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL, *tail = NULL;
    while (true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }
    
    int query_no; cin >> query_no;
    while (query_no--) {
        int index, val; cin >> index >> val;
        insert_any(head, index, val); cout << "\n";
    }
    return 0;
}
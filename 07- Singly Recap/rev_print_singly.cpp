/*
Problem Name: Reverse print of singly linked list.
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* next;
    Node (int v) {
        val = v; next = NULL;
    }
};

void insert_val(Node* &head, Node* &tail, int v) {
    Node* new_node = new Node(v);
    if (head == NULL) {
        head = new_node; tail = new_node;
    }
    else {
        tail->next = new_node; tail = new_node;
    }
}

void rev_print(Node* temp) {
    if (temp == NULL) {
        cout << "\n"; return;
    }
    //cout << temp->val << " ";     //obverse print
    rev_print(temp->next);
    cout << temp->val << " ";

}

int main() {
    Node* head = NULL, * tail = NULL;
    while (true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_val(head, tail, val);
    }
    rev_print(head);
    return 0;
}
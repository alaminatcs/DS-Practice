/*
Problem Name: Take a singly linked list as input and check if the linked list is sorted in
ascending order.
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

void insert_val(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node; tail = new_node;
        return;
    }
    tail->next = new_node; tail = new_node;

}

int main() {
    Node *head = NULL, *tail = NULL;
    while (1) {
        int val; cin >> val;
        if (val == -1) break;
        insert_val(head, tail, val);
    }
    Node* temp = head; bool rem = true;
    while (temp->next != NULL) {
        if (temp->val > temp->next->val) {
            rem = false; break;
        }
        temp = temp->next;
    }
    if (rem) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
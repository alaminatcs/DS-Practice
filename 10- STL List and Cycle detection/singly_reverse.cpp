#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_value(Node* &head, Node* &tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode; return;
    }
    tail->next = newNode; tail = newNode;
}

void reverse_list(Node* &head, Node* cur) {
    if (cur->next == NULL) {
        head = cur; return;
    }
    reverse_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

void print_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while (true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_value(head, tail, val);
    }
    print_list(head);
    reverse_list(head, head);
    print_list(head);
    return 0;
}
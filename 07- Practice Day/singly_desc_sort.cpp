#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_value(int v, Node* &head, Node* &tail) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode; return;
    }
    tail->next = newNode; tail = newNode;
}

void desc_sort(Node* &head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i; j != NULL; j = j->next) {
            if (i->val < j->val) swap(i->val, j->val);
        }
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while (true) {
        int v; cin >> v;
        if (v == -1) break;
        insert_value(v, head, tail);
    }

    desc_sort(head);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
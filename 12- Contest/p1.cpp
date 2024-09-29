#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node *next;
    Node(int val) {
        this->val = val; this->next = NULL;
    }
};

void sort_llist(Node *&head) {
    for(Node *i = head; i->next != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) swap(i->val, j->val);
        }
    }
}

void print_unique_values(Node *&head) {
    Node *temp = head;
    while (temp != NULL) {
        int val = temp->val;
        while (temp->next != NULL) {
            if (temp->next->val != val) break;
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
}

int main() {
    // Write your code here
    Node *head = NULL; Node *tail = NULL;
    int n; cin >> n;
    while(n != -1) {
        Node *nd = new Node(n);
        if (head == NULL) {
            head = nd; tail = nd; cin >> n; continue;
        }
        tail->next = nd; tail = nd; cin >> n;
    }
    sort_llist(head); print_unique_values(head);
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* prev; Node* next;
    Node(int val) {
        this->val=val; this->prev=NULL; this->next=NULL;
    }
};

void head_insert(Node* &head, Node* &tail, int v) {
    Node* new_node = new Node(v);
    if(head == NULL) {
        head = new_node; tail = new_node; return;
    }
    new_node->next = head; head->prev = new_node; head = new_node;
}

void tail_insert(Node* &tail, int v) {
    Node* new_node = new Node(v);
    new_node->prev = tail; tail->next = new_node; tail = tail->next;
}

void insert_in_index(Node* head, int x, int v) {
    Node* new_node = new Node(v); Node* temp = head;
    for(int i = 0; i < x-1; i++) temp = temp->next;
    new_node->next = temp->next; temp->next = new_node;
    new_node->next->prev = new_node; new_node->prev = temp;
}

int main() {
    // Write your code here
    Node* head = NULL; Node* tail = NULL;
    int q, current_max_index = 0; cin >> q;
    while(q--) {
        int x, v; cin >> x >> v;
        if(x > current_max_index) {
            cout << "Invalid\n"; continue;
        }
        else if(x == 0) head_insert(head, tail, v);
        else if(x == current_max_index) tail_insert(tail, v);
        else insert_in_index(head, x, v);
            
        cout << "L -> "; Node* t1 = head;
        while(t1 != NULL) {
            cout << t1->val << " "; t1 = t1->next;
        }
        cout << "\n";

        cout << "R -> "; Node* t2 = tail;
        while(t2 != NULL) {
            cout << t2->val << " "; t2 = t2->prev;
        }
        cout << "\n"; current_max_index++;
    }
    return 0;
}

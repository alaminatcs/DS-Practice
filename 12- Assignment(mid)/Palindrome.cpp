/*
    Using Doubly Linked List
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* next; Node* prev;
    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_value (Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node;
        tail = new_node; return;
    }
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
}

bool palindrome_check (Node* head, Node* tail) {
    Node* start = head;
    Node* end = tail;
    while (true) {
        if (start->val != end->val) return false;
        if(start==end || start==NULL) break;
        else if (start->next==end || end->prev==start) break;
        start = start->next; end = end->prev; 
    }
    return true;
}

int main() {
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    while(true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_value(head, tail, val);
    }
    if (palindrome_check(head, tail)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

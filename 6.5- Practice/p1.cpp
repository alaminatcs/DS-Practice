/*
Problem Name: Take a singly linked list as input and print the size of the linked list.
*/
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val; Node* nxp;
    Node (int val) {
        this->val = val; this->nxp = NULL;
    }
};
void insert_val(Node* &head, Node* &tail, int v) {
    Node* node = new Node(v);
    if (head == NULL) {
        head = node; tail = node;
    }
    else {
        tail->nxp = node; tail = node;
    }
}
int main() {
    Node* head = NULL, *tail = NULL;
    int counter = 0;
    while (true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_val(head, tail, val); counter++;
    }
    cout << counter << "\n";
    return 0;
}
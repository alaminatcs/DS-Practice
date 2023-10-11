/*
Problem Name: Take a singly linked list as input and print the middle element. If there
are multiple values in the middle print both.
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

    if (counter%2) {
        Node* temp = head; int i = counter/2;
        while (i--) {
            temp = temp->nxp;
        }
        cout << temp->val << "\n";
    }
    else {
        Node* temp = head; int i = counter/2-1;
        while (i--) {
            temp = temp->nxp;
        }
        cout << temp->val << " " << temp->nxp->val;
    }
    return 0;
}
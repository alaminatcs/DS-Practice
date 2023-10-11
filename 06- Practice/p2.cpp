/*
Problem Name: Take a singly linked list as input and check if the linked list contains
any duplicate value. You can assume that the maximum value will be 100. 
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
    Node *head = NULL, *tail = NULL;
    while (true) {
        int val; cin >> val;
        if (val == -1) break;
        insert_val(head, tail, val);
    }
    int ar[100] = {0};
    Node* temp = head; bool rem = false;
    while (temp != NULL) {
        ar[temp->val]++;
        if (ar[temp->val] > 1) {
            rem = true; break;
        }
        temp = temp->nxp;
    }
    if (rem) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
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

void input_insert(Node* &head, Node* &tail) {
    while (true) {
        int val;
        cin >> val;
        if (val == -1) return;
        Node *new_node = new Node(val);
        if(head == NULL) {
            head = new_node;
            tail = new_node;
        }
        tail->next = new_node;
        tail = new_node;
    }
}

void difference(Node *head, Node *tail) {
    int max = head->val, min = head->val;
    Node *temp = head;
    while(temp != NULL) {
        if(temp->val > max) max = temp->val;
        else if(temp->val < min) min = temp->val;
        temp = temp->next;
    }
    cout << max - min << "\n";
}

int main()
{
    // Write your code here
    Node *head = NULL, *tail = NULL;
    input_insert(head, tail);
    difference(head, tail);
    return 0;
}
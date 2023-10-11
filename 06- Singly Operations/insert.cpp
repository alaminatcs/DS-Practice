#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* next;
    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, Node* node) {
    if (head == NULL) head = node;
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;   
        }
        temp->next = node;
    }
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL;
    while (1) {
        int type; cin >> type;
        //type = 1(insert), 2(print list), 3(exit)
        if (type == 1) {
            int val; cin >> val;
            Node* new_node = new Node(val);
            insert_tail(head, new_node);
        }
        else if (type == 2) {
            print_list(head);
        }
        else break;
    }    
    return 0;
}
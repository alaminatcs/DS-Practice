/*
Problem Name: Delete from any positions from a Doubly Linked List. 
*/
#include <bits/stdc++.h>
using namespace std;

int counter = 0;

class Node {
public:
    int val; Node* next, * prev;
    Node (int v) {
        val = v; next = NULL; prev = NULL;
    }
};

void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " "; temp = temp->next;
    }
    cout << "\n";
}
void print_backward(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " "; temp = temp->prev;
    }
    cout << "\n";
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node; tail = new_node;
        counter++; return;
    }
    head->prev = new_node; new_node->next = head;
    head = new_node; counter++; return;
}
void delete_at_head(Node* &head, Node* &tail) {
    if (head->next == NULL) {
        Node* del_node = head;
        head = NULL; tail = NULL;
        delete del_node; counter--; return;
    }
    Node* del_node = head;
    head = head->next; head->prev = NULL;
    delete del_node; counter--;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    if (tail == NULL) {
        head = new_node; tail = new_node;
        counter++; return;
    }
    tail->next = new_node; new_node->prev = tail;
    tail = new_node; counter++; return;
}
void delete_at_tail(Node* &head, Node* &tail) {
    if (tail->prev == NULL) {
        Node* del_node = tail;
        head = NULL; tail = NULL;
        delete del_node; counter--; return;
    }
    Node* del_node = tail; tail = tail->prev;
    tail->next = NULL; delete del_node; counter--;
}

void insert_at_any(Node* &head, Node* &tail, int pos, int val) {
    Node* nod = new Node(val);
    Node* temp = head; pos--;
    while (pos--) {
        temp = temp->next;
    }
    temp->next->prev = nod; nod->next = temp->next;
    nod->prev = temp; temp->next = nod; counter++;
}
void delete_at_any(Node* &head, Node* &tail, int pos) {
    Node* temp = head;
    while(pos--) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        tail = temp->prev; tail->next = NULL;
        delete temp; counter--; return;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp; counter--;
}

int main() {
    Node* head = NULL, * tail = NULL;
    while (true) {
        cout << "insert type: "; int type; cin >> type;
        if (type == 1) {
            cout << "insert pos, va: ";
            int pos, val; cin >> pos >> val;
            if (pos<0 || pos>counter) {
                cout << "You insert an Invalid index\n";
            }
            else if (pos == 0) {
                insert_at_head(head, tail, val);
            }
            else if (pos == counter) {
                insert_at_tail(head, tail, val);
            }
            else insert_at_any(head, tail, pos, val);
        }
        else if(type == 2) {
            cout << "forward: "; print_forward(head);
        }
        else if(type == 3) {
            cout << "backward: "; print_backward(tail);
        }
        else if (type == 4) {
            cout << "delete pos: "; int pos; cin >> pos;
            if (pos<0 || pos>=counter) {
                cout << "You insert an Invalid index\n";
            }
            else if (pos == 0) {
                delete_at_head(head, tail);
            }
            else if (pos == counter-1) {
                delete_at_tail(head, tail);
            }
            else delete_at_any(head, tail, pos);
            //delete_any(head, tail, pos);
            // need to modify the delete function for below approach.
            // if (pos < counter-pos) {    //iterate from head
            //     delete_any(head, pos);
            // }
            // else {
            //     delete_any(tail, pos);  //iterate from tail
            // }
        }
        else if (type == 999) break;
        else cout << "exit code 999\n";
    }    
    return 0;
}
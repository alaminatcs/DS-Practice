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

void insert_any(Node* &head, Node* &tail, int pos, int val) {
    Node* nod = new Node(val);
    if (pos<0 || pos>counter) {
        cout << "You insert an Invalid index\n"; return;
    }
    if (pos == 0) {
        if (head == NULL) {
            head = nod; tail = nod;
            counter++; return;
        }
        nod->next = head; head->prev = nod; head = nod;
        counter++; return;
    }

    Node* temp = head; pos--;
    while (pos--) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        nod->prev = temp; temp->next = nod;
        tail = nod; counter++; return;
    }
    nod->next = temp->next;  nod->next->prev = nod;
    nod->prev = temp; temp->next = nod; counter++;
}

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

void delete_any(Node* &head, Node* &tail, int pos) {
    Node* nod = head;
    if (pos<0 || pos>=counter) {
        cout << "You insert an Invalid index\n"; return;
    }
    if (pos == 0) {
        if (nod->next == NULL) {
            delete nod; counter--;
            head = NULL; tail = NULL; return;
        }
        head = nod->next; head->prev = NULL;
        delete nod; counter--; return;
    }
    
    while(pos--) {
        nod = nod->next;
    }
    if (nod->next == NULL) {
        tail = nod->prev; tail->next = NULL;
        delete nod; counter--; return;
    }
    nod->prev->next = nod->next; nod->next->prev = nod->prev;
    delete nod; counter--;
}

int main() {
    Node* head = NULL, * tail = NULL;
    while (true) {
        cout << "insert type: "; int type; cin >> type;
        if (type == 1) {
            cout << "insert pos, va: ";
            int pos, val; cin >> pos >> val;
            insert_any(head, tail, pos, val);
        }
        else if(type == 2) {
            cout << "forward: "; print_forward(head);
        }
        else if(type == 3) {
            cout << "backward: "; print_backward(tail);
        }
        else if (type == 4) {
            cout << "delete pos: "; int pos; cin >> pos;
            delete_any(head, tail, pos);
            // need to modify the delete function for below approach.
            // if (pos < counter-pos) {    //iterate from head
            //     delete_any(head, pos);
            // }
            // else {
            //     delete_any(tail, pos);  //iterate from tail
            // }
        }
        else break;
    }    
    return 0;
}
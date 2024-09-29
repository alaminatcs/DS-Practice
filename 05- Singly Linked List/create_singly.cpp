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

int main () {
    int n; cin >> n;
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (i == 0) {
            Node* a = new Node(x);
            head = a;
            tail = a;
        }
        else {
            Node* a = new Node(x);
            tail->next = a;
            tail = a;
        }
    }
    Node* i = head;
    while (i != NULL) {
        cout << i->val << " ";
        i = i->next;
    }
    cout << endl;

    // new value inset and re-print
    int pos, val; cin >> pos >> val;
    Node* a = new Node(val);
    if (pos > n) {
        cout << "Invalid Position" << endl;
    }
    else if (pos == 0) {
        a->next = head;
        head = a;
    }
    else if (pos == n) {
        tail->next = a;
        tail = a;
    }
    else {
        Node* temp = head;
        int j = 0;
        while (j < pos-1) {
            temp = temp->next;
            j++;
        }
        a->next = temp->next;
        temp->next = a;
    }

    if (pos <= n) {
        i = head;
        while (i != NULL) {
            cout << i->val << " ";
            i = i->next;
        }
    }
    return 0;
}
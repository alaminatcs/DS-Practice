/*
Problem Name: Singly Link list with constructor.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* nxp;
    Node(int val) {
        this->val = val;
        this->nxp = NULL;
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Node a(10), b(30);
    a.nxp = &b;

    cout << a.val << " " << b.val << "\n\n";
    cout << a.val << " " << a.nxp->val << "\n";
    return 0;
}
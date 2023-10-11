/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node* nxp;
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Node a, b;
    a.val = 10; a.nxp = &b;
    b.val = 20;

    cout << a.val << " " << b.val << "\n\n";
    cout << a.val << " " << a.nxp->val << "\n";     //(*a.nxp).val == a.nxp->val
    return 0;
}
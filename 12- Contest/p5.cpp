/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries.
In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0.
If the index is invalid, then you shouldn't perform the deletion.

After each query you need to print the linked list from both left to right and right to left.
Note: You must use STL List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query print the linked list from left to right and right to left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    list<int> linked_list;
    int q; cin >> q;
    while(q--) {
        int x, v; cin >> x >> v;
        if (x == 0) linked_list.push_front(v);
        else if (x == 1) linked_list.push_back(v);
        else if (x == 2) {
            if (v>=0 && v<linked_list.size()) {
                auto iterator = linked_list.begin();
                advance(iterator, v); linked_list.erase(iterator);
            }

        }
            
        cout << "L -> ";
        for (auto val : linked_list) {
            cout << val << " ";
        }
        cout << "\n";

        cout << "R -> ";
        for (auto i = linked_list.rbegin(); i != linked_list.rend(); i++) {
            cout << *i << " ";
        }
        cout << "\n";
    }
    return 0;
}

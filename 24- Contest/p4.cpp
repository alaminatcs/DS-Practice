#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int n, x; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        cin >> x; pq.push(x);
    }
    int tc; cin >> tc;
    while (tc--) {
        int q; cin >> q;
        if (q == 0) {
            cin >> x; pq.push(x);
            cout << pq.top() << "\n";
        }
        else if(q == 1) {
            if (!pq.empty()) cout << pq.top() << "\n";
            else cout << "Empty\n";
        }
        else if(q == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) cout << pq.top() << "\n";
                else cout << "Empty\n";
            }
            else cout << "Empty\n";
        }
    }
    return 0;
}

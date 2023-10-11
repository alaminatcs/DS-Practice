#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int tc; cin >> tc;
    while (tc--) {
        int n; string st; cin >> n >> st; stack<char> s;
        for (auto c2 : st) {
            if (!s.empty()) {
                char c1 = s.top(); s.pop();
                if (c2 != c1) {
                    if ((c1=='R' && c2=='B') || (c1=='B' && c2=='R')) s.push('P');
                    else if ((c1=='R' && c2=='G') || (c1=='G' && c2=='R')) s.push('Y');
                    else if ((c1=='B' && c2=='G') || (c1=='G' && c2=='B')) s.push('C');
                    else {
                        s.push(c1); s.push(c2);
                    }
                }
            }
            else s.push(c2);
        }
        string str = "";
        while (!s.empty()) {
            char c1 = s.top(); s.pop();
            if (!s.empty()) {
                char c2 = s.top();
                if (c1 == c2) s.pop();
                else str += c1;
            }
            else str += c1;
        }
        reverse(str.begin(), str.end()); cout << str << "\n";
    }
    return 0;
}

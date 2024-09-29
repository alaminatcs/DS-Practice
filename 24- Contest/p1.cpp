#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int tc; cin >> tc;
    while (tc--) {
        int n, x; cin >> n;
        set<long long> s;
        for (int i = 0; i < n; i++) {
            cin >> x; s.insert(x);
        }
        vector<int> v;
        for (auto i = s.begin(); i != s.end(); i++) v.push_back(*i);
        reverse(v.begin(), v.end());
        for (auto val : v) cout << val << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string str; cin >> str;
        int size = str.size();
        if (size%2) cout << "NO\n";
        else {
            int one = 0, zero = 0;
            for (auto ch : str) {
                if (ch == '1') one++;
                else zero++;
            }
            if (one != zero) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}
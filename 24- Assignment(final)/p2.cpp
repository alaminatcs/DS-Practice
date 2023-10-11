#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int tc; scanf("%d\n", &tc);
    while (tc--) {
        string str, word; getline(cin, str);
        stringstream strm(str); map<string, int> m;
        while (strm >> word) {
            m[word]++;
        }
        int mx = INT_MIN; word = "";
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second > mx) {
                mx = it->second; word = it->first;
            }
        }
        cout << m["Ratul"];
    }
    return 0;
}

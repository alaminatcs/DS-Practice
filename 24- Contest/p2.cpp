#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int tc; scanf("%d\n", &tc);
    while (tc--) {
        string str, word, ans; getline(cin, str);
        stringstream strm(str); map<string, int> m;
        int mx = INT_MIN; word = "";
        while (strm >> word) {
            m[word]++;
            if (m[word] > mx) {
                mx = m[word]; ans = word;
            }
        }
        cout << ans << " " << mx << endl;
    }
    return 0;
}

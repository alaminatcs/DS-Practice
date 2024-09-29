#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int tc; scanf("%d\n", &tc);
    while (tc--) {
        string str, word, w; getline(cin, str);
        stringstream strm(str); map<string, int> m;
        int mx = INT_MIN;
        while (strm >> word) {
            m[word]++;
            if (m[word] > mx) {
                mx = m[word]; w = word;
            }
        }
        cout << w << " " << mx << "\n";
    }
    return 0;
}else cout << "Empty\n";
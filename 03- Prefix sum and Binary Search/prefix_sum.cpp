#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    //array must be sorted
    int find; cin >> find;
    int left = 0, right = n-1, rem = 0;
    while (left <= right) {
        int mid = (left + right + 1)/2;
        if (a[mid] == find) {
            rem = 1; break;
        }
        else if (a[mid] > find) right = mid-1;
        else left = mid+1;
    }
    if (rem) cout << "found\n";
    else cout << "not found\n";
    return 0;
}

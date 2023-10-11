#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str; getline(cin, str); int i = 0, size = str.size();
    while (i < size) {
        int num = 0;
        while (i<size && str[i]>='1' && str[i]<='9') {
            num = num*10 + int(str[i]-'0'); i++;
        }
        string word = "";
        while (i<size && str[i]>='a' && str[i]<='z') {
            word += str[i]; i++;
        }
        while (num--) cout << word;
        if (str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/') {
            cout << str[i]; i++;
        }
        else cout << "\n";
    }
    return 0;
}

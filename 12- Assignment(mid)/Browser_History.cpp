#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    list<string> linked_list; string str;
    while(true) {
        cin >> str; if (str == "end") break;
        linked_list.push_back(str);
    }

    int q; cin >> q;
    string type; cin >> type >> str;
    auto it = find(linked_list.begin(), linked_list.end(), str);
    cout << str << "\n"; q--;

    while(q--) {
        cin >> str;
        if(str == "prev") {
            if(it == linked_list.begin()) cout << "Not Available\n";
            else {
                it--; cout << *it << "\n";
            }
        }
        else if(str == "next") {
            if(++it == linked_list.end()) {
                cout << "Not Available\n"; --it;
            }
            else cout << *it << "\n";
        }
        else {
            cin >> str;
            if(find(linked_list.begin(), linked_list.end(), str) == linked_list.end()) cout << "Not Available\n";
            else {
                cout << str << "\n"; it = find(linked_list.begin(), linked_list.end(), str);
            }
        }   
    }
    
    return 0;
}

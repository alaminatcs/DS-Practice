#include<iostream>
#include<string>
using namespace std;
 
int main() {
  string str; cin >> str;
  if (str=="ACE"||str=="BDF"||str=="CEG"||str=="DFA"||str=="EGB"||str=="FAC"||str=="GBD") cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
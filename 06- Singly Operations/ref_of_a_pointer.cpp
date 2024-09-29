/*
Problem Name: Reference of a Pointer. 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

void fun(int* &p) {                 // & used to Reference purpose
    cout << "&p in fun(ref): " << &p << "\n";
}

void fun2(int* p) {
    cout << "&p in fun2(deref): " << &p << "\n";
}

void fun3(int &v) {
    cout << "&v in fun3(ref): " << &v << "\n";
}

void fun4(int *v) {
    cout << "&v in fun4(deref): " << &v << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int val = 10; int* ptr = &val;
    
    cout << "&ptr in main: " << &ptr << "\n";
    fun(ptr); fun2(ptr);
    
    cout << "&val in main: " << &val << "\n"; 
    fun3(val); fun4(&val);
    return 0;
}
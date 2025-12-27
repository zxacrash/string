#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string s) {
    if (s.length() <= 1) return true;
    
    if (s[0] != s[s.length() - 1]) return false;
    
    return Palindrome(s.substr(1, s.length() - 2));
}

int main() {
    string s;
    cin >> s;
    
    if (Palindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
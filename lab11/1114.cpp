#include <iostream>
#include <string>
using namespace std;

string shiftString(string s, int n) {
    if (s.empty()) return "";
    
    char c = s[0];
    
    if (c >= 'A' && c <= 'Z') {
        c = 'A' + (c - 'A' + n) % 26;
    }
    
    return c + shiftString(s.substr(1), n);
}

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    cout << shiftString(s, n) << endl;
    
    return 0;
}
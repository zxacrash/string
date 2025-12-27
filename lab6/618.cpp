#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool increasing = true;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i-1]) {
            increasing = false;
            break;
        }
    }
    
    if (increasing) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
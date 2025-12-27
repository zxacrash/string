#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    
    for (int i = 0; i <= n; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            string new_str = s.substr(0, i) + c + s.substr(i);
            if (isPalindrome(new_str)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
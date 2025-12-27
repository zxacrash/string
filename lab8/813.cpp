#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

bool isStrong(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false;
    
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        
        if (hasUpper && hasLower && hasDigit) return true;
    }
    
    return (hasUpper && hasLower && hasDigit);
}

int main() {
    int n;
    cin >> n;
    
    set<string> strongPasswords;
    
    for (int i = 0; i < n; i++) {
        string password;
        cin >> password;
        
        if (isStrong(password)) {
            strongPasswords.insert(password);
        }
    }
    
    cout << strongPasswords.size() << endl;
    for (const string& pwd : strongPasswords) {
        cout << pwd << endl;
    }
    
    return 0;
}
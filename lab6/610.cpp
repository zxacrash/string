#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    if (t.length() % s.length() != 0) {
        cout << "NO" << endl;
    } else {
        int copies = t.length() / s.length();
        bool valid = true;
        
        for (int i = 0; i < copies; i++) {
            string segment = t.substr(i * s.length(), s.length());
            if (segment != s) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
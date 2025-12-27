#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    if (balance == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
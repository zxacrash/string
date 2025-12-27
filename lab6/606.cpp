#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char x;
    int n;
    cin >> s >> x >> n;
    int a = 0;
    for (char c : s) {
        if (c == x) {
            a++;
        }
    }
    if (a == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
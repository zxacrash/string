#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
     for (char &c : s) {
        if (c == 'z') {
            c = 'a';
        } else {
            c = c + 1;
        }
    }
    cout << s << endl;
    return 0;
}
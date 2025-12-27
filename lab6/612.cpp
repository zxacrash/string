#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char a = 'a';
    for (char c : s) {
        if (c > a) {
            a = c;
        }
    }
    cout << a << endl;

    return 0;
}
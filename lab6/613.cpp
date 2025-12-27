#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    char a = t[0];

    int first = -1, last = -1, count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            if (first == -1) first = i;
            last = i;
            count++;
        }
    }

    if (count == 1) {
        cout << first << endl;
    } else if (count >= 2) {
        cout << first << " " << last << endl;
    }

    return 0;
}
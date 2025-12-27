#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char bestChar = s[0];
    int bestLen = 1;

    char currentChar = s[0];
    int currentLen = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == currentChar) {
            currentLen++;
        } else {
            if (currentLen > bestLen) {
                bestLen = currentLen;
                bestChar = currentChar;
            }
            currentChar = s[i];
            currentLen = 1;
        }
    }

    // Check last run
    if (currentLen > bestLen) {
        bestLen = currentLen;
        bestChar = currentChar;
    }

    cout << bestChar << " " << bestLen << endl;

    return 0;
}
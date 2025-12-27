#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool hasDigit(const string& word) {
    for (char c : word) {
        if (c >= '0' && c <= '9') {
            return true;
        }
    }
    return false;
}

int main() {
    string line;
    getline(cin, line);
    
    stringstream ss(line);
    string word;
    
    while (ss >> word) {
        if (!hasDigit(word)) {
            cout << word << endl;
        }
    }
    
    return 0;
}
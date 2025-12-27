#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> firstOccurrence;
    
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        
        if (firstOccurrence.find(s) == firstOccurrence.end()) {
            firstOccurrence[s] = i;
        }
    }
    
    for (auto& entry : firstOccurrence) {
        cout << entry.first << " " << entry.second << endl;
    }
    
    return 0;
}
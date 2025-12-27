#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<string> surnames;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        surnames.insert(s);
    }
    
    cout << surnames.size() << endl;
    
    return 0;
}
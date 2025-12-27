#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> seen;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (seen.find(x) == seen.end()) {
            cout << "YES" << endl;
            seen.insert(x);
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
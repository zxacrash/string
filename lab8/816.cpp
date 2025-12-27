#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    auto it = freq.begin();
    it++;
    
    cout << it->second << endl;
    
    return 0;
}
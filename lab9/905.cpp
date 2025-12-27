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
    auto it_last = freq.end();
    it_last--;
    
    if (it_last->second > 1) {
        cout << it_last->second << endl;
    } else {
        if (freq.size() == 1) {
            cout << it_last->second << endl;
        } else {
            auto it_second_last = it_last;
            it_second_last--;
            cout << it_second_last->second << endl;
        }
    }
    
    return 0;
}
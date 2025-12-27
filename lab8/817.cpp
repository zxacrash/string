#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> freq;
    
    for (int i = 0; i < n; i++) {
        string number;
        cin >> number;
        freq[number]++;
    }
    
    int count = 0;
    for (auto& entry : freq) {
        if (entry.second == 3) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
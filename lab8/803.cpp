#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> players;
    int num;
    
    while (cin >> num) {
        if (num == 0) break;
        players.push_back(num);
    }
    
    int n = players.size();
    

    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i; 
        cout << players[i] + players[j];
        if (i < n / 2 - 1) {
            cout << " ";
        }
    }
    

    if (n % 2 == 1) {
        if (n > 1) cout << " "; 
        cout << players[n / 2];
    }
    
    cout << endl;
    
    return 0;
}
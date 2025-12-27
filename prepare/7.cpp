#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> coins(7);
    vector<int> denominations = {1, 2, 5, 10, 20, 50, 100};
    
    for (int i = 0; i < 7; i++) {
        cin >> coins[i];
    }
    
    int N;
    cin >> N;
    
    // Process each customer
    for (int customer = 0; customer < N; customer++) {
        int amount;
        cin >> amount;
        
        // Make a copy of current coins to try giving change
        vector<int> tempCoins = coins;
        bool canGiveChange = true;
        
        // Try to give change starting from largest denomination
        for (int i = 6; i >= 0 && amount > 0; i--) {
            if (tempCoins[i] == 0) continue;
            
            // Calculate how many coins of this denomination we can use
            int need = amount / denominations[i];
            int use = min(need, tempCoins[i]);
            
            if (use > 0) {
                amount -= use * denominations[i];
                tempCoins[i] -= use;
            }
        }
        
        // If we couldn't give exact change
        if (amount > 0) {
            cout << "Transaction stopped!" << endl;
        } else {
            // Update actual coin counts and accept transaction
            coins = tempCoins;
            cout << "Transaction accepted!" << endl;
        }
    }
    
    return 0;
}
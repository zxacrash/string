#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, set<int>> mp;

    for (int i = 0; i < n; i++) {
        string name;
        int day;
        cin >> name >> day;
        mp[name].insert(day);
    }

    for (auto &p : mp) {
        cout << p.first << " ";
        if (p.second.size() >= 3) cout << "+1\n";
        else cout << "NO BONUS\n";
    }

    return 0;
}

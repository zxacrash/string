#include <bits/stdc++.h>
using namespace std;


bool cmp(const vector<int>& a, const vector<int>& b) {
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    long long sumB = accumulate(b.begin(), b.end(), 0LL);

    if (sumA != sumB) 
        return sumA < sumB;      

    if (a.size() != b.size()) 
        return a.size() < b.size();  

    return a < b;                     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> rows(n);

    // Read jagged array
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;           // number of elements in this row
        rows[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> rows[i][j];
        }
    }

    // Sort using custom comparator
    sort(rows.begin(), rows.end(), cmp);

    // Output sorted rows
    for (auto &row : rows) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
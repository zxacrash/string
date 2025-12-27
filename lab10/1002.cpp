#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool cmp(const pair<string,int>& a, const pair<string,int>& b) {
    if (a.second != b.second)
        return a.second > b.second;        // higher count first
    return a.first < b.first;              // lexicographical order
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    getline(cin, text);

    stringstream ss(text);
    map<string,int> freq;

    string word;
    while (ss >> word) {
        freq[word]++;
    }

    vector<pair<string,int>> vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end(), cmp);

    for (auto &p : vec) {
        cout << p.first << " : " << p.second << "\n";
    }

    return 0;
}
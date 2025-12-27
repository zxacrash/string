#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time {
    int h, m, s;
};

bool cmp(const Time &a, const Time &b) {
    if (a.h != b.h) return a.h < b.h;
    if (a.m != b.m) return a.m < b.m;
    return a.s < b.s;
}

int main() {
    int n;
    cin >> n;

    vector<Time> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].h >> v[i].m >> v[i].s;
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &t : v) {
        cout << t.h << " " << t.m << " " << t.s << "\n";
    }

    return 0;
}

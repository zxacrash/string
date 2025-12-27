#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Date {
    int d, m, y;
};

bool cmp(const Date &a, const Date &b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

int main() {
    vector<Date> dates;
    while (true) {
        int d, m, y;
        cin >> d;
        if (d == 0) break;
        cin >> m >> y;
        dates.push_back({d, m, y});
    }

    sort(dates.begin(), dates.end(), cmp);

    for (auto &dt : dates) {
        printf("%02d %02d %04d\n", dt.d, dt.m, dt.y);
    }

    return 0;
}

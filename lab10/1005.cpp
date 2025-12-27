#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point P;
    cin >> P.x >> P.y;
    
    int n;
    cin >> n;
    
    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    sort(points.begin(), points.end(), [P](const Point& a, const Point& b) {
        long long distA = (long long)(a.x - P.x) * (a.x - P.x) + 
                          (long long)(a.y - P.y) * (a.y - P.y);
        long long distB = (long long)(b.x - P.x) * (b.x - P.x) + 
                          (long long)(b.y - P.y) * (b.y - P.y);
        return distA < distB;
    });
    
    // Output sorted points
    for (const Point& p : points) {
        cout << p.x << " " << p.y << endl;
    }
    
    return 0;
}
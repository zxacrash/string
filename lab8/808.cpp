#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> intervals;
    
    for (int i = 0; i < N; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int start = A * 60 + B;
        int end = C * 60 + D;
        intervals.push_back({start, end});
    }
    
    int total = 0;
    for (int minute = 0; minute < 1440; minute++) {
        bool all_open = true;
        
        for (auto& interval : intervals) {
            int start = interval.first;
            int end = interval.second;
            
            if (start == end) {
                continue;
            }
            else if (start < end) {
                if (!(minute >= start && minute < end)) {
                    all_open = false;
                    break;
                }
            }
            else {
                if (!((minute >= start) || (minute < end))) {
                    all_open = false;
                    break;
                }
            }
        }
        
        if (all_open) {
            total++;
        }
    }
    
    cout << total << endl;
    
    return 0;
}
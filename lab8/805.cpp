#include <iostream>
#include <vector>
using namespace std;

int countVisible(vector<int>& heights, int L, int R) {
    if (L > R) return 0;
    
    int count = 1; // First pillar is always visible
    int maxHeight = heights[L];
    
    for (int i = L + 1; i <= R; i++) {
        if (heights[i] > maxHeight) {
            count++;
            maxHeight = heights[i];
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    
    int Q;
    cin >> Q;
    
    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;
        
        int visible = countVisible(heights, L, R);
        cout << visible << endl;
    }
    
    return 0;
}
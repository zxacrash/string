#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    set<int> uniqueSums;
    
    for (int i = 0; i < n - 1; i++) {
        int sum = arr[i] + arr[i + 1];
        uniqueSums.insert(sum);
    }
    
    cout << uniqueSums.size() << endl;
    
    return 0;
}
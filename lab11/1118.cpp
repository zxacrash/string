#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& arr, int left, int right, int target) {
    if (left > right) return false;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) return true;

    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    
    bool found = binarySearch(arr, 0, n - 1, x);
    
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
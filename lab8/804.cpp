#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalSum = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    
    return totalSum - actualSum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int missing = findMissingNumber(nums);
    cout << missing << endl;
    
    return 0;
}
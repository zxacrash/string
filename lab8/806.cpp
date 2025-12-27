#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    map<int, int> frequency;
    for (int num : nums) {
        frequency[num]++;
    }
    
    int mostFrequent = nums[0];
    int maxCount = 0;
    
    for (auto& pair : frequency) {
        int num = pair.first;
        int count = pair.second;
        
        if (count > maxCount || (count == maxCount && num < mostFrequent)) {
            mostFrequent = num;
            maxCount = count;
        }
    }
    
    cout << mostFrequent << endl;
    
    return 0;
}
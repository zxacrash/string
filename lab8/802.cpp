#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <climits>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    stringstream ss(line);
    vector<int> numbers;
    int num;
    
    while (ss >> num) {
        numbers.push_back(num);
    }
    
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < min_val) {
            min_val = numbers[i];
        }
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
    }
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == min_val) {
            numbers[i] = max_val;
        }
    }
    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
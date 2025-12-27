#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, vector<int>> studentGPAs;
    
    for (int i = 0; i < n; i++) {
        string name;
        int gpa;
        cin >> name >> gpa;
        studentGPAs[name].push_back(gpa);
    }
    
    cout << fixed << setprecision(3);
    for (const auto& entry : studentGPAs) {
        const vector<int>& gpas = entry.second;
        double sum = accumulate(gpas.begin(), gpas.end(), 0);
        double average = sum / gpas.size();
        cout << entry.first << ": " << average << endl;
    }
    
    return 0;
}
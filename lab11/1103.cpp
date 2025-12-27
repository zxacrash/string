#include <iostream>
using namespace std;

void printNumbers(int n, int current = 1) {
    if (current > n) return;
    
    cout << current;
    if (current < n) cout << " ";
    
    printNumbers(n, current + 1);
}

int main() {
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}
#include <iostream>
using namespace std;

long long recursiveSum() {
    int num;
    cin >> num;
    if (num == 0) return 0;
    
    return num + recursiveSum();
}

int main() {
    long long sum = recursiveSum();
    cout << sum << endl;
    
    return 0;
}
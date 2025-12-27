#include <iostream>
using namespace std;

int findKthDivisor(int A, int B, int K, int current) {
    if (K == 0) return current;
    
    if (A % current == 0 && B % current == 0) {
        return findKthDivisor(A, B, K - 1, current - 1);
    } else {
        return findKthDivisor(A, B, K, current - 1);
    }
}

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    
    int start = min(A, B);
    int result = findKthDivisor(A, B, K, start);
    cout << result + 1 << endl;
    
    return 0;
}
#include <iostream>
using namespace std;
int nBonacci(int n, int m) {
    if (m == 1) return 0;
    if (m == 2) return 1;
    return nBonacci(n, m - 1) + n * nBonacci(n, m - 2);
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << nBonacci(n, m) << endl;
    return 0;
}
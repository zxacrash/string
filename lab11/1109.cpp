#include <iostream>
using namespace std;

bool isPow2(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 2 != 0) return false;
    return isPow2(n / 2);
}

int main() {
    int n; cin >> n;
    cout << (isPow2(n) ? "Yes" : "No") << endl;
    return 0;
}
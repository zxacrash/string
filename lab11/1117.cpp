#include <iostream>
#include <string>
using namespace std;

string toBaseK(int n, int k) {
    if (n == 0) return "0";
    
    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    

    if (n < k) {
        return string(1, digits[n]);
    }
    
    return toBaseK(n / k, k) + digits[n % k];
}

int main() {
    int n, k;
    cin >> n >> k;
    
    if (n == 0) {
        cout << "0" << endl;
    } else {
        cout << toBaseK(n, k) << endl;
    }
    
    return 0;
}
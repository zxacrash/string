#include <iostream>
#include <string>
using namespace std;

int binToDec(string binary, int power = 0) {
    if (binary.empty()) return 0;
    
    char lastChar = binary.back();
    int lastDigit = lastChar - '0';
    
    binary.pop_back();
    
    return lastDigit * (1 << power) + binToDec(binary, power + 1);
}

int main() {
    string binary;
    cin >> binary;
    
    cout << binToDec(binary) << endl;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int sumDigits(string num, int index = 0) {
    if (index == num.length()) return 0;
    
    int digit = num[index] - '0';
    
    return digit + sumDigits(num, index + 1);
}

int main() {
    string num;
    cin >> num;
    cout << sumDigits(num) << endl;
    return 0;
}
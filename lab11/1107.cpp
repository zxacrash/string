#include <iostream>
#include <string>
using namespace std;

char findMax(string num) {
    if (num.length() == 1) {
        return num[0];
    }
    char first = num[0];
    char maxRest = findMax(num.substr(1));
    return (first > maxRest) ? first : maxRest;
}

int main() {
    string number;
    cin >> number;
    
    char maxDigit = findMax(number);
    cout << maxDigit << endl;
    
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

map<string, int> tripletToDigit = {
    {"ZER", 0}, {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4},
    {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}
};

map<int, string> digitToTriplet = {
    {0, "ZER"}, {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"},
    {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}
};

int decodeNumber(const string& s) {
    int num = 0;
    for (size_t i = 0; i < s.length(); i += 3) {
        string triplet = s.substr(i, 3);
        num = num * 10 + tripletToDigit[triplet];
    }
    return num;
}

string encodeNumber(int num) {
    if (num == 0) return digitToTriplet[0];
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    string result;
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        result += digitToTriplet[*it];
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);
    string expr;
    for (char c : input) {
        if (c != ' ') expr += c;
    }
    
    size_t plusPos = expr.find('+');
    string num1Str = expr.substr(0, plusPos);
    string num2Str = expr.substr(plusPos + 1);
    
    int num1 = decodeNumber(num1Str);
    int num2 = decodeNumber(num2Str);
    
    int sum = num1 + num2;
    
    cout << encodeNumber(sum) << endl;
    
    return 0;
}
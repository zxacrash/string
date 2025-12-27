#include <iostream>
#include <string>
using namespace std;

string binaryHelper(int n) {
    if (n == 0) return "";
    string result = binaryHelper(n / 2);
    return result + to_string(n % 2);
}

string decToBinary(int n) {
    if (n == 0) return "0";
    if (n < 0) return "Negative numbers not supported";
    
    return binaryHelper(n);
}

int main() {
    int n;
    cin >> n;
    
    cout<< decToBinary(n) << endl;
    
    return 0;
}
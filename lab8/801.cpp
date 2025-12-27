#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    stringstream ss(a);
    int num, sum = 0;
    
    while (ss >> num) {
        sum += num;
    }
    
    cout << sum << endl;
    return 0;
}
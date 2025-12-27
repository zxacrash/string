#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int a = 0;
    int b = 0;
    for (char c : s) {
        if (islower(c)) {
            a++;
        } else if (isupper(c)) {
            b++;
        }
    }
    
    cout << a << " " << b << endl;
    
    return 0;
}

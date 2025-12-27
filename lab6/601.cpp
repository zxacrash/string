#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    
    if (islower(a)) {
        a = toupper(a);
        cout << a << endl;
    }
    else {
        cout << a << endl;
    }
    
    return 0;
}
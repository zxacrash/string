#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string email;
    for (int i = 0; i < n; i++) {
        cin >> email;
        
        if (email.find("@gmail.com") != string::npos) {
            size_t at_pos = email.find('@');
            string login = email.substr(0, at_pos);
            cout << login << endl;
        }
    }
    
    return 0;
}
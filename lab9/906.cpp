#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<string> registered;
    
    for (int i = 0; i < n; i++) {
        string login;
        cin >> login;
        
        if (registered.count(login)) {
            cout << "user already exists" << endl;
        } else {
            cout << "new user added" << endl;
            registered.insert(login);
        }
    }
    
    return 0;
}
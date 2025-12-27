#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, string> document;
    
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        
        if (command == "set") {
            string key, value;
            cin >> key >> value;
            document[key] = value;
        } 
        else if (command == "get") {
            string key;
            cin >> key;
            
            auto it = document.find(key);
            if (it != document.end()) {
                cout << it->second << endl;
            } else {
                cout << "KE: no key " << key << " found in the document" << endl;
            }
        }
    }
    
    return 0;
}
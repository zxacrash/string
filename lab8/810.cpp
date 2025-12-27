#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int num;
    
    while (cin >> num) {
        s.insert(num);
    }
    
    cout << s.size() << endl;
    
    return 0;
}
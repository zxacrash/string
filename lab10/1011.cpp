#include <iostream>
using namespace std;

void updateValue(int* ptr, int val) {
    *ptr = *ptr + val;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    updateValue(&n, m);
    
    cout << n << endl;
    return 0;
}
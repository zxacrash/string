#include <iostream>
using namespace std;

void swapPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    
    swapPointers(&a, &b);
    
    cout << a << " " << b << endl;
    
    return 0;
}
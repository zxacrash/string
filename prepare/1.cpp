#include <iostream>
using namespace std;

int main() {
    int b = 0;

    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            b++;
        }
    }
    
    cout << b << endl;
    return 0;
}
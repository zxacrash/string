#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100];

    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;     
    }

    ptr = arr;
    int maxVal = *ptr; 
    
    for (int i = 0; i < n; i++) {
        if (*ptr > maxVal) {
            maxVal = *ptr;
        }
        ptr++; 
    }
    
    cout << maxVal << endl;
    
    return 0;
}
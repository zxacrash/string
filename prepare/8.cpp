#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 0; i < a; i++){
        cin >> arr[i];
        cout << arr[i] - i << " ";
    }
    
    return 0;
}
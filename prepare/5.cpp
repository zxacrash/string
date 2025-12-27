#include <iostream>

using namespace std;

// - [ ] show numbers from 1 till n / reverse: from n till 1


void showNumbers(int n){
    if(n == 0) // base case
        return;

    showNumbers(n - 1);

    cout << n << "  ";
}

int main(){
    int n;
    cin >> n; // 3

    showNumbers(n); // 3


    return 0;
}
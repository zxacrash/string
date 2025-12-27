#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    int arr[a];

    for (int i = 0 ; i < a; i++){
    
        cin >> arr[i];
}

 int m = arr[0];

 for (int i = 1; i < a ; i++){

    if (arr[i] > m ){

        m = arr[i];
    } 

 }
cout << m << endl;
return 0 ;
}

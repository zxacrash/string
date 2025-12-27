#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s ; 
    for (int i = 0 ; i < s.size() ; i++){
    sort (s[i].begin() , s[i].end());
    cout << s[i] ;
    }
    return 0 ;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > v(n);
    for (int i = 0; i < n; i++){
    cin >> v[i];
    }

    vector <int> even;
    for (int i = 0; i < n; i++){
    if (v[i]% 2 == 0){
        even.push_back(v[i]);

    }
    }


    for (int i = 0; i < even.size(); i++) {
cout << even[i]<< " ";
}
    cout << endl;

}
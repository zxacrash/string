#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    queue<string> vp;
    for(int i=0;i<a;i++){
        int gg;
        cin>>gg;
        if(gg==1){
            string aa;
            cin>>aa;
            vp.push(aa);
        }else if(gg==2){
            if(!vp.empty()){
                vp.pop();
            }
        }if(!vp.empty()){
            cout<<vp.front()<<endl;
        } else{
            cout<<"queue is empty\n";
        }
    }
}
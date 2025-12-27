#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){

    int n; cin >> n;
    cin.ignore();
    
    deque<string> undo;
    deque<string> redo;
    for(int i = 0; i < n; i++){
        string cmd;
        getline(cin, cmd);
        
        if(cmd.substr(0, 2) == "DO"){
            string action = cmd.substr(3);
            undo.push_back(action);
            redo.clear();
        } 
        else if(cmd == "UNDO"){
            if(!undo.empty()){
                redo.push_back(undo.back());
                undo.pop_back();
            }
        } 
        else if(cmd == "REDO"){
            if(!redo.empty()){
                undo.push_back(redo.back());
                redo.pop_back();
            }
        } 
        else if(cmd == "HISTORY"){
            if(undo.empty()){
                cout << "EMPTY" << endl;
            }else{
                for(int j = 0; j < undo.size(); j++){
                    cout << undo[j];
                    if (j != undo.size() - 1) cout << " ";
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){

    int n; cin >> n;

    deque<string> q;

    for(int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if(cmd == "ARRIVE") {
            string name;
            cin >> name;
            q.push_back(name);
            cout << name << " joined the line" << '\n';
        } else if(cmd == "SERVE") {
            if (q.empty()) {
                cout << "No customers to serve" << '\n';
            } else {
                string name = q.front();
                q.pop_front();
                cout << name << " has been served" << '\n';
            }
        } else if (cmd == "SHOW") {
            if (q.empty()) {
                cout << "Line is empty" << '\n';
            } else {
                cout << "Line:";
                for (int j = 0; j < (int)q.size(); j++) {
                    cout << " " << q[j];
                }
                cout << '\n';
            }
        }
    }

    return 0;
}
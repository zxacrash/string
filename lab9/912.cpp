#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    stack<char> st;
    
    for (char c : s) {
        if (c == '1' && !st.empty() && st.top() == '1') {
            st.pop();
        } else {
            st.push(c);
        }
    }
    
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    cout << result << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int check(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int main() {
    string s;
    getline(cin, s);

    string result;
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == ' ') continue;

        if (isdigit(c)) {
            result += c;
            result += ' ';
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                result += " ";
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else {
            while (!st.empty() && check(st.top()) >= check(c)) {
                result += st.top();
                result += " ";
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        result += " ";
        st.pop();
    }
    if(result.back() == ' ') result.pop_back();
    cout << result << endl;

    return 0;
}
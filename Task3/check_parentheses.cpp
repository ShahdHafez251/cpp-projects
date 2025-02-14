#include <iostream>
#include <stack>
using namespace std;

bool checkParentheses(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);  
        } 
        else {
            if (st.empty()) return false;  
            char top = st.top();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')){
                return false;  
            }
            st.pop();  
        }
    }
    return st.empty();  
}

int main() {
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;

    if (checkParentheses(s)) {
        cout << "Balanced " << endl;
    } else {
        cout << "Not Balanced " << endl;
    }
    return 0;
}

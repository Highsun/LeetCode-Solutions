#include <cstring>
#include <iostream>
#include <stack>

int main() {
    std::string s = "()[]{}";

    bool             flag = true;
    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                flag = false;
                break;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                flag = false;
                break;
            }
        }
    }
    if (!st.empty()) {
        flag = false;
    }

    std::cout << std::boolalpha << flag << std::endl;

    return 0;
}
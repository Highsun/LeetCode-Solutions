#include <cstring>
#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string s = "10[a]2[b3[d]c]";

    std::stack<int>         times;
    std::stack<std::string> strs;
    std::string             ans;
    int                     pos = 0;
    while (pos < s.size()) {
        if (s[pos] >= '0' && s[pos] <= '9') {
            int time = 0;
            while (pos < s.size() && s[pos] >= '0' && s[pos] <= '9') {
                time = time * 10 + (s[pos] - '0');
                pos++;
            }
            times.push(time);
        } else if (s[pos] == '[') {
            strs.push("");
            pos++;
        } else if (s[pos] == ']') {
            std::string str = strs.top();
            strs.pop();
            int time = times.top();
            times.pop();
            std::string temp;
            for (int i = 0; i < time; i++) {
                temp += str;
            }
            if (strs.empty()) {
                ans += temp;
            } else {
                strs.top() += temp;
            }
            pos++;
        } else {
            if (strs.empty()) {
                ans += s[pos];
            } else {
                strs.top() += s[pos];
            }
            pos++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
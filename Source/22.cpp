#include <cstring>
#include <iostream>
#include <vector>

void backtrack(std::vector<std::string>& ans, std::string& current, int open, int close, int max) {
    if (current.length() == max * 2) {
        ans.push_back(current);
        return;
    }

    if (open < max) {
        current.push_back('(');
        backtrack(ans, current, open + 1, close, max);
        current.pop_back();
    }
    if (close < open) {
        current.push_back(')');
        backtrack(ans, current, open, close + 1, max);
        current.pop_back();
    }
}

int main() {
    int n = 5;

    std::vector<std::string> ans;
    std::string              current;
    backtrack(ans, current, 0, 0, n);

    for (const auto& str : ans) std::cout << str << std::endl;

    return 0;
}
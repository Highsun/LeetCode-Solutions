#include <cstring>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s = "cbaebabacd";
    std::string p = "abc";

    int pos       = 0;
    int len       = p.size();
    int count[26] = {0};
    for (auto c : p) count[c - 'a']++;
    std::vector<int> ans;
    while (pos < s.size()) {
        int current_count[26] = {0};
        for (int i = 0; i < len && pos + i < s.size(); i++) {
            current_count[s[pos + i] - 'a']++;
        }
        if (std::memcmp(count, current_count, sizeof(count)) == 0) {
            ans.push_back(pos);
        }
        pos++;
    }

    for (auto i : ans) std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}
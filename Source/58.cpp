#include <cstring>
#include <iostream>

int main() {
    std::string s = "luffy is still joyboy";

    std::vector<int> word_len;
    int              len = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            if (len != 0) word_len.push_back(len);
            len = 0;
        } else {
            len++;
        }
    }
    if (len != 0) word_len.push_back(len);

    int ans = word_len[word_len.size() - 1];

    std::cout << ans << std::endl;

    return 0;
}
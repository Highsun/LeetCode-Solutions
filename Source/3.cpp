#include <cstring>
#include <iostream>

int main() {
    std::string s = "abcabcbb";

    int                           n      = s.length();
    int                           maxLen = 0;
    int                           left   = 0;
    std::unordered_map<char, int> charIndex;

    for (int right = 0; right < n; right++) {
        if (charIndex.find(s[right]) != charIndex.end() && charIndex[s[right]] >= left) {
            left = charIndex[s[right]] + 1;
        }
        charIndex[s[right]] = right;
        maxLen              = std::max(maxLen, right - left + 1);
    }

    std::cout << maxLen << std::endl;

    return 0;
}
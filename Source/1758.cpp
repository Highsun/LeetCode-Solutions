#include <algorithm>
#include <cstring>
#include <iostream>

int main() {
    std::string s = "0100";

    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            s[i + 1] = s[i] == '0' ? '1' : '0';
            cnt++;
        }
    }
    int ans = std::min(cnt, (int)s.size() - cnt);

    std::cout << ans << std::endl;

    return 0;
}
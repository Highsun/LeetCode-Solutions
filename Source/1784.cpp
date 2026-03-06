#include <cstring>
#include <iostream>

int main() {
    std::string s = "1001";

    // Caution: this is a direct solution which cannot be compiled and executed!
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            cnt++;
        else {
            if (cnt > 0) ans++;
            cnt = 0;
        }
    }
    if (cnt > 0) ans++;

    if (ans == 0 || ans == 1)
        return true;
    else
        return false;

    return 0;
}
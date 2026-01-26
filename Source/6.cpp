#include <iostream>
#include <string>

int main() {
    std::string s       = "PAYPALISHIRING";
    int         numRows = 3;

    std::string ans;
    if (numRows == 1) {
        ans = s;
    } else {
        int cycle = 2 * numRows - 2;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j + i < s.size(); j += cycle) {
                ans += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycle - i < s.size()) {
                    ans += s[j + cycle - i];
                }
            }
        }
    }

    std::cout << ans << '\n';

    return 0;
}
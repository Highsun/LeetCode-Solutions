#include <algorithm>
#include <climits>
#include <iostream>
#include <string>

int main() {
    int x = 1534236469;

    long ans = 0;
    if (x == 0)
        ans = 0;
    else {
        std::string num = std::to_string(x);
        if (x < 0) {
            std::string number = num.substr(1);
            std::reverse(number.begin(), number.end());
            try {
                ans = std::stoll(number);
                ans = -ans;
            } catch (const std::out_of_range&) {
                ans = 0;
            }
        } else {
            std::reverse(num.begin(), num.end());
            try {
                ans = std::stoll(num);
            } catch (const std::out_of_range&) {
                ans = 0;
            }
        }
        if (ans > INT_MAX || ans < INT_MIN) ans = 0;
    }

    std::cout << ans << '\n';

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    int n = 12;

    std::vector<int> dp(n + 1, n + 1);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = std::min(dp[i], dp[i - j * j] + 1);
        }
    }

    std::cout << dp[n] << std::endl;

    return 0;
}
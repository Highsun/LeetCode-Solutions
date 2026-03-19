#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> coins  = {1, 2, 5};
    int              amount = 11;

    std::vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (i - coin >= 0) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    int ans = (dp[amount] > amount) ? -1 : dp[amount];

    std::cout << ans << std::endl;

    return 0;
}
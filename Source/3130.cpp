#include <iostream>
#include <vector>

int main() {
    int zero  = 20;
    int one   = 30;
    int limit = 50;

    long long MOD = 1e9 + 7;
    // dp[i][j][0/1] 表示用了 i 个 0, j 个 1, 且末尾是 0 或 1 的方案数
    std::vector<std::vector<std::vector<long long>>> dp(zero + 1, std::vector<std::vector<long long>>(one + 1, std::vector<long long>(2, 0)));

    // 基础情况：只有 0 或只有 1
    for (int i = 0; i <= std::min(zero, limit); ++i) dp[i][0][0] = 1;
    for (int j = 0; j <= std::min(one, limit); ++j) dp[0][j][1] = 1;

    for (int i = 1; i <= zero; ++i) {
        for (int j = 1; j <= one; ++j) {
            // 填充末尾为 0 的情况
            dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % MOD;
            if (i > limit) {
                // 容斥：减去末尾连续出现 limit+1 个 0 的非法情况
                dp[i][j][0] = (dp[i][j][0] - dp[i - limit - 1][j][1] + MOD) % MOD;
            }

            // 填充末尾为 1 的情况
            dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1]) % MOD;
            if (j > limit) {
                // 容斥：减去末尾连续出现 limit+1 个 1 的非法情况
                dp[i][j][1] = (dp[i][j][1] - dp[i][j - limit - 1][0] + MOD) % MOD;
            }
        }
    }

    long long ans = (dp[zero][one][0] + dp[zero][one][1]) % MOD;

    std::cout << ans << std::endl;

    return 0;
}
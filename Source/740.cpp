#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 2, 3, 3, 3, 4};

    int ans;
    if (nums.empty()) ans = 0;

    int maxVal = 0;
    for (int num : nums) maxVal = std::max(maxVal, num);

    std::vector<int> sum(maxVal + 1, 0);
    for (int num : nums) {
        sum[num] += num;
    }

    std::vector<int> dp(maxVal + 1, 0);
    dp[1] = sum[1];
    for (int i = 2; i <= maxVal; i++) {
        dp[i] = std::max(dp[i - 1], sum[i] + dp[i - 2]);
    }
    ans = dp[maxVal];

    std::cout << ans << std::endl;

    return 0;
}
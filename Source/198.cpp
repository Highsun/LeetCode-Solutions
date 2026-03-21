#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 1};

    int top = nums.size();
    int ans = nums[0];
    if (top > 1) {
        std::vector<int> dp(top, 0);
        dp[0] = nums[0];
        dp[1] = std::max(nums[0], nums[1]);
        for (int i = 2; i < top; i++) {
            dp[i] = std::max(dp[i - 1], nums[i] + dp[i - 2]);
        }
        ans = dp[top - 1];
    }

    std::cout << ans << std::endl;

    return 0;
}
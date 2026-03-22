#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::vector<int> nums = {2, 3, -2, 4};

    int len      = nums.size();
    int max_temp = nums[0];
    int min_temp = nums[0];
    int ans      = max_temp;

    for (int i = 1; i < len; ++i) {
        if (nums[i] < 0) std::swap(max_temp, min_temp);
        max_temp = std::max(max_temp * nums[i], nums[i]);
        min_temp = std::min(min_temp * nums[i], nums[i]);

        ans = std::max(ans, max_temp);
    }

    std::cout << ans << std::endl;

    return 0;
}
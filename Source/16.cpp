#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums   = {-1, 2, 1, -4};
    int              target = 1;

    std::sort(nums.begin(), nums.end());
    int closest_sum = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums.size() - 2; ++i) {
        int left  = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right];
            if (std::abs(current_sum - target) < std::abs(closest_sum - target)) {
                closest_sum = current_sum;
            }

            if (current_sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    std::cout << closest_sum << '\n';

    return 0;
}
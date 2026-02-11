#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};

    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;

    if (!(nums.size() < 3 || nums.front() > 0 || nums.back() < 0)) {
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left  = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    ++left;
                } else if (sum > 0) {
                    --right;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
            }
        }
    }

    for (const auto& triplet : result) {
        std::cout << '[' << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }

    return 0;
}

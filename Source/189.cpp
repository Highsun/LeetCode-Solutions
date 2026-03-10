#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int              k    = 3;

    int n = nums.size();
    k     = k % n;
    std::vector<int> ans;
    for (size_t i = n - k; i < n; i++) {
        ans.push_back(nums[i]);
    }
    for (size_t i = 0; i < n - k; i++) {
        ans.push_back(nums[i]);
    }
    nums = ans;

    for (auto num : nums) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
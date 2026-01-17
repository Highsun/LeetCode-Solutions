#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 5, 1, 3, 4, 7};
    int              n    = 3;

    std::vector<int> ans;
    for (int i = 0; i < n; ++i) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }

    for (auto i : ans) {
        std::cout << i << " ";
    }

    return 0;
}
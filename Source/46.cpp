#include <iostream>
#include <vector>

void backtrack(const std::vector<int>& nums, std::vector<std::vector<int>>& res, std::vector<int>& path, std::vector<bool>& used) {
    if (path.size() == nums.size()) {
        res.push_back(path);
        return;
    }

    for (size_t i = 0; i < nums.size(); ++i) {
        if (used[i]) continue;

        used[i] = true;
        path.push_back(nums[i]);

        backtrack(nums, res, path, used);

        path.pop_back();
        used[i] = false;
    }
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    std::vector<std::vector<int>> res;
    std::vector<int>              path;
    std::vector<bool>             used(nums.size(), false);
    backtrack(nums, res, path, used);

    for (const auto& permutation : res) {
        for (int num : permutation) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
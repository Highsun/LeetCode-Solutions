#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 1};

    std::vector<int> ans;
    for (auto num : nums) {
        ans.push_back(num);
    }
    for (auto num : nums) {
        ans.push_back(num);
    }

    for (auto i : ans) {
        std::cout << i << " ";
    }

    return 0;
}
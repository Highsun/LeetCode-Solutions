#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    int              n = nums.size();
    std::vector<int> flag(n, 0);
    for (int i = 0; i < n; i++) ++flag[nums[i] - 1];
    std::vector<int> ans;
    for (int i = 0; i < n; i++)
        if (flag[i] == 0) ans.push_back(i + 1);

    for (auto i : ans) std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}
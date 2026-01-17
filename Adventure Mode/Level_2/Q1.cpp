#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 2, 4};

    int              n = nums.size();
    std::vector<int> flag(n, 0);
    std::vector<int> ans(2, 0);
    for (auto i : nums) ++flag[i - 1];
    for (int i = 0; i < n; i++) {
        if (flag[i] == 2) ans[0] = i + 1;
        if (flag[i] == 0) ans[1] = i + 1;
    }

    std::cout << ans[0] << " " << ans[1] << '\n';

    return 0;
}
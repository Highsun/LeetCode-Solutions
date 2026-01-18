#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {8, 1, 2, 2, 3};

    int              n = nums.size();
    std::vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] < nums[i]) ++cnt;
        }
        ans[i] = cnt;
    }

    for (auto i : ans) std::cout << i << " ";
    std::cout << '\n';

    return 0;
}
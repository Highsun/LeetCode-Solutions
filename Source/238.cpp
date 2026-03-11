#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {-1, 1, 0, -3, 3};

    int              n = nums.size();
    std::vector<int> pretimes(n, 1), subtimes(n, 1);
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            pretimes[i] = pretimes[i - 1];
            pretimes[i] *= nums[i - 1];
        }
        if (i != 0) {
            subtimes[n - i - 1] = subtimes[n - i];
            subtimes[n - i - 1] *= nums[n - i];
        }
    }

    // test
    // for (auto num : pretimes) std::cout << num << " ";
    // std::cout << std::endl;
    // for (auto num : subtimes) std::cout << num << " ";
    // std::cout << std::endl;

    std::vector<int> ans(n, 1);
    for (int i = 0; i < n; i++) {
        ans[i] = pretimes[i] * subtimes[i];
    }

    for (auto num : ans) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
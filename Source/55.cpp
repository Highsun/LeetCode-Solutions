#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 3, 1, 1, 4};

    // Caution: this is a direct solution which cannot be compiled and executed!
    int maxReach = 0;
    int n        = nums.size();

    for (int i = 0; i < n; ++i) {
        if (i > maxReach) {
            return false;
        }
        maxReach = std::max(maxReach, i + nums[i]);
        if (maxReach >= n - 1) {
            return true;
        }
    }

    return false;

    return 0;
}
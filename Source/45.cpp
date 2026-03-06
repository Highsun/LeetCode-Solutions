#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 3, 1, 1, 4};

    int n = nums.size();
    if (n <= 1) return 0;

    int steps       = 0;
    int curEnd      = 0;
    int curFarthest = 0;
    for (int i = 0; i < n - 1; ++i) {
        curFarthest = std::max(curFarthest, i + nums[i]);
        if (i == curEnd) {
            steps++;
            curEnd = curFarthest;
            if (curEnd >= n - 1) break;
        }
    }

    std::cout << steps << std::endl;

    return 0;
}
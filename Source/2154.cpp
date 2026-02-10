#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums     = {5, 3, 6, 1, 12};
    int              original = 3;

    std::sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] == original) original *= 2;
        ++i;
    }

    std::cout << original << '\n';

    return 0;
}
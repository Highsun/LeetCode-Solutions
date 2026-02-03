#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 1, 3};

    // Caution: this is a direct solution which cannot be compiled and executed!
    int p = 0;
    while (p < nums.size() - 1 && nums[p + 1] > nums[p]) ++p;
    if (p == 0) return false;

    int q = p;
    while (q < nums.size() - 1 && nums[q + 1] < nums[q]) ++q;
    if (q == p) return false;

    int r = q;
    while (r < nums.size() - 1 && nums[r + 1] > nums[r]) ++r;
    if (r > q && r == nums.size() - 1)
        return true;
    else
        return false;

    return 0;
}
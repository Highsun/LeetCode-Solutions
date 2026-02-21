#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1};

    int pos   = 0;
    int zeros = 0;
    while (pos < nums.size()) {
        if (nums[pos] != 0) {
            nums[pos - zeros] = nums[pos];
            if (zeros != 0) nums[pos] = 0;
        } else {
            zeros++;
        }
        pos++;
    }

    for (auto i : nums) std::cout << i << " " << std::endl;

    return 0;
}
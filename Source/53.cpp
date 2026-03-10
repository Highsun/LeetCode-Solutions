#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {5, 4, -1, 7, 8};

    int global_max  = nums[0];
    int current_max = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        current_max = std::max(nums[i], current_max + nums[i]);
        global_max  = std::max(global_max, current_max);
    }

    std::cout << global_max << std::endl;

    return 0;
}
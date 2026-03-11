#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 0};

    int max_num = 0, min_num = INT32_MAX;
    for (auto num : nums) {
        if (num > max_num) max_num = num;
        if (num < min_num && num > 0) min_num = num;
    }
    int not_appear_min = 1;
    if (min_num == 1) {
        int              n = nums.size();
        std::vector<int> flag(n + 1, 0);
        for (auto num : nums) {
            if (num > 0 && num <= n) flag[num]++;
        }
        while (not_appear_min <= n && flag[not_appear_min]) not_appear_min++;
    } else {
        not_appear_min = 1;
    }

    std::cout << not_appear_min << std::endl;

    return 0;
}
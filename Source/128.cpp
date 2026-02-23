#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {0, 1, 2, 4, 8, 5, 6, 7, 9, 3, 55, 88, 77, 99, 999999999};

    int max_cnt = 0;
    if (!nums.empty()) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> no_repeat_nums;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                no_repeat_nums.push_back(nums[i]);
            }
        }

        int cnt = 1;
        max_cnt = 1;
        for (int i = 1; i < no_repeat_nums.size(); ++i) {
            if (no_repeat_nums[i] == no_repeat_nums[i - 1] + 1) {
                ++cnt;
            } else {
                cnt = 1;
            }
            max_cnt = std::max(max_cnt, cnt);
        }
    }

    std::cout << max_cnt << std::endl;

    return 0;
}
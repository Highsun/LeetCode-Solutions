#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> nums = {0, 1, 2, 4, 5, 7, 9, 10, 11, 12, 14};

    std::vector<std::string> answer;
    if (!nums.empty()) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int start = nums[i];
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) i++;
            if (start == nums[i])
                answer.push_back(std::to_string(start));
            else
                answer.push_back(std::to_string(start) + "->" + std::to_string(nums[i]));
        }
    }

    for (auto str : answer) std::cout << str << ' ';
    std::cout << '\n';

    return 0;
}
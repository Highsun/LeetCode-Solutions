#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {0, 3, 2, 1, 3, 2};

    std::vector<int> flag(nums.size() - 2, 0);
    for (int i = 0; i < nums.size(); i++) {
        flag[nums[i]]++;
    }
    std::vector<int> result;
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i] > 1) result.push_back(i);
    }
    std::cout << result[0] << " " << result[1] << '\n';

    return 0;
}
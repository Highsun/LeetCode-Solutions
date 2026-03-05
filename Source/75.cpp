#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};

    int red = 0, white = 0, blue = 0;
    for (auto item : nums) {
        if (item == 0)
            red++;
        else if (item == 1)
            white++;
        else
            blue++;
    }

    for (int i = 0; i < red; i++) nums[i] = 0;
    for (int i = red; i < red + white; i++) nums[i] = 1;
    for (int i = red + white; i < nums.size(); i++) nums[i] = 2;

    for (auto item : nums) std::cout << item << " ";
    std::cout << std::endl;

    return 0;
}
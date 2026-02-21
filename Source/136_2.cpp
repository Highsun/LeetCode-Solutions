#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};

    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];
    }

    std::cout << result << '\n';

    return 0;
}
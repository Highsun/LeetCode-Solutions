#include <algorithm>
#include <iostream>
#include <vector>

bool is_triangle(int a, int b, int c) { return (a + b > c) && (a + c > b) && (b + c > a); }

int main() {
    std::vector<int> nums = {1, 2, 1, 10};

    std::sort(nums.begin(), nums.end());
    int max_c = 0;
    for (int i = nums.size() - 1; i >= 2; --i) {
        if (is_triangle(nums[i - 2], nums[i - 1], nums[i])) {
            max_c = nums[i - 2] + nums[i - 1] + nums[i];
            goto answer;
        }
    }

answer:
    std::cout << max_c << std::endl;

    return 0;
}
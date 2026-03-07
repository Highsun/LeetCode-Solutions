#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {3, 3, 3, 3, 3};

    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    std::cout << slow << std::endl;

    return 0;
}
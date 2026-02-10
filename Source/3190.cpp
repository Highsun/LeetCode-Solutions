#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {3, 6, 9};

    int count = 0;
    for (auto& num : nums) {
        if (num % 3 != 0) ++count;
    }

    std::cout << count << '\n';

    return 0;
}
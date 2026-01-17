#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 1, 0, 1, 1, 1};

    int count   = 0;
    int max_len = 0;
    for (auto num : nums) {
        if (num == 1) {
            ++count;
            if (count > max_len) max_len = count;
        } else {
            count = 0;
        }
    }

    std::cout << max_len << '\n';

    return 0;
}

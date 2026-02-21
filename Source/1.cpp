#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums   = {2, 7, 11, 15};
    int              target = 9;

    std::vector<int> ans(2);
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }

    std::cout << ans[0] << " " << ans[1] << std::endl;

    return 0;
}